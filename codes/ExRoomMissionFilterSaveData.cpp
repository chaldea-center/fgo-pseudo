void ExRoomMissionFilterSaveData__Delete(const MethodInfo *method)
{
  if ( (byte_596AEBD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6052/*"EXROOM_MISSION_FILTER"*/);
    byte_596AEBD = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6052/*"EXROOM_MISSION_FILTER"*/, 0);
}


int32_t ExRoomMissionFilterSaveData__Load(const MethodInfo *method)
{
  int32_t Int; // w0
  __int64 v2; // x1
  __int64 v3; // x2
  Il2CppType *v4; // x20
  int32_t v5; // w19
  System_RuntimeTypeHandle_o v6; // x0
  System_Type_o *TypeFromHandle; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *v10; // x21
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596AEBB & 1) == 0 )
  {
    sub_2213A60(&ExRoomMissionFilter_var);
    sub_2213A60(&StringLiteral_6052/*"EXROOM_MISSION_FILTER"*/);
    byte_596AEBB = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6052/*"EXROOM_MISSION_FILTER"*/, 0, 0);
  v4 = ExRoomMissionFilter_var;
  v5 = Int;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v2, v3);
  v6.fields.value = (intptr_t)v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  v12 = v5;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v12);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v8, v9);
  if ( System_Enum__IsDefined(TypeFromHandle, v10, 0) )
    return v5;
  else
    return 0;
}


void ExRoomMissionFilterSaveData__Save(int32_t filter, const MethodInfo *method)
{
  if ( (byte_596AEBC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6052/*"EXROOM_MISSION_FILTER"*/);
    byte_596AEBC = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6052/*"EXROOM_MISSION_FILTER"*/, filter, 0);
}