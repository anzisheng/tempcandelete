
#include <torch/torch.h>

int main()
{
	torch::DeviceType device_type = torch::kCUDA;

	torch::Device device(device_type, 0);
	device.set_index(0);

	return 0;
}