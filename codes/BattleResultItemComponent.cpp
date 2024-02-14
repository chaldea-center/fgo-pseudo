void __fastcall BattleResultItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct BattleResultItemComponent_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleResultItemComponent_c *v21; // x8
  struct BattleResultItemComponent_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4214937 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultItemComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19508/*"img_bg_total_dp"*/, v8);
    sub_B0D8A4(&StringLiteral_2507/*"BATTLE_RESULT_GET_EP"*/, v9);
    sub_B0D8A4(&StringLiteral_19509/*"img_bg_total_ep"*/, v10);
    byte_4214937 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultItemComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_19509/*"img_bg_total_ep"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19509/*"img_bg_total_ep"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = BattleResultItemComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19508/*"img_bg_total_dp"*/;
  v13->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_19508/*"img_bg_total_dp"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->DP_SP_BASE_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = BattleResultItemComponent_TypeInfo;
  BattleResultItemComponent_TypeInfo->static_fields->EP_GET_POSY_NORMAL = -15.0;
  v21->static_fields->EP_GET_POSY_BOOSTED = 0.0;
  v21->static_fields->EP_GET_FONT_NORMAL = 26;
  v21->static_fields->EP_GET_FONT_BOOSTED = 19;
  v22 = v21->static_fields;
  v23 = (System_Int32_array **)StringLiteral_2507/*"BATTLE_RESULT_GET_EP"*/;
  v22->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_2507/*"BATTLE_RESULT_GET_EP"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v22->EP_GET_LOCALE_KEY, v23, v24, v25, v26, v27, v28, v29);
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

  if ( (byte_4214936 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Color___TypeInfo, method);
    byte_4214936 = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_B0D8BC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_B0D840(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Object_o *v7; // x20
  unsigned int v8; // w22
  unsigned int v9; // w23
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x21
  int32_t size; // w8
  __int64 v12; // x8
  UnityEngine_Object_o *v13; // x21
  struct UILabel_o *getEventPointLabel; // x8
  int v15; // w9
  float v16; // s1
  struct BattleViewItemlistComponent_o *v17; // x8
  unsigned int v18; // w22
  __int64 v19; // x20
  float v20; // s10
  struct System_Collections_Generic_List_GameObject__o *v21; // x24
  unsigned int v22; // w8
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_421491A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (BattleResultItemComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421491A = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_33;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    itemObjectList = itemWindow->fields.itemObjectList;
    if ( !itemObjectList )
      goto LABEL_33;
    size = itemObjectList->fields._size;
    if ( (int)v9 >= size )
      break;
    if ( size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v12 = (__int64)itemObjectList->fields._items + 8 * (int)v9;
    v13 = *(UnityEngine_Object_o **)(v12 + 32);
    if ( v13 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              *(UnityEngine_GameObject_o **)(v12 + 32),
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        getEventPointLabel = this->fields.getEventPointLabel;
        if ( getEventPointLabel )
        {
          v15 = BYTE5(getEventPointLabel->fields.mTrans);
          itemWindow = v2->fields.itemWindow;
          if ( !v15 )
            v8 = v9;
          if ( !v15 )
            v7 = v13;
          ++v9;
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
  this = (BattleResultItemComponent_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v7 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( this )
      {
        *(UnityEngine_Vector3_o *)(&v16 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        v17 = v2->fields.itemWindow;
        if ( v17 )
        {
          v18 = v8 + 1;
          v19 = 0LL;
          v20 = v16 + -113.57;
          do
          {
            v21 = v17->fields.itemObjectList;
            if ( !v21 )
              break;
            v22 = v21->fields._size;
            if ( (int)(v18 + v19) >= (int)v22 )
              return;
            if ( v22 <= v18 + (unsigned int)v19 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            this = (BattleResultItemComponent_o *)*((_QWORD *)&v21->fields._items->m_Items[v18] + v19);
            if ( !this )
              break;
            this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL);
            if ( !this )
              break;
            v23.fields.x = (float)((float)((int)v19 % 7) * 110.0) + -22.0;
            v23.fields.y = v20 + (float)((float)((int)v19 / 7) * -113.57);
            v23.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v23, 0LL);
            v17 = v2->fields.itemWindow;
            ++v19;
          }
          while ( v17 );
        }
      }
    }
LABEL_33:
    sub_B0D97C(this);
  }
}


void __fastcall BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_421492D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultItemComponent_endClose__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_421492D = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v8 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v6, v7),
        BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattleResultItemComponent_endClose__, 0LL),
        !window) )
  {
    sub_B0D97C(itemWindow);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v8,
    window->klass->vtable._13_CompClose.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__DialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_4214923 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flg);
    sub_B0D8A4(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4214923 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B0D97C(v10);
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
}


void __fastcall BattleResultItemComponent__EndCloseDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4214924 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, method);
    byte_4214924 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleResultItemComponent__GetEventPointUpperPriority(
        BattleResultItemComponent_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  BattleResultItemComponent_o *EntitiesFromEventPointUpperId; // x0
  const MethodInfo *v15; // x2
  int32_t v16; // w28
  int32_t key; // w26
  BattleResultItemComponent_o *v18; // x20
  const MethodInfo *v19; // x2
  _BOOL8 IsOpen; // x0
  struct BattleResultComponent_o *parentComp; // x8
  bool v22; // w21
  __int64 v23; // x25
  _DWORD *v24; // x8
  int32_t v25; // w22
  int32_t v26; // w24
  int64_t v27; // x23
  int32_t v28; // w22
  int32_t v29; // w24
  int64_t v30; // x23
  int32_t v31; // w20
  int v32; // w19
  __int64 v34; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4214933 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&eventPointUpperId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__,
      v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__,
      v8);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__, v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__,
      v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4214933 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0LL
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0LL),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v15)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v16 = 0;
  v36 = v35;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v36,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
    {
      v31 = 0;
      v32 = 1;
      goto LABEL_31;
    }
    if ( !v36.fields.current.fields.value )
      sub_B0D97C(0LL);
    key = (int32_t)v36.fields.current.fields.key;
    v18 = (BattleResultItemComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v36.fields.current.fields.value,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v18, (EventPointUpperReleaseEntity_array *)v18, v19);
    if ( !v18 )
      sub_B0D97C(IsOpen);
    parentComp = v18->fields.parentComp;
    if ( (int)parentComp >= 1 )
      break;
LABEL_26:
    if ( v16 < key )
      v16 = key;
  }
  v22 = IsOpen;
  v23 = 0LL;
  while ( 1 )
  {
    if ( v23 >= (unsigned __int64)(unsigned int)parentComp )
    {
      v34 = sub_B0D9A8(IsOpen);
      sub_B0D948(v34, 0LL);
    }
    v24 = (_DWORD *)*((_QWORD *)&v18->fields.myFsm + v23);
    if ( !v22 )
      break;
    if ( !v24 )
      sub_B0D97C(IsOpen);
    v26 = v24[9];
    v25 = v24[10];
    v27 = (int)v24[11];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v26, v25, v27, 0, 0LL);
    if ( !IsOpen )
      goto LABEL_30;
LABEL_25:
    LODWORD(parentComp) = v18->fields.parentComp;
    if ( ++v23 >= (int)parentComp )
      goto LABEL_26;
  }
  if ( !v24 )
    sub_B0D97C(IsOpen);
  v29 = v24[9];
  v28 = v24[10];
  v30 = (int)v24[11];
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(v29, v28, v30, 0, 0LL);
  if ( IsOpen )
    goto LABEL_26;
  if ( v23 < (((__int64)v18->fields.parentComp << 32) - 0x100000000LL) >> 32 )
    goto LABEL_25;
LABEL_30:
  v32 = 3;
  v31 = v16;
LABEL_31:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v36,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  if ( (unsigned int)(v32 + 1) >> 2 )
    return v31;
  return v16;
}


System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *__fastcall BattleResultItemComponent__GetEventPointUpperReleases(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x20
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  signed int max_length; // w8
  unsigned int v14; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x21
  int32_t targetId; // w22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  __int64 v21; // x0

  if ( (byte_4214934 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__,
      entities);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v10);
    byte_4214934 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo,
                                                                                                   entities,
                                                                                                   method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_14;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v21 = sub_B0D9A8(Item);
        sub_B0D948(v21, 0LL);
      }
      v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)entities->m_Items[v14];
      if ( !v15 || !v11 )
        break;
      targetId = v15->fields.targetId;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v11,
              targetId,
              (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v17, v18);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v19,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v11,
          targetId,
          (WarBoardAIRoute_RouteData_o *)v19,
          (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v11,
               targetId,
               (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item,
        v15,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
      max_length = entities->max_length;
      if ( (int)++v14 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v11;
    }
LABEL_14:
    sub_B0D97C(Item);
  }
  return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v11;
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

  if ( (byte_4214935 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&priority);
    byte_4214935 = 1;
  }
  if ( !entities )
LABEL_16:
    sub_B0D97C(this);
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
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
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
    sub_B0D97C(this);
  max_length = entities->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  v5 = -1;
  while ( 1 )
  {
    if ( v4 >= (unsigned int)max_length )
    {
      v9 = sub_B0D9A8(this);
      sub_B0D948(v9, 0LL);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct BattleResultComponent_o *parentComp; // x8
  BattleResultItemComponent_o *v10; // x21
  struct PlayMakerFSM_o *myFsm; // x8
  BattleResultItemComponent_o *EventPointUpperPriority; // x0
  const MethodInfo *v13; // x3
  __int64 v14; // x0

  v6 = this;
  if ( (byte_4214932 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointUpperMaster___, eventDetailEntity);
    this = (BattleResultItemComponent_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4214932 = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0LL) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)EventPointUpperMaster__GetEntitiesFromEventId(
                                          (EventPointUpperMaster_o *)this,
                                          eventDetailEntity->fields.eventId,
                                          0LL);
  if ( !this )
    return (char)this;
  parentComp = this->fields.parentComp;
  v10 = this;
  if ( !parentComp )
  {
LABEL_12:
    LOBYTE(this) = 0;
    return (char)this;
  }
  if ( !(_DWORD)parentComp )
  {
    v14 = sub_B0D9A8(this);
    sub_B0D948(v14, 0LL);
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
LABEL_14:
    sub_B0D97C(this);
  EventPointUpperPriority = (BattleResultItemComponent_o *)BattleResultItemComponent__GetEventPointUpperPriority(
                                                             v6,
                                                             *((_DWORD *)&myFsm->fields.UnityEngine_MonoBehaviour_Fields
                                                             + 1),
                                                             v8);
  LOBYTE(this) = BattleResultItemComponent__GetEventPointUpperValue(
                   EventPointUpperPriority,
                   (int32_t)EventPointUpperPriority,
                   (EventPointUpperEntity_array *)v10,
                   v13) <= userEventPoint;
  return (char)this;
}


void __fastcall BattleResultItemComponent__Init(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleWindowComponent_o *window; // x0
  System_String_o *v5; // x20

  if ( (byte_4214914 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_2500/*"BATTLE_RESULTITEM_TITLECONF"*/, v3);
    byte_4214914 = 1;
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2500/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_15;
  v5 = (System_String_o *)window;
  if ( !System_String__Equals_43837244((System_String_o *)window, (System_String_o *)StringLiteral_2500/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_15;
    UILabel__set_text((UILabel_o *)window, v5, 0LL);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_15:
    sub_B0D97C(window);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
}


void __fastcall BattleResultItemComponent__OnClickSwitchShowMode(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *showModeChangeButton; // x0
  __int64 *v7; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  __int64 v14; // x0
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4214930 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17016/*"btn_bg_20"*/, v3);
    sub_B0D8A4(&StringLiteral_17017/*"btn_bg_21"*/, v4);
    byte_4214930 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v7 = &StringLiteral_17016/*"btn_bg_20"*/) : (v7 = &StringLiteral_17017/*"btn_bg_21"*/),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v7, 0LL),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(showModeChangeButton);
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
    v14 = sub_B0D9A8(showModeChangeButton);
    sub_B0D948(v14, 0LL);
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
  v15.fields.b = *p_a;
  v15.fields.g = *p_b;
  v15.fields.r = *p_g;
  v15.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v15, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *touchNextRoot; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  BattleWindowComponent_EndCall_o *v10; // x21
  const MethodInfo *v11; // x1

  if ( (byte_4214915 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultItemComponent_endOpen__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4);
    sub_B0D8A4(&StringLiteral_5508/*"END_OPEN"*/, v5);
    byte_4214915 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      touchNextRoot,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0LL),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5508/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v8, v9),
        BattleWindowComponent_EndCall___ctor(v10, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0LL),
        !window) )
  {
LABEL_9:
    sub_B0D97C(touchNextRoot);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v10,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultItemComponent__setCondensedScale(this, v11);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421491F & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo, method);
    byte_421491F = 1;
  }
  v4 = sub_B0D974(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo, method, v2);
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57___ctor(
    (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_421491E & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo, callback);
    byte_421491E = 1;
  }
  v5 = sub_B0D974(BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo, callback, method);
  BattleResultItemComponent__PlayVoiceCoroutine_d__56___ctor(
    (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 48) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 48), (System_Int32_array **)callback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleResultItemComponent__SetAddItemIconEffect(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v15; // w21
  int v16; // w22
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x20
  struct BattleViewItemlistComponent_o *v20; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v21; // x20
  signed __int64 v22; // x24
  signed __int64 v23; // x27
  struct System_Collections_Generic_List_GameObject__o *v24; // x21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v26; // x21
  UnityEngine_GameObject_o *v27; // x22
  UnityEngine_Transform_o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-58h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_421491C & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_18211/*"ef_additem"*/, v10);
    this = (BattleResultItemComponent_o *)sub_B0D8A4(&StringLiteral_5832/*"Effect/BattleResult/{0}/{1}"*/, v11);
    byte_421491C = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  v15 = 7 * (size / 7);
  if ( size == v15 )
    v16 = -21;
  else
    v16 = -14;
  g_eventId = v2->fields.g_eventId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = v2->fields.animationSvtId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v19 = System_String__Format_43845440((System_String_o *)StringLiteral_5832/*"Effect/BattleResult/{0}/{1}"*/, v17, v18, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v19, 0LL);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_18211/*"ef_additem"*/,
                                                (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440),
        (v20 = v2->fields.itemWindow) == 0LL) )
  {
LABEL_30:
    sub_B0D97C(this);
  }
  v21 = (UnityEngine_UI_Dropdown_DropdownItem_o *)this;
  v22 = 0LL;
  v23 = v15 + v16;
  while ( 1 )
  {
    v24 = v20->fields.itemObjectList;
    if ( !v24 )
      goto LABEL_30;
    if ( v22 >= v24->fields._size )
      break;
    if ( v22 >= v23 )
    {
      if ( v22 >= (unsigned __int64)(unsigned int)v24->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (BattleResultItemComponent_o *)v24->fields._items->m_Items[v22];
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v26 = this;
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
                                                v21,
                                                (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v27 = (UnityEngine_GameObject_o *)this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
        if ( !this )
          goto LABEL_30;
        v28 = (UnityEngine_Transform_o *)this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v2->fields.effectRoot, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        UnityEngine_Transform__set_localPosition(v28, zero, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        UnityEngine_Transform__set_localScale(v28, one, 0LL);
        UnityEngine_GameObject__SetActive(v27, 0, 0LL);
        v26->fields.eventPointMaxSprite = (struct UISprite_o *)v27;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v26->fields.eventPointMaxSprite,
          (System_Int32_array **)v27,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
    }
    v20 = v2->fields.itemWindow;
    ++v22;
    if ( !v20 )
      goto LABEL_30;
  }
}


void __fastcall BattleResultItemComponent__SetAddItemSvtAnimation(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  AssetData_o *AssetStorage; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v14; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-18h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-14h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421491B & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&int_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_18259/*"ef_presenter"*/, v7);
    sub_B0D8A4(&StringLiteral_5832/*"Effect/BattleResult/{0}/{1}"*/, v8);
    byte_421491B = 1;
  }
  g_eventId = this->fields.g_eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = this->fields.animationSvtId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v11 = System_String__Format_43845440((System_String_o *)StringLiteral_5832/*"Effect/BattleResult/{0}/{1}"*/, v9, v10, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v11, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               AssetStorage,
                                                                               (System_String_o *)StringLiteral_18259/*"ef_presenter"*/,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  Object_WarBoardWaitTimeSetting,
                                  (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v14 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AssetStorage,
                                        0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (v16 = (UnityEngine_Transform_o *)AssetStorage) == 0LL )
  {
LABEL_14:
    sub_B0D97C(AssetStorage);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v16, zero, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v16, one, 0LL);
  UnityEngine_GameObject__SetActive(v14, 0, 0LL);
  this->fields.addItemSvtAnimationObj = v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.addItemSvtAnimationObj,
    (System_Int32_array **)v14,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


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
    sub_B0D97C(nomalRootObj);
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_Component_o *groupRootObj; // x0
  UILabel_o *getQpLabel; // x27
  Il2CppObject *v25; // x0
  int32_t qp; // w20
  int32_t QpMax; // w8
  int v28; // w26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v30; // x0
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  int32_t v32; // w5
  const MethodInfo *v33; // [xsp+0h] [xbp-70h]
  int v35; // [xsp+18h] [xbp-58h] BYREF
  int32_t v36; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4214918 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&int_TypeInfo, v19);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v21);
    sub_B0D8A4(&StringLiteral_698/*"+ {0:#,0}"*/, v22);
    byte_4214918 = 1;
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
  v36 = countQp;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_698/*"+ {0:#,0}"*/, v25, 0LL);
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
    v28 = oldGame->fields.qp + countQp;
    if ( v28 < 0 )
      goto LABEL_37;
    if ( (groupRootObj[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(groupRootObj[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(groupRootObj);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v28 > QpMax )
    {
LABEL_37:
      if ( (groupRootObj[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj);
        groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      v28 = *(_DWORD *)(*(_QWORD *)&groupRootObj[7].fields.m_CachedPtr + 4LL);
    }
  }
  else
  {
    v28 = userGame->fields.qp - (firstClearRewardQp + conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v35 = v28;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v30, 0LL);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0LL),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0LL) )
  {
LABEL_34:
    sub_B0D97C(groupRootObj);
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
      v32,
      countQp,
      isNotDisplayEventPoint,
      v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__StartPresenterAnimation(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *addItemSvtAnimationObj; // x0
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x21
  int32_t size; // w8
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s10
  float v14; // s8
  float v15; // s9
  const MethodInfo *v16; // x2
  struct BattleViewItemlistComponent_o *v17; // x8
  struct System_Collections_Generic_List_GameObject__o *v18; // x8
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s8
  float v23; // s10
  float v24; // s9
  System_Collections_IEnumerator_o *v25; // x1
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421491D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, callback);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5);
    byte_421491D = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  addItemSvtAnimationObj = itemObjectList->fields._items->m_Items[size - 1];
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position(
                                     (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                     0LL);
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  v13 = v10;
  v14 = v11;
  v15 = v12;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  v26.fields.y = v14;
  v26.fields.z = v15;
  v26.fields.x = v13 + 0.05;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, v26, 0LL);
  v17 = this->fields.itemWindow;
  if ( !v17 )
    goto LABEL_21;
  v18 = v17->fields.itemObjectList;
  if ( !v18 )
    goto LABEL_21;
  if ( v18->fields._size >= 8 )
  {
    addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
    if ( addItemSvtAnimationObj )
    {
      addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             addItemSvtAnimationObj,
                                                             0LL);
      if ( addItemSvtAnimationObj )
      {
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                           0LL);
        addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
        if ( addItemSvtAnimationObj )
        {
          v22 = v19;
          v23 = v20;
          v24 = v21;
          addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 addItemSvtAnimationObj,
                                                                 0LL);
          if ( addItemSvtAnimationObj )
          {
            v27.fields.y = v23 + 9.0;
            v27.fields.x = v22;
            v27.fields.z = v24;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, v27, 0LL);
            goto LABEL_20;
          }
        }
      }
    }
