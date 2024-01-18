void __fastcall DialogMessageMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4189414 & 1) == 0 )
  {
    sub_B2C35C(&DialogMessageMaster_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18006/*"dialogMessage_{0}_{1}"*/, v8);
    byte_4189414 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DialogMessageMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18006/*"dialogMessage_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18006/*"dialogMessage_{0}_{1}"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418940F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__, method);
    byte_418940F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    226,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DialogMessageMaster__ShowAvailables(
        DialogMessageMaster_o *this,
        int32_t opType,
        System_Action_o *callback,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        int32_t ex4,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  int64_t Time; // x0
  int64_t v27; // x24
  int32_t v28; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v30; // x2
  DialogMessageEntity_o *v31; // x26
  __int64 v32; // x10
  const MethodInfo *v33; // x2
  struct DialogMessageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x22
  Il2CppObject *v36; // x23
  struct DialogMessageMaster___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  DialogMessageEntity_array *v44; // x1
  const MethodInfo *v45; // x4

  if ( (byte_4189410 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&opType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B2C35C(&Method_System_Comparison_DialogMessageEntity___ctor__, v12);
    sub_B2C35C(&System_Comparison_DialogMessageEntity__TypeInfo, v13);
    sub_B2C35C(&DialogMessageEntity_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    sub_B2C35C(&Method_DialogMessageMaster___c__ShowAvailables_b__4_0__, v21);
    sub_B2C35C(&DialogMessageMaster___c_TypeInfo, v22);
    byte_4189410 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v27 = Time;
    v28 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v28,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v31 = (DialogMessageEntity_o *)Item;
        v32 = *(&DialogMessageEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v32
          && (DialogMessageEntity_c *)Item->klass->_2.typeHierarchy[v32 - 1] == DialogMessageEntity_TypeInfo
          && LODWORD(Item[1].monitor) == opType
          && DialogMessageEntity__isOpenTime((DialogMessageEntity_o *)Item, v27, v30)
          && !DialogMessageMaster__isSavedAsSeen(this, v31, v33) )
        {
          list = DialogMessageEntity__getTargets(v31, *(const MethodInfo **)&opType);
          if ( v31->fields.dialogOpenType == 1 )
          {
            if ( !v25 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v25,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
          }
        }
      }
      if ( ++v28 >= Count )
        goto LABEL_20;
    }
LABEL_30:
    sub_B2C434(list, *(_QWORD *)&opType);
  }
LABEL_20:
  list = DialogMessageMaster___c_TypeInfo;
  if ( (BYTE3(DialogMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DialogMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo);
    list = DialogMessageMaster___c_TypeInfo;
  }
  static_fields = (struct DialogMessageMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_DialogMessageEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v36,
      Method_DialogMessageMaster___c__ShowAvailables_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_DialogMessageEntity___ctor__);
    v37 = DialogMessageMaster___c_TypeInfo->static_fields;
    v37->__9__4_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v37->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !v25 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  v44 = (DialogMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
  DialogMessageMaster__showChain(this, v44, 0, callback, v45);
}


bool __fastcall DialogMessageMaster__isSavedAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  DialogMessageMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v8; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  System_Collections_Generic_List_int__o *seenList; // x0
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4189413 & 1) == 0 )
  {
    sub_B2C35C(&DialogMessageMaster_TypeInfo, entity);
    sub_B2C35C(&int_TypeInfo, v5);
    this = (DialogMessageMaster_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v6);
    byte_4189413 = 1;
  }
  if ( !entity )
    sub_B2C434(this, entity);
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 3 )
  {
    seenList = v4->fields.seenList;
    if ( seenList )
      LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                           seenList,
                           entity->fields.id,
                           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    if ( frequencyType != 1 )
      goto LABEL_11;
    v8 = DialogMessageMaster_TypeInfo;
    if ( (BYTE3(DialogMessageMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v8 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v8->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    openedAt = entity->fields.openedAt;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
    v12 = System_String__Format_44301068(SAVE_KEY, v10, v11, 0LL);
    if ( UnityEngine_PlayerPrefs__GetInt(v12, 0, 0LL) >= 1 )
      LOBYTE(seenList) = 1;
    else
LABEL_11:
      LOBYTE(seenList) = 0;
  }
  return (char)seenList;
}


void __fastcall DialogMessageMaster__saveAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  DialogMessageMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v10; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  BattleServantConfConponent_o *p_seenList; // x20
  DialogMessageMaster_o *seenList; // t1
  System_Collections_Generic_List_int__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4189412 & 1) == 0 )
  {
    sub_B2C35C(&DialogMessageMaster_TypeInfo, entity);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    this = (DialogMessageMaster_o *)sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4189412 = 1;
  }
  if ( !entity )
    goto LABEL_14;
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 3 )
  {
    seenList = (DialogMessageMaster_o *)v4->fields.seenList;
    p_seenList = (BattleServantConfConponent_o *)&v4->fields.seenList;
    this = seenList;
    if ( seenList
      || (v17 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo),
          System_Collections_Generic_List_int____ctor(
            v17,
            (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (BattleServantConfConponent_c *)v17,
          sub_B2C2F8(p_seenList, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0LL) )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        entity->fields.id,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      return;
    }
LABEL_14:
    sub_B2C434(this, entity);
  }
  if ( frequencyType == 1 )
  {
    v10 = DialogMessageMaster_TypeInfo;
    if ( (BYTE3(DialogMessageMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v10 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v10->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    openedAt = entity->fields.openedAt;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
    v14 = System_String__Format_44301068(SAVE_KEY, v12, v13, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v14, 1, 0LL);
  }
}


void __fastcall DialogMessageMaster__showChain(
        DialogMessageMaster_o *this,
        DialogMessageEntity_array *entitys,
        int32_t idx,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_Action_o *v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Action_o **v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x8
  __int64 v34; // x9
  int v35; // w10
  DialogMessageEntity_o *v36; // x20
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x2
  __int64 v39; // x0

  if ( (byte_4189411 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, entitys);
    sub_B2C35C(&Method_DialogMessageMaster___c__DisplayClass5_0__showChain_b__0__, v9);
    sub_B2C35C(&DialogMessageMaster___c__DisplayClass5_0_TypeInfo, v10);
    byte_4189411 = 1;
  }
  v11 = sub_B2C42C(DialogMessageMaster___c__DisplayClass5_0_TypeInfo);
  DialogMessageMaster___c__DisplayClass5_0___ctor((DialogMessageMaster___c__DisplayClass5_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = entitys;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)entitys, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 40) = callBack;
  v26 = (System_Action_o **)(v11 + 40);
  *(_DWORD *)(v11 + 32) = idx;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)callBack, v27, v28, v29, v30, v31, v32);
  v33 = *(_QWORD *)(v11 + 24);
  if ( !v33 )
    goto LABEL_11;
  v34 = *(int *)(v11 + 32);
  v35 = *(_DWORD *)(v33 + 24);
  if ( (int)v34 < v35 )
  {
    if ( (unsigned int)v34 >= v35 )
    {
      v39 = sub_B2C460(v12);
      sub_B2C400(v39, 0LL);
    }
    v36 = *(DialogMessageEntity_o **)(v33 + 8 * v34 + 32);
    v37 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v11,
      Method_DialogMessageMaster___c__DisplayClass5_0__showChain_b__0__,
      0LL);
    if ( v36 )
    {
      DialogMessageEntity__Open(v36, v37, v38);
      return;
    }
LABEL_11:
    sub_B2C434(v12, v13);
  }
  v12 = *v26;
  if ( !*v26 )
    goto LABEL_11;
  System_Action__Invoke(v12, 0LL);
}


void __fastcall DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41864EA & 1) == 0 )
  {
    sub_B2C35C(&DialogMessageMaster___c_TypeInfo, v1);
    byte_41864EA = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(DialogMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)DialogMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall DialogMessageMaster___c___ctor(DialogMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DialogMessageMaster___c___ShowAvailables_b__4_0(
        DialogMessageMaster___c_o *this,
        DialogMessageEntity_o *a,
        DialogMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall DialogMessageMaster___c__DisplayClass5_0___ctor(
        DialogMessageMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DialogMessageMaster___c__DisplayClass5_0___showChain_b__0(
        DialogMessageMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  struct DialogMessageEntity_array *entitys; // x8
  __int64 idx; // x9
  DialogMessageMaster___c__DisplayClass5_0_o *v4; // x19
  __int64 v5; // x0

  entitys = this->fields.entitys;
  if ( !entitys )
    goto LABEL_6;
  idx = this->fields.idx;
  v4 = this;
  if ( (unsigned int)idx >= entitys->max_length )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  this = (DialogMessageMaster___c__DisplayClass5_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__saveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], 0LL),
        (this = (DialogMessageMaster___c__DisplayClass5_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_6:
    sub_B2C434(this, method);
  }
  DialogMessageMaster__showChain(
    (DialogMessageMaster_o *)this,
    v4->fields.entitys,
    v4->fields.idx + 1,
    v4->fields.callBack,
    0LL);
}