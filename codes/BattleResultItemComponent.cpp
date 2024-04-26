void __fastcall BattleResultItemComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct BattleResultItemComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleResultItemComponent_c *v17; // x8
  struct BattleResultItemComponent_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_435219C & 1) == 0 )
  {
    sub_B70694(&BattleResultItemComponent_TypeInfo);
    sub_B70694(&StringLiteral_19750/*"img_bg_total_dp"*/);
    sub_B70694(&StringLiteral_2556/*"BATTLE_RESULT_GET_EP"*/);
    sub_B70694(&StringLiteral_19751/*"img_bg_total_ep"*/);
    byte_435219C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultItemComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19751/*"img_bg_total_ep"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19751/*"img_bg_total_ep"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = BattleResultItemComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19750/*"img_bg_total_dp"*/;
  v9->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_19750/*"img_bg_total_dp"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->DP_SP_BASE_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = BattleResultItemComponent_TypeInfo;
  BattleResultItemComponent_TypeInfo->static_fields->EP_GET_POSY_NORMAL = -15.0;
  v17->static_fields->EP_GET_POSY_BOOSTED = 0.0;
  v17->static_fields->EP_GET_FONT_NORMAL = 26;
  v17->static_fields->EP_GET_FONT_BOOSTED = 19;
  v18 = v17->static_fields;
  v19 = (System_Int32_array **)StringLiteral_2556/*"BATTLE_RESULT_GET_EP"*/;
  v18->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_2556/*"BATTLE_RESULT_GET_EP"*/;
  sub_B70630((BattleServantConfConponent_o *)&v18->EP_GET_LOCALE_KEY, v19, v20, v21, v22, v23, v24, v25);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void __fastcall BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_435219B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Color___TypeInfo);
    byte_435219B = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_B706AC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__AddItemNewLine(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleResultItemComponent_o *v2; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Object_o *v4; // x20
  unsigned int v5; // w22
  unsigned int v6; // w23
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x21
  int32_t size; // w8
  __int64 v9; // x8
  UnityEngine_Object_o *v10; // x21
  struct UILabel_o *getEventPointLabel; // x8
  int v12; // w9
  float v13; // s1
  struct BattleViewItemlistComponent_o *v14; // x8
  unsigned int v15; // w22
  __int64 v16; // x20
  float v17; // s10
  struct System_Collections_Generic_List_GameObject__o *v18; // x24
  unsigned int v19; // w8
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_435217F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (BattleResultItemComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435217F = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_33;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    itemObjectList = itemWindow->fields.itemObjectList;
    if ( !itemObjectList )
      goto LABEL_33;
    size = itemObjectList->fields._size;
    if ( (int)v6 >= size )
      break;
    if ( size <= v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v9 = (__int64)itemObjectList->fields._items + 8 * (int)v6;
    v10 = *(UnityEngine_Object_o **)(v9 + 32);
    if ( v10 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              *(UnityEngine_GameObject_o **)(v9 + 32),
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        getEventPointLabel = this->fields.getEventPointLabel;
        if ( getEventPointLabel )
        {
          v12 = BYTE5(getEventPointLabel->fields.mTrans);
          itemWindow = v2->fields.itemWindow;
          if ( !v12 )
            v5 = v6;
          if ( !v12 )
            v4 = v10;
          ++v6;
          if ( itemWindow )
            continue;
        }
      }
    }
    goto LABEL_33;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleResultItemComponent_o *)UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v4 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0LL);
      if ( this )
      {
        *(UnityEngine_Vector3_o *)(&v13 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        v14 = v2->fields.itemWindow;
        if ( v14 )
        {
          v15 = v5 + 1;
          v16 = 0LL;
          v17 = v13 + -113.57;
          do
          {
            v18 = v14->fields.itemObjectList;
            if ( !v18 )
              break;
            v19 = v18->fields._size;
            if ( (int)(v15 + v16) >= (int)v19 )
              return;
            if ( v19 <= v15 + (unsigned int)v16 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            this = (BattleResultItemComponent_o *)*((_QWORD *)&v18->fields._items->m_Items[v15] + v16);
            if ( !this )
              break;
            this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL);
            if ( !this )
              break;
            v20.fields.x = (float)((float)((int)v16 % 7) * 110.0) + -22.0;
            v20.fields.y = v17 + (float)((float)((int)v16 / 7) * -113.57);
            v20.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v20, 0LL);
            v14 = v2->fields.itemWindow;
            ++v16;
          }
          while ( v14 );
        }
      }
    }
LABEL_33:
    sub_B7076C(this, method);
  }
}


void __fastcall BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4352192 & 1) == 0 )
  {
    sub_B70694(&Method_BattleResultItemComponent_endClose__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4352192 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endClose__, 0LL),
        !window) )
  {
    sub_B7076C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v5,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultItemComponent__DialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4352188 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352188 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B7076C(v6, v7);
  CommonUI__CloseServantStatusDialog(Instance, v5, 0LL);
}


void __fastcall BattleResultItemComponent__EndCloseDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4352189 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3163/*"CLOSE"*/);
    byte_4352189 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3163/*"CLOSE"*/, 0LL);
}


