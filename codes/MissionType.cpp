bool __fastcall MissionType__IsMasterMission(int32_t type, const MethodInfo *method)
{
  return type == 8 || (unsigned int)(type - 2) < 4;
}