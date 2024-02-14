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

  if ( (byte_4216271 & 1) == 0 )
  {
    sub_B0D8A4(&DialogMessageMaster_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_18062/*"dialogMessage_{0}_{1}"*/, v8);
    byte_4216271 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DialogMessageMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18062/*"dialogMessage_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18062/*"dialogMessage_{0}_{1}"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421626C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__, method);
    byte_421626C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    226,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
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
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  int64_t Time; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  int64_t v31; // x24
  int32_t v32; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  DialogMessageEntity_o *v34; // x26
  __int64 v35; // x10
  struct DialogMessageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x22
  Il2CppObject *v38; // x23
  struct DialogMessageMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  DialogMessageEntity_array *v46; // x1
  const MethodInfo *v47; // x4

  if ( (byte_421626D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&opType);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B0D8A4(&Method_System_Comparison_DialogMessageEntity___ctor__, v12);
    sub_B0D8A4(&System_Comparison_DialogMessageEntity__TypeInfo, v13);
    sub_B0D8A4(&DialogMessageEntity_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo, v19);
    sub_B0D8A4(&NetworkManager_TypeInfo, v20);
    sub_B0D8A4(&Method_DialogMessageMaster___c__ShowAvailables_b__4_0__, v21);
    sub_B0D8A4(&DialogMessageMaster___c_TypeInfo, v22);
    byte_421626D = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_DialogMessageEntity__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v31 = Time;
    v32 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v32,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = (DialogMessageEntity_o *)Item;
        v35 = *(&DialogMessageEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (DialogMessageEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] == DialogMessageEntity_TypeInfo
          && LODWORD(Item[1].monitor) == opType
          && DialogMessageEntity__isOpenTime((DialogMessageEntity_o *)Item, v31, v30)
          && !DialogMessageMaster__isSavedAsSeen(this, v34, v30) )
        {
          list = DialogMessageEntity__getTargets(v34, v29);
          if ( v34->fields.dialogOpenType == 1 )
          {
            if ( !v27 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v27,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
          }
        }
      }
      if ( ++v32 >= Count )
        goto LABEL_20;
    }
LABEL_30:
    sub_B0D97C(list);
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
    v38 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_DialogMessageEntity__TypeInfo,
                                                                          v29,
                                                                          v30);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v38,
      Method_DialogMessageMaster___c__ShowAvailables_b__4_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_DialogMessageEntity___ctor__);
    v39 = DialogMessageMaster___c_TypeInfo->static_fields;
    v39->__9__4_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v39->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  if ( !v27 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v27,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  v46 = (DialogMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
  DialogMessageMaster__showChain(this, v46, 0, callback, v47);
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
  if ( (byte_4216270 & 1) == 0 )
  {
    sub_B0D8A4(&DialogMessageMaster_TypeInfo, entity);
    sub_B0D8A4(&int_TypeInfo, v5);
    this = (DialogMessageMaster_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v6);
    byte_4216270 = 1;
  }
  if ( !entity )
    sub_B0D97C(this);
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 3 )
  {
    seenList = v4->fields.seenList;
    if ( seenList )
      LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                           seenList,
                           entity->fields.id,
                           (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
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
    v12 = System_String__Format_43845440(SAVE_KEY, v10, v11, 0LL);
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
  if ( (byte_421626F & 1) == 0 )
  {
    sub_B0D8A4(&DialogMessageMaster_TypeInfo, entity);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    this = (DialogMessageMaster_o *)sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_421626F = 1;
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
      || (v17 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            entity,
                                                            method),
          System_Collections_Generic_List_int____ctor(
            v17,
            (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (BattleServantConfConponent_c *)v17,
          sub_B0D840(p_seenList, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0LL) )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        entity->fields.id,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      return;
    }
LABEL_14:
    sub_B0D97C(this);
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
    v14 = System_String__Format_43845440(SAVE_KEY, v12, v13, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v14, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Action_o **v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x8
  __int64 v35; // x9
  int v36; // w10
  DialogMessageEntity_o *v37; // x20
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x2
  __int64 v40; // x0

  if ( (byte_421626E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, entitys);
    sub_B0D8A4(&Method_DialogMessageMaster___c__DisplayClass5_0__showChain_b__0__, v9);
    sub_B0D8A4(&DialogMessageMaster___c__DisplayClass5_0_TypeInfo, v10);
    byte_421626E = 1;
  }
  v11 = sub_B0D974(DialogMessageMaster___c__DisplayClass5_0_TypeInfo, entitys, *(_QWORD *)&idx);
  DialogMessageMaster___c__DisplayClass5_0___ctor((DialogMessageMaster___c__DisplayClass5_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 24) = entitys;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)entitys, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v11 + 40) = callBack;
  v25 = (System_Action_o **)(v11 + 40);
  *(_DWORD *)(v11 + 32) = idx;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)callBack, v26, v27, v28, v29, v30, v31);
  v34 = *(_QWORD *)(v11 + 24);
  if ( !v34 )
    goto LABEL_11;
  v35 = *(int *)(v11 + 32);
  v36 = *(_DWORD *)(v34 + 24);
  if ( (int)v35 < v36 )
  {
    if ( (unsigned int)v35 >= v36 )
    {
      v40 = sub_B0D9A8(v12);
      sub_B0D948(v40, 0LL);
    }
    v37 = *(DialogMessageEntity_o **)(v34 + 8 * v35 + 32);
    v38 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v11,
      Method_DialogMessageMaster___c__DisplayClass5_0__showChain_b__0__,
      0LL);
    if ( v37 )
    {
      DialogMessageEntity__Open(v37, v38, v39);
      return;
    }
LABEL_11:
    sub_B0D97C(v12);
  }
  v12 = *v25;
  if ( !*v25 )
    goto LABEL_11;
  System_Action__Invoke(v12, 0LL);
}


void __fastcall DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42131D4 & 1) == 0 )
  {
    sub_B0D8A4(&DialogMessageMaster___c_TypeInfo, v1);
    byte_42131D4 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(DialogMessageMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)DialogMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  this = (DialogMessageMaster___c__DisplayClass5_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__saveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], 0LL),
        (this = (DialogMessageMaster___c__DisplayClass5_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_6:
    sub_B0D97C(this);
  }
  DialogMessageMaster__showChain(
    (DialogMessageMaster_o *)this,
    v4->fields.entitys,
    v4->fields.idx + 1,
    v4->fields.callBack,
    0LL);
}