int32_t __fastcall BattleResultItemComponent__GetEventPointUpperPriority(
        BattleResultItemComponent_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  BattleResultItemComponent_o *EntitiesFromEventPointUpperId; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w28
  int32_t key; // w26
  BattleResultItemComponent_o *v10; // x20
  const MethodInfo *v11; // x2
  _BOOL8 IsOpen; // x0
  __int64 v13; // x1
  struct BattleResultComponent_o *parentComp; // x8
  bool v15; // w21
  __int64 v16; // x25
  _DWORD *v17; // x8
  int32_t v18; // w22
  int32_t v19; // w24
  int64_t v20; // x23
  int32_t v21; // w22
  int32_t v22; // w24
  int64_t v23; // x23
  __int64 v24; // x1
  int32_t v25; // w20
  int v26; // w19
  __int64 v28; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4352198 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352198 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0LL
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0LL),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v7)) == 0LL) )
  {
    sub_B7076C(Instance, v5);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v29,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
    (const MethodInfo_2FC6B4C *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v8 = 0;
  v30 = v29;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v30,
            (const MethodInfo_2832CC4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
    {
      v25 = 0;
      v26 = 1;
      goto LABEL_31;
    }
    if ( !v30.fields.current.fields.value )
      sub_B7076C(0LL, v24);
    key = (int32_t)v30.fields.current.fields.key;
    v10 = (BattleResultItemComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30.fields.current.fields.value,
                                           (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v10, (EventPointUpperReleaseEntity_array *)v10, v11);
    if ( !v10 )
      sub_B7076C(IsOpen, v13);
    parentComp = v10->fields.parentComp;
    if ( (int)parentComp >= 1 )
      break;
LABEL_26:
    if ( v8 < key )
      v8 = key;
  }
  v15 = IsOpen;
  v16 = 0LL;
  while ( 1 )
  {
    if ( v16 >= (unsigned __int64)(unsigned int)parentComp )
    {
      v28 = sub_B70798(IsOpen);
      sub_B70738(v28, 0LL);
    }
    v17 = (_DWORD *)*((_QWORD *)&v10->fields.myFsm + v16);
    if ( !v15 )
      break;
    if ( !v17 )
      sub_B7076C(IsOpen, v13);
    v19 = v17[9];
    v18 = v17[10];
    v20 = (int)v17[11];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v19, v18, v20, 0, 0LL);
    if ( !IsOpen )
      goto LABEL_30;
LABEL_25:
    LODWORD(parentComp) = v10->fields.parentComp;
    if ( ++v16 >= (int)parentComp )
      goto LABEL_26;
  }
  if ( !v17 )
    sub_B7076C(IsOpen, v13);
  v22 = v17[9];
  v21 = v17[10];
  v23 = (int)v17[11];
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(v22, v21, v23, 0, 0LL);
  if ( IsOpen )
    goto LABEL_26;
  if ( v16 < (((__int64)v10->fields.parentComp << 32) - 0x100000000LL) >> 32 )
    goto LABEL_25;
LABEL_30:
  v26 = 3;
  v25 = v8;
LABEL_31:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v30,
    (const MethodInfo_2832E30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  if ( (unsigned int)(v26 + 1) >> 2 )
    return v25;
  return v8;
}


System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *__fastcall BattleResultItemComponent__GetEventPointUpperReleases(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x21
  int32_t targetId; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x23
  __int64 v13; // x0

  if ( (byte_4352199 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
    byte_4352199 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_14;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v13 = sub_B70798(Item);
        sub_B70738(v13, 0LL);
      }
      v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)entities->m_Items[v8];
      if ( !v9 || !v4 )
        break;
      targetId = v9->fields.targetId;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v4,
              targetId,
              (const MethodInfo_2FC67DC *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v11,
          (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v4,
          targetId,
          (WarBoardAIRoute_RouteData_o *)v11,
          (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v4,
               targetId,
               (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item,
        v9,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
      max_length = entities->max_length;
      if ( (int)++v8 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v4;
    }
LABEL_14:
    sub_B7076C(Item, v6);
  }
  return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v4;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleResultItemComponent__GetEventPointUpperValue(
        BattleResultItemComponent_o *this,
        int32_t priority,
        EventPointUpperEntity_array *entities,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v7; // w9
  EventPointUpperEntity_o *v8; // x10
  BalanceConfig_c *v9; // x0
  __int64 v11; // x0

  if ( (byte_435219A & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_B70694(&BalanceConfig_TypeInfo);
    byte_435219A = 1;
  }
  if ( !entities )
LABEL_16:
    sub_B7076C(this, *(_QWORD *)&priority);
  max_length = entities->max_length;
  if ( max_length < 1 )
  {
LABEL_10:
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    return v9->static_fields->UserPointEventMax;
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v11 = sub_B70798(this);
        sub_B70738(v11, 0LL);
      }
      v8 = entities->m_Items[v7];
      if ( !v8 )
        goto LABEL_16;
      if ( v8->fields.priority == priority )
        return v8->fields.value;
      if ( (int)++v7 >= max_length )
        goto LABEL_10;
    }
  }
}


bool __fastcall BattleResultItemComponent__GetIsAndCondGroup(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  signed int max_length; // w8
  signed int v4; // w9
  int v5; // w10
  EventPointUpperReleaseEntity_o *v6; // x11
  int condGroup; // w11
  __int64 v9; // x0

  if ( !entities )
LABEL_12:
    sub_B7076C(this, entities);
  max_length = entities->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  v5 = -1;
  while ( 1 )
  {
    if ( v4 >= (unsigned int)max_length )
    {
      v9 = sub_B70798(this);
      sub_B70738(v9, 0LL);
    }
    v6 = entities->m_Items[v4];
    if ( !v6 )
      goto LABEL_12;
    condGroup = v6->fields.condGroup;
    if ( condGroup == v5 )
      return 1;
    ++v4;
    v5 = condGroup;
    if ( v4 >= max_length )
      return 0;
  }
}


bool __fastcall BattleResultItemComponent__GetIsShowEventPointMax(
        BattleResultItemComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        int64_t userEventPoint,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v6; // x20
  const MethodInfo *v7; // x2
  struct BattleResultComponent_o *parentComp; // x8
  BattleResultItemComponent_o *v9; // x21
  struct PlayMakerFSM_o *myFsm; // x8
  BattleResultItemComponent_o *EventPointUpperPriority; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x0

  v6 = this;
  if ( (byte_4352197 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventPointUpperMaster___);
    this = (BattleResultItemComponent_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352197 = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0LL) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)EventPointUpperMaster__GetEntitiesFromEventId(
                                          (EventPointUpperMaster_o *)this,
                                          eventDetailEntity->fields.eventId,
                                          0LL);
  if ( !this )
    return (char)this;
  parentComp = this->fields.parentComp;
  v9 = this;
  if ( !parentComp )
  {
LABEL_12:
    LOBYTE(this) = 0;
    return (char)this;
  }
  if ( !(_DWORD)parentComp )
  {
    v13 = sub_B70798(this);
    sub_B70738(v13, 0LL);
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
LABEL_14:
    sub_B7076C(this, eventDetailEntity);
  EventPointUpperPriority = (BattleResultItemComponent_o *)BattleResultItemComponent__GetEventPointUpperPriority(
                                                             v6,
                                                             *((_DWORD *)&myFsm->fields.UnityEngine_MonoBehaviour_Fields
                                                             + 1),
                                                             v7);
  LOBYTE(this) = BattleResultItemComponent__GetEventPointUpperValue(
                   EventPointUpperPriority,
                   (int32_t)EventPointUpperPriority,
                   (EventPointUpperEntity_array *)v9,
                   v12) <= userEventPoint;
  return (char)this;
}


void __fastcall BattleResultItemComponent__Init(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  System_String_o *v4; // x20

  if ( (byte_4352179 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_2549/*"BATTLE_RESULTITEM_TITLECONF"*/);
    byte_4352179 = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_15;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.window;
  if ( !window )
    goto LABEL_15;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = (BattleWindowComponent_o *)this->fields.itemDialog;
  if ( !window )
    goto LABEL_15;
  ItemDetailInfoComponent__Init((ItemDetailInfoComponent_o *)window, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2549/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_15;
  v4 = (System_String_o *)window;
  if ( !System_String__Equals_44745508((System_String_o *)window, (System_String_o *)StringLiteral_2549/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_15;
    UILabel__set_text((UILabel_o *)window, v4, 0LL);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_15:
    sub_B7076C(window, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
}


void __fastcall BattleResultItemComponent__OnClickSwitchShowMode(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *showModeChangeButton; // x0
  __int64 *v6; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  __int64 v13; // x0
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4352195 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_17221/*"btn_bg_20"*/);
    sub_B70694(&StringLiteral_17222/*"btn_bg_21"*/);
    byte_4352195 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v6 = &StringLiteral_17221/*"btn_bg_20"*/) : (v6 = &StringLiteral_17222/*"btn_bg_21"*/),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v6, 0LL),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0LL) )
  {
LABEL_19:
    sub_B7076C(showModeChangeButton, v3);
  }
  showModeChangeButton = (UIButton_o *)this->fields.showModeChangeButtonLabel;
  max_length = showModeChanButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !showModeChangeButton )
        goto LABEL_19;
      goto LABEL_17;
    }
LABEL_20:
    v13 = sub_B70798(showModeChangeButton);
    sub_B70738(v13, 0LL);
  }
  if ( max_length <= 1 )
    goto LABEL_20;
  p_g = &showModeChanButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &showModeChanButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &showModeChanButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &showModeChanButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !showModeChangeButton )
    goto LABEL_19;
LABEL_17:
  v14.fields.b = *p_a;
  v14.fields.g = *p_b;
  v14.fields.r = *p_g;
  v14.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v14, 0LL);
  showModeChangeButton = (UIButton_o *)this->fields.itemWindow;
  if ( !showModeChangeButton )
    goto LABEL_19;
  BattleViewItemlistComponent__SwitchShowNumMode(
    (BattleViewItemlistComponent_o *)showModeChangeButton,
    this->fields.isShowPossessionNum,
    0LL);
}


void __fastcall BattleResultItemComponent__Open(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchNextRoot; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  const MethodInfo *v6; // x1

  if ( (byte_435217A & 1) == 0 )
  {
    sub_B70694(&Method_BattleResultItemComponent_endOpen__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&StringLiteral_5580/*"END_OPEN"*/);
    byte_435217A = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      touchNextRoot,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0LL),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5580/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0LL),
        !window) )
  {
LABEL_9:
    sub_B7076C(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v5,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultItemComponent__setCondensedScale(this, v6);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4352184 & 1) == 0 )
  {
    sub_B70694(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo);
    byte_4352184 = 1;
  }
  v3 = sub_B70764(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo);
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57___ctor(
    (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4352183 & 1) == 0 )
  {
    sub_B70694(&BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo);
    byte_4352183 = 1;
  }
  v5 = sub_B70764(BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo);
  BattleResultItemComponent__PlayVoiceCoroutine_d__56___ctor(
    (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 48), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleResultItemComponent__SetAddItemIconEffect(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultItemComponent_o *v3; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v7; // w21
  int v8; // w22
  Il2CppObject *v9; // x20
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  struct BattleViewItemlistComponent_o *v13; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v14; // x20
  signed __int64 v15; // x24
  signed __int64 v16; // x27
  struct System_Collections_Generic_List_GameObject__o *v17; // x21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x22
  UnityEngine_Transform_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-58h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4352181 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_18430/*"ef_additem"*/);
    this = (BattleResultItemComponent_o *)sub_B70694(&StringLiteral_5906/*"Effect/BattleResult/{0}/{1}"*/);
    byte_4352181 = 1;
  }
  itemWindow = v3->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  v7 = 7 * (size / 7);
  if ( size == v7 )
    v8 = -21;
  else
    v8 = -14;
  g_eventId = v3->fields.g_eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2);
  animationSvtId = v3->fields.animationSvtId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v10);
  v12 = System_String__Format_44753704((System_String_o *)StringLiteral_5906/*"Effect/BattleResult/{0}/{1}"*/, v9, v11, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v12, 0LL);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_18430/*"ef_additem"*/,
                                                (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720),
        (v13 = v3->fields.itemWindow) == 0LL) )
  {
LABEL_30:
    sub_B7076C(this, method);
  }
  v14 = (UnityEngine_UI_Dropdown_DropdownItem_o *)this;
  v15 = 0LL;
  v16 = v7 + v8;
  while ( 1 )
  {
    v17 = v13->fields.itemObjectList;
    if ( !v17 )
      goto LABEL_30;
    if ( v15 >= v17->fields._size )
      break;
    if ( v15 >= v16 )
    {
      if ( v15 >= (unsigned __int64)(unsigned int)v17->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      this = (BattleResultItemComponent_o *)v17->fields._items->m_Items[v15];
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v19 = this;
      if ( !getEventPointLabel )
        goto LABEL_30;
      if ( BYTE5(getEventPointLabel->fields.mTrans) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleResultItemComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                v14,
                                                (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v20 = (UnityEngine_GameObject_o *)this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
        if ( !this )
          goto LABEL_30;
        v21 = (UnityEngine_Transform_o *)this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v3->fields.effectRoot, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        UnityEngine_Transform__set_localPosition(v21, zero, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        UnityEngine_Transform__set_localScale(v21, one, 0LL);
        UnityEngine_GameObject__SetActive(v20, 0, 0LL);
        v19->fields.eventPointMaxSprite = (struct UISprite_o *)v20;
        sub_B70630(
          (BattleServantConfConponent_o *)&v19->fields.eventPointMaxSprite,
          (System_Int32_array **)v20,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
    }
    v13 = v3->fields.itemWindow;
    ++v15;
    if ( !v13 )
      goto LABEL_30;
  }
}


void __fastcall BattleResultItemComponent__SetAddItemSvtAnimation(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x20
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  System_String_o *v7; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v9; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v11; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-18h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-14h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352180 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_18480/*"ef_presenter"*/);
    sub_B70694(&StringLiteral_5906/*"Effect/BattleResult/{0}/{1}"*/);
    byte_4352180 = 1;
  }
  g_eventId = this->fields.g_eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2);
  animationSvtId = this->fields.animationSvtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v5);
  v7 = System_String__Format_44753704((System_String_o *)StringLiteral_5906/*"Effect/BattleResult/{0}/{1}"*/, v4, v6, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v7, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               AssetStorage,
                                                                               (System_String_o *)StringLiteral_18480/*"ef_presenter"*/,
                                                                               (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  Object_WarBoardWaitTimeSetting,
                                  (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v11 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AssetStorage,
                                        0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (v13 = (UnityEngine_Transform_o *)AssetStorage) == 0LL )
  {
LABEL_14:
    sub_B7076C(AssetStorage, v9);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v13, zero, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v13, one, 0LL);
  UnityEngine_GameObject__SetActive(v11, 0, 0LL);
  this->fields.addItemSvtAnimationObj = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.addItemSvtAnimationObj,
    (System_Int32_array **)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__SetGroupEventRoot(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventEntity_array *oldUsrEvent,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        UserGameEntity_o *userGame,
        int32_t countQp,
        System_Int32_array *viewGroupIds,
        int32_t conquestRewardQp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nomalRootObj; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x5

  nomalRootObj = this->fields.nomalRootObj;
  if ( !nomalRootObj
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 0, 0LL),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0LL)
    || (nomalRootObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nomalRootObj, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 1, 0LL), !userGame)
    || (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0LL
    || (BattleResultEventItemGroupComponent__SetQpInfo(
          (BattleResultEventItemGroupComponent_o *)nomalRootObj,
          userGame->fields.qp - conquestRewardQp,
          countQp,
          v17),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0LL) )
  {
    sub_B7076C(nomalRootObj, *(_QWORD *)&eventId);
  }
  BattleResultEventItemGroupComponent__SetGroupPointInfo(
    (BattleResultEventItemGroupComponent_o *)nomalRootObj,
    eventId,
    userGame->fields.userId,
    oldUsrPoint,
    viewGroupIds,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__SetNomalRoot(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        UserGameEntity_o *userGame,
        int32_t countQp,
        int32_t boostRate,
        int32_t conquestRewardQp,
        int32_t firstClearRewardQp,
        UserGameEntity_o *oldGame,
        bool isNotDisplayEventPoint,
        const MethodInfo *method)
{
  UnityEngine_Component_o *groupRootObj; // x0
  UILabel_o *getQpLabel; // x27
  __int64 v21; // x2
  Il2CppObject *v22; // x0
  __int64 v23; // x2
  int32_t qp; // w20
  int32_t QpMax; // w8
  int v26; // w26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v28; // x0
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  int32_t v30; // w5
  const MethodInfo *v31; // [xsp+0h] [xbp-70h]
  int v33; // [xsp+18h] [xbp-58h] BYREF
  int32_t v34; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_435217D & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23872/*"{0:#,0}"*/);
    sub_B70694(&StringLiteral_705/*"+ {0:#,0}"*/);
    byte_435217D = 1;
  }
  groupRootObj = (UnityEngine_Component_o *)this->fields.groupRootObj;
  if ( !groupRootObj )
    goto LABEL_34;
  groupRootObj = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(groupRootObj, 0LL);
  if ( !groupRootObj )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0LL);
  groupRootObj = (UnityEngine_Component_o *)this->fields.nomalRootObj;
  if ( !groupRootObj )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 1, 0LL);
  getQpLabel = this->fields.getQpLabel;
  v34 = countQp;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v21);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_705/*"+ {0:#,0}"*/, v22, 0LL);
  if ( !getQpLabel )
    goto LABEL_34;
  UILabel__set_text(getQpLabel, (System_String_o *)groupRootObj, 0LL);
  if ( !userGame )
    goto LABEL_34;
  qp = userGame->fields.qp;
  groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*(_QWORD *)&groupRootObj[7].fields.m_CachedPtr + 4LL);
  if ( qp >= QpMax )
  {
    if ( !oldGame )
      goto LABEL_34;
    v26 = oldGame->fields.qp + countQp;
    if ( v26 < 0 )
      goto LABEL_37;
    if ( (groupRootObj[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(groupRootObj[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(groupRootObj);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v26 > QpMax )
    {
LABEL_37:
      if ( (groupRootObj[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj);
        groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      v26 = *(_DWORD *)(*(_QWORD *)&groupRootObj[7].fields.m_CachedPtr + 4LL);
    }
  }
  else
  {
    v26 = userGame->fields.qp - (firstClearRewardQp + conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v33 = v26;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v23);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_23872/*"{0:#,0}"*/, v28, 0LL);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0LL),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0LL) )
  {
LABEL_34:
    sub_B7076C(groupRootObj, *(_QWORD *)&eventId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0LL);
  rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0LL, 0LL) )
  {
    groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventDamagePoint;
    if ( groupRootObj )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0LL);
      goto LABEL_31;
    }
    goto LABEL_34;
  }