LABEL_21:
    sub_B0D97C(addItemSvtAnimationObj);
  }
LABEL_20:
  v25 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__commandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_421492B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flg);
    sub_B0D8A4(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_421492B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B0D97C(v10);
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
}


void __fastcall BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_421492E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_421492E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B0D97C(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421492C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, method);
    byte_421492C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endItemDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4214928 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, method);
    byte_4214928 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4214916 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, method);
    byte_4214916 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9321/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_B0D97C(myFsm);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0LL);
}


BattleDropItem_o *__fastcall BattleResultItemComponent__getNewDrop(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *newDroplist; // x0
  BattleDropItem_o *v6; // x19

  if ( (byte_421492F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v4);
    byte_421492F = 1;
  }
  newDroplist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  v6 = (BattleDropItem_o *)newDroplist->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    newDroplist,
    0,
    (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__itemDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4214927 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flg);
    sub_B0D8A4(&Method_BattleResultItemComponent_endItemDialogCallBack__, v4);
    sub_B0D8A4(&Method_BattleResultItemComponent_itemDialogCallBack__, v5);
    byte_4214927 = 1;
  }
  v6 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B0D8AC(Method_BattleResultItemComponent_itemDialogCallBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_B0D888(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  itemDialog = this->fields.itemDialog;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_B0D97C(v12);
  ItemDetailInfoComponent__Close_26849360(itemDialog, v11, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine(
        BattleResultItemComponent_o *this,
        UnityEngine_GameObject_o *itemIconEffectObj,
        BattleDropItemComponent_o *dropItem,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
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

  if ( (byte_4214920 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo, itemIconEffectObj);
    byte_4214920 = 1;
  }
  v6 = sub_B0D974(BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo, itemIconEffectObj, dropItem);
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__58___ctor(
    (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B0D97C(v7);
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v6 + 32),
    (System_Int32_array **)itemIconEffectObj,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_B0D840((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)dropItem, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleResultItemComponent__setCondensedScale(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *getTitleLabel; // x20
  UILabel_o *getBoostLabel; // x0

  if ( (byte_4214931 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultItemComponent_TypeInfo, method);
    byte_4214931 = 1;
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
    sub_B0D97C(getBoostLabel);
  }
  UILabel__SetCondensedScale(
    getBoostLabel,
    BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 Instance; // x0
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v36; // x20
  __int64 v37; // x8
  UserEventPointEntity_o *v38; // x8
  UserEventPointEntity_o *v39; // x8
  int64_t v40; // x25
  __int64 v41; // x26
  const MethodInfo *v42; // x3
  UserEventPointEntity_o *v43; // x8
  int64_t v44; // x22
  const MethodInfo *v45; // x3
  UserEventPointEntity_o *v46; // x8
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserEventRaidMaster_o *v48; // x21
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  int64_t TotalDamagePoint; // x21
  BalanceConfig_c *v51; // x8
  int64_t UserRaidDamagePointMax; // x23
  int64_t v53; // x21
  int64_t v54; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  Il2CppObject *v56; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  Il2CppObject *v58; // x0
  BattleResultItemComponent_c *v59; // x0
  System_String_o *DP_SP_BASE_NAME; // x21
  System_String_o *v61; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  UILabel_o *v63; // x21
  BattleResultItemComponent_c *v64; // x0
  UISprite_o *eventDamageIconSprite; // x21
  int32_t v66; // w20
  UILabel_o *getEventPointLabel; // x23
  Il2CppObject *v68; // x0
  UILabel_o *nowEventPointLabel; // x23
  Il2CppObject *v70; // x0
  UISprite_o *eventIconSprite; // x23
  int32_t pointImageId; // w24
  UILabel_o *getTitleLabel; // x23
  int32_t *v74; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultItemComponent_c *v76; // x8
  UnityEngine_GameObject_o *v77; // x23
  float *p_EP_GET_POSY_NORMAL; // x8
  BattleResultItemComponent_c *v79; // x0
  System_String_o *EP_GET_LOCALE_KEY; // x23
  System_String_o *v81; // x0
  System_String_o *v82; // x23
  BattleResultItemComponent_c *v83; // x0
  UILabel_o *v84; // x24
  UILabel_o *getBoostLabel; // x23
  System_String_o *v86; // x24
  Il2CppObject *v87; // x0
  System_String_o *v88; // x1
  BattleResultItemComponent_c *v89; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v91; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  UILabel_o *v93; // x21
  BattleResultItemComponent_c *v94; // x0
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  UnityEngine_GameObject_o *v96; // x21
  const MethodInfo *v97; // x3
  __int64 v98; // x0
  int64_t v99; // [xsp+8h] [xbp-68h] BYREF
  __int64 v100; // [xsp+10h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_4214919 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v16);
    sub_B0D8A4(&BattleResultItemComponent_TypeInfo, v17);
    sub_B0D8A4(&Method_BetterList_string__Contains__, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v21);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v22);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v23);
    sub_B0D8A4(&long_TypeInfo, v24);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v25);
    sub_B0D8A4(&System_Math_TypeInfo, v26);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v27);
    sub_B0D8A4(&float_TypeInfo, v28);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B0D8A4(&StringLiteral_2508/*"BATTLE_RESULT_GET_EP_RATE"*/, v30);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v31);
    sub_B0D8A4(&StringLiteral_1/*""*/, v32);
    sub_B0D8A4(&StringLiteral_698/*"+ {0:#,0}"*/, v33);
    byte_4214919 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_134;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         eventId,
         (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_134;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_134;
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      eventId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      v36 = Entity;
      Instance = EventDetailEntity__IsEventPoint(Entity, 0LL);
      if ( (Instance & 1) != 0 && !isNotDisplayEventPoint )
      {
        if ( oldUsrPoint && (v37 = *(_QWORD *)&oldUsrPoint->max_length) != 0 )
        {
          if ( !(_DWORD)v37 )
            goto LABEL_135;
          v38 = oldUsrPoint->m_Items[0];
          if ( !v38 )
            goto LABEL_134;
          if ( !v38->fields.groupId )
          {
            Instance = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
            if ( !oldUsrPoint->max_length )
              goto LABEL_135;
            v39 = oldUsrPoint->m_Items[0];
            if ( !v39 )
              goto LABEL_134;
            v40 = Instance;
            v41 = Instance - v39->fields.value;
            if ( Instance > 0 || v41 >= 1 )
            {
              Instance = EventDetailEntity__IsEventPointByQp(v36, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !oldUsrPoint->max_length )
                  goto LABEL_135;
                v43 = oldUsrPoint->m_Items[0];
                if ( !v43 )
                  goto LABEL_134;
                v44 = v43->fields.value + countQp;
                if ( BattleResultItemComponent__GetIsShowEventPointMax(this, v36, v40, v42) )
                {
                  Instance = BattleResultItemComponent__GetIsShowEventPointMax(this, v36, v44, v45);
                  if ( (Instance & 1) != 0 )
                    v44 = v40;
                  if ( oldUsrPoint->max_length )
                  {
                    v46 = oldUsrPoint->m_Items[0];
                    if ( !v46 )
                      goto LABEL_134;
                    v41 = v44 - v46->fields.value;
                    goto LABEL_65;
                  }
LABEL_135:
                  v98 = sub_B0D9A8(Instance);
                  sub_B0D948(v98, 0LL);
                }
                v41 = countQp;
              }
              else
              {
                v44 = v40;
              }
LABEL_65:
              getEventPointLabel = this->fields.getEventPointLabel;
              v100 = v41;
              v68 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v100);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_698/*"+ {0:#,0}"*/, v68, 0LL);
              if ( !getEventPointLabel )
                goto LABEL_134;
              UILabel__set_text(getEventPointLabel, (System_String_o *)Instance, 0LL);
              nowEventPointLabel = this->fields.nowEventPointLabel;
              v99 = v44;
              v70 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v99);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v70, 0LL);
              if ( !nowEventPointLabel )
                goto LABEL_134;
              UILabel__set_text(nowEventPointLabel, (System_String_o *)Instance, 0LL);
              CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0LL);
              CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0LL);
              eventIconSprite = this->fields.eventIconSprite;
              pointImageId = v36->fields.pointImageId;
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
                v74 = (int32_t *)(*(_QWORD *)(Instance + 184) + 28LL);
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
              v74 = (int32_t *)(*(_QWORD *)(Instance + 184) + 24LL);
              if ( getTitleLabel )
              {
LABEL_80:
                UILabel__set_fontSize(getTitleLabel, *v74, 0LL);
                Instance = (__int64)this->fields.getTitleLabel;
                if ( !Instance )
                  goto LABEL_134;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                v76 = BattleResultItemComponent_TypeInfo;
                v77 = gameObject;
                if ( boostRate <= 0 )
                {
                  if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v76 = BattleResultItemComponent_TypeInfo;
                  }
                  p_EP_GET_POSY_NORMAL = &v76->static_fields->EP_GET_POSY_NORMAL;
                }
                else
                {
                  if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v76 = BattleResultItemComponent_TypeInfo;
                  }
                  p_EP_GET_POSY_NORMAL = &v76->static_fields->EP_GET_POSY_BOOSTED;
                }
                GameObjectExtensions__SetLocalPositionY(v77, *p_EP_GET_POSY_NORMAL, 0LL);
                v79 = BattleResultItemComponent_TypeInfo;
                if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  v79 = BattleResultItemComponent_TypeInfo;
                }
                EP_GET_LOCALE_KEY = v79->static_fields->EP_GET_LOCALE_KEY;
                v81 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                v82 = System_String__Concat_43849904(EP_GET_LOCALE_KEY, v81, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                if ( !LocalizationManager__ContainsKey(v82, 0LL) )
                {
                  v83 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v83 = BattleResultItemComponent_TypeInfo;
                  }
                  v82 = v83->static_fields->EP_GET_LOCALE_KEY;
                }
                v84 = this->fields.getTitleLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (__int64)LocalizationManager__Get(v82, 0LL);
                if ( !v84 )
                  goto LABEL_134;
                UILabel__set_text(v84, (System_String_o *)Instance, 0LL);
                getBoostLabel = this->fields.getBoostLabel;
                if ( boostRate <= 0 )
                {
                  v88 = (System_String_o *)StringLiteral_1/*""*/;
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
                  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_2508/*"BATTLE_RESULT_GET_EP_RATE"*/, 0LL);
                  *(float *)&v100 = (float)((float)boostRate / 1000.0) + 1.0;
                  v87 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v100);
                  Instance = (__int64)System_String__Format(v86, v87, 0LL);
                  v88 = (System_String_o *)Instance;
                  if ( !getBoostLabel )
                    goto LABEL_134;
                }
                UILabel__set_text(getBoostLabel, v88, 0LL);
                v89 = BattleResultItemComponent_TypeInfo;
                if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  v89 = BattleResultItemComponent_TypeInfo;
                }
                EP_SP_BASE_NAME = v89->static_fields->EP_SP_BASE_NAME;
                v91 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                Instance = (__int64)System_String__Concat_43849904(EP_SP_BASE_NAME, v91, 0LL);
                eventPointBgSprite = this->fields.eventPointBgSprite;
                if ( !eventPointBgSprite )
                  goto LABEL_134;
                v93 = (UILabel_o *)Instance;
                Instance = (__int64)eventPointBgSprite->fields.mAtlas;
                if ( !Instance )
                  goto LABEL_134;
                Instance = (__int64)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_134;
                if ( !BetterList_UILabel___Contains(
                        (BetterList_UILabel__o *)Instance,
                        v93,
                        (const MethodInfo_2D5776C *)Method_BetterList_string__Contains__) )
                {
                  v94 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v94 = BattleResultItemComponent_TypeInfo;
                  }
                  v93 = (UILabel_o *)v94->static_fields->EP_SP_BASE_NAME;
                }
                Instance = (__int64)this->fields.eventPointBgSprite;
                if ( !Instance )
                  goto LABEL_134;
                UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v93, 0LL);
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
                  v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  Instance = BattleResultItemComponent__GetIsShowEventPointMax(this, v36, v44, v97);
                  if ( !v96 )
                    goto LABEL_134;
                  UnityEngine_GameObject__SetActive(v96, Instance & 1, 0LL);
                }
                Instance = (__int64)this->fields.rootEventPoint;
                if ( !Instance )
                  goto LABEL_134;
                goto LABEL_132;
              }
