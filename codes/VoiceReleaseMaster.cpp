void __fastcall VoiceReleaseMaster___ctor(VoiceReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C09D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__);
    byte_4A5C09D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    169,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__);
}


VoiceReleaseEntity_array *__fastcall VoiceReleaseMaster__GetEntitiyList(
        VoiceReleaseMaster_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  Il2CppObject *v9; // x24
  __int64 methodPtr_low; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *items; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5C09E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&VoiceReleaseEntity_TypeInfo);
    byte_4A5C09E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(VoiceReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (VoiceReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == VoiceReleaseEntity_TypeInfo )
        {
          items = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)list->fields.items;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(
                                                                     items,
                                                                     v12,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v7 )
              break;
            v15 = v7->fields._items;
            v16 = Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__;
            ++v7->fields._version;
            if ( !v15 )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= v15->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v9,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &v15->obj.klass + size;
              v7->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v9;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v9, v13, v14);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B8880C(list, voiceId);
  }
LABEL_19:
  if ( !v7 )
    goto LABEL_21;
  return (VoiceReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v7,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__);
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
        sub_1B88814(IsCondEnable, v6);
    }
LABEL_12:
    sub_1B8880C(EntitiyList, v6);
  }
  v11 = 0;
  return !v11;
}