LABEL_31:
  if ( eventId >= 1 )
    BattleResultItemComponent__setEventInfo(
      this,
      eventId,
      oldUsrPoint,
      addDamagePoint,
      boostRate,
      v30,
      countQp,
      isNotDisplayEventPoint,
      v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__StartPresenterAnimation(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *addItemSvtAnimationObj; // x0
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x21
  int32_t size; // w8
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s10
  float v13; // s8
  float v14; // s9
  const MethodInfo *v15; // x2
  struct BattleViewItemlistComponent_o *v16; // x8
  struct System_Collections_Generic_List_GameObject__o *v17; // x8
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s8
  float v22; // s10
  float v23; // s9
  System_Collections_IEnumerator_o *v24; // x1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352182 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4352182 = 1;
  }
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(addItemSvtAnimationObj, 1, 0LL);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_21;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_21;
  size = itemObjectList->fields._size;
  if ( !size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  addItemSvtAnimationObj = itemObjectList->fields._items->m_Items[size - 1];
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position(
                                    (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                    0LL);
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  v12 = v9;
  v13 = v10;
  v14 = v11;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  v25.fields.y = v13;
  v25.fields.z = v14;
  v25.fields.x = v12 + 0.05;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, v25, 0LL);
  v16 = this->fields.itemWindow;
  if ( !v16 )
    goto LABEL_21;
  v17 = v16->fields.itemObjectList;
  if ( !v17 )
    goto LABEL_21;
  if ( v17->fields._size >= 8 )
  {
    addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
    if ( addItemSvtAnimationObj )
    {
      addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             addItemSvtAnimationObj,
                                                             0LL);
      if ( addItemSvtAnimationObj )
      {
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                           0LL);
        addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
        if ( addItemSvtAnimationObj )
        {
          v21 = v18;
          v22 = v19;
          v23 = v20;
          addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 addItemSvtAnimationObj,
                                                                 0LL);
          if ( addItemSvtAnimationObj )
          {
            v26.fields.y = v22 + 9.0;
            v26.fields.x = v21;
            v26.fields.z = v23;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, v26, 0LL);
            goto LABEL_20;
          }
        }
      }
    }
