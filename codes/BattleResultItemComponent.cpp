void __fastcall BattleResultItemComponent___cctor(const MethodInfo *method)
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct BattleResultItemComponent_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleResultItemComponent_c *v27; // x8
  struct BattleResultItemComponent_StaticFields *v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42E895B & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultItemComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19691/*"img_bg_total_dp"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2549/*"BATTLE_RESULT_GET_EP"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19692/*"img_bg_total_ep"*/, v14, v15, v16);
    byte_42E895B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultItemComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_19692/*"img_bg_total_ep"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19692/*"img_bg_total_ep"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = BattleResultItemComponent_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_19691/*"img_bg_total_dp"*/;
  v19->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_19691/*"img_bg_total_dp"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->DP_SP_BASE_NAME, v20, v21, v22, v23, v24, v25, v26);
  v27 = BattleResultItemComponent_TypeInfo;
  BattleResultItemComponent_TypeInfo->static_fields->EP_GET_POSY_NORMAL = -15.0;
  v27->static_fields->EP_GET_POSY_BOOSTED = 0.0;
  v27->static_fields->EP_GET_FONT_NORMAL = 26;
  v27->static_fields->EP_GET_FONT_BOOSTED = 19;
  v28 = v27->static_fields;
  v29 = (System_Int32_array **)StringLiteral_2549/*"BATTLE_RESULT_GET_EP"*/;
  v28->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_2549/*"BATTLE_RESULT_GET_EP"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v28->EP_GET_LOCALE_KEY, v29, v30, v31, v32, v33, v34, v35);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void __fastcall BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_Color_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E895A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Color___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E895A = 1;
  }
  v5 = (struct UnityEngine_Color_array *)sub_B5D5DC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__AddItemNewLine(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleResultItemComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Object_o *v15; // x20
  unsigned int v16; // w22
  unsigned int v17; // w23
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x21
  int32_t size; // w8
  __int64 v20; // x8
  UnityEngine_Object_o *v21; // x21
  struct UILabel_o *getEventPointLabel; // x8
  int v23; // w9
  float v24; // s1
  struct BattleViewItemlistComponent_o *v25; // x8
  unsigned int v26; // w22
  __int64 v27; // x20
  float v28; // s10
  struct System_Collections_Generic_List_GameObject__o *v29; // x24
  unsigned int v30; // w8
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E893E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8, v9, v10);
    this = (BattleResultItemComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E893E = 1;
  }
  itemWindow = v4->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_33;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    itemObjectList = itemWindow->fields.itemObjectList;
    if ( !itemObjectList )
      goto LABEL_33;
    size = itemObjectList->fields._size;
    if ( (int)v17 >= size )
      break;
    if ( size <= v17 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v20 = (__int64)itemObjectList->fields._items + 8 * (int)v17;
    v21 = *(UnityEngine_Object_o **)(v20 + 32);
    if ( v21 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              *(UnityEngine_GameObject_o **)(v20 + 32),
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        getEventPointLabel = this->fields.getEventPointLabel;
        if ( getEventPointLabel )
        {
          v23 = BYTE5(getEventPointLabel->fields.mTrans);
          itemWindow = v4->fields.itemWindow;
          if ( !v23 )
            v16 = v17;
          if ( !v23 )
            v15 = v21;
          ++v17;
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
  this = (BattleResultItemComponent_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v15 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v15, 0LL);
      if ( this )
      {
        *(UnityEngine_Vector3_o *)(&v24 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        v25 = v4->fields.itemWindow;
        if ( v25 )
        {
          v26 = v16 + 1;
          v27 = 0LL;
          v28 = v24 + -113.57;
          do
          {
            v29 = v25->fields.itemObjectList;
            if ( !v29 )
              break;
            v30 = v29->fields._size;
            if ( (int)(v26 + v27) >= (int)v30 )
              return;
            if ( v30 <= v26 + (unsigned int)v27 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            this = (BattleResultItemComponent_o *)*((_QWORD *)&v29->fields._items->m_Items[v26] + v27);
            if ( !this )
              break;
            this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL);
            if ( !this )
              break;
            v31.fields.x = (float)((float)((int)v27 % 7) * 110.0) + -22.0;
            v31.fields.y = v28 + (float)((float)((int)v27 / 7) * -113.57);
            v31.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v31, 0LL);
            v25 = v4->fields.itemWindow;
            ++v27;
          }
          while ( v25 );
        }
      }
    }
LABEL_33:
    sub_B5D69C(this, method);
  }
}


void __fastcall BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_42E8951 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultItemComponent_endClose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E8951 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_endClose__,
          0LL),
        !window) )
  {
    sub_B5D69C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v10,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultItemComponent__DialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E8947 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E8947 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
}


void __fastcall BattleResultItemComponent__EndCloseDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E8948 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E8948 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


int32_t __fastcall BattleResultItemComponent__GetEventPointUpperPriority(
        BattleResultItemComponent_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  BattleResultItemComponent_o *EntitiesFromEventPointUpperId; // x0
  const MethodInfo *v35; // x2
  int32_t v36; // w28
  int32_t key; // w26
  BattleResultItemComponent_o *v38; // x20
  const MethodInfo *v39; // x2
  _BOOL8 IsOpen; // x0
  __int64 v41; // x1
  struct BattleResultComponent_o *parentComp; // x8
  bool v43; // w21
  __int64 v44; // x25
  _DWORD *v45; // x8
  int32_t v46; // w22
  int32_t v47; // w24
  int64_t v48; // x23
  int32_t v49; // w22
  int32_t v50; // w24
  int64_t v51; // x23
  __int64 v52; // x1
  int32_t v53; // w20
  int v54; // w19
  __int64 v56; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_42E8957 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, eventPointUpperId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42E8957 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0LL
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0LL),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v35)) == 0LL) )
  {
    sub_B5D69C(Instance, v33);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v57,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v36 = 0;
  v58 = v57;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v58,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
    {
      v53 = 0;
      v54 = 1;
      goto LABEL_31;
    }
    if ( !v58.fields.current.fields.value )
      sub_B5D69C(0LL, v52);
    key = (int32_t)v58.fields.current.fields.key;
    v38 = (BattleResultItemComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v58.fields.current.fields.value,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v38, (EventPointUpperReleaseEntity_array *)v38, v39);
    if ( !v38 )
      sub_B5D69C(IsOpen, v41);
    parentComp = v38->fields.parentComp;
    if ( (int)parentComp >= 1 )
      break;
LABEL_26:
    if ( v36 < key )
      v36 = key;
  }
  v43 = IsOpen;
  v44 = 0LL;
  while ( 1 )
  {
    if ( v44 >= (unsigned __int64)(unsigned int)parentComp )
    {
      v56 = sub_B5D6C8(IsOpen);
      sub_B5D668(v56, 0LL);
    }
    v45 = (_DWORD *)*((_QWORD *)&v38->fields.myFsm + v44);
    if ( !v43 )
      break;
    if ( !v45 )
      sub_B5D69C(IsOpen, v41);
    v47 = v45[9];
    v46 = v45[10];
    v48 = (int)v45[11];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v47, v46, v48, 0, 0LL);
    if ( !IsOpen )
      goto LABEL_30;
LABEL_25:
    LODWORD(parentComp) = v38->fields.parentComp;
    if ( ++v44 >= (int)parentComp )
      goto LABEL_26;
  }
  if ( !v45 )
    sub_B5D69C(IsOpen, v41);
  v50 = v45[9];
  v49 = v45[10];
  v51 = (int)v45[11];
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(v50, v49, v51, 0, 0LL);
  if ( IsOpen )
    goto LABEL_26;
  if ( v44 < (((__int64)v38->fields.parentComp << 32) - 0x100000000LL) >> 32 )
    goto LABEL_25;
LABEL_30:
  v54 = 3;
  v53 = v36;
LABEL_31:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v58,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  if ( (unsigned int)(v54 + 1) >> 2 )
    return v53;
  return v36;
}


System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *__fastcall BattleResultItemComponent__GetEventPointUpperReleases(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v26; // x20
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v28; // x1
  signed int max_length; // w8
  unsigned int v30; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x21
  int32_t targetId; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x23
  __int64 v35; // x0

  if ( (byte_42E8958 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__,
      (_DWORD)entities,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v23, v24, v25);
    byte_42E8958 = 1;
  }
  v26 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v26,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_14;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
      {
        v35 = sub_B5D6C8(Item);
        sub_B5D668(v35, 0LL);
      }
      v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)entities->m_Items[v30];
      if ( !v31 || !v26 )
        break;
      targetId = v31->fields.targetId;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v26,
              targetId,
              (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v33,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v26,
          targetId,
          (WarBoardAIRoute_RouteData_o *)v33,
          (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v26,
               targetId,
               (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item,
        v31,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
      max_length = entities->max_length;
      if ( (int)++v30 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v26;
    }
LABEL_14:
    sub_B5D69C(Item, v28);
  }
  return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v26;
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

  if ( (byte_42E8959 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_B5D5C4(&BalanceConfig_TypeInfo, priority, (_DWORD)entities, method);
    byte_42E8959 = 1;
  }
  if ( !entities )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&priority);
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
        v11 = sub_B5D6C8(this);
        sub_B5D668(v11, 0LL);
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
    sub_B5D69C(this, entities);
  max_length = entities->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  v5 = -1;
  while ( 1 )
  {
    if ( v4 >= (unsigned int)max_length )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x2
  struct BattleResultComponent_o *parentComp; // x8
  BattleResultItemComponent_o *v12; // x21
  struct PlayMakerFSM_o *myFsm; // x8
  BattleResultItemComponent_o *EventPointUpperPriority; // x0
  const MethodInfo *v15; // x3
  __int64 v16; // x0

  v6 = this;
  if ( (byte_42E8956 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventPointUpperMaster___,
      (_DWORD)eventDetailEntity,
      userEventPoint,
      method);
    this = (BattleResultItemComponent_o *)sub_B5D5C4(
                                            &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                            v7,
                                            v8,
                                            v9);
    byte_42E8956 = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0LL) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)EventPointUpperMaster__GetEntitiesFromEventId(
                                          (EventPointUpperMaster_o *)this,
                                          eventDetailEntity->fields.eventId,
                                          0LL);
  if ( !this )
    return (char)this;
  parentComp = this->fields.parentComp;
  v12 = this;
  if ( !parentComp )
  {
LABEL_12:
    LOBYTE(this) = 0;
    return (char)this;
  }
  if ( !(_DWORD)parentComp )
  {
    v16 = sub_B5D6C8(this);
    sub_B5D668(v16, 0LL);
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
LABEL_14:
    sub_B5D69C(this, eventDetailEntity);
  EventPointUpperPriority = (BattleResultItemComponent_o *)BattleResultItemComponent__GetEventPointUpperPriority(
                                                             v6,
                                                             *((_DWORD *)&myFsm->fields.UnityEngine_MonoBehaviour_Fields
                                                             + 1),
                                                             v10);
  LOBYTE(this) = BattleResultItemComponent__GetEventPointUpperValue(
                   EventPointUpperPriority,
                   (int32_t)EventPointUpperPriority,
                   (EventPointUpperEntity_array *)v12,
                   v15) <= userEventPoint;
  return (char)this;
}


void __fastcall BattleResultItemComponent__Init(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleWindowComponent_o *window; // x0
  System_String_o *v9; // x20

  if ( (byte_42E8938 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2542/*"BATTLE_RESULTITEM_TITLECONF"*/, v5, v6, v7);
    byte_42E8938 = 1;
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2542/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_15;
  v9 = (System_String_o *)window;
  if ( !System_String__Equals_44565128((System_String_o *)window, (System_String_o *)StringLiteral_2542/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_15;
    UILabel__set_text((UILabel_o *)window, v9, 0LL);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_15:
    sub_B5D69C(window, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
}


void __fastcall BattleResultItemComponent__OnClickSwitchShowMode(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *showModeChangeButton; // x0
  __int64 *v14; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  __int64 v21; // x0
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E8954 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v8, v9, v10);
    byte_42E8954 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v14 = &StringLiteral_17174/*"btn_bg_20"*/) : (v14 = &StringLiteral_17175/*"btn_bg_21"*/),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v14, 0LL),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(showModeChangeButton, v11);
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
    v21 = sub_B5D6C8(showModeChangeButton);
    sub_B5D668(v21, 0LL);
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
  v22.fields.b = *p_a;
  v22.fields.g = *p_b;
  v22.fields.r = *p_g;
  v22.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v22, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *touchNextRoot; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v16; // x21
  const MethodInfo *v17; // x1

  if ( (byte_42E8939 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultItemComponent_endOpen__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, v11, v12, v13);
    byte_42E8939 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      touchNextRoot,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0LL),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5569/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v16 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v16, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0LL),
        !window) )
  {
LABEL_9:
    sub_B5D69C(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v16,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultItemComponent__setCondensedScale(this, v17);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E8943 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8943 = 1;
  }
  v5 = sub_B5D694(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo);
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57___ctor(
    (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
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

  if ( (byte_42E8942 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E8942 = 1;
  }
  v6 = sub_B5D694(BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo);
  BattleResultItemComponent__PlayVoiceCoroutine_d__56___ctor(
    (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 48) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 48), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleResultItemComponent__SetAddItemIconEffect(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleResultItemComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v35; // w21
  int v36; // w22
  Il2CppObject *v37; // x20
  Il2CppObject *v38; // x0
  System_String_o *v39; // x20
  struct BattleViewItemlistComponent_o *v40; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v41; // x20
  signed __int64 v42; // x24
  signed __int64 v43; // x27
  struct System_Collections_Generic_List_GameObject__o *v44; // x21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v46; // x21
  UnityEngine_GameObject_o *v47; // x22
  UnityEngine_Transform_o *v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-58h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E8940 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_18383/*"ef_additem"*/, v26, v27, v28);
    this = (BattleResultItemComponent_o *)sub_B5D5C4(&StringLiteral_5894/*"Effect/BattleResult/{0}/{1}"*/, v29, v30, v31);
    byte_42E8940 = 1;
  }
  itemWindow = v4->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  v35 = 7 * (size / 7);
  if ( size == v35 )
    v36 = -21;
  else
    v36 = -14;
  g_eventId = v4->fields.g_eventId;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = v4->fields.animationSvtId;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v39 = System_String__Format_44573324((System_String_o *)StringLiteral_5894/*"Effect/BattleResult/{0}/{1}"*/, v37, v38, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v39, 0LL);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_18383/*"ef_additem"*/,
                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504),
        (v40 = v4->fields.itemWindow) == 0LL) )
  {
LABEL_30:
    sub_B5D69C(this, method);
  }
  v41 = (UnityEngine_UI_Dropdown_DropdownItem_o *)this;
  v42 = 0LL;
  v43 = v35 + v36;
  while ( 1 )
  {
    v44 = v40->fields.itemObjectList;
    if ( !v44 )
      goto LABEL_30;
    if ( v42 >= v44->fields._size )
      break;
    if ( v42 >= v43 )
    {
      if ( v42 >= (unsigned __int64)(unsigned int)v44->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (BattleResultItemComponent_o *)v44->fields._items->m_Items[v42];
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v46 = this;
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
                                                v41,
                                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v47 = (UnityEngine_GameObject_o *)this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
        if ( !this )
          goto LABEL_30;
        v48 = (UnityEngine_Transform_o *)this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.effectRoot, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        UnityEngine_Transform__set_localPosition(v48, zero, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        UnityEngine_Transform__set_localScale(v48, one, 0LL);
        UnityEngine_GameObject__SetActive(v47, 0, 0LL);
        v46->fields.eventPointMaxSprite = (struct UISprite_o *)v47;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v46->fields.eventPointMaxSprite,
          (System_Int32_array **)v47,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
      }
    }
    v40 = v4->fields.itemWindow;
    ++v42;
    if ( !v40 )
      goto LABEL_30;
  }
}


