void __fastcall DialogMessageMaster___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_435377D & 1) == 0 )
  {
    sub_B70694(&DialogMessageMaster_TypeInfo);
    sub_B70694(&StringLiteral_18278/*"dialogMessage_{0}_{1}"*/);
    byte_435377D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DialogMessageMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18278/*"dialogMessage_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18278/*"dialogMessage_{0}_{1}"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4353778 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
    byte_4353778 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    227,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
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
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  int64_t Time; // x0
  int64_t v15; // x24
  int32_t v16; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v18; // x2
  DialogMessageEntity_o *v19; // x26
  __int64 v20; // x10
  const MethodInfo *v21; // x2
  struct DialogMessageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x22
  Il2CppObject *v24; // x23
  struct DialogMessageMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  DialogMessageEntity_array *v32; // x1
  const MethodInfo *v33; // x4

  if ( (byte_4353779 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Comparison_DialogMessageEntity___ctor__);
    sub_B70694(&System_Comparison_DialogMessageEntity__TypeInfo);
    sub_B70694(&DialogMessageEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_DialogMessageMaster___c__ShowAvailables_b__4_0__);
    sub_B70694(&DialogMessageMaster___c_TypeInfo);
    byte_4353779 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v15 = Time;
    v16 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v16,
               (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = (DialogMessageEntity_o *)Item;
        v20 = *(&DialogMessageEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (DialogMessageEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == DialogMessageEntity_TypeInfo
          && LODWORD(Item[1].monitor) == opType
          && DialogMessageEntity__isOpenTime((DialogMessageEntity_o *)Item, v15, v18)
          && !DialogMessageMaster__isSavedAsSeen(this, v19, v21) )
        {
          list = DialogMessageEntity__getTargets(v19, *(const MethodInfo **)&opType);
          if ( v19->fields.dialogOpenType == 1 )
          {
            if ( !v13 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v13,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
          }
        }
      }
      if ( ++v16 >= Count )
        goto LABEL_20;
    }
LABEL_30:
    sub_B7076C(list, *(_QWORD *)&opType);
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
    v24 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_DialogMessageEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v24,
      Method_DialogMessageMaster___c__ShowAvailables_b__4_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_DialogMessageEntity___ctor__);
    v25 = DialogMessageMaster___c_TypeInfo->static_fields;
    v25->__9__4_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__4_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v25->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v13 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v13,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  v32 = (DialogMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                       (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
  DialogMessageMaster__showChain(this, v32, 0, callback, v33);
}


bool __fastcall DialogMessageMaster__isSavedAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  DialogMessageMaster_o *v4; // x20
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v6; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v8; // x21
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  System_Collections_Generic_List_int__o *seenList; // x0
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_435377C & 1) == 0 )
  {
    sub_B70694(&DialogMessageMaster_TypeInfo);
    sub_B70694(&int_TypeInfo);
    this = (DialogMessageMaster_o *)sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    byte_435377C = 1;
  }
  if ( !entity )
    sub_B7076C(this, entity);
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 3 )
  {
    seenList = v4->fields.seenList;
    if ( seenList )
      LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                           seenList,
                           entity->fields.id,
                           (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    if ( frequencyType != 1 )
      goto LABEL_11;
    v6 = DialogMessageMaster_TypeInfo;
    if ( (BYTE3(DialogMessageMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v6 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v6->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, method);
    openedAt = entity->fields.openedAt;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v9);
    v11 = System_String__Format_44753704(SAVE_KEY, v8, v10, 0LL);
    if ( UnityEngine_PlayerPrefs__GetInt(v11, 0, 0LL) >= 1 )
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
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v6; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v8; // x21
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  BattleServantConfConponent_o *p_seenList; // x20
  DialogMessageMaster_o *seenList; // t1
  System_Collections_Generic_List_int__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_435377B & 1) == 0 )
  {
    sub_B70694(&DialogMessageMaster_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    this = (DialogMessageMaster_o *)sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_435377B = 1;
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
      || (v14 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo),
          System_Collections_Generic_List_int____ctor(
            v14,
            (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (BattleServantConfConponent_c *)v14,
          sub_B70630(p_seenList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0LL) )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        entity->fields.id,
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      return;
    }
LABEL_14:
    sub_B7076C(this, entity);
  }
  if ( frequencyType == 1 )
  {
    v6 = DialogMessageMaster_TypeInfo;
    if ( (BYTE3(DialogMessageMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v6 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v6->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, method);
    openedAt = entity->fields.openedAt;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v9);
    v11 = System_String__Format_44753704(SAVE_KEY, v8, v10, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v11, 1, 0LL);
  }
}


void __fastcall DialogMessageMaster__showChain(
        DialogMessageMaster_o *this,
        DialogMessageEntity_array *entitys,
        int32_t idx,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x19
  System_Action_o *v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Action_o **v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x8
  __int64 v32; // x9
  int v33; // w10
  DialogMessageEntity_o *v34; // x20
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x2
  __int64 v37; // x0

  if ( (byte_435377A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DialogMessageMaster___c__DisplayClass5_0__showChain_b__0__);
    sub_B70694(&DialogMessageMaster___c__DisplayClass5_0_TypeInfo);
    byte_435377A = 1;
  }
  v9 = sub_B70764(DialogMessageMaster___c__DisplayClass5_0_TypeInfo);
  DialogMessageMaster___c__DisplayClass5_0___ctor((DialogMessageMaster___c__DisplayClass5_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = entitys;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)entitys, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = callBack;
  v24 = (System_Action_o **)(v9 + 40);
  *(_DWORD *)(v9 + 32) = idx;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)callBack, v25, v26, v27, v28, v29, v30);
  v31 = *(_QWORD *)(v9 + 24);
  if ( !v31 )
    goto LABEL_11;
  v32 = *(int *)(v9 + 32);
  v33 = *(_DWORD *)(v31 + 24);
  if ( (int)v32 < v33 )
  {
    if ( (unsigned int)v32 >= v33 )
    {
      v37 = sub_B70798(v10);
      sub_B70738(v37, 0LL);
    }
    v34 = *(DialogMessageEntity_o **)(v31 + 8 * v32 + 32);
    v35 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v9,
      Method_DialogMessageMaster___c__DisplayClass5_0__showChain_b__0__,
      0LL);
    if ( v34 )
    {
      DialogMessageEntity__Open(v34, v35, v36);
      return;
    }
LABEL_11:
    sub_B7076C(v10, v11);
  }
  v10 = *v24;
  if ( !*v24 )
    goto LABEL_11;
  System_Action__Invoke(v10, 0LL);
}


void __fastcall DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct DialogMessageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434EFFD & 1) == 0 )
  {
    sub_B70694(&DialogMessageMaster___c_TypeInfo);
    byte_434EFFD = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(DialogMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct DialogMessageMaster___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, a);
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
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
  }
  this = (DialogMessageMaster___c__DisplayClass5_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__saveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], 0LL),
        (this = (DialogMessageMaster___c__DisplayClass5_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_6:
    sub_B7076C(this, method);
  }
  DialogMessageMaster__showChain(
    (DialogMessageMaster_o *)this,
    v4->fields.entitys,
    v4->fields.idx + 1,
    v4->fields.callBack,
    0LL);
}