LABEL_21:
    sub_B7076C(addItemSvtAnimationObj, callback);
  }
LABEL_20:
  v24 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
}


void __fastcall BattleResultItemComponent__commandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4352190 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352190 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B7076C(v6, v7);
  CommonUI__CloseServantStatusDialog(Instance, v5, 0LL);
}


void __fastcall BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4352193 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4352193 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7076C(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4352191 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3163/*"CLOSE"*/);
    byte_4352191 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3163/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endItemDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_435218D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3163/*"CLOSE"*/);
    byte_435218D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3163/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_435217B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9408/*"NEXT"*/);
    byte_435217B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9408/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_B7076C(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0LL);
}


BattleDropItem_o *__fastcall BattleResultItemComponent__getNewDrop(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *newDroplist; // x0
  BattleDropItem_o *v4; // x19

  if ( (byte_4352194 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_4352194 = 1;
  }
  newDroplist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  v4 = (BattleDropItem_o *)newDroplist->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    newDroplist,
    0,
    (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v4;
}


void __fastcall BattleResultItemComponent__itemDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_435218C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BattleResultItemComponent_endItemDialogCallBack__);
    sub_B70694(&Method_BattleResultItemComponent_itemDialogCallBack__);
    byte_435218C = 1;
  }
  v4 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B7069C(Method_BattleResultItemComponent_itemDialogCallBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_B70678(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_B7076C(v8, v9);
  ItemDetailInfoComponent__Close_27818224(itemDialog, v7, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine(
        BattleResultItemComponent_o *this,
        UnityEngine_GameObject_o *itemIconEffectObj,
        BattleDropItemComponent_o *dropItem,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4352185 & 1) == 0 )
  {
    sub_B70694(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo);
    byte_4352185 = 1;
  }
  v6 = sub_B70764(BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo);
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__58___ctor(
    (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B7076C(v7, v8);
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_B70630(
    (BattleServantConfConponent_o *)(v6 + 32),
    (System_Int32_array **)itemIconEffectObj,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)dropItem, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleResultItemComponent__setCondensedScale(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *getTitleLabel; // x20
  UILabel_o *getBoostLabel; // x0

  if ( (byte_4352196 & 1) == 0 )
  {
    sub_B70694(&BattleResultItemComponent_TypeInfo);
    byte_4352196 = 1;
  }
  getTitleLabel = this->fields.getTitleLabel;
  getBoostLabel = (UILabel_o *)BattleResultItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
  }
  if ( !getTitleLabel
    || (UILabel__SetCondensedScale(
          getTitleLabel,
          BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
          0LL),
        (getBoostLabel = this->fields.getBoostLabel) == 0LL) )
  {
    sub_B7076C(getBoostLabel, method);
  }
  UILabel__SetCondensedScale(
    getBoostLabel,
    BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
    0LL);
}


void __fastcall BattleResultItemComponent__setEventInfo(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        int32_t boostRate,
        int32_t firstClearRewardQp,
        int32_t countQp,
        bool isNotDisplayEventPoint,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  System_String_o *v17; // x1
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v19; // x20
  __int64 v20; // x8
  UserEventPointEntity_o *v21; // x8
  UserEventPointEntity_o *v22; // x8
  int64_t v23; // x25
  __int64 v24; // x26
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  UserEventPointEntity_o *v27; // x8
  int64_t v28; // x22
  const MethodInfo *v29; // x3
  UserEventPointEntity_o *v30; // x8
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserEventRaidMaster_o *v32; // x21
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  int64_t TotalDamagePoint; // x21
  BalanceConfig_c *v35; // x8
  int64_t UserRaidDamagePointMax; // x23
  int64_t v37; // x21
  int64_t v38; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  __int64 v40; // x2
  Il2CppObject *v41; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  __int64 v43; // x2
  Il2CppObject *v44; // x0
  BattleResultItemComponent_c *v45; // x0
  System_String_o *DP_SP_BASE_NAME; // x21
  System_String_o *v47; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  UILabel_o *v49; // x21
  BattleResultItemComponent_c *v50; // x0
  UISprite_o *eventDamageIconSprite; // x21
  int32_t v52; // w20
  UILabel_o *getEventPointLabel; // x23
  Il2CppObject *v54; // x0
  UILabel_o *nowEventPointLabel; // x23
  __int64 v56; // x2
  Il2CppObject *v57; // x0
  UISprite_o *eventIconSprite; // x23
  int32_t pointImageId; // w24
  UILabel_o *getTitleLabel; // x23
  int32_t *v61; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultItemComponent_c *v63; // x8
  UnityEngine_GameObject_o *v64; // x23
  float *p_EP_GET_POSY_NORMAL; // x8
  BattleResultItemComponent_c *v66; // x0
  System_String_o *EP_GET_LOCALE_KEY; // x23
  System_String_o *v68; // x0
  System_String_o *v69; // x23
  BattleResultItemComponent_c *v70; // x0
  UILabel_o *v71; // x24
  UILabel_o *getBoostLabel; // x23
  System_String_o *v73; // x24
  __int64 v74; // x2
  Il2CppObject *v75; // x0
  BattleResultItemComponent_c *v76; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v78; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  UILabel_o *v80; // x21
  BattleResultItemComponent_c *v81; // x0
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  UnityEngine_GameObject_o *v83; // x21
  const MethodInfo *v84; // x3
  __int64 v85; // x0
  int64_t v86; // [xsp+8h] [xbp-68h] BYREF
  __int64 v87; // [xsp+10h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_435217E & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&BattleResultItemComponent_TypeInfo);
    sub_B70694(&Method_BetterList_string__Contains__);
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_2557/*"BATTLE_RESULT_GET_EP_RATE"*/);
    sub_B70694(&StringLiteral_23872/*"{0:#,0}"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_705/*"+ {0:#,0}"*/);
    byte_435217E = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_134;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         eventId,
         (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_134;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_134;
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      eventId,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      v19 = Entity;
      Instance = EventDetailEntity__IsEventPoint(Entity, 0LL);
      if ( (Instance & 1) != 0 && !isNotDisplayEventPoint )
      {
        if ( oldUsrPoint && (v20 = *(_QWORD *)&oldUsrPoint->max_length) != 0 )
        {
          if ( !(_DWORD)v20 )
            goto LABEL_135;
          v21 = oldUsrPoint->m_Items[0];
          if ( !v21 )
            goto LABEL_134;
          if ( !v21->fields.groupId )
          {
            Instance = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
            if ( !oldUsrPoint->max_length )
              goto LABEL_135;
            v22 = oldUsrPoint->m_Items[0];
            if ( !v22 )
              goto LABEL_134;
            v23 = Instance;
            v24 = Instance - v22->fields.value;
            if ( Instance > 0 || v24 >= 1 )
            {
              Instance = EventDetailEntity__IsEventPointByQp(v19, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !oldUsrPoint->max_length )
                  goto LABEL_135;
                v27 = oldUsrPoint->m_Items[0];
                if ( !v27 )
                  goto LABEL_134;
                v28 = v27->fields.value + countQp;
                if ( BattleResultItemComponent__GetIsShowEventPointMax(this, v19, v23, v26) )
                {
                  Instance = BattleResultItemComponent__GetIsShowEventPointMax(this, v19, v28, v29);
                  if ( (Instance & 1) != 0 )
                    v28 = v23;
                  if ( oldUsrPoint->max_length )
                  {
                    v30 = oldUsrPoint->m_Items[0];
                    if ( !v30 )
                      goto LABEL_134;
                    v24 = v28 - v30->fields.value;
                    goto LABEL_65;
                  }
LABEL_135:
                  v85 = sub_B70798(Instance);
                  sub_B70738(v85, 0LL);
                }
                v24 = countQp;
              }
              else
              {
                v28 = v23;
              }
LABEL_65:
              getEventPointLabel = this->fields.getEventPointLabel;
              v87 = v24;
              v54 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v87, v25);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_705/*"+ {0:#,0}"*/, v54, 0LL);
              if ( !getEventPointLabel )
                goto LABEL_134;
              UILabel__set_text(getEventPointLabel, (System_String_o *)Instance, 0LL);
              nowEventPointLabel = this->fields.nowEventPointLabel;
              v86 = v28;
              v57 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v86, v56);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_23872/*"{0:#,0}"*/, v57, 0LL);
              if ( !nowEventPointLabel )
                goto LABEL_134;
              UILabel__set_text(nowEventPointLabel, (System_String_o *)Instance, 0LL);
              CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0LL);
              CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0LL);
              eventIconSprite = this->fields.eventIconSprite;
              pointImageId = v19->fields.pointImageId;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetItem(eventIconSprite, pointImageId, 0LL);
              getTitleLabel = this->fields.getTitleLabel;
              Instance = (__int64)BattleResultItemComponent_TypeInfo;
              if ( boostRate > 0 )
              {
                if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  Instance = (__int64)BattleResultItemComponent_TypeInfo;
                }
                v61 = (int32_t *)(*(_QWORD *)(Instance + 184) + 28LL);
                if ( !getTitleLabel )
                  goto LABEL_134;
                goto LABEL_80;
              }
              if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                Instance = (__int64)BattleResultItemComponent_TypeInfo;
              }
              v61 = (int32_t *)(*(_QWORD *)(Instance + 184) + 24LL);
              if ( getTitleLabel )
              {
LABEL_80:
                UILabel__set_fontSize(getTitleLabel, *v61, 0LL);
                Instance = (__int64)this->fields.getTitleLabel;
                if ( !Instance )
                  goto LABEL_134;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                v63 = BattleResultItemComponent_TypeInfo;
                v64 = gameObject;
                if ( boostRate <= 0 )
                {
                  if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v63 = BattleResultItemComponent_TypeInfo;
                  }
                  p_EP_GET_POSY_NORMAL = &v63->static_fields->EP_GET_POSY_NORMAL;
                }
                else
                {
                  if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v63 = BattleResultItemComponent_TypeInfo;
                  }
                  p_EP_GET_POSY_NORMAL = &v63->static_fields->EP_GET_POSY_BOOSTED;
                }
                GameObjectExtensions__SetLocalPositionY(v64, *p_EP_GET_POSY_NORMAL, 0LL);
                v66 = BattleResultItemComponent_TypeInfo;
                if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  v66 = BattleResultItemComponent_TypeInfo;
                }
                EP_GET_LOCALE_KEY = v66->static_fields->EP_GET_LOCALE_KEY;
                v68 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                v69 = System_String__Concat_44758168(EP_GET_LOCALE_KEY, v68, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                if ( !LocalizationManager__ContainsKey(v69, 0LL) )
                {
                  v70 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v70 = BattleResultItemComponent_TypeInfo;
                  }
                  v69 = v70->static_fields->EP_GET_LOCALE_KEY;
                }
                v71 = this->fields.getTitleLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (__int64)LocalizationManager__Get(v69, 0LL);
                if ( !v71 )
                  goto LABEL_134;
                UILabel__set_text(v71, (System_String_o *)Instance, 0LL);
                getBoostLabel = this->fields.getBoostLabel;
                if ( boostRate <= 0 )
                {
                  v17 = (System_String_o *)StringLiteral_1/*""*/;
                  if ( !getBoostLabel )
                    goto LABEL_134;
                }
                else
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_2557/*"BATTLE_RESULT_GET_EP_RATE"*/, 0LL);
                  *(float *)&v87 = (float)((float)boostRate / 1000.0) + 1.0;
                  v75 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v87, v74);
                  Instance = (__int64)System_String__Format(v73, v75, 0LL);
                  v17 = (System_String_o *)Instance;
                  if ( !getBoostLabel )
                    goto LABEL_134;
                }
                UILabel__set_text(getBoostLabel, v17, 0LL);
                v76 = BattleResultItemComponent_TypeInfo;
                if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  v76 = BattleResultItemComponent_TypeInfo;
                }
                EP_SP_BASE_NAME = v76->static_fields->EP_SP_BASE_NAME;
                v78 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                Instance = (__int64)System_String__Concat_44758168(EP_SP_BASE_NAME, v78, 0LL);
                eventPointBgSprite = this->fields.eventPointBgSprite;
                if ( !eventPointBgSprite )
                  goto LABEL_134;
                v80 = (UILabel_o *)Instance;
                Instance = (__int64)eventPointBgSprite->fields.mAtlas;
                if ( !Instance )
                  goto LABEL_134;
                Instance = (__int64)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_134;
                if ( !BetterList_UILabel___Contains(
                        (BetterList_UILabel__o *)Instance,
                        v80,
                        (const MethodInfo_2C71960 *)Method_BetterList_string__Contains__) )
                {
                  v81 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v81 = BattleResultItemComponent_TypeInfo;
                  }
                  v80 = (UILabel_o *)v81->static_fields->EP_SP_BASE_NAME;
                }
                Instance = (__int64)this->fields.eventPointBgSprite;
                if ( !Instance )
                  goto LABEL_134;
                UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v80, 0LL);
                eventPointMaxSprite = (UnityEngine_Object_o *)this->fields.eventPointMaxSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(eventPointMaxSprite, 0LL, 0LL) )
                {
                  Instance = (__int64)this->fields.eventPointMaxSprite;
                  if ( !Instance )
                    goto LABEL_134;
                  v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  Instance = BattleResultItemComponent__GetIsShowEventPointMax(this, v19, v28, v84);
                  if ( !v83 )
                    goto LABEL_134;
                  UnityEngine_GameObject__SetActive(v83, Instance & 1, 0LL);
                }
                Instance = (__int64)this->fields.rootEventPoint;
                if ( !Instance )
                  goto LABEL_134;
                goto LABEL_132;
              }