void __fastcall BattleResultItemComponent__SetAddItemSvtAnimation(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v27; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v29; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-18h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-14h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E893F & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18431/*"ef_presenter"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_5894/*"Effect/BattleResult/{0}/{1}"*/, v20, v21, v22);
    byte_42E893F = 1;
  }
  g_eventId = this->fields.g_eventId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = this->fields.animationSvtId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v25 = System_String__Format_44573324((System_String_o *)StringLiteral_5894/*"Effect/BattleResult/{0}/{1}"*/, v23, v24, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v25, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               AssetStorage,
                                                                               (System_String_o *)StringLiteral_18431/*"ef_presenter"*/,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  Object_WarBoardWaitTimeSetting,
                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v29 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AssetStorage,
                                        0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (v31 = (UnityEngine_Transform_o *)AssetStorage) == 0LL )
  {
LABEL_14:
    sub_B5D69C(AssetStorage, v27);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v31, zero, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v31, one, 0LL);
  UnityEngine_GameObject__SetActive(v29, 0, 0LL);
  this->fields.addItemSvtAnimationObj = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.addItemSvtAnimationObj,
    (System_Int32_array **)v29,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
    sub_B5D69C(nomalRootObj, *(_QWORD *)&eventId);
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UnityEngine_Component_o *groupRootObj; // x0
  UILabel_o *getQpLabel; // x27
  Il2CppObject *v33; // x0
  int32_t qp; // w20
  int32_t QpMax; // w8
  int v36; // w26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v38; // x0
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  int32_t v40; // w5
  const MethodInfo *v41; // [xsp+0h] [xbp-70h]
  int v43; // [xsp+18h] [xbp-58h] BYREF
  int32_t v44; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42E893C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, eventId, (_DWORD)oldUsrPoint, addDamagePoint);
    sub_B5D5C4(&int_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_700/*"+ {0:#,0}"*/, v28, v29, v30);
    byte_42E893C = 1;
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
  v44 = countQp;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_700/*"+ {0:#,0}"*/, v33, 0LL);
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
    v36 = oldGame->fields.qp + countQp;
    if ( v36 < 0 )
      goto LABEL_37;
    if ( (groupRootObj[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(groupRootObj[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(groupRootObj);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v36 > QpMax )
    {
LABEL_37:
      if ( (groupRootObj[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj);
        groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      v36 = *(_DWORD *)(*(_QWORD *)&groupRootObj[7].fields.m_CachedPtr + 4LL);
    }
  }
  else
  {
    v36 = userGame->fields.qp - (firstClearRewardQp + conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v43 = v36;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v38, 0LL);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0LL),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0LL) )
  {
LABEL_34:
    sub_B5D69C(groupRootObj, *(_QWORD *)&eventId);
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
      v40,
      countQp,
      isNotDisplayEventPoint,
      v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__StartPresenterAnimation(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *addItemSvtAnimationObj; // x0
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x21
  int32_t size; // w8
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s10
  float v17; // s8
  float v18; // s9
  const MethodInfo *v19; // x2
  struct BattleViewItemlistComponent_o *v20; // x8
  struct System_Collections_Generic_List_GameObject__o *v21; // x8
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s8
  float v26; // s10
  float v27; // s9
  System_Collections_IEnumerator_o *v28; // x1
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E8941 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7, v8);
    byte_42E8941 = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  addItemSvtAnimationObj = itemObjectList->fields._items->m_Items[size - 1];
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position(
                                     (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                     0LL);
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  v16 = v13;
  v17 = v14;
  v18 = v15;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_21;
  v29.fields.y = v17;
  v29.fields.z = v18;
  v29.fields.x = v16 + 0.05;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, v29, 0LL);
  v20 = this->fields.itemWindow;
  if ( !v20 )
    goto LABEL_21;
  v21 = v20->fields.itemObjectList;
  if ( !v21 )
    goto LABEL_21;
  if ( v21->fields._size >= 8 )
  {
    addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
    if ( addItemSvtAnimationObj )
    {
      addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             addItemSvtAnimationObj,
                                                             0LL);
      if ( addItemSvtAnimationObj )
      {
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                           0LL);
        addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
        if ( addItemSvtAnimationObj )
        {
          v25 = v22;
          v26 = v23;
          v27 = v24;
          addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 addItemSvtAnimationObj,
                                                                 0LL);
          if ( addItemSvtAnimationObj )
          {
            v30.fields.y = v26 + 9.0;
            v30.fields.x = v25;
            v30.fields.z = v27;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, v30, 0LL);
            goto LABEL_20;
          }
        }
      }
    }
LABEL_21:
    sub_B5D69C(addItemSvtAnimationObj, callback);
  }