LABEL_134:
              sub_B0D97C(Instance);
            }
          }
        }
        else if ( (addDamagePoint & 0x8000000000000000LL) == 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_134;
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          if ( MasterData_WarQuestSelectionMaster )
          {
            v48 = (UserEventRaidMaster_o *)MasterData_WarQuestSelectionMaster;
            rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0LL, 0LL) )
            {
              TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v48, eventId, 0LL);
              v51 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v51 = BalanceConfig_TypeInfo;
              }
              UserRaidDamagePointMax = v51->static_fields->UserRaidDamagePointMax;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              v53 = System_Math__Min_44560000(TotalDamagePoint, UserRaidDamagePointMax, 0LL);
              v54 = System_Math__Min_44560000(
                      addDamagePoint,
                      BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax,
                      0LL);
              getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
              v100 = v54;
              v56 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v100);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_698/*"+ {0:#,0}"*/, v56, 0LL);
              if ( getEventDamagePointLabel )
              {
                UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Instance, 0LL);
                nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
                v99 = v53;
                v58 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v99);
                Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v58, 0LL);
                if ( nowEventDamagePointLabel )
                {
                  UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Instance, 0LL);
                  v59 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v59 = BattleResultItemComponent_TypeInfo;
                  }
                  DP_SP_BASE_NAME = v59->static_fields->DP_SP_BASE_NAME;
                  v61 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                  Instance = (__int64)System_String__Concat_43849904(DP_SP_BASE_NAME, v61, 0LL);
                  eventDamageBGSprite = this->fields.eventDamageBGSprite;
                  if ( eventDamageBGSprite )
                  {
                    v63 = (UILabel_o *)Instance;
                    Instance = (__int64)eventDamageBGSprite->fields.mAtlas;
                    if ( Instance )
                    {
                      Instance = (__int64)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                      if ( Instance )
                      {
                        if ( !BetterList_UILabel___Contains(
                                (BetterList_UILabel__o *)Instance,
                                v63,
                                (const MethodInfo_2D5776C *)Method_BetterList_string__Contains__) )
                        {
                          v64 = BattleResultItemComponent_TypeInfo;
                          if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                            v64 = BattleResultItemComponent_TypeInfo;
                          }
                          v63 = (UILabel_o *)v64->static_fields->DP_SP_BASE_NAME;
                        }
                        Instance = (__int64)this->fields.eventDamageBGSprite;
                        if ( Instance )
                        {
                          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v63, 0LL);
                          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                          if ( Instance )
                          {
                            Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
                            if ( Instance )
                            {
                              EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                              eventDamageIconSprite = this->fields.eventDamageIconSprite;
                              v66 = v36->fields.pointImageId;
                              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !AtlasManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              }
                              AtlasManager__SetItem(eventDamageIconSprite, v66, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x26
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x19
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o **v61; // x28
  __int64 v62; // x1
  __int64 v63; // x2
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v64; // x21
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__48_0; // x19
  Il2CppObject *v67; // x27
  struct BattleResultItemComponent___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x19
  __int64 v85; // x8
  int v86; // w9
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v87; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v88; // x19
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x23
  __int64 v96; // x27
  __int64 v97; // x8
  struct BattleDropItem_array *gifts; // x8
  int max_length; // w12
  __int64 v100; // x9
  BattleDropItem_o *v101; // x12
  System_Int32_array **voiceIds; // x1
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  __int64 v109; // x1
  __int64 v110; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v111; // x21
  __int64 v112; // x1
  __int64 v113; // x2
  BattleResultItemComponent___c_c *v114; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v115; // x24
  struct BattleResultItemComponent___c_StaticFields *v116; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__48_2; // x19
  Il2CppObject *v118; // x25
  struct BattleResultItemComponent___c_StaticFields *v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  BattleViewItemlistComponent_o *itemWindow; // x19
  BattleDropItem_array *v127; // x21
  __int64 v128; // x1
  __int64 v129; // x2
  BattleDropItemComponent_ClickDelegate_o *v130; // x24
  const MethodInfo *v131; // x1
  const MethodInfo *v132; // x1
  const MethodInfo *v133; // x1
  UserGameEntity_o *SelfUserGame; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v135; // x28
  int32_t i; // w27
  BattleDropItem_o *current; // x19
  _BOOL8 isAutoSellItem; // x0
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w8
  _BOOL8 v141; // x0
  UserEventEntity_array *v142; // x2
  int64_t v143; // x4
  signed int v144; // w8
  signed int v145; // w19
  int32_t conquestRewardQp; // w21
  EventConquestInfo_o *v147; // x22
  int monitor; // w8
  __int64 v149; // x0
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-F8h]
  const MethodInfo *v151; // [xsp+18h] [xbp-E8h]
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v154; // [xsp+50h] [xbp-B0h]
  BattleResultItemComponent_o *v155; // [xsp+58h] [xbp-A8h]
  int32_t eventIda; // [xsp+64h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_T__o v157; // [xsp+68h] [xbp-98h] BYREF
  int v158; // [xsp+88h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v159; // [xsp+90h] [xbp-70h] BYREF

  if ( (byte_4214917 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Find_DropUpInfo___, drop);
    sub_B0D8A4(&BattleDropItem_TypeInfo, v23);
    sub_B0D8A4(&Method_BattleResultItemComponent_setShowConf__, v24);
    sub_B0D8A4(&BattleDropItemComponent_ClickDelegate_TypeInfo, v25);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v26);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__Insert__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v38);
    sub_B0D8A4(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v39);
    sub_B0D8A4(&Method_System_Predicate_BattleDropItem___ctor__, v40);
    sub_B0D8A4(&Method_System_Predicate_DropUpInfo___ctor__, v41);
    sub_B0D8A4(&System_Predicate_BattleDropItem__TypeInfo, v42);
    sub_B0D8A4(&System_Predicate_DropUpInfo__TypeInfo, v43);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44);
    sub_B0D8A4(&Method_BattleResultItemComponent___c__setResultData_b__48_0__, v45);
    sub_B0D8A4(&Method_BattleResultItemComponent___c__setResultData_b__48_2__, v46);
    sub_B0D8A4(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__, v47);
    sub_B0D8A4(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo, v48);
    sub_B0D8A4(&BattleResultItemComponent___c_TypeInfo, v49);
    byte_4214917 = 1;
  }
  memset(&v159, 0, sizeof(v159));
  v158 = 0;
  v50 = sub_B0D974(BattleResultItemComponent___c__DisplayClass48_0_TypeInfo, drop, *(_QWORD *)&getqp);
  BattleResultItemComponent___c__DisplayClass48_0___ctor((BattleResultItemComponent___c__DisplayClass48_0_o *)v50, 0LL);
  this->fields.g_eventId = eventId;
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleDropItem__TypeInfo,
                                                                                                  v51,
                                                                                                  v52);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v53,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v50 )
    goto LABEL_87;
  *(_QWORD *)(v50 + 16) = v53;
  v61 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o **)(v50 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v50 + 16), (System_Int32_array **)v53, v55, v56, v57, v58, v59, v60);
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)(v50 + 16);
  if ( !USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    goto LABEL_87;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  v64 = *v61;
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
    v67 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BattleDropItem__TypeInfo,
                                                                          v62,
                                                                          v63);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__48_0,
      v67,
      Method_BattleResultItemComponent___c__setResultData_b__48_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleDropItem___ctor__);
    v68 = BattleResultItemComponent___c_TypeInfo->static_fields;
    v68->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)_9__48_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v68->__9__48_0,
      (System_Int32_array **)_9__48_0,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  if ( !v64 )
    goto LABEL_87;
  eventIda = eventId;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          v64,
          (System_Predicate_T__o *)_9__48_0,
          (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.newDroplist,
    (System_Int32_array **)All,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  if ( getqp >= 1 )
  {
    v84 = sub_B0D974(BattleDropItem_TypeInfo, v82, v83);
    BattleDropItem___ctor((BattleDropItem_o *)v84, 0LL);
    if ( !v84 )
      goto LABEL_87;
    *(_QWORD *)(v84 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v84, getqp, originalGetQp, 0LL);
    USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*v61;
    if ( !*v61 )
      goto LABEL_87;
    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
      0,
      (XWeaponTrail_Element_o *)v84,
      (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  p_newDroplist = &this->fields.newDroplist;
  v154 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)(v50 + 16);
  v155 = this;
  if ( dropupinfos )
  {
    v85 = *(_QWORD *)(v50 + 16);
    *(_DWORD *)(v50 + 24) = 0;
    if ( !v85 )
      goto LABEL_87;
    v86 = 0;
    v87 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v50 + 32);
    while ( v86 < *(_DWORD *)(v85 + 24) )
    {
      v88 = *v87;
      if ( !*v87 )
      {
        v88 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_DropUpInfo__TypeInfo,
                                                                         v82,
                                                                         v83);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v88,
          (Il2CppObject *)v50,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_DropUpInfo___ctor__);
        *(_QWORD *)(v50 + 32) = v88;
        sub_B0D840((BattleServantConfConponent_o *)(v50 + 32), (System_Int32_array **)v88, v89, v90, v91, v92, v93, v94);
      }
      USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_((WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)dropupinfos, (System_Predicate_T__o *)v88, (const MethodInfo_1F687A8 *)Method_System_Array_Find_DropUpInfo___);
      if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
      {
        v95 = *(_QWORD *)(v50 + 16);
        if ( !v95 )
          goto LABEL_87;
        v96 = *(int *)(v50 + 24);
        if ( *(_DWORD *)(v95 + 24) <= (unsigned int)v96 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v97 = *(_QWORD *)(*(_QWORD *)(v95 + 16) + 8 * v96 + 32);
        if ( !v97 )
          goto LABEL_87;
        *(_DWORD *)(v97 + 72) = HIDWORD(USFGOPlayStandardCutInLimitCount_OverwriteCutIn->fields._items);
      }
      v85 = *(_QWORD *)(v50 + 16);
      v86 = *(_DWORD *)(v50 + 24) + 1;
      *(_DWORD *)(v50 + 24) = v86;
      if ( !v85 )
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
        v100 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v100 >= max_length )
          {
LABEL_89:
            v149 = sub_B0D9A8(USFGOPlayStandardCutInLimitCount_OverwriteCutIn);
            sub_B0D948(v149, 0LL);
          }
          v101 = gifts->m_Items[v100];
          if ( !v101 )
            break;
          v101->fields.isAddReward = 1;
          max_length = gifts->max_length;
          if ( (int)++v100 >= max_length )
            goto LABEL_39;
        }