LABEL_134:
              sub_B7076C(Instance, v17);
            }
          }
        }
        else if ( (addDamagePoint & 0x8000000000000000LL) == 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_134;
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          if ( MasterData_WarQuestSelectionMaster )
          {
            v32 = (UserEventRaidMaster_o *)MasterData_WarQuestSelectionMaster;
            rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0LL, 0LL) )
            {
              TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v32, eventId, 0LL);
              v35 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v35 = BalanceConfig_TypeInfo;
              }
              UserRaidDamagePointMax = v35->static_fields->UserRaidDamagePointMax;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              v37 = System_Math__Min_45601544(TotalDamagePoint, UserRaidDamagePointMax, 0LL);
              v38 = System_Math__Min_45601544(
                      addDamagePoint,
                      BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax,
                      0LL);
              getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
              v87 = v38;
              v41 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v87, v40);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_705/*"+ {0:#,0}"*/, v41, 0LL);
              if ( getEventDamagePointLabel )
              {
                UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Instance, 0LL);
                nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
                v86 = v37;
                v44 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v86, v43);
                Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_23872/*"{0:#,0}"*/, v44, 0LL);
                if ( nowEventDamagePointLabel )
                {
                  UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Instance, 0LL);
                  v45 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v45 = BattleResultItemComponent_TypeInfo;
                  }
                  DP_SP_BASE_NAME = v45->static_fields->DP_SP_BASE_NAME;
                  v47 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                  Instance = (__int64)System_String__Concat_44758168(DP_SP_BASE_NAME, v47, 0LL);
                  eventDamageBGSprite = this->fields.eventDamageBGSprite;
                  if ( eventDamageBGSprite )
                  {
                    v49 = (UILabel_o *)Instance;
                    Instance = (__int64)eventDamageBGSprite->fields.mAtlas;
                    if ( Instance )
                    {
                      Instance = (__int64)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                      if ( Instance )
                      {
                        if ( !BetterList_UILabel___Contains(
                                (BetterList_UILabel__o *)Instance,
                                v49,
                                (const MethodInfo_2C71960 *)Method_BetterList_string__Contains__) )
                        {
                          v50 = BattleResultItemComponent_TypeInfo;
                          if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                            v50 = BattleResultItemComponent_TypeInfo;
                          }
                          v49 = (UILabel_o *)v50->static_fields->DP_SP_BASE_NAME;
                        }
                        Instance = (__int64)this->fields.eventDamageBGSprite;
                        if ( Instance )
                        {
                          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v49, 0LL);
                          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                          if ( Instance )
                          {
                            Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
                            if ( Instance )
                            {
                              EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                              eventDamageIconSprite = this->fields.eventDamageIconSprite;
                              v52 = v19->fields.pointImageId;
                              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !AtlasManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              }
                              AtlasManager__SetItem(eventDamageIconSprite, v52, 0LL);
                              Instance = (__int64)this->fields.rootEventDamagePoint;
                              if ( Instance )
                              {
LABEL_132:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LABEL_134;
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleResultItemComponent__setResultData(
        BattleResultItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t getqp,
        int32_t originalGetQp,
        UserGameEntity_o *oldGame,
        int32_t eventId,
        UserEventEntity_array *oldUsrEvent,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        System_Int32_array *viewGroupIds,
        int32_t boostRate,
        DropUpInfo_array *dropupinfos,
        EventConquestInfo_array *eventConquestInfos,
        int32_t firstClearRewardQp,
        bool isNotDisplayEventPoint,
        BattleResultAddRewardBonus_o *rewardBonus,
        const MethodInfo *method)
{
  __int64 v23; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o **v33; // x28
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v34; // x21
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__48_0; // x19
  Il2CppObject *v37; // x27
  struct BattleResultItemComponent___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x19
  __int64 v53; // x8
  int v54; // w9
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v55; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v56; // x19
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x23
  __int64 v64; // x27
  __int64 v65; // x8
  struct BattleDropItem_array *gifts; // x8
  int max_length; // w12
  __int64 v68; // x9
  BattleDropItem_o *v69; // x12
  System_Int32_array **voiceIds; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x21
  BattleResultItemComponent___c_c *v78; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v79; // x24
  struct BattleResultItemComponent___c_StaticFields *v80; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__48_2; // x19
  Il2CppObject *v82; // x25
  struct BattleResultItemComponent___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  BattleViewItemlistComponent_o *itemWindow; // x19
  BattleDropItem_array *v91; // x21
  BattleDropItemComponent_ClickDelegate_o *v92; // x24
  const MethodInfo *v93; // x1
  const MethodInfo *v94; // x1
  const MethodInfo *v95; // x1
  UserGameEntity_o *SelfUserGame; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v97; // x28
  int32_t i; // w27
  BattleDropItem_o *current; // x19
  _BOOL8 isAutoSellItem; // x0
  __int64 v101; // x1
  WarEntity_o *Entity; // x0
  __int64 v103; // x1
  int32_t bannerId; // w8
  _BOOL8 v105; // x0
  __int64 v106; // x1
  UserEventEntity_array *v107; // x2
  int64_t v108; // x4
  signed int v109; // w8
  signed int v110; // w19
  int32_t conquestRewardQp; // w21
  EventConquestInfo_o *v112; // x22
  int monitor; // w8
  __int64 v114; // x0
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-F8h]
  const MethodInfo *v116; // [xsp+18h] [xbp-E8h]
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v119; // [xsp+50h] [xbp-B0h]
  BattleResultItemComponent_o *v120; // [xsp+58h] [xbp-A8h]
  int32_t eventIda; // [xsp+64h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_T__o v122; // [xsp+68h] [xbp-98h] BYREF
  int v123; // [xsp+88h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v124; // [xsp+90h] [xbp-70h] BYREF

  if ( (byte_435217C & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Find_DropUpInfo___);
    sub_B70694(&BattleDropItem_TypeInfo);
    sub_B70694(&Method_BattleResultItemComponent_setShowConf__);
    sub_B70694(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem__Insert__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_B70694(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleDropItem___ctor__);
    sub_B70694(&Method_System_Predicate_DropUpInfo___ctor__);
    sub_B70694(&System_Predicate_BattleDropItem__TypeInfo);
    sub_B70694(&System_Predicate_DropUpInfo__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_BattleResultItemComponent___c__setResultData_b__48_0__);
    sub_B70694(&Method_BattleResultItemComponent___c__setResultData_b__48_2__);
    sub_B70694(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__);
    sub_B70694(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
    sub_B70694(&BattleResultItemComponent___c_TypeInfo);
    byte_435217C = 1;
  }
  memset(&v124, 0, sizeof(v124));
  v123 = 0;
  v23 = sub_B70764(BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
  BattleResultItemComponent___c__DisplayClass48_0___ctor((BattleResultItemComponent___c__DisplayClass48_0_o *)v23, 0LL);
  this->fields.g_eventId = eventId;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleDropItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v23 )
    goto LABEL_87;
  *(_QWORD *)(v23 + 16) = v24;
  v33 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o **)(v23 + 16);
  sub_B70630((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)v24, v27, v28, v29, v30, v31, v32);
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)(v23 + 16);
  if ( !USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    goto LABEL_87;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  v34 = *v33;
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BattleResultItemComponent___c_TypeInfo;
  if ( (BYTE3(BattleResultItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
    USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BattleResultItemComponent___c_TypeInfo;
  }
  static_fields = *(struct BattleResultItemComponent___c_StaticFields **)&USFGOPlayStandardCutInLimitCount_OverwriteCutIn[4].fields._size;
  _9__48_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( (USFGOPlayStandardCutInLimitCount_OverwriteCutIn[7].fields._size & 0x4000000) != 0
      && !USFGOPlayStandardCutInLimitCount_OverwriteCutIn[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(USFGOPlayStandardCutInLimitCount_OverwriteCutIn);
      static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleDropItem__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__48_0,
      v37,
      Method_BattleResultItemComponent___c__setResultData_b__48_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleDropItem___ctor__);
    v38 = BattleResultItemComponent___c_TypeInfo->static_fields;
    v38->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)_9__48_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v38->__9__48_0,
      (System_Int32_array **)_9__48_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  if ( !v34 )
    goto LABEL_87;
  eventIda = eventId;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          v34,
          (System_Predicate_T__o *)_9__48_0,
          (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.newDroplist,
    (System_Int32_array **)All,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  if ( getqp >= 1 )
  {
    v52 = sub_B70764(BattleDropItem_TypeInfo);
    BattleDropItem___ctor((BattleDropItem_o *)v52, 0LL);
    if ( !v52 )
      goto LABEL_87;
    *(_QWORD *)(v52 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v52, getqp, originalGetQp, 0LL);
    USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*v33;
    if ( !*v33 )
      goto LABEL_87;
    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
      0,
      (XWeaponTrail_Element_o *)v52,
      (const MethodInfo_302689C *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  p_newDroplist = &this->fields.newDroplist;
  v119 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)(v23 + 16);
  v120 = this;
  if ( dropupinfos )
  {
    v53 = *(_QWORD *)(v23 + 16);
    *(_DWORD *)(v23 + 24) = 0;
    if ( !v53 )
      goto LABEL_87;
    v54 = 0;
    v55 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v23 + 32);
    while ( v54 < *(_DWORD *)(v53 + 24) )
    {
      v56 = *v55;
      if ( !*v55 )
      {
        v56 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_DropUpInfo__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v56,
          (Il2CppObject *)v23,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_DropUpInfo___ctor__);
        *(_QWORD *)(v23 + 32) = v56;
        sub_B70630((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
      }
      USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_((WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)dropupinfos, (System_Predicate_T__o *)v56, (const MethodInfo_1FCAC6C *)Method_System_Array_Find_DropUpInfo___);
      if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
      {
        v63 = *(_QWORD *)(v23 + 16);
        if ( !v63 )
          goto LABEL_87;
        v64 = *(int *)(v23 + 24);
        if ( *(_DWORD *)(v63 + 24) <= (unsigned int)v64 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v65 = *(_QWORD *)(*(_QWORD *)(v63 + 16) + 8 * v64 + 32);
        if ( !v65 )
          goto LABEL_87;
        *(_DWORD *)(v65 + 72) = HIDWORD(USFGOPlayStandardCutInLimitCount_OverwriteCutIn->fields._items);
      }
      v53 = *(_QWORD *)(v23 + 16);
      v54 = *(_DWORD *)(v23 + 24) + 1;
      *(_DWORD *)(v23 + 24) = v54;
      if ( !v53 )
        goto LABEL_87;
    }
  }
  if ( rewardBonus )
  {
    gifts = rewardBonus->fields.gifts;
    if ( gifts )
    {
      max_length = gifts->max_length;
      if ( max_length >= 1 )
      {
        v68 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v68 >= max_length )
          {
LABEL_89:
            v114 = sub_B70798(USFGOPlayStandardCutInLimitCount_OverwriteCutIn);
            sub_B70738(v114, 0LL);
          }
          v69 = gifts->m_Items[v68];
          if ( !v69 )
            break;
          v69->fields.isAddReward = 1;
          max_length = gifts->max_length;
          if ( (int)++v68 >= max_length )
            goto LABEL_39;
        }
LABEL_87:
        sub_B7076C(USFGOPlayStandardCutInLimitCount_OverwriteCutIn, v26);
      }
LABEL_39:
      USFGOPlayStandardCutInLimitCount_OverwriteCutIn = *v119;
      if ( !*v119 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      v120->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = (System_Int32_array **)rewardBonus->fields.voiceIds;
      v120->fields.voiceIds = (struct System_String_array *)voiceIds;
      sub_B70630((BattleServantConfConponent_o *)&v120->fields.voiceIds, voiceIds, v71, v72, v73, v74, v75, v76);
      v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleDropItem__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v77,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v77 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v77,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      v78 = BattleResultItemComponent___c_TypeInfo;
      v79 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)*p_newDroplist;
      if ( (BYTE3(BattleResultItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
        v78 = BattleResultItemComponent___c_TypeInfo;
      }
      v80 = v78->static_fields;
      _9__48_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v80->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v78);
          v80 = BattleResultItemComponent___c_TypeInfo->static_fields;
        }
        v82 = (Il2CppObject *)v80->__9;
        _9__48_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleDropItem__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__48_2,
          v82,
          Method_BattleResultItemComponent___c__setResultData_b__48_2__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleDropItem___ctor__);
        v83 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v83->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_B70630(
          (BattleServantConfConponent_o *)&v83->__9__48_2,
          (System_Int32_array **)_9__48_2,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89);
      }
      USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll((System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v77, (System_Predicate_T__o *)_9__48_2, (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !v79 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        v79,
        (System_Collections_Generic_IEnumerable_T__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
        (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = *v119;
  if ( !*v119 )
    goto LABEL_87;
  itemWindow = v120->fields.itemWindow;
  v91 = (BattleDropItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
                                  (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v92 = (BattleDropItemComponent_ClickDelegate_o *)sub_B70764(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v92,
    (Il2CppObject *)v120,
    Method_BattleResultItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_87;
  BattleViewItemlistComponent__setListDataCustomColumn_24016500(
    itemWindow,
    v91,
    eventId,
    v92,
    v120->fields.itemColumnCount,
    0LL);
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v120->fields.itemWindow;
  if ( !USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    goto LABEL_87;
  BattleViewItemlistComponent__setHide(
    (BattleViewItemlistComponent_o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
    0LL);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(v120, v93);
    BattleResultItemComponent__SetAddItemSvtAnimation(v120, v94);
    BattleResultItemComponent__SetAddItemIconEffect(v120, v95);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    goto LABEL_87;
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v119 )
    goto LABEL_87;
  v97 = (DataMasterBase_WarMaster__WarEntity__int__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v122,
    *v119,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v124 = v122;
  for ( i = 0; ; i += current->fields.num * current->fields.sellQp )
  {
    v105 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v124,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v105 )
      break;
    current = (BattleDropItem_o *)v124.fields.current;
    if ( !v124.fields.current )
      sub_B7076C(v105, v106);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v124.fields.current, 0LL);
    if ( current->fields.type == 2 )
    {
      if ( !v97 )
        sub_B7076C(isAutoSellItem, v101);
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v97,
                 current->fields.objectId,
                 (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        sub_B7076C(0LL, v103);
      bannerId = Entity->fields.bannerId;
      if ( bannerId == 1 || bannerId == 16 )
        i += BattleDropItem__getTotalNum(current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v124,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( !eventConquestInfos )
    goto LABEL_87;
  v109 = eventConquestInfos->max_length;
  if ( v109 < 1 )
  {
    conquestRewardQp = 0;
    if ( !viewGroupIds )
      goto LABEL_87;
  }
  else
  {
    v110 = 0;
    conquestRewardQp = 0;
    do
    {
      if ( v110 >= (unsigned int)v109 )
        goto LABEL_89;
      v112 = eventConquestInfos->m_Items[v110];
      if ( !v112 )
        goto LABEL_87;
      if ( v112->fields.type == 2 )
      {
        if ( !v97 )
          goto LABEL_87;
        USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(v97, v112->fields.objectId, (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
        {
          monitor = (int)USFGOPlayStandardCutInLimitCount_OverwriteCutIn[1].monitor;
          if ( monitor == 16 || monitor == 1 )
            conquestRewardQp += v112->fields.getNum;
        }
      }
      v109 = eventConquestInfos->max_length;
      ++v110;
    }
    while ( v110 < v109 );
    if ( !viewGroupIds )
      goto LABEL_87;
  }
  if ( *(_QWORD *)&viewGroupIds->max_length )
    BattleResultItemComponent__SetGroupEventRoot(
      v120,
      eventIda,
      v107,
      oldUsrPoint,
      v108,
      SelfUserGame,
      i,
      viewGroupIds,
      conquestRewardQp,
      (const MethodInfo *)oldGamea);
  else
    BattleResultItemComponent__SetNomalRoot(
      v120,
      eventIda,
      oldUsrPoint,
      addDamagePoint,
      SelfUserGame,
      i,
      boostRate,
      conquestRewardQp,
      firstClearRewardQp,
      oldGame,
      isNotDisplayEventPoint,
      v116);
}


void __fastcall BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_435218E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9872/*"OPEN_COMMANDCODE"*/);
    byte_435218E = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_B7076C(0LL, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9872/*"OPEN_COMMANDCODE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__setShowConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  int32_t type; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( !item )
    sub_B7076C(this, 0LL);
  type = item->fields.type;
  if ( Gift__IsServant(type, 0LL) )
  {
    BattleResultItemComponent__setShowServantConf(this, item, v6);
  }
  else if ( Gift__IsItem(type, 0LL) )
  {
    BattleResultItemComponent__setShowItemConf(this, item->fields.objectId, v7);
  }
  else if ( Gift__IsCommandCode(type, 0LL) )
  {
    BattleResultItemComponent__setShowCommandCodeConf(this, item->fields.userSvtId, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__setShowItemConf(
        BattleResultItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_435218A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9879/*"OPEN_ITEM"*/);
    byte_435218A = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_B7076C(0LL, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9879/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4352186 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_B70694(&StringLiteral_9887/*"OPEN_SERVANT"*/);
    byte_4352186 = 1;
  }
  v4->fields.tmp_userSvtId = 0LL;
  v4->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0LL)
      ? (v4->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v4->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v4->fields.myFsm) == 0LL) )
  {
    sub_B7076C(this, dropItem);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9887/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultItemComponent__showCommandCodeDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v6; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22

  if ( (byte_435218F & 1) == 0 )
  {
    sub_B70694(&Method_BattleResultItemComponent_commandCodeDialogCallBack__);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435218F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_21C0668 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v6 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v6) )
  {
    sub_B7076C(Instance, v4);
  }
  CommonUI__OpenServantStatusDialog_17917372(v6, 0, (UserCommandCodeEntity_o *)Entity, v7, 0LL, 0LL);
}


void __fastcall BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v7; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x22

  if ( (byte_435218B & 1) == 0 )
  {
    sub_B70694(&Method_BattleResultItemComponent_itemDialogCallBack__);
    sub_B70694(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435218B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v7 = (ItemEntity_o *)Entity,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B70764(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B7076C(Instance, v4);
  }
  ItemDetailInfoComponent__Open(itemDialog, v7, v8, 50, 0LL);
}


void __fastcall BattleResultItemComponent__showServantDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  bool v3; // cc
  CommonUI_o *Instance; // x20
  int64_t tmp_userSvtId; // x21
  ServantStatusDialog_EndDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v10; // x22

  if ( (byte_4352187 & 1) == 0 )
  {
    sub_B70694(&Method_BattleResultItemComponent_DialogCallBack__);
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352187 = 1;
  }
  v3 = this->fields.tmp_userSvtId < 1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v3 )
  {
    tmp_userSvtId = this->fields.tmp_userSvtId;
    v6 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v6,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_17913800(Instance, 0, tmp_userSvtId, v6, 0LL, 0LL);
      return;
    }
LABEL_8:
    sub_B7076C(v7, v8);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_17918128(Instance, 0, tmp_svtId, v10, 0LL);
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57___ctor(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57__MoveNext(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *v2; // x19
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemObjectList; // x0
  struct System_Collections_Generic_List_Enumerator_GameObject__o *p__7__wrap1; // x21
  __int128 v8; // q0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *current; // x0
  BattleDropItemComponent_o *Component_srcLineSprite; // x0
  __int64 v18; // x1
  struct BattleDropItem_o *itemData; // x8
  System_Collections_IEnumerator_o *v20; // x1
  UnityEngine_Coroutine_o *started; // x0
  __int64 v22; // x1
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  bool result; // w0
  __int64 v32; // x0
  __int64 v33; // x1
  BattleResultComponent_o *v34; // x0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+18h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_434F813 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *)sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_434F813 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &v2->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_B7076C(this, method);
    itemWindow = _4__this->fields.itemWindow;
    if ( !itemWindow )
      sub_B7076C(this, method);
    itemObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemWindow->fields.itemObjectList;
    if ( !itemObjectList )
      sub_B7076C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      itemObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    v8 = *(_OWORD *)&v35.fields.list;
    v2->fields.__7__wrap1.fields.current = (struct UnityEngine_GameObject_o *)v35.fields.current;
    *(_OWORD *)&v2->fields.__7__wrap1.fields.list = v8;
    sub_B70630((BattleServantConfConponent_o *)&v2->fields.__7__wrap1, 0LL, v9, v10, v11, v12, v13, v14);
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v2->fields.__7__wrap1.fields.current;
    if ( !current )
      sub_B7076C(0LL, v15);
    Component_srcLineSprite = (BattleDropItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             current,
                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_srcLineSprite )
      sub_B7076C(0LL, v18);
    itemData = Component_srcLineSprite->fields.itemData;
    if ( !itemData )
      sub_B7076C(Component_srcLineSprite, v18);
    if ( itemData->fields.isAddReward )
    {
      if ( !_4__this )
        sub_B7076C(Component_srcLineSprite, v18);
      v20 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              _4__this,
              Component_srcLineSprite->fields.itemIconEffectObj,
              Component_srcLineSprite,
              0LL);
      started = UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)_4__this, v20, 0LL);
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        sub_B7076C(started, v22);
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v24 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v24, 0.01, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v24;
        sub_B70630(
          (BattleServantConfConponent_o *)&v2->fields.__2__current,
          (System_Int32_array **)v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        result = 1;
        v2->fields.__1__state = 1;
        return result;
      }
    }
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57____m__Finally1(v2, v15);
  p__7__wrap1->fields.list = 0LL;
  *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
  p__7__wrap1->fields.current = 0LL;
  if ( !_4__this )
    sub_B7076C(v32, v33);
  v34 = _4__this->fields.parentComp;
  if ( !v34 )
    sub_B7076C(0LL, v33);
  BattleResultComponent__QpFix(v34, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57____m__Finally1(this, method);
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57____m__Finally1(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  if ( (byte_434F814 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    byte_434F814 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__56___ctor(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__56__MoveNext(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *v8; // x19
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v19; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v28; // x0
  System_Random_o *v29; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass56_0_o *_8__1; // x8
  Il2CppObject **p__8__1; // x25
  il2cpp_array_size_t v33; // w22
  System_String_o *v34; // x0
  struct System_String_array *v35; // x8
  System_String_o *v36; // x21
  System_String_o *v37; // x22
  SeManager_c *v38; // x0
  Il2CppObject *v39; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v41; // x23
  struct BattleResultComponent_o *v42; // x8
  BattleServantConfConponent_o *v43; // x19
  __int64 v44; // x0

  v8 = this;
  if ( (byte_434F815 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&System_Random_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__);
    sub_B70694(&BattleResultItemComponent___c__DisplayClass56_0_TypeInfo);
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)sub_B70694(&StringLiteral_12916/*"Servants_"*/);
    byte_434F815 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_32;
    }
    else
    {
      if ( _1__state )
        return 0;
      v8->fields.__1__state = -1;
      v11 = (Il2CppObject *)sub_B70764(BattleResultItemComponent___c__DisplayClass56_0_TypeInfo);
      System_Object___ctor(v11, 0LL);
      v8->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass56_0_o *)v11;
      sub_B70630(
        (BattleServantConfConponent_o *)&v8->fields.__8__1,
        (System_Int32_array **)v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      if ( !_4__this )
        goto LABEL_32;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_32;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v19 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v19, 0.3, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v19;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B70630(p__2__current, (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
    }
    v28 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)_4__this, v28, 0LL);
    v29 = (System_Random_o *)sub_B70764(System_Random_TypeInfo);
    System_Random___ctor(v29, 0LL);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_32;
    if ( !v29 )
      goto LABEL_32;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))v29->klass->vtable._6_Next.method)(
                                                                      v29,
                                                                      0LL,
                                                                      voiceIds->max_length,
                                                                      v29->klass->vtable._7_Next.methodPtr);
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    _8__1 = v8->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_32;
    v33 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v34 = System_Int32__ToString((int)_4__this + 264, 0LL);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)System_String__Concat_44758168(
                                                                      (System_String_o *)StringLiteral_12916/*"Servants_"*/,
                                                                      v34,
                                                                      0LL);
    v35 = _4__this->fields.voiceIds;
    if ( !v35 )
      goto LABEL_32;
    if ( v33 >= v35->max_length )
    {
      v44 = sub_B70798(this);
      sub_B70738(v44, 0LL);
    }
    v36 = (System_String_o *)this;
    v37 = v35->m_Items[v33];
    v38 = SeManager_TypeInfo;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v38 = SeManager_TypeInfo;
    }
    v39 = *p__8__1;
    DEFAULT_VOLUME = v38->static_fields->DEFAULT_VOLUME;
    v41 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      v39,
      Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)SoundManager__playVoice_23183232(
                                                                      v36,
                                                                      v37,
                                                                      DEFAULT_VOLUME,
                                                                      v41,
                                                                      0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_32;
  if ( LOBYTE((*p__8__1)[1].klass) )
  {
LABEL_29:
    ActionExtensions__Call(v8->fields.callback, 0LL);
    return 0;
  }
  if ( !_4__this || (v42 = _4__this->fields.parentComp) == 0LL )
LABEL_32:
    sub_B7076C(this, method);
  if ( v42->fields.isAddRewardEffectSkip )
    goto LABEL_29;
  v8->fields.__2__current = 0LL;
  v43 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B70630(v43, 0LL, v2, v3, v4, v5, v6, v7);
  *(_DWORD *)&v43[-1].fields.isOpenAfter = 2;
  return 1;
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__56__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__PlayVoiceCoroutine_d__56__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__56_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__56__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__56__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleResultItemComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F811 & 1) == 0 )
  {
    sub_B70694(&BattleResultItemComponent___c_TypeInfo);
    byte_434F811 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattleResultItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleResultItemComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleResultItemComponent___c___ctor(BattleResultItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_0(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_27751796(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_27752192(s->fields.type, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_27751796(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_27752192(s->fields.type, 0LL);
}


void __fastcall BattleResultItemComponent___c__DisplayClass48_0___ctor(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultItemComponent___c__DisplayClass48_0___setResultData_b__1(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        DropUpInfo_o *e,
        const MethodInfo *method)
{
  BattleResultItemComponent___c__DisplayClass48_0_o *v4; // x20
  struct System_Collections_Generic_List_BattleDropItem__o *list; // x21
  __int64 i; // x20
  int32_t itemId; // w19
  BattleDropItem_o *v8; // x8

  v4 = this;
  if ( (byte_434F812 & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_434F812 = 1;
  }
  if ( !e )
    goto LABEL_9;
  list = v4->fields.list;
  if ( !list )
    goto LABEL_9;
  i = v4->fields.i;
  itemId = e->fields.itemId;
  if ( list->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v8 = list->fields._items->m_Items[i];
  if ( !v8 )
LABEL_9:
    sub_B7076C(this, e);
  return itemId == v8->fields.objectId;
}


void __fastcall BattleResultItemComponent___c__DisplayClass56_0___ctor(
        BattleResultItemComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultItemComponent___c__DisplayClass56_0___PlayVoiceCoroutine_b__0(
        BattleResultItemComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  this->fields.IsVoiceComp = 1;
}


void __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__58___ctor(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__58__MoveNext(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *v2; // x19
  int32_t _1__state; // w8
  UnityEngine_Object_o *itemIconEffectObj; // x20
  UnityEngine_Transform_o *v5; // x20
  int v6; // s0
  UnityEngine_WaitForSeconds_o *v9; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8

  v2 = this;
  if ( (byte_434F816 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_434F816 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    dropItem = v2->fields.dropItem;
    v2->fields.__1__state = -1;
    if ( !dropItem )
      goto LABEL_20;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)dropItem->fields.root;
    if ( !this )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    itemIconEffectObj = (UnityEngine_Object_o *)v2->fields.itemIconEffectObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(itemIconEffectObj, 0LL, 0LL) )
      goto LABEL_15;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)v2->fields.itemIconEffectObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)v2->fields.itemIconEffectObj;
      if ( this )
      {
        this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)this,
                                                                                   0LL);
        if ( v2->fields.dropItem )
        {
          v5 = (UnityEngine_Transform_o *)this;
          this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)v2->fields.dropItem,
                                                                                     0LL);
          if ( this )
          {
            *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
            if ( v5 )
            {
              UnityEngine_Transform__set_position(v5, *(UnityEngine_Vector3_o *)&v6, 0LL);
LABEL_15:
              v9 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v9, 0.2333, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v9;
              p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
              sub_B70630(p__2__current, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_20:
    sub_B7076C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__itemFlashAnimationCoroutine_d__58__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__58__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__58__System_IDisposable_Dispose(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  ;
}