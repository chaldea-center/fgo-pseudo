void VoiceReleaseMaster___ctor(VoiceReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D9C9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__);
    byte_4D2D9C9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    173,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__);
}


VoiceReleaseEntity_array *VoiceReleaseMaster__GetEntitiyList(
        VoiceReleaseMaster_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  Il2CppObject *v9; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *items; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4D2D9CA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_VoiceReleaseEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_VoiceReleaseEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4D2D9CA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_VoiceReleaseEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_VoiceReleaseEntity__get_Item__);
      if ( list )
      {
        v9 = (Il2CppObject *)list;
        items = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)list->fields.items;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0);
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(
                                                                   items,
                                                                   v11,
                                                                   0);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v7 )
            break;
          v18 = v7->fields._items;
          v19 = Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__;
          ++v7->fields._version;
          if ( !v18 )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(v18->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v9,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &v18->obj.klass + size;
            v7->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v9;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C942F0(list, voiceId);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return (VoiceReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v7,
                                       (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool VoiceReleaseMaster__IsCondEnable(
        VoiceReleaseMaster_o *this,
        System_String_o *voiceId,
        int32_t svtId,
        const MethodInfo *method)
{
  VoiceReleaseEntity_array *EntitiyList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  il2cpp_array_size_t max_length; // x21
  VoiceReleaseEntity_array *v9; // x20
  int v10; // w23
  bool v11; // w22
  _BOOL8 IsCondEnable; // x0

  EntitiyList = VoiceReleaseMaster__GetEntitiyList(this, voiceId, *(const MethodInfo **)&svtId);
  if ( !EntitiyList )
    goto LABEL_12;
  max_length = EntitiyList->max_length;
  v9 = EntitiyList;
  if ( (int)max_length >= 1 )
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
      v11 = v10 < (int)max_length;
      if ( (_DWORD)max_length == v10 )
        return !v11;
      if ( (unsigned int)v10++ >= LODWORD(v9->max_length) )
        sub_1C942F8(IsCondEnable);
    }
LABEL_12:
    sub_1C942F0(EntitiyList, v6);
  }
  v11 = 0;
  return !v11;
}