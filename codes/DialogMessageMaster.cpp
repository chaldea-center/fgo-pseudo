void __fastcall DialogMessageMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EA959 & 1) == 0 )
  {
    sub_B5D5C4(&DialogMessageMaster_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18231/*"dialogMessage_{0}_{1}"*/, v8, v9, v10);
    byte_42EA959 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DialogMessageMaster_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_18231/*"dialogMessage_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18231/*"dialogMessage_{0}_{1}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA954 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA954 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    227,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x21
  int64_t Time; // x0
  int64_t v51; // x24
  int32_t v52; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v54; // x2
  DialogMessageEntity_o *v55; // x26
  __int64 v56; // x10
  const MethodInfo *v57; // x2
  struct DialogMessageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x22
  Il2CppObject *v60; // x23
  struct DialogMessageMaster___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  DialogMessageEntity_array *v68; // x1
  const MethodInfo *v69; // x4

  if ( (byte_42EA955 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      opType,
      (_DWORD)callback,
      *(_QWORD *)&ex1);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Comparison_DialogMessageEntity___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Comparison_DialogMessageEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&DialogMessageEntity_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&NetworkManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_DialogMessageMaster___c__ShowAvailables_b__4_0__, v41, v42, v43);
    sub_B5D5C4(&DialogMessageMaster___c_TypeInfo, v44, v45, v46);
    byte_42EA955 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v51 = Time;
    v52 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v52,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v55 = (DialogMessageEntity_o *)Item;
        v56 = *(&DialogMessageEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v56
          && (DialogMessageEntity_c *)Item->klass->_2.typeHierarchy[v56 - 1] == DialogMessageEntity_TypeInfo
          && LODWORD(Item[1].monitor) == opType
          && DialogMessageEntity__isOpenTime((DialogMessageEntity_o *)Item, v51, v54)
          && !DialogMessageMaster__isSavedAsSeen(this, v55, v57) )
        {
          list = DialogMessageEntity__getTargets(v55, *(const MethodInfo **)&opType);
          if ( v55->fields.dialogOpenType == 1 )
          {
            if ( !v49 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v49,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
          }
        }
      }
      if ( ++v52 >= Count )
        goto LABEL_20;
    }
LABEL_30:
    sub_B5D69C(list, *(_QWORD *)&opType);
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
    v60 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_DialogMessageEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v60,
      Method_DialogMessageMaster___c__ShowAvailables_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_DialogMessageEntity___ctor__);
    v61 = DialogMessageMaster___c_TypeInfo->static_fields;
    v61->__9__4_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v61->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  if ( !v49 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v49,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  v68 = (DialogMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v49,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
  DialogMessageMaster__showChain(this, v68, 0, callback, v69);
}


bool __fastcall DialogMessageMaster__isSavedAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DialogMessageMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v13; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  System_Collections_Generic_List_int__o *seenList; // x0
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_42EA958 & 1) == 0 )
  {
    sub_B5D5C4(&DialogMessageMaster_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    this = (DialogMessageMaster_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v9, v10, v11);
    byte_42EA958 = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 3 )
  {
    seenList = v5->fields.seenList;
    if ( seenList )
      LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                           seenList,
                           entity->fields.id,
                           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    if ( frequencyType != 1 )
      goto LABEL_11;
    v13 = DialogMessageMaster_TypeInfo;
    if ( (BYTE3(DialogMessageMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v13 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v13->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    openedAt = entity->fields.openedAt;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
    v17 = System_String__Format_44573324(SAVE_KEY, v15, v16, 0LL);
    if ( UnityEngine_PlayerPrefs__GetInt(v17, 0, 0LL) >= 1 )
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
  __int64 v3; // x3
  DialogMessageMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v19; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v21; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  BattleServantConfConponent_o *p_seenList; // x20
  DialogMessageMaster_o *seenList; // t1
  System_Collections_Generic_List_int__o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_42EA957 & 1) == 0 )
  {
    sub_B5D5C4(&DialogMessageMaster_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v12, v13, v14);
    this = (DialogMessageMaster_o *)sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v15, v16, v17);
    byte_42EA957 = 1;
  }
  if ( !entity )
    goto LABEL_14;
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 3 )
  {
    seenList = (DialogMessageMaster_o *)v5->fields.seenList;
    p_seenList = (BattleServantConfConponent_o *)&v5->fields.seenList;
    this = seenList;
    if ( seenList
      || (v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo),
          System_Collections_Generic_List_int____ctor(
            v26,
            (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224),
          p_seenList->klass = (BattleServantConfConponent_c *)v26,
          sub_B5D560(p_seenList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0LL) )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        entity->fields.id,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      return;
    }
LABEL_14:
    sub_B5D69C(this, entity);
  }
  if ( frequencyType == 1 )
  {
    v19 = DialogMessageMaster_TypeInfo;
    if ( (BYTE3(DialogMessageMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v19 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v19->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    openedAt = entity->fields.openedAt;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
    v23 = System_String__Format_44573324(SAVE_KEY, v21, v22, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v23, 1, 0LL);
  }
}


void __fastcall DialogMessageMaster__showChain(
        DialogMessageMaster_o *this,
        DialogMessageEntity_array *entitys,
        int32_t idx,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x19
  System_Action_o *v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Action_o **v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x8
  __int64 v38; // x9
  int v39; // w10
  DialogMessageEntity_o *v40; // x20
  System_Action_o *v41; // x21
  const MethodInfo *v42; // x2
  __int64 v43; // x0

  if ( (byte_42EA956 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entitys, idx, callBack);
    sub_B5D5C4(&Method_DialogMessageMaster___c__DisplayClass5_0__showChain_b__0__, v9, v10, v11);
    sub_B5D5C4(&DialogMessageMaster___c__DisplayClass5_0_TypeInfo, v12, v13, v14);
    byte_42EA956 = 1;
  }
  v15 = sub_B5D694(DialogMessageMaster___c__DisplayClass5_0_TypeInfo);
  DialogMessageMaster___c__DisplayClass5_0___ctor((DialogMessageMaster___c__DisplayClass5_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = entitys;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)entitys, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v15 + 40) = callBack;
  v30 = (System_Action_o **)(v15 + 40);
  *(_DWORD *)(v15 + 32) = idx;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 40), (System_Int32_array **)callBack, v31, v32, v33, v34, v35, v36);
  v37 = *(_QWORD *)(v15 + 24);
  if ( !v37 )
    goto LABEL_11;
  v38 = *(int *)(v15 + 32);
  v39 = *(_DWORD *)(v37 + 24);
  if ( (int)v38 < v39 )
  {
    if ( (unsigned int)v38 >= v39 )
    {
      v43 = sub_B5D6C8(v16);
      sub_B5D668(v43, 0LL);
    }
    v40 = *(DialogMessageEntity_o **)(v37 + 8 * v38 + 32);
    v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v15,
      Method_DialogMessageMaster___c__DisplayClass5_0__showChain_b__0__,
      0LL);
    if ( v40 )
    {
      DialogMessageEntity__Open(v40, v41, v42);
      return;
    }
LABEL_11:
    sub_B5D69C(v16, v17);
  }
  v16 = *v30;
  if ( !*v30 )
    goto LABEL_11;
  System_Action__Invoke(v16, 0LL);
}


void __fastcall DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6D8F & 1) == 0 )
  {
    sub_B5D5C4(&DialogMessageMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6D8F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(DialogMessageMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)DialogMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
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
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  this = (DialogMessageMaster___c__DisplayClass5_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__saveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], 0LL),
        (this = (DialogMessageMaster___c__DisplayClass5_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_6:
    sub_B5D69C(this, method);
  }
  DialogMessageMaster__showChain(
    (DialogMessageMaster_o *)this,
    v4->fields.entitys,
    v4->fields.idx + 1,
    v4->fields.callBack,
    0LL);
}