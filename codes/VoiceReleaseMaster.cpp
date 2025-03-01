void __fastcall VoiceReleaseMaster___ctor(VoiceReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE73B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__, method);
    byte_4BFE73B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    173,
    (const MethodInfo_327D914 *)Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__);
}


VoiceReleaseEntity_array *__fastcall VoiceReleaseMaster__GetEntitiyList(
        VoiceReleaseMaster_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w23
  Il2CppObject *v15; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *items; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4BFE73C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_VoiceReleaseEntity__get_Count__, voiceId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_VoiceReleaseEntity__get_Item__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo, v9);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    byte_4BFE73C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_VoiceReleaseEntity__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_VoiceReleaseEntity__get_Item__);
      if ( list )
      {
        v15 = (Il2CppObject *)list;
        items = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)list->fields.items;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(
                                                                   items,
                                                                   v17,
                                                                   0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v13 )
            break;
          v24 = v13->fields._items;
          v25 = Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__;
          ++v13->fields._version;
          if ( !v24 )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= v24->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              v15,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &v24->obj.klass + size;
            v13->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v15;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v15, v18, v19, v20, v21, v22, v23);
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C2E388(list, voiceId);
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  return (VoiceReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v13,
                                       (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceReleaseMaster__IsCondEnable(
        VoiceReleaseMaster_o *this,
        System_String_o *voiceId,
        int32_t svtId,
        const MethodInfo *method)
{
  VoiceReleaseEntity_array *EntitiyList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x21
  VoiceReleaseEntity_array *v9; // x20
  int v10; // w23
  bool v11; // w22
  _BOOL8 IsCondEnable; // x0

  EntitiyList = VoiceReleaseMaster__GetEntitiyList(this, voiceId, *(const MethodInfo **)&svtId);
  if ( !EntitiyList )
    goto LABEL_12;
  v8 = *(_QWORD *)&EntitiyList->max_length;
  v9 = EntitiyList;
  if ( (int)v8 >= 1 )
  {
    v10 = 1;
    v11 = 1;
    while ( 1 )
    {
      EntitiyList = (VoiceReleaseEntity_array *)v9->m_Items[v10 - 1];
      if ( !EntitiyList )
        break;
      IsCondEnable = VoiceReleaseEntity__IsCondEnable((VoiceReleaseEntity_o *)EntitiyList, svtId, v7);
      if ( !IsCondEnable )
        return !v11;
      v11 = v10 < (int)v8;
      if ( (_DWORD)v8 == v10 )
        return !v11;
      if ( v10++ >= v9->max_length )
        sub_1C2E390(IsCondEnable, v6);
    }
LABEL_12:
    sub_1C2E388(EntitiyList, v6);
  }
  v11 = 0;
  return !v11;
}