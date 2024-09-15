void __fastcall VoiceReleaseMaster___ctor(VoiceReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2EE6D & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__, method);
    byte_4A2EE6D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    169,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__);
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
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v14; // x22
  int32_t v15; // w23
  Il2CppObject *v16; // x24
  __int64 methodPtr_low; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *items; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4A2EE6E & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, voiceId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo, v9);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1B761C0(&VoiceReleaseEntity_TypeInfo, v11);
    byte_4A2EE6E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(VoiceReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (VoiceReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == VoiceReleaseEntity_TypeInfo )
        {
          items = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)list->fields.items;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(
                                                                     items,
                                                                     v19,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v14 )
              break;
            v22 = v14->fields._items;
            v23 = Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__;
            ++v14->fields._version;
            if ( !v22 )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= v22->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                v16,
                *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &v22->obj.klass + size;
              v14->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v16;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v16, v20, v21);
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B7641C(list, voiceId);
  }
LABEL_19:
  if ( !v14 )
    goto LABEL_21;
  return (VoiceReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v14,
                                       (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__);
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
        sub_1B76424(IsCondEnable, v6);
    }
LABEL_12:
    sub_1B7641C(EntitiyList, v6);
  }
  v11 = 0;
  return !v11;
}