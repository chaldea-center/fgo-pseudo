void __fastcall VoiceReleaseMaster___ctor(VoiceReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD324 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__, method);
    byte_49FD324 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    169,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x22
  int32_t v17; // w23
  Il2CppObject *v18; // x24
  __int64 methodPtr_low; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *items; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_49FD325 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, voiceId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1B640C8(&VoiceReleaseEntity_TypeInfo, v11);
    byte_49FD325 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(VoiceReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (VoiceReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == VoiceReleaseEntity_TypeInfo )
        {
          items = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)list->fields.items;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(
                                                                     items,
                                                                     v21,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v16 )
              break;
            v24 = v16->fields._items;
            v25 = Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__;
            ++v16->fields._version;
            if ( !v24 )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= v24->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                v18,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &v24->obj.klass + size;
              v16->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v18;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v18, v22, v23);
            }
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B64324(list);
  }
LABEL_19:
  if ( !v16 )
    goto LABEL_21;
  return (VoiceReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v16,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceReleaseMaster__IsCondEnable(
        VoiceReleaseMaster_o *this,
        System_String_o *voiceId,
        int32_t svtId,
        const MethodInfo *method)
{
  VoiceReleaseEntity_array *EntitiyList; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x21
  VoiceReleaseEntity_array *v8; // x20
  int v9; // w23
  bool v10; // w22
  _BOOL8 IsCondEnable; // x0
  __int64 v12; // x1

  EntitiyList = VoiceReleaseMaster__GetEntitiyList(this, voiceId, *(const MethodInfo **)&svtId);
  if ( !EntitiyList )
    goto LABEL_12;
  v7 = *(_QWORD *)&EntitiyList->max_length;
  v8 = EntitiyList;
  if ( (int)v7 >= 1 )
  {
    v9 = 1;
    v10 = 1;
    while ( 1 )
    {
      EntitiyList = (VoiceReleaseEntity_array *)v8->m_Items[v9 - 1];
      if ( !EntitiyList )
        break;
      IsCondEnable = VoiceReleaseEntity__IsCondEnable((VoiceReleaseEntity_o *)EntitiyList, svtId, v6);
      if ( !IsCondEnable )
        return !v10;
      v10 = v9 < (int)v7;
      if ( (_DWORD)v7 == v9 )
        return !v10;
      if ( v9++ >= v8->max_length )
        sub_1B6432C(IsCondEnable, v12);
    }
LABEL_12:
    sub_1B64324(EntitiyList);
  }
  v10 = 0;
  return !v10;
}