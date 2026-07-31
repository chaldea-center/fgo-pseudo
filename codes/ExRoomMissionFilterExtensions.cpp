int32_t ExRoomMissionFilterExtensions__Next(int32_t filter, const MethodInfo *method)
{
  if ( (unsigned int)filter < 3 )
    return filter + 1;
  else
    return 0;
}