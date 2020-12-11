#pragma once

#include "Blueprint/UserWidget.h"
#include "FGNetDebugWidget.generated.h"

USTRUCT(BlueprintType)
struct FFGBlueprintNetworkSimulationSettings
{
	GENERATED_BODY()
public:
	// Minimum latency to add to packets
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network Settings", meta = (DisplayName = "Minimum Latency", ClampMin = "0", ClampMax = "5000"))
		int32 MinLatency = 0;

	// Maximum latency to add to packets. We use a random value between the minimum and maximum (when 0 = always the minimum value)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network Settings", meta = (DisplayName = "Maximum Latency", ClampMin = "0", ClampMax = "5000"))
		int32 MaxLatency = 0;

	// Ratio of packets to randomly drop (0 = none, 100 = all)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network Settings", meta = (ClampMin = "0", ClampMax = "100"))
		int32 PacketLossPercentage = 0;
};
