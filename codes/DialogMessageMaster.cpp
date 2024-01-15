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

  if ( (byte_40FBC7C & 1) == 0 )
  {
    sub_B16FFC(&DialogMessageMaster_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_17938/*"dialogMessage_{0}_{1}"*/, v8);
    byte_40FBC7C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DialogMessageMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17938/*"dialogMessage_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17938/*"dialogMessage_{0}_{1}"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBC77 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__, method);
    byte_40FBC77 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    226,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  int64_t Time; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int64_t v35; // x24
  int32_t v36; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v37; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  DialogMessageEntity_o *v39; // x26
  __int64 v40; // x10
  DialogMessageMaster___c_c *v41; // x0
  struct DialogMessageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x22
  Il2CppObject *v44; // x23
  struct DialogMessageMaster___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  DialogMessageEntity_array *v52; // x1
  const MethodInfo *v53; // x4

  if ( (byte_40FBC78 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&opType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B16FFC(&Method_System_Comparison_DialogMessageEntity___ctor__, v12);
    sub_B16FFC(&System_Comparison_DialogMessageEntity__TypeInfo, v13);
    sub_B16FFC(&DialogMessageEntity_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo, v19);
    sub_B16FFC(&NetworkManager_TypeInfo, v20);
    sub_B16FFC(&Method_DialogMessageMaster___c__ShowAvailables_b__4_0__, v21);
    sub_B16FFC(&DialogMessageMaster___c_TypeInfo, v22);
    byte_40FBC78 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_DialogMessageEntity__TypeInfo,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v35 = Time;
    v36 = 0;
    while ( 1 )
    {
      v37 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v37 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v37,
               v36,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v39 = (DialogMessageEntity_o *)Item;
        v40 = *(&DialogMessageEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v40
          && (DialogMessageEntity_c *)Item->klass->_2.typeHierarchy[v40 - 1] == DialogMessageEntity_TypeInfo
          && LODWORD(Item[1].monitor) == opType
          && DialogMessageEntity__isOpenTime((DialogMessageEntity_o *)Item, v35, v32)
          && !DialogMessageMaster__isSavedAsSeen(this, v39, v32) )
        {
          DialogMessageEntity__getTargets(v39, v31);
          if ( v39->fields.dialogOpenType == 1 )
          {
            if ( !v29 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v29,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
          }
        }
      }
      if ( ++v36 >= Count )
        goto LABEL_20;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_20:
  v41 = DialogMessageMaster___c_TypeInfo;
  if ( (BYTE3(DialogMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DialogMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo);
    v41 = DialogMessageMaster___c_TypeInfo;
  }
  static_fields = v41->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_DialogMessageEntity__TypeInfo,
                                                                          v31,
                                                                          v32,
                                                                          v33,
                                                                          v34);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v44,
      Method_DialogMessageMaster___c__ShowAvailables_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_DialogMessageEntity___ctor__);
    v45 = DialogMessageMaster___c_TypeInfo->static_fields;
    v45->__9__4_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v45->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  if ( !v29 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v29,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  v52 = (DialogMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
  DialogMessageMaster__showChain(this, v52, 0, callback, v53);
}


bool __fastcall DialogMessageMaster__isSavedAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
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

  if ( (byte_40FBC7B & 1) == 0 )
  {
    sub_B16FFC(&DialogMessageMaster_TypeInfo, entity);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v6);
    byte_40FBC7B = 1;
  }
  if ( !entity )
    sub_B170D4();
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 3 )
  {
    seenList = this->fields.seenList;
    if ( seenList )
      LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                           seenList,
                           entity->fields.id,
                           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
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
    v12 = System_String__Format_43739268(SAVE_KEY, v10, v11, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v12; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  System_Collections_Generic_List_int__o *klass; // x0
  BattleServantConfConponent_o *p_seenList; // x20
  struct System_Collections_Generic_List_int__o *seenList; // t1
  System_Collections_Generic_List_int__o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBC7A & 1) == 0 )
  {
    sub_B16FFC(&DialogMessageMaster_TypeInfo, entity);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_40FBC7A = 1;
  }
  if ( !entity )
    goto LABEL_14;
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 3 )
  {
    seenList = this->fields.seenList;
    p_seenList = (BattleServantConfConponent_o *)&this->fields.seenList;
    klass = seenList;
    if ( seenList
      || (v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            entity,
                                                            method,
                                                            v3,
                                                            v4),
          System_Collections_Generic_List_int____ctor(
            v20,
            (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (BattleServantConfConponent_c *)v20,
          sub_B16F98(p_seenList, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26),
          (klass = (System_Collections_Generic_List_int__o *)p_seenList->klass) != 0LL) )
    {
      System_Collections_Generic_List_int___Add(
        klass,
        entity->fields.id,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
  if ( frequencyType == 1 )
  {
    v12 = DialogMessageMaster_TypeInfo;
    if ( (BYTE3(DialogMessageMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v12 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v12->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    openedAt = entity->fields.openedAt;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
    v16 = System_String__Format_43739268(SAVE_KEY, v14, v15, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v16, 1, 0LL);
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
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x8
  __int64 v37; // x9
  int v38; // w10
  DialogMessageEntity_o *v39; // x20
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x2

  if ( (byte_40FBC79 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entitys);
    sub_B16FFC(&Method_DialogMessageMaster___c__DisplayClass5_0__showChain_b__0__, v9);
    sub_B16FFC(&DialogMessageMaster___c__DisplayClass5_0_TypeInfo, v10);
    byte_40FBC79 = 1;
  }
  v11 = sub_B170CC(DialogMessageMaster___c__DisplayClass5_0_TypeInfo, entitys, *(_QWORD *)&idx, callBack, method);
  DialogMessageMaster___c__DisplayClass5_0___ctor((DialogMessageMaster___c__DisplayClass5_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = entitys;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)entitys, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v11 + 40) = callBack;
  v24 = (System_Action_o **)(v11 + 40);
  *(_DWORD *)(v11 + 32) = idx;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)callBack, v25, v26, v27, v28, v29, v30);
  v36 = *(_QWORD *)(v11 + 24);
  if ( !v36 )
    goto LABEL_11;
  v37 = *(int *)(v11 + 32);
  v38 = *(_DWORD *)(v36 + 24);
  if ( (int)v37 < v38 )
  {
    if ( (unsigned int)v37 >= v38 )
    {
      sub_B17100(v31, v32, v33);
      sub_B170A0();
    }
    v39 = *(DialogMessageEntity_o **)(v36 + 8 * v37 + 32);
    v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
    System_Action___ctor(
      v40,
      (Il2CppObject *)v11,
      Method_DialogMessageMaster___c__DisplayClass5_0__showChain_b__0__,
      0LL);
    if ( v39 )
    {
      DialogMessageEntity__Open(v39, v40, v41);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  if ( !*v24 )
    goto LABEL_11;
  System_Action__Invoke(*v24, 0LL);
}


void __fastcall DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B59 & 1) == 0 )
  {
    sub_B16FFC(&DialogMessageMaster___c_TypeInfo, v1);
    byte_40F8B59 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(DialogMessageMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)DialogMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  __int64 v2; // x2
  struct DialogMessageEntity_array *entitys; // x8
  __int64 idx; // x9
  DialogMessageMaster_o *_4__this; // x0
  DialogMessageMaster_o *v7; // x0

  entitys = this->fields.entitys;
  if ( !entitys )
    goto LABEL_6;
  idx = this->fields.idx;
  if ( (unsigned int)idx >= entitys->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DialogMessageMaster__saveAsSeen(_4__this, entitys->m_Items[idx], 0LL), (v7 = this->fields.__4__this) == 0LL) )
  {
LABEL_6:
    sub_B170D4();
  }
  DialogMessageMaster__showChain(v7, this->fields.entitys, this->fields.idx + 1, this->fields.callBack, 0LL);
}