LABEL_87:
        sub_B0D97C(USFGOPlayStandardCutInLimitCount_OverwriteCutIn);
      }
LABEL_39:
      USFGOPlayStandardCutInLimitCount_OverwriteCutIn = *v154;
      if ( !*v154 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      v155->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = (System_Int32_array **)rewardBonus->fields.voiceIds;
      v155->fields.voiceIds = (struct System_String_array *)voiceIds;
      sub_B0D840((BattleServantConfConponent_o *)&v155->fields.voiceIds, voiceIds, v103, v104, v105, v106, v107, v108);
      v111 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_BattleDropItem__TypeInfo, v109, v110);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v111,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v111 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v111,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      v114 = BattleResultItemComponent___c_TypeInfo;
      v115 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)*p_newDroplist;
      if ( (BYTE3(BattleResultItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
        v114 = BattleResultItemComponent___c_TypeInfo;
      }
      v116 = v114->static_fields;
      _9__48_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v116->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( (BYTE3(v114->vtable._0_Equals.methodPtr) & 4) != 0 && !v114->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v114);
          v116 = BattleResultItemComponent___c_TypeInfo->static_fields;
        }
        v118 = (Il2CppObject *)v116->__9;
        _9__48_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                              System_Predicate_BattleDropItem__TypeInfo,
                                                                              v112,
                                                                              v113);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__48_2,
          v118,
          Method_BattleResultItemComponent___c__setResultData_b__48_2__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleDropItem___ctor__);
        v119 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v119->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v119->__9__48_2,
          (System_Int32_array **)_9__48_2,
          v120,
          v121,
          v122,
          v123,
          v124,
          v125);
      }
      USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll((System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v111, (System_Predicate_T__o *)_9__48_2, (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !v115 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        v115,
        (System_Collections_Generic_IEnumerable_T__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = *v154;
  if ( !*v154 )
    goto LABEL_87;
  itemWindow = v155->fields.itemWindow;
  v127 = (BattleDropItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v130 = (BattleDropItemComponent_ClickDelegate_o *)sub_B0D974(
                                                      BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                      v128,
                                                      v129);
  BattleDropItemComponent_ClickDelegate___ctor(
    v130,
    (Il2CppObject *)v155,
    Method_BattleResultItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_87;
  BattleViewItemlistComponent__setListDataCustomColumn_23830428(
    itemWindow,
    v127,
    eventId,
    v130,
    v155->fields.itemColumnCount,
    0LL);
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v155->fields.itemWindow;
  if ( !USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    goto LABEL_87;
  BattleViewItemlistComponent__setHide(
    (BattleViewItemlistComponent_o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
    0LL);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(v155, v131);
    BattleResultItemComponent__SetAddItemSvtAnimation(v155, v132);
    BattleResultItemComponent__SetAddItemIconEffect(v155, v133);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    goto LABEL_87;
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v154 )
    goto LABEL_87;
  v135 = (DataMasterBase_WarMaster__WarEntity__int__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v157,
    *v154,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v159 = v157;
  for ( i = 0; ; i += current->fields.num * current->fields.sellQp )
  {
    v141 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v159,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v141 )
      break;
    current = (BattleDropItem_o *)v159.fields.current;
    if ( !v159.fields.current )
      sub_B0D97C(v141);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v159.fields.current, 0LL);
    if ( current->fields.type == 2 )
    {
      if ( !v135 )
        sub_B0D97C(isAutoSellItem);
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v135,
                 current->fields.objectId,
                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        sub_B0D97C(0LL);
      bannerId = Entity->fields.bannerId;
      if ( bannerId == 1 || bannerId == 16 )
        i += BattleDropItem__getTotalNum(current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v159,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( !eventConquestInfos )
    goto LABEL_87;
  v144 = eventConquestInfos->max_length;
  if ( v144 < 1 )
  {
    conquestRewardQp = 0;
    if ( !viewGroupIds )
      goto LABEL_87;
  }
  else
  {
    v145 = 0;
    conquestRewardQp = 0;
    do
    {
      if ( v145 >= (unsigned int)v144 )
        goto LABEL_89;
      v147 = eventConquestInfos->m_Items[v145];
      if ( !v147 )
        goto LABEL_87;
      if ( v147->fields.type == 2 )
      {
        if ( !v135 )
          goto LABEL_87;
        USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(v135, v147->fields.objectId, (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
        {
          monitor = (int)USFGOPlayStandardCutInLimitCount_OverwriteCutIn[1].monitor;
          if ( monitor == 16 || monitor == 1 )
            conquestRewardQp += v147->fields.getNum;
        }
      }
      v144 = eventConquestInfos->max_length;
      ++v145;
    }
    while ( v145 < v144 );
    if ( !viewGroupIds )
      goto LABEL_87;
  }
  if ( *(_QWORD *)&viewGroupIds->max_length )
    BattleResultItemComponent__SetGroupEventRoot(
      v155,
      eventIda,
      v142,
      oldUsrPoint,
      v143,
      SelfUserGame,
      i,
      viewGroupIds,
      conquestRewardQp,
      (const MethodInfo *)oldGamea);
  else
    BattleResultItemComponent__SetNomalRoot(
      v155,
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
      v151);
}


void __fastcall BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4214929 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9782/*"OPEN_COMMANDCODE"*/, commandCodeId);
    byte_4214929 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9782/*"OPEN_COMMANDCODE"*/, 0LL);
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
    sub_B0D97C(this);
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

  if ( (byte_4214925 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9788/*"OPEN_ITEM"*/, *(_QWORD *)&itemId);
    byte_4214925 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9788/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4214921 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_B0D8A4(&StringLiteral_9796/*"OPEN_SERVANT"*/, dropItem);
    byte_4214921 = 1;
  }
  v4->fields.tmp_userSvtId = 0LL;
  v4->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0LL)
      ? (v4->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v4->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v4->fields.myFsm) == 0LL) )
  {
    sub_B0D97C(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9796/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultItemComponent__showCommandCodeDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_421492A & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultItemComponent_commandCodeDialogCallBack__, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_421492A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_2669DFC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v10 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v11, v12),
        ServantStatusDialog_EndDelegate___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v10) )
  {
    sub_B0D97C(Instance);
  }
  CommonUI__OpenServantStatusDialog_17030008(v10, 0, (UserCommandCodeEntity_o *)Entity, v13, 0LL, 0LL);
}


void __fastcall BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  WarEntity_o *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x22

  if ( (byte_4214926 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultItemComponent_itemDialogCallBack__, method);
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4214926 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v10 = (ItemEntity_o *)Entity,
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v11,
                                                          v12),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B0D97C(Instance);
  }
  ItemDetailInfoComponent__Open(itemDialog, v10, v13, 50, 0LL);
}


void __fastcall BattleResultItemComponent__showServantDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  bool v5; // cc
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x20
  int64_t tmp_userSvtId; // x21
  ServantStatusDialog_EndDelegate_o *v10; // x22
  __int64 v11; // x0
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_4214922 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultItemComponent_DialogCallBack__, method);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4214922 = 1;
  }
  v5 = this->fields.tmp_userSvtId < 1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v5 )
  {
    tmp_userSvtId = this->fields.tmp_userSvtId;
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v6, v7);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_17026436(Instance, 0, tmp_userSvtId, v10, 0LL, 0LL);
      return;
    }