LABEL_20:
  v28 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v19);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
}


void __fastcall BattleResultItemComponent__commandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E894F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E894F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
}


void __fastcall BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_42E8952 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E8952 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(gameObject, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E8950 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E8950 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endItemDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E894C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E894C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E893A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E893A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_B5D69C(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0LL);
}


BattleDropItem_o *__fastcall BattleResultItemComponent__getNewDrop(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *newDroplist; // x0
  BattleDropItem_o *v12; // x19

  if ( (byte_42E8953 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v8, v9, v10);
    byte_42E8953 = 1;
  }
  newDroplist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  v12 = (BattleDropItem_o *)newDroplist->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    newDroplist,
    0,
    (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v12;
}


void __fastcall BattleResultItemComponent__itemDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E894B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleResultItemComponent_endItemDialogCallBack__, v5, v6, v7);
    sub_B5D5C4(&Method_BattleResultItemComponent_itemDialogCallBack__, v8, v9, v10);
    byte_42E894B = 1;
  }
  v11 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B5D5CC(Method_BattleResultItemComponent_itemDialogCallBack__);
  v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  itemDialog = this->fields.itemDialog;
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_B5D69C(v15, v16);
  ItemDetailInfoComponent__Close_28491116(itemDialog, v14, 0LL);
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

  if ( (byte_42E8944 & 1) == 0 )
  {
    sub_B5D5C4(
      &BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo,
      (_DWORD)itemIconEffectObj,
      (_DWORD)dropItem,
      method);
    byte_42E8944 = 1;
  }
  v6 = sub_B5D694(BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo);
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__58___ctor(
    (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 32),
    (System_Int32_array **)itemIconEffectObj,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)dropItem, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleResultItemComponent__setCondensedScale(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *getTitleLabel; // x20
  UILabel_o *getBoostLabel; // x0

  if ( (byte_42E8955 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultItemComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8955 = 1;
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
    sub_B5D69C(getBoostLabel, method);
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  __int64 Instance; // x0
  System_String_o *v71; // x1
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v73; // x20
  __int64 v74; // x8
  UserEventPointEntity_o *v75; // x8
  UserEventPointEntity_o *v76; // x8
  int64_t v77; // x25
  __int64 v78; // x26
  const MethodInfo *v79; // x3
  UserEventPointEntity_o *v80; // x8
  int64_t v81; // x22
  const MethodInfo *v82; // x3
  UserEventPointEntity_o *v83; // x8
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserEventRaidMaster_o *v85; // x21
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  int64_t TotalDamagePoint; // x21
  BalanceConfig_c *v88; // x8
  int64_t UserRaidDamagePointMax; // x23
  int64_t v90; // x21
  int64_t v91; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  Il2CppObject *v93; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  Il2CppObject *v95; // x0
  BattleResultItemComponent_c *v96; // x0
  System_String_o *DP_SP_BASE_NAME; // x21
  System_String_o *v98; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  UILabel_o *v100; // x21
  BattleResultItemComponent_c *v101; // x0
  UISprite_o *eventDamageIconSprite; // x21
  int32_t v103; // w20
  UILabel_o *getEventPointLabel; // x23
  Il2CppObject *v105; // x0
  UILabel_o *nowEventPointLabel; // x23
  Il2CppObject *v107; // x0
  UISprite_o *eventIconSprite; // x23
  int32_t pointImageId; // w24
  UILabel_o *getTitleLabel; // x23
  int32_t *v111; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultItemComponent_c *v113; // x8
  UnityEngine_GameObject_o *v114; // x23
  float *p_EP_GET_POSY_NORMAL; // x8
  BattleResultItemComponent_c *v116; // x0
  System_String_o *EP_GET_LOCALE_KEY; // x23
  System_String_o *v118; // x0
  System_String_o *v119; // x23
  BattleResultItemComponent_c *v120; // x0
  UILabel_o *v121; // x24
  UILabel_o *getBoostLabel; // x23
  System_String_o *v123; // x24
  Il2CppObject *v124; // x0
  BattleResultItemComponent_c *v125; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v127; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  UILabel_o *v129; // x21
  BattleResultItemComponent_c *v130; // x0
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  UnityEngine_GameObject_o *v132; // x21
  const MethodInfo *v133; // x3
  __int64 v134; // x0
  int64_t v135; // [xsp+8h] [xbp-68h] BYREF
  __int64 v136; // [xsp+10h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_42E893D & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, (_DWORD)oldUsrPoint, addDamagePoint);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&BattleResultItemComponent_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_BetterList_string__Contains__, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v34, v35, v36);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v37, v38, v39);
    sub_B5D5C4(&long_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&System_Math_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&float_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_2550/*"BATTLE_RESULT_GET_EP_RATE"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_1/*""*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_700/*"+ {0:#,0}"*/, v67, v68, v69);
    byte_42E893D = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_134;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         eventId,
         (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_134;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_134;
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      eventId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      v73 = Entity;
      Instance = EventDetailEntity__IsEventPoint(Entity, 0LL);
      if ( (Instance & 1) != 0 && !isNotDisplayEventPoint )
      {
        if ( oldUsrPoint && (v74 = *(_QWORD *)&oldUsrPoint->max_length) != 0 )
        {
          if ( !(_DWORD)v74 )
            goto LABEL_135;
          v75 = oldUsrPoint->m_Items[0];
          if ( !v75 )
            goto LABEL_134;
          if ( !v75->fields.groupId )
          {
            Instance = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
            if ( !oldUsrPoint->max_length )
              goto LABEL_135;
            v76 = oldUsrPoint->m_Items[0];
            if ( !v76 )
              goto LABEL_134;
            v77 = Instance;
            v78 = Instance - v76->fields.value;
            if ( Instance > 0 || v78 >= 1 )
            {
              Instance = EventDetailEntity__IsEventPointByQp(v73, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !oldUsrPoint->max_length )
                  goto LABEL_135;
                v80 = oldUsrPoint->m_Items[0];
                if ( !v80 )
                  goto LABEL_134;
                v81 = v80->fields.value + countQp;
                if ( BattleResultItemComponent__GetIsShowEventPointMax(this, v73, v77, v79) )
                {
                  Instance = BattleResultItemComponent__GetIsShowEventPointMax(this, v73, v81, v82);
                  if ( (Instance & 1) != 0 )
                    v81 = v77;
                  if ( oldUsrPoint->max_length )
                  {
                    v83 = oldUsrPoint->m_Items[0];
                    if ( !v83 )
                      goto LABEL_134;
                    v78 = v81 - v83->fields.value;
                    goto LABEL_65;
                  }
LABEL_135:
                  v134 = sub_B5D6C8(Instance);
                  sub_B5D668(v134, 0LL);
                }
                v78 = countQp;
              }
              else
              {
                v81 = v77;
              }
LABEL_65:
              getEventPointLabel = this->fields.getEventPointLabel;
              v136 = v78;
              v105 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v136);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_700/*"+ {0:#,0}"*/, v105, 0LL);
              if ( !getEventPointLabel )
                goto LABEL_134;
              UILabel__set_text(getEventPointLabel, (System_String_o *)Instance, 0LL);
              nowEventPointLabel = this->fields.nowEventPointLabel;
              v135 = v81;
              v107 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v135);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v107, 0LL);
              if ( !nowEventPointLabel )
                goto LABEL_134;
              UILabel__set_text(nowEventPointLabel, (System_String_o *)Instance, 0LL);
              CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0LL);
              CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0LL);
              eventIconSprite = this->fields.eventIconSprite;
              pointImageId = v73->fields.pointImageId;
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
                v111 = (int32_t *)(*(_QWORD *)(Instance + 184) + 28LL);
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
              v111 = (int32_t *)(*(_QWORD *)(Instance + 184) + 24LL);
              if ( getTitleLabel )
              {
LABEL_80:
                UILabel__set_fontSize(getTitleLabel, *v111, 0LL);
                Instance = (__int64)this->fields.getTitleLabel;
                if ( !Instance )
                  goto LABEL_134;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                v113 = BattleResultItemComponent_TypeInfo;
                v114 = gameObject;
                if ( boostRate <= 0 )
                {
                  if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v113 = BattleResultItemComponent_TypeInfo;
                  }
                  p_EP_GET_POSY_NORMAL = &v113->static_fields->EP_GET_POSY_NORMAL;
                }
                else
                {
                  if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v113 = BattleResultItemComponent_TypeInfo;
                  }
                  p_EP_GET_POSY_NORMAL = &v113->static_fields->EP_GET_POSY_BOOSTED;
                }
                GameObjectExtensions__SetLocalPositionY(v114, *p_EP_GET_POSY_NORMAL, 0LL);
                v116 = BattleResultItemComponent_TypeInfo;
                if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  v116 = BattleResultItemComponent_TypeInfo;
                }
                EP_GET_LOCALE_KEY = v116->static_fields->EP_GET_LOCALE_KEY;
                v118 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                v119 = System_String__Concat_44577788(EP_GET_LOCALE_KEY, v118, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                if ( !LocalizationManager__ContainsKey(v119, 0LL) )
                {
                  v120 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v120 = BattleResultItemComponent_TypeInfo;
                  }
                  v119 = v120->static_fields->EP_GET_LOCALE_KEY;
                }
                v121 = this->fields.getTitleLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (__int64)LocalizationManager__Get(v119, 0LL);
                if ( !v121 )
                  goto LABEL_134;
                UILabel__set_text(v121, (System_String_o *)Instance, 0LL);
                getBoostLabel = this->fields.getBoostLabel;
                if ( boostRate <= 0 )
                {
                  v71 = (System_String_o *)StringLiteral_1/*""*/;
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
                  v123 = LocalizationManager__Get((System_String_o *)StringLiteral_2550/*"BATTLE_RESULT_GET_EP_RATE"*/, 0LL);
                  *(float *)&v136 = (float)((float)boostRate / 1000.0) + 1.0;
                  v124 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v136);
                  Instance = (__int64)System_String__Format(v123, v124, 0LL);
                  v71 = (System_String_o *)Instance;
                  if ( !getBoostLabel )
                    goto LABEL_134;
                }
                UILabel__set_text(getBoostLabel, v71, 0LL);
                v125 = BattleResultItemComponent_TypeInfo;
                if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  v125 = BattleResultItemComponent_TypeInfo;
                }
                EP_SP_BASE_NAME = v125->static_fields->EP_SP_BASE_NAME;
                v127 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                Instance = (__int64)System_String__Concat_44577788(EP_SP_BASE_NAME, v127, 0LL);
                eventPointBgSprite = this->fields.eventPointBgSprite;
                if ( !eventPointBgSprite )
                  goto LABEL_134;
                v129 = (UILabel_o *)Instance;
                Instance = (__int64)eventPointBgSprite->fields.mAtlas;
                if ( !Instance )
                  goto LABEL_134;
                Instance = (__int64)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_134;
                if ( !BetterList_UILabel___Contains(
                        (BetterList_UILabel__o *)Instance,
                        v129,
                        (const MethodInfo_2BA4698 *)Method_BetterList_string__Contains__) )
                {
                  v130 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v130 = BattleResultItemComponent_TypeInfo;
                  }
                  v129 = (UILabel_o *)v130->static_fields->EP_SP_BASE_NAME;
                }
                Instance = (__int64)this->fields.eventPointBgSprite;
                if ( !Instance )
                  goto LABEL_134;
                UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v129, 0LL);
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
                  v132 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  Instance = BattleResultItemComponent__GetIsShowEventPointMax(this, v73, v81, v133);
                  if ( !v132 )
                    goto LABEL_134;
                  UnityEngine_GameObject__SetActive(v132, Instance & 1, 0LL);
                }
                Instance = (__int64)this->fields.rootEventPoint;
                if ( !Instance )
                  goto LABEL_134;
                goto LABEL_132;
              }