LABEL_8:
    sub_B0D97C(v11);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v13 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v6, v7);
  ServantStatusDialog_EndDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_17030764(Instance, 0, tmp_svtId, v13, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemObjectList; // x0
  struct System_Collections_Generic_List_Enumerator_GameObject__o *p__7__wrap1; // x21
  __int128 v12; // q0
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *current; // x0
  BattleDropItemComponent_o *Component_srcLineSprite; // x0
  struct BattleDropItem_o *itemData; // x8
  System_Collections_IEnumerator_o *v17; // x1
  UnityEngine_Coroutine_o *started; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v22; // x20
  bool result; // w0
  __int64 v24; // x0
  BattleResultComponent_o *v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+18h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4211EC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *)sub_B0D8A4(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v6);
    byte_4211EC5 = 1;
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
      sub_B0D97C(this);
    itemWindow = _4__this->fields.itemWindow;
    if ( !itemWindow )
      sub_B0D97C(this);
    itemObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemWindow->fields.itemObjectList;
    if ( !itemObjectList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      itemObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    v12 = *(_OWORD *)&v26.fields.list;
    v2->fields.__7__wrap1.fields.current = (struct UnityEngine_GameObject_o *)v26.fields.current;
    *(_OWORD *)&v2->fields.__7__wrap1.fields.list = v12;
    sub_B0D840(&v2->fields.__7__wrap1, 0LL);
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v2->fields.__7__wrap1.fields.current;
    if ( !current )
      sub_B0D97C(0LL);
    Component_srcLineSprite = (BattleDropItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             current,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_srcLineSprite )
      sub_B0D97C(0LL);
    itemData = Component_srcLineSprite->fields.itemData;
    if ( !itemData )
      sub_B0D97C(Component_srcLineSprite);
    if ( itemData->fields.isAddReward )
    {
      if ( !_4__this )
        sub_B0D97C(Component_srcLineSprite);
      v17 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              _4__this,
              Component_srcLineSprite->fields.itemIconEffectObj,
              Component_srcLineSprite,
              0LL);
      started = UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, v17, 0LL);
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        sub_B0D97C(started);
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v22 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v19, v20);
        UnityEngine_WaitForSeconds___ctor(v22, 0.01, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v22;
        sub_B0D840(&v2->fields.__2__current, v22);
        result = 1;
        v2->fields.__1__state = 1;
        return result;
      }
    }
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57____m__Finally1(v2, v13);
  p__7__wrap1->fields.list = 0LL;
  *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
  p__7__wrap1->fields.current = 0LL;
  if ( !_4__this )
    sub_B0D97C(v24);
  v25 = _4__this->fields.parentComp;
  if ( !v25 )
    sub_B0D97C(0LL);
  BattleResultComponent__QpFix(v25, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  if ( (byte_4211EC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    byte_4211EC6 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v2; // x2
  BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v17; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_IEnumerator_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_Random_o *v23; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass56_0_o *_8__1; // x8
  Il2CppObject **p__8__1; // x25
  il2cpp_array_size_t v27; // w22
  System_String_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  struct System_String_array *v31; // x8
  System_String_o *v32; // x21
  System_String_o *v33; // x22
  SeManager_c *v34; // x0
  Il2CppObject *v35; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v37; // x23
  struct BattleResultComponent_o *v38; // x8
  Il2CppObject **v39; // x19
  __int64 v40; // x0

  v3 = this;
  if ( (byte_4211EC7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&System_Random_TypeInfo, v4);
    sub_B0D8A4(&SeManager_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__, v7);
    sub_B0D8A4(&BattleResultItemComponent___c__DisplayClass56_0_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v9);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)sub_B0D8A4(&StringLiteral_12783/*"Servants_"*/, v10);
    byte_4211EC7 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_32;
    }
    else
    {
      if ( _1__state )
        return 0;
      v3->fields.__1__state = -1;
      v13 = (Il2CppObject *)sub_B0D974(BattleResultItemComponent___c__DisplayClass56_0_TypeInfo, method, v2);
      System_Object___ctor(v13, 0LL);
      v3->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass56_0_o *)v13;
      sub_B0D840(&v3->fields.__8__1, v13);
      if ( !_4__this )
        goto LABEL_32;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_32;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v17 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v14, v15);
        UnityEngine_WaitForSeconds___ctor(v17, 0.3, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v17;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, v17);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
    v20 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, v20, 0LL);
    v23 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, v21, v22);
    System_Random___ctor(v23, 0LL);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_32;
    if ( !v23 )
      goto LABEL_32;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))v23->klass->vtable._6_Next.method)(
                                                                      v23,
                                                                      0LL,
                                                                      voiceIds->max_length,
                                                                      v23->klass->vtable._7_Next.methodPtr);
    p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
    _8__1 = v3->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_32;
    v27 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v28 = System_Int32__ToString((int)_4__this + 264, 0LL);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)System_String__Concat_43849904(
                                                                      (System_String_o *)StringLiteral_12783/*"Servants_"*/,
                                                                      v28,
                                                                      0LL);
    v31 = _4__this->fields.voiceIds;
    if ( !v31 )
      goto LABEL_32;
    if ( v27 >= v31->max_length )
    {
      v40 = sub_B0D9A8(this);
      sub_B0D948(v40, 0LL);
    }
    v32 = (System_String_o *)this;
    v33 = v31->m_Items[v27];
    v34 = SeManager_TypeInfo;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v34 = SeManager_TypeInfo;
    }
    v35 = *p__8__1;
    DEFAULT_VOLUME = v34->static_fields->DEFAULT_VOLUME;
    v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v29, v30);
    System_Action___ctor(
      v37,
      v35,
      Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)SoundManager__playVoice_24977528(
                                                                      v32,
                                                                      v33,
                                                                      DEFAULT_VOLUME,
                                                                      v37,
                                                                      0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_32;
  if ( LOBYTE((*p__8__1)[1].klass) )
  {
LABEL_29:
    ActionExtensions__Call(v3->fields.callback, 0LL);
    return 0;
  }
  if ( !_4__this || (v38 = _4__this->fields.parentComp) == 0LL )
LABEL_32:
    sub_B0D97C(this);
  if ( v38->fields.isAddRewardEffectSkip )
    goto LABEL_29;
  v3->fields.__2__current = 0LL;
  v39 = &v3->fields.__2__current;
  sub_B0D840(v39, 0LL);
  *((_DWORD *)v39 - 2) = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__56_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211EC3 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultItemComponent___c_TypeInfo, v1);
    byte_4211EC3 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleResultItemComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultItemComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_26783204(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_26783600(s->fields.type, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_26783204(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_26783600(s->fields.type, 0LL);
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
  if ( (byte_4211EC4 & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_B0D8A4(
                                                                  &Method_System_Collections_Generic_List_BattleDropItem__get_Item__,
                                                                  e);
    byte_4211EC4 = 1;
  }
  if ( !e )
    goto LABEL_9;
  list = v4->fields.list;
  if ( !list )
    goto LABEL_9;
  i = v4->fields.i;
  itemId = e->fields.itemId;
  if ( list->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v8 = list->fields._items->m_Items[i];
  if ( !v8 )
LABEL_9:
    sub_B0D97C(this);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  UnityEngine_Object_o *itemIconEffectObj; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0
  UnityEngine_WaitForSeconds_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8

  v2 = this;
  if ( (byte_4211EC8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)sub_B0D8A4(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v3);
    byte_4211EC8 = 1;
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
          v8 = (UnityEngine_Transform_o *)this;
          this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)v2->fields.dropItem,
                                                                                     0LL);
          if ( this )
          {
            *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
            if ( v8 )
            {
              UnityEngine_Transform__set_position(v8, *(UnityEngine_Vector3_o *)&v9, 0LL);
LABEL_15:
              v12 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v6, v7);
              UnityEngine_WaitForSeconds___ctor(v12, 0.2333, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v12;
              p__2__current = &v2->fields.__2__current;
              sub_B0D840(p__2__current, v12);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_20:
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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