LABEL_134:
              sub_B5D69C(Instance, v71);
            }
          }
        }
        else if ( (addDamagePoint & 0x8000000000000000LL) == 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_134;
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          if ( MasterData_WarQuestSelectionMaster )
          {
            v85 = (UserEventRaidMaster_o *)MasterData_WarQuestSelectionMaster;
            rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0LL, 0LL) )
            {
              TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v85, eventId, 0LL);
              v88 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v88 = BalanceConfig_TypeInfo;
              }
              UserRaidDamagePointMax = v88->static_fields->UserRaidDamagePointMax;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              v90 = System_Math__Min_45149944(TotalDamagePoint, UserRaidDamagePointMax, 0LL);
              v91 = System_Math__Min_45149944(
                      addDamagePoint,
                      BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax,
                      0LL);
              getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
              v136 = v91;
              v93 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v136);
              Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_700/*"+ {0:#,0}"*/, v93, 0LL);
              if ( getEventDamagePointLabel )
              {
                UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Instance, 0LL);
                nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
                v135 = v90;
                v95 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v135);
                Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v95, 0LL);
                if ( nowEventDamagePointLabel )
                {
                  UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Instance, 0LL);
                  v96 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v96 = BattleResultItemComponent_TypeInfo;
                  }
                  DP_SP_BASE_NAME = v96->static_fields->DP_SP_BASE_NAME;
                  v98 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                  Instance = (__int64)System_String__Concat_44577788(DP_SP_BASE_NAME, v98, 0LL);
                  eventDamageBGSprite = this->fields.eventDamageBGSprite;
                  if ( eventDamageBGSprite )
                  {
                    v100 = (UILabel_o *)Instance;
                    Instance = (__int64)eventDamageBGSprite->fields.mAtlas;
                    if ( Instance )
                    {
                      Instance = (__int64)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                      if ( Instance )
                      {
                        if ( !BetterList_UILabel___Contains(
                                (BetterList_UILabel__o *)Instance,
                                v100,
                                (const MethodInfo_2BA4698 *)Method_BetterList_string__Contains__) )
                        {
                          v101 = BattleResultItemComponent_TypeInfo;
                          if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                            v101 = BattleResultItemComponent_TypeInfo;
                          }
                          v100 = (UILabel_o *)v101->static_fields->DP_SP_BASE_NAME;
                        }
                        Instance = (__int64)this->fields.eventDamageBGSprite;
                        if ( Instance )
                        {
                          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v100, 0LL);
                          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                          if ( Instance )
                          {
                            Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
                            if ( Instance )
                            {
                              EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                              eventDamageIconSprite = this->fields.eventDamageIconSprite;
                              v103 = v73->fields.pointImageId;
                              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !AtlasManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              }
                              AtlasManager__SetItem(eventDamageIconSprite, v103, 0LL);
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
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  __int64 v104; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v105; // x19
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0
  __int64 v107; // x1
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o **v114; // x28
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v115; // x21
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__48_0; // x19
  Il2CppObject *v118; // x27
  struct BattleResultItemComponent___c_StaticFields *v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  __int64 v133; // x19
  __int64 v134; // x8
  int v135; // w9
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v136; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v137; // x19
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  __int64 v144; // x23
  __int64 v145; // x27
  __int64 v146; // x8
  struct BattleDropItem_array *gifts; // x8
  int max_length; // w12
  __int64 v149; // x9
  BattleDropItem_o *v150; // x12
  System_Int32_array **voiceIds; // x1
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v158; // x21
  BattleResultItemComponent___c_c *v159; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v160; // x24
  struct BattleResultItemComponent___c_StaticFields *v161; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__48_2; // x19
  Il2CppObject *v163; // x25
  struct BattleResultItemComponent___c_StaticFields *v164; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  BattleViewItemlistComponent_o *itemWindow; // x19
  BattleDropItem_array *v172; // x21
  BattleDropItemComponent_ClickDelegate_o *v173; // x24
  const MethodInfo *v174; // x1
  const MethodInfo *v175; // x1
  const MethodInfo *v176; // x1
  UserGameEntity_o *SelfUserGame; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v178; // x28
  int32_t i; // w27
  BattleDropItem_o *current; // x19
  _BOOL8 isAutoSellItem; // x0
  __int64 v182; // x1
  WarEntity_o *Entity; // x0
  __int64 v184; // x1
  int32_t bannerId; // w8
  _BOOL8 v186; // x0
  __int64 v187; // x1
  UserEventEntity_array *v188; // x2
  int64_t v189; // x4
  signed int v190; // w8
  signed int v191; // w19
  int32_t conquestRewardQp; // w21
  EventConquestInfo_o *v193; // x22
  int monitor; // w8
  __int64 v195; // x0
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-F8h]
  const MethodInfo *v197; // [xsp+18h] [xbp-E8h]
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v200; // [xsp+50h] [xbp-B0h]
  BattleResultItemComponent_o *v201; // [xsp+58h] [xbp-A8h]
  int32_t eventIda; // [xsp+64h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_T__o v203; // [xsp+68h] [xbp-98h] BYREF
  int v204; // [xsp+88h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v205; // [xsp+90h] [xbp-70h] BYREF

  if ( (byte_42E893B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Find_DropUpInfo___, (_DWORD)drop, getqp, *(_QWORD *)&originalGetQp);
    sub_B5D5C4(&BattleDropItem_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_BattleResultItemComponent_setShowConf__, v26, v27, v28);
    sub_B5D5C4(&BattleDropItemComponent_ClickDelegate_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v32, v33, v34);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__Insert__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v68, v69, v70);
    sub_B5D5C4(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v71, v72, v73);
    sub_B5D5C4(&Method_System_Predicate_BattleDropItem___ctor__, v74, v75, v76);
    sub_B5D5C4(&Method_System_Predicate_DropUpInfo___ctor__, v77, v78, v79);
    sub_B5D5C4(&System_Predicate_BattleDropItem__TypeInfo, v80, v81, v82);
    sub_B5D5C4(&System_Predicate_DropUpInfo__TypeInfo, v83, v84, v85);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v86, v87, v88);
    sub_B5D5C4(&Method_BattleResultItemComponent___c__setResultData_b__48_0__, v89, v90, v91);
    sub_B5D5C4(&Method_BattleResultItemComponent___c__setResultData_b__48_2__, v92, v93, v94);
    sub_B5D5C4(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__, v95, v96, v97);
    sub_B5D5C4(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo, v98, v99, v100);
    sub_B5D5C4(&BattleResultItemComponent___c_TypeInfo, v101, v102, v103);
    byte_42E893B = 1;
  }
  memset(&v205, 0, sizeof(v205));
  v204 = 0;
  v104 = sub_B5D694(BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
  BattleResultItemComponent___c__DisplayClass48_0___ctor((BattleResultItemComponent___c__DisplayClass48_0_o *)v104, 0LL);
  this->fields.g_eventId = eventId;
  v105 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleDropItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v105,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v104 )
    goto LABEL_87;
  *(_QWORD *)(v104 + 16) = v105;
  v114 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o **)(v104 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v104 + 16),
    (System_Int32_array **)v105,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)(v104 + 16);
  if ( !USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    goto LABEL_87;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  v115 = *v114;
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
    v118 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleDropItem__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__48_0,
      v118,
      Method_BattleResultItemComponent___c__setResultData_b__48_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleDropItem___ctor__);
    v119 = BattleResultItemComponent___c_TypeInfo->static_fields;
    v119->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)_9__48_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v119->__9__48_0,
      (System_Int32_array **)_9__48_0,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
  }
  if ( !v115 )
    goto LABEL_87;
  eventIda = eventId;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          v115,
          (System_Predicate_T__o *)_9__48_0,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.newDroplist,
    (System_Int32_array **)All,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  if ( getqp >= 1 )
  {
    v133 = sub_B5D694(BattleDropItem_TypeInfo);
    BattleDropItem___ctor((BattleDropItem_o *)v133, 0LL);
    if ( !v133 )
      goto LABEL_87;
    *(_QWORD *)(v133 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v133, getqp, originalGetQp, 0LL);
    USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*v114;
    if ( !*v114 )
      goto LABEL_87;
    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
      0,
      (XWeaponTrail_Element_o *)v133,
      (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  p_newDroplist = &this->fields.newDroplist;
  v200 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)(v104 + 16);
  v201 = this;
  if ( dropupinfos )
  {
    v134 = *(_QWORD *)(v104 + 16);
    *(_DWORD *)(v104 + 24) = 0;
    if ( !v134 )
      goto LABEL_87;
    v135 = 0;
    v136 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v104 + 32);
    while ( v135 < *(_DWORD *)(v134 + 24) )
    {
      v137 = *v136;
      if ( !*v136 )
      {
        v137 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DropUpInfo__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v137,
          (Il2CppObject *)v104,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_DropUpInfo___ctor__);
        *(_QWORD *)(v104 + 32) = v137;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v104 + 32),
          (System_Int32_array **)v137,
          v138,
          v139,
          v140,
          v141,
          v142,
          v143);
      }
      USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_((WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)dropupinfos, (System_Predicate_T__o *)v137, (const MethodInfo_1FC03F4 *)Method_System_Array_Find_DropUpInfo___);
      if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
      {
        v144 = *(_QWORD *)(v104 + 16);
        if ( !v144 )
          goto LABEL_87;
        v145 = *(int *)(v104 + 24);
        if ( *(_DWORD *)(v144 + 24) <= (unsigned int)v145 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v146 = *(_QWORD *)(*(_QWORD *)(v144 + 16) + 8 * v145 + 32);
        if ( !v146 )
          goto LABEL_87;
        *(_DWORD *)(v146 + 72) = HIDWORD(USFGOPlayStandardCutInLimitCount_OverwriteCutIn->fields._items);
      }
      v134 = *(_QWORD *)(v104 + 16);
      v135 = *(_DWORD *)(v104 + 24) + 1;
      *(_DWORD *)(v104 + 24) = v135;
      if ( !v134 )
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
        v149 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v149 >= max_length )
          {
LABEL_89:
            v195 = sub_B5D6C8(USFGOPlayStandardCutInLimitCount_OverwriteCutIn);
            sub_B5D668(v195, 0LL);
          }
          v150 = gifts->m_Items[v149];
          if ( !v150 )
            break;
          v150->fields.isAddReward = 1;
          max_length = gifts->max_length;
          if ( (int)++v149 >= max_length )
            goto LABEL_39;
        }
LABEL_87:
        sub_B5D69C(USFGOPlayStandardCutInLimitCount_OverwriteCutIn, v107);
      }
LABEL_39:
      USFGOPlayStandardCutInLimitCount_OverwriteCutIn = *v200;
      if ( !*v200 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      v201->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = (System_Int32_array **)rewardBonus->fields.voiceIds;
      v201->fields.voiceIds = (struct System_String_array *)voiceIds;
      sub_B5D560((BattleServantConfConponent_o *)&v201->fields.voiceIds, voiceIds, v152, v153, v154, v155, v156, v157);
      v158 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleDropItem__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v158,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v158 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v158,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      v159 = BattleResultItemComponent___c_TypeInfo;
      v160 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)*p_newDroplist;
      if ( (BYTE3(BattleResultItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
        v159 = BattleResultItemComponent___c_TypeInfo;
      }
      v161 = v159->static_fields;
      _9__48_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v161->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( (BYTE3(v159->vtable._0_Equals.methodPtr) & 4) != 0 && !v159->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v159);
          v161 = BattleResultItemComponent___c_TypeInfo->static_fields;
        }
        v163 = (Il2CppObject *)v161->__9;
        _9__48_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleDropItem__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__48_2,
          v163,
          Method_BattleResultItemComponent___c__setResultData_b__48_2__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleDropItem___ctor__);
        v164 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v164->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v164->__9__48_2,
          (System_Int32_array **)_9__48_2,
          v165,
          v166,
          v167,
          v168,
          v169,
          v170);
      }
      USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll((System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v158, (System_Predicate_T__o *)_9__48_2, (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !v160 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        v160,
        (System_Collections_Generic_IEnumerable_T__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = *v200;
  if ( !*v200 )
    goto LABEL_87;
  itemWindow = v201->fields.itemWindow;
  v172 = (BattleDropItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v173 = (BattleDropItemComponent_ClickDelegate_o *)sub_B5D694(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v173,
    (Il2CppObject *)v201,
    Method_BattleResultItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_87;
  BattleViewItemlistComponent__setListDataCustomColumn_23944100(
    itemWindow,
    v172,
    eventId,
    v173,
    v201->fields.itemColumnCount,
    0LL);
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v201->fields.itemWindow;
  if ( !USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    goto LABEL_87;
  BattleViewItemlistComponent__setHide(
    (BattleViewItemlistComponent_o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn,
    0LL);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(v201, v174);
    BattleResultItemComponent__SetAddItemSvtAnimation(v201, v175);
    BattleResultItemComponent__SetAddItemIconEffect(v201, v176);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    goto LABEL_87;
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v200 )
    goto LABEL_87;
  v178 = (DataMasterBase_WarMaster__WarEntity__int__o *)USFGOPlayStandardCutInLimitCount_OverwriteCutIn;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v203,
    *v200,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v205 = v203;
  for ( i = 0; ; i += current->fields.num * current->fields.sellQp )
  {
    v186 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v205,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v186 )
      break;
    current = (BattleDropItem_o *)v205.fields.current;
    if ( !v205.fields.current )
      sub_B5D69C(v186, v187);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v205.fields.current, 0LL);
    if ( current->fields.type == 2 )
    {
      if ( !v178 )
        sub_B5D69C(isAutoSellItem, v182);
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v178,
                 current->fields.objectId,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        sub_B5D69C(0LL, v184);
      bannerId = Entity->fields.bannerId;
      if ( bannerId == 1 || bannerId == 16 )
        i += BattleDropItem__getTotalNum(current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v205,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( !eventConquestInfos )
    goto LABEL_87;
  v190 = eventConquestInfos->max_length;
  if ( v190 < 1 )
  {
    conquestRewardQp = 0;
    if ( !viewGroupIds )
      goto LABEL_87;
  }
  else
  {
    v191 = 0;
    conquestRewardQp = 0;
    do
    {
      if ( v191 >= (unsigned int)v190 )
        goto LABEL_89;
      v193 = eventConquestInfos->m_Items[v191];
      if ( !v193 )
        goto LABEL_87;
      if ( v193->fields.type == 2 )
      {
        if ( !v178 )
          goto LABEL_87;
        USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(v178, v193->fields.objectId, (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
        {
          monitor = (int)USFGOPlayStandardCutInLimitCount_OverwriteCutIn[1].monitor;
          if ( monitor == 16 || monitor == 1 )
            conquestRewardQp += v193->fields.getNum;
        }
      }
      v190 = eventConquestInfos->max_length;
      ++v191;
    }
    while ( v191 < v190 );
    if ( !viewGroupIds )
      goto LABEL_87;
  }
  if ( *(_QWORD *)&viewGroupIds->max_length )
    BattleResultItemComponent__SetGroupEventRoot(
      v201,
      eventIda,
      v188,
      oldUsrPoint,
      v189,
      SelfUserGame,
      i,
      viewGroupIds,
      conquestRewardQp,
      (const MethodInfo *)oldGamea);
  else
    BattleResultItemComponent__SetNomalRoot(
      v201,
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
      v197);
}


void __fastcall BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E894D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9856/*"OPEN_COMMANDCODE"*/, commandCodeId, (_DWORD)method, v3);
    byte_42E894D = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_B5D69C(0LL, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9856/*"OPEN_COMMANDCODE"*/, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E8949 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9863/*"OPEN_ITEM"*/, itemId, (_DWORD)method, v3);
    byte_42E8949 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_B5D69C(0LL, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9863/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleResultItemComponent_o *v5; // x19

  v5 = this;
  if ( (byte_42E8945 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_B5D5C4(&StringLiteral_9871/*"OPEN_SERVANT"*/, (_DWORD)dropItem, (_DWORD)method, v3);
    byte_42E8945 = 1;
  }
  v5->fields.tmp_userSvtId = 0LL;
  v5->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0LL)
      ? (v5->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v5->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v5->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(this, dropItem);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9871/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultItemComponent__showCommandCodeDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v23; // x21
  ServantStatusDialog_EndDelegate_o *v24; // x22

  if ( (byte_42E894E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultItemComponent_commandCodeDialogCallBack__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    byte_42E894E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v23 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v24 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v24,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v23) )
  {
    sub_B5D69C(Instance, v21);
  }
  CommonUI__OpenServantStatusDialog_18215196(v23, 0, (UserCommandCodeEntity_o *)Entity, v24, 0LL, 0LL);
}


void __fastcall BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  WarEntity_o *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v21; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v22; // x22

  if ( (byte_42E894A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultItemComponent_itemDialogCallBack__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E894A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v21 = (ItemEntity_o *)Entity,
        v22 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v22,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B5D69C(Instance, v18);
  }
  ItemDetailInfoComponent__Open(itemDialog, v21, v22, 50, 0LL);
}


void __fastcall BattleResultItemComponent__showServantDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  bool v11; // cc
  CommonUI_o *Instance; // x20
  int64_t tmp_userSvtId; // x21
  ServantStatusDialog_EndDelegate_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v18; // x22

  if ( (byte_42E8946 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultItemComponent_DialogCallBack__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E8946 = 1;
  }
  v11 = this->fields.tmp_userSvtId < 1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v11 )
  {
    tmp_userSvtId = this->fields.tmp_userSvtId;
    v14 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v14,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_18211624(Instance, 0, tmp_userSvtId, v14, 0LL, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(v15, v16);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v18 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_18215952(Instance, 0, tmp_svtId, v18, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemObjectList; // x0
  struct System_Collections_Generic_List_Enumerator_GameObject__o *p__7__wrap1; // x21
  __int128 v22; // q0
  const MethodInfo *v23; // x1
  UnityEngine_GameObject_o *current; // x0
  BattleDropItemComponent_o *Component_srcLineSprite; // x0
  __int64 v26; // x1
  struct BattleDropItem_o *itemData; // x8
  System_Collections_IEnumerator_o *v28; // x1
  UnityEngine_Coroutine_o *started; // x0
  __int64 v30; // x1
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v32; // x20
  bool result; // w0
  __int64 v34; // x0
  __int64 v35; // x1
  BattleResultComponent_o *v36; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_42E60B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11, v12, v13);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *)sub_B5D5C4(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v14,
                                                                               v15,
                                                                               v16);
    byte_42E60B1 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &v4->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      sub_B5D69C(this, method);
    itemWindow = _4__this->fields.itemWindow;
    if ( !itemWindow )
      sub_B5D69C(this, method);
    itemObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemWindow->fields.itemObjectList;
    if ( !itemObjectList )
      sub_B5D69C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      itemObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    p__7__wrap1 = &v4->fields.__7__wrap1;
    v22 = *(_OWORD *)&v37.fields.list;
    v4->fields.__7__wrap1.fields.current = (struct UnityEngine_GameObject_o *)v37.fields.current;
    *(_OWORD *)&v4->fields.__7__wrap1.fields.list = v22;
    sub_B5D560(&v4->fields.__7__wrap1);
  }
  v4->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v4->fields.__7__wrap1.fields.current;
    if ( !current )
      sub_B5D69C(0LL, v23);
    Component_srcLineSprite = (BattleDropItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             current,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_srcLineSprite )
      sub_B5D69C(0LL, v26);
    itemData = Component_srcLineSprite->fields.itemData;
    if ( !itemData )
      sub_B5D69C(Component_srcLineSprite, v26);
    if ( itemData->fields.isAddReward )
    {
      if ( !_4__this )
        sub_B5D69C(Component_srcLineSprite, v26);
      v28 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              _4__this,
              Component_srcLineSprite->fields.itemIconEffectObj,
              Component_srcLineSprite,
              0LL);
      started = UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, v28, 0LL);
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        sub_B5D69C(started, v30);
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v32 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v32, 0.01, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v32;
        sub_B5D560(&v4->fields.__2__current);
        result = 1;
        v4->fields.__1__state = 1;
        return result;
      }
    }
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57____m__Finally1(v4, v23);
  p__7__wrap1->fields.list = 0LL;
  *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
  p__7__wrap1->fields.current = 0LL;
  if ( !_4__this )
    sub_B5D69C(v34, v35);
  v36 = _4__this->fields.parentComp;
  if ( !v36 )
    sub_B5D69C(0LL, v35);
  BattleResultComponent__QpFix(v36, 0LL);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E60B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    byte_42E60B2 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int v2; // w2
  __int64 v3; // x3
  BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v28; // x21
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v30; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_IEnumerator_o *v33; // x0
  System_Random_o *v34; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass56_0_o *_8__1; // x8
  Il2CppObject **p__8__1; // x25
  il2cpp_array_size_t v38; // w22
  System_String_o *v39; // x0
  struct System_String_array *v40; // x8
  System_String_o *v41; // x21
  System_String_o *v42; // x22
  SeManager_c *v43; // x0
  Il2CppObject *v44; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v46; // x23
  struct BattleResultComponent_o *v47; // x8
  Il2CppObject **v48; // x19
  __int64 v49; // x0

  v4 = this;
  if ( (byte_42E60B3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Random_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__, v14, v15, v16);
    sub_B5D5C4(&BattleResultItemComponent___c__DisplayClass56_0_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v20, v21, v22);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)sub_B5D5C4(&StringLiteral_12895/*"Servants_"*/, v23, v24, v25);
    byte_42E60B3 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_32;
    }
    else
    {
      if ( _1__state )
        return 0;
      v4->fields.__1__state = -1;
      v28 = (Il2CppObject *)sub_B5D694(BattleResultItemComponent___c__DisplayClass56_0_TypeInfo);
      System_Object___ctor(v28, 0LL);
      v4->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass56_0_o *)v28;
      sub_B5D560(&v4->fields.__8__1);
      if ( !_4__this )
        goto LABEL_32;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_32;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v30 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v30, 0.3, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v30;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
    v33 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, v33, 0LL);
    v34 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
    System_Random___ctor(v34, 0LL);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_32;
    if ( !v34 )
      goto LABEL_32;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))v34->klass->vtable._6_Next.method)(
                                                                      v34,
                                                                      0LL,
                                                                      voiceIds->max_length,
                                                                      v34->klass->vtable._7_Next.methodPtr);
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_32;
    v38 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v39 = System_Int32__ToString((int)_4__this + 264, 0LL);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)System_String__Concat_44577788(
                                                                      (System_String_o *)StringLiteral_12895/*"Servants_"*/,
                                                                      v39,
                                                                      0LL);
    v40 = _4__this->fields.voiceIds;
    if ( !v40 )
      goto LABEL_32;
    if ( v38 >= v40->max_length )
    {
      v49 = sub_B5D6C8(this);
      sub_B5D668(v49, 0LL);
    }
    v41 = (System_String_o *)this;
    v42 = v40->m_Items[v38];
    v43 = SeManager_TypeInfo;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v43 = SeManager_TypeInfo;
    }
    v44 = *p__8__1;
    DEFAULT_VOLUME = v43->static_fields->DEFAULT_VOLUME;
    v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      v44,
      Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)SoundManager__playVoice_23391328(
                                                                      v41,
                                                                      v42,
                                                                      DEFAULT_VOLUME,
                                                                      v46,
                                                                      0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_32;
  if ( LOBYTE((*p__8__1)[1].klass) )
  {
LABEL_29:
    ActionExtensions__Call(v4->fields.callback, 0LL);
    return 0;
  }
  if ( !_4__this || (v47 = _4__this->fields.parentComp) == 0LL )
LABEL_32:
    sub_B5D69C(this, method);
  if ( v47->fields.isAddRewardEffectSkip )
    goto LABEL_29;
  v4->fields.__2__current = 0LL;
  v48 = &v4->fields.__2__current;
  sub_B5D560(v48);
  *((_DWORD *)v48 - 2) = 2;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__56_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E60AF & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultItemComponent___c_TypeInfo, v1, v2, v3);
    byte_42E60AF = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleResultItemComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultItemComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_28424960(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_28425356(s->fields.type, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_28424960(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_28425356(s->fields.type, 0LL);
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
  __int64 v3; // x3
  BattleResultItemComponent___c__DisplayClass48_0_o *v5; // x20
  struct System_Collections_Generic_List_BattleDropItem__o *list; // x21
  __int64 i; // x20
  int32_t itemId; // w19
  BattleDropItem_o *v9; // x8

  v5 = this;
  if ( (byte_42E60B0 & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_B5D5C4(
                                                                  &Method_System_Collections_Generic_List_BattleDropItem__get_Item__,
                                                                  (_DWORD)e,
                                                                  (_DWORD)method,
                                                                  v3);
    byte_42E60B0 = 1;
  }
  if ( !e )
    goto LABEL_9;
  list = v5->fields.list;
  if ( !list )
    goto LABEL_9;
  i = v5->fields.i;
  itemId = e->fields.itemId;
  if ( list->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v9 = list->fields._items->m_Items[i];
  if ( !v9 )
LABEL_9:
    sub_B5D69C(this, e);
  return itemId == v9->fields.objectId;
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
  int v2; // w2
  __int64 v3; // x3
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  UnityEngine_Object_o *itemIconEffectObj; // x20
  UnityEngine_Transform_o *v10; // x20
  int v11; // s0
  UnityEngine_WaitForSeconds_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8

  v4 = this;
  if ( (byte_42E60B4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)sub_B5D5C4(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v5,
                                                                               v6,
                                                                               v7);
    byte_42E60B4 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    dropItem = v4->fields.dropItem;
    v4->fields.__1__state = -1;
    if ( !dropItem )
      goto LABEL_20;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)dropItem->fields.root;
    if ( !this )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    itemIconEffectObj = (UnityEngine_Object_o *)v4->fields.itemIconEffectObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(itemIconEffectObj, 0LL, 0LL) )
      goto LABEL_15;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)v4->fields.itemIconEffectObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)v4->fields.itemIconEffectObj;
      if ( this )
      {
        this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)this,
                                                                                   0LL);
        if ( v4->fields.dropItem )
        {
          v10 = (UnityEngine_Transform_o *)this;
          this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)v4->fields.dropItem,
                                                                                     0LL);
          if ( this )
          {
            *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
            if ( v10 )
            {
              UnityEngine_Transform__set_position(v10, *(UnityEngine_Vector3_o *)&v11, 0LL);
LABEL_15:
              v14 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v14, 0.2333, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v14;
              p__2__current = &v4->fields.__2__current;
              sub_B5D560(p__2__current);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_20:
    sub_B5D69C(this, method);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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