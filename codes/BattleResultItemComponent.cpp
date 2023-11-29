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

  if ( (byte_40FA3F8 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultItemComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19372, v8);
    sub_B16FFC(&StringLiteral_2486, v9);
    sub_B16FFC(&StringLiteral_19373, v10);
    byte_40FA3F8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultItemComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_19373;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19373;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = BattleResultItemComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19372;
  v13->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_19372;
  sub_B16F98((BattleServantConfConponent_o *)&v13->DP_SP_BASE_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = BattleResultItemComponent_TypeInfo;
  BattleResultItemComponent_TypeInfo->static_fields->EP_GET_POSY_NORMAL = -15.0;
  v21->static_fields->EP_GET_POSY_BOOSTED = 0.0;
  v21->static_fields->EP_GET_FONT_NORMAL = 26;
  v21->static_fields->EP_GET_FONT_BOOSTED = 19;
  v22 = v21->static_fields;
  v23 = (System_Int32_array **)StringLiteral_2486;
  v22->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_2486;
  sub_B16F98((BattleServantConfConponent_o *)&v22->EP_GET_LOCALE_KEY, v23, v24, v25, v26, v27, v28, v29);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void __fastcall BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Color_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FA3F7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Color___TypeInfo, method);
    byte_40FA3F7 = 1;
  }
  v4 = (struct UnityEngine_Color_array *)sub_B17014(UnityEngine_Color___TypeInfo, 2LL, v2);
  this->fields.showModeChanButtonLabelEffectColors = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__AddItemNewLine(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_GameObject_o *v7; // x20
  unsigned int v8; // w22
  unsigned int v9; // w23
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x21
  int32_t size; // w8
  __int64 v12; // x8
  UnityEngine_GameObject_o *v13; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct System_String_o *msSpriteName; // x8
  int v16; // w9
  UnityEngine_Transform_o *transform; // x0
  float v18; // s1
  struct BattleViewItemlistComponent_o *v19; // x8
  unsigned int v20; // w22
  __int64 v21; // x20
  float v22; // s10
  struct System_Collections_Generic_List_GameObject__o *v23; // x24
  unsigned int v24; // w8
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA3DB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA3DB = 1;
  }
  itemWindow = this->fields.itemWindow;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v12 = (__int64)itemObjectList->fields._items + 8 * (int)v9;
    v13 = *(UnityEngine_GameObject_o **)(v12 + 32);
    if ( v13 )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  *(UnityEngine_GameObject_o **)(v12 + 32),
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( Component_srcLineSprite )
      {
        msSpriteName = Component_srcLineSprite->fields.msSpriteName;
        if ( msSpriteName )
        {
          v16 = BYTE4(msSpriteName[3].klass);
          itemWindow = this->fields.itemWindow;
          if ( !v16 )
            v8 = v9;
          if ( !v16 )
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
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
  {
    if ( v7 )
    {
      transform = UnityEngine_GameObject__get_transform(v7, 0LL);
      if ( transform )
      {
        *(UnityEngine_Vector3_o *)(&v18 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
        v19 = this->fields.itemWindow;
        if ( v19 )
        {
          v20 = v8 + 1;
          v21 = 0LL;
          v22 = v18 + -113.57;
          do
          {
            v23 = v19->fields.itemObjectList;
            if ( !v23 )
              break;
            v24 = v23->fields._size;
            if ( (int)(v20 + v21) >= (int)v24 )
              return;
            if ( v24 <= v20 + (unsigned int)v21 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v25 = (UnityEngine_GameObject_o *)*((_QWORD *)&v23->fields._items->m_Items[v20] + v21);
            if ( !v25 )
              break;
            v26 = UnityEngine_GameObject__get_transform(v25, 0LL);
            if ( !v26 )
              break;
            v27.fields.x = (float)((float)((int)v21 % 7) * 110.0) + -22.0;
            v27.fields.y = v22 + (float)((float)((int)v21 / 7) * -113.57);
            v27.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(v26, v27, 0LL);
            v19 = this->fields.itemWindow;
            ++v21;
          }
          while ( v19 );
        }
      }
    }
LABEL_33:
    sub_B170D4();
  }
}


void __fastcall BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_40FA3EE & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultItemComponent_endClose__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_40FA3EE = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_endClose__,
          0LL),
        !window) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v10,
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FA3E4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flg);
    sub_B16FFC(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FA3E4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v11, 0LL);
}


void __fastcall BattleResultItemComponent__EndCloseDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3E5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080, method);
    byte_40FA3E5 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventPointUpperReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  BattleResultItemComponent_o *EntitiesFromEventPointUpperId; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *EventPointUpperReleases; // x0
  int32_t v18; // w28
  int32_t key; // w26
  BattleResultItemComponent_o *v20; // x20
  const MethodInfo *v21; // x2
  _BOOL8 IsOpen; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  struct BattleResultComponent_o *parentComp; // x8
  bool v26; // w21
  __int64 v27; // x25
  _DWORD *v28; // x8
  int32_t v29; // w22
  int32_t v30; // w24
  int64_t v31; // x23
  int32_t v32; // w22
  int32_t v33; // w24
  int64_t v34; // x23
  int32_t v35; // w20
  int v36; // w19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_40FA3F4 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&eventPointUpperId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__,
      v8);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__,
      v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FA3F4 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventPointUpperReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0LL
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         eventPointUpperId,
                                                                         0LL),
        (EventPointUpperReleases = BattleResultItemComponent__GetEventPointUpperReleases(
                                     EntitiesFromEventPointUpperId,
                                     (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                     v16)) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v38,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)EventPointUpperReleases,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v18 = 0;
  v39 = v38;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v39,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
    {
      v35 = 0;
      v36 = 1;
      goto LABEL_31;
    }
    if ( !v39.fields.current.fields.value )
      sub_B170D4();
    key = (int32_t)v39.fields.current.fields.key;
    v20 = (BattleResultItemComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39.fields.current.fields.value,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v20, (EventPointUpperReleaseEntity_array *)v20, v21);
    if ( !v20 )
      sub_B170D4();
    parentComp = v20->fields.parentComp;
    if ( (int)parentComp >= 1 )
      break;
LABEL_26:
    if ( v18 < key )
      v18 = key;
  }
  v26 = IsOpen;
  v27 = 0LL;
  while ( 1 )
  {
    if ( v27 >= (unsigned __int64)(unsigned int)parentComp )
    {
      sub_B17100(IsOpen, v23, v24);
      sub_B170A0();
    }
    v28 = (_DWORD *)*((_QWORD *)&v20->fields.myFsm + v27);
    if ( !v26 )
      break;
    if ( !v28 )
      sub_B170D4();
    v30 = v28[9];
    v29 = v28[10];
    v31 = (int)v28[11];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v30, v29, v31, 0, 0LL);
    if ( !IsOpen )
      goto LABEL_30;
LABEL_25:
    LODWORD(parentComp) = v20->fields.parentComp;
    if ( ++v27 >= (int)parentComp )
      goto LABEL_26;
  }
  if ( !v28 )
    sub_B170D4();
  v33 = v28[9];
  v32 = v28[10];
  v34 = (int)v28[11];
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(v33, v32, v34, 0, 0LL);
  if ( IsOpen )
    goto LABEL_26;
  if ( v27 < (((__int64)v20->fields.parentComp << 32) - 0x100000000LL) >> 32 )
    goto LABEL_25;
LABEL_30:
  v36 = 3;
  v35 = v18;
LABEL_31:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v39,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  if ( (unsigned int)(v36 + 1) >> 2 )
    return v35;
  return v18;
}


System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *__fastcall BattleResultItemComponent__GetEventPointUpperReleases(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  signed int max_length; // w8
  unsigned int v18; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  int32_t targetId; // w22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x23
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0

  if ( (byte_40FA3F5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__,
      entities);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v12);
    byte_40FA3F5 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo,
                                                                                                   entities,
                                                                                                   method,
                                                                                                   v3,
                                                                                                   v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v13,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_14;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        sub_B17100(v14, v15, v16);
        sub_B170A0();
      }
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)entities->m_Items[v18];
      if ( !v19 || !v13 )
        break;
      targetId = v19->fields.targetId;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v13,
              targetId,
              (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v21, v22, v23, v24);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v25,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v13,
          targetId,
          (WarBoardAIRoute_RouteData_o *)v25,
          (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v13,
               targetId,
               (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item,
        v19,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
      max_length = entities->max_length;
      if ( (int)++v18 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v13;
    }
LABEL_14:
    sub_B170D4();
  }
  return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v13;
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

  if ( (byte_40FA3F6 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&priority);
    byte_40FA3F6 = 1;
  }
  if ( !entities )
LABEL_16:
    sub_B170D4();
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
        sub_B17100(this, *(_QWORD *)&priority, entities);
        sub_B170A0();
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

  if ( !entities )
LABEL_12:
    sub_B170D4();
  max_length = entities->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  v5 = -1;
  while ( 1 )
  {
    if ( v4 >= (unsigned int)max_length )
    {
      sub_B17100(this, entities, method);
      sub_B170A0();
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
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  EventPointUpperMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventPointUpperEntity_array *EntitiesFromEventId; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  EventPointUpperEntity_array *v14; // x21
  EventPointUpperEntity_o *v15; // x8
  BattleResultItemComponent_o *EventPointUpperPriority; // x0
  const MethodInfo *v17; // x3

  if ( (byte_40FA3F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointUpperMaster___, eventDetailEntity);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA3F3 = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0LL) )
    goto LABEL_12;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (EventPointUpperMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  EntitiesFromEventId = EventPointUpperMaster__GetEntitiesFromEventId(
                          MasterData_WarQuestSelectionMaster,
                          eventDetailEntity->fields.eventId,
                          0LL);
  if ( !EntitiesFromEventId )
    return (char)EntitiesFromEventId;
  v13 = *(_QWORD *)&EntitiesFromEventId->max_length;
  v14 = EntitiesFromEventId;
  if ( !v13 )
  {
LABEL_12:
    LOBYTE(EntitiesFromEventId) = 0;
    return (char)EntitiesFromEventId;
  }
  if ( !(_DWORD)v13 )
  {
    sub_B17100(EntitiesFromEventId, v11, v12);
    sub_B170A0();
  }
  v15 = EntitiesFromEventId->m_Items[0];
  if ( !v15 )
LABEL_14:
    sub_B170D4();
  EventPointUpperPriority = (BattleResultItemComponent_o *)BattleResultItemComponent__GetEventPointUpperPriority(
                                                             this,
                                                             v15->fields.id,
                                                             v12);
  LOBYTE(EntitiesFromEventId) = BattleResultItemComponent__GetEventPointUpperValue(
                                  EventPointUpperPriority,
                                  (int32_t)EventPointUpperPriority,
                                  v14,
                                  v17) <= userEventPoint;
  return (char)EntitiesFromEventId;
}


void __fastcall BattleResultItemComponent__Init(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleWindowComponent_o *window; // x0
  struct BattleWindowComponent_o *v5; // x0
  ItemDetailInfoComponent_o *itemDialog; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x20
  UILabel_o *titleConfLabel; // x0
  UnityEngine_GameObject_o *touchNextRoot; // x0

  if ( (byte_40FA3D5 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2479, v3);
    byte_40FA3D5 = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_15;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  v5 = this->fields.window;
  if ( !v5 )
    goto LABEL_15;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v5->klass->vtable._9_setClose.method)(
    v5,
    v5->klass->vtable._10_Open.methodPtr);
  itemDialog = this->fields.itemDialog;
  if ( !itemDialog )
    goto LABEL_15;
  ItemDetailInfoComponent__Init(itemDialog, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2479, 0LL);
  if ( !v7 )
    goto LABEL_15;
  v8 = v7;
  if ( !System_String__Equals_43731072(v7, (System_String_o *)StringLiteral_2479, 0LL) )
  {
    titleConfLabel = this->fields.titleConfLabel;
    if ( !titleConfLabel )
      goto LABEL_15;
    UILabel__set_text(titleConfLabel, v8, 0LL);
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
LABEL_15:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(touchNextRoot, 0, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  UILabel_o *showModeChangeButtonLabel; // x0
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  BattleViewItemlistComponent_o *itemWindow; // x0
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FA3F1 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16899, v3);
    sub_B16FFC(&StringLiteral_16900, v4);
    byte_40FA3F1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v7 = &StringLiteral_16899) : (v7 = &StringLiteral_16900),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v7, 0LL),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  showModeChangeButtonLabel = this->fields.showModeChangeButtonLabel;
  max_length = showModeChanButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !showModeChangeButtonLabel )
        goto LABEL_19;
      goto LABEL_17;
    }
LABEL_20:
    sub_B17100(showModeChangeButtonLabel, v8, v9);
    sub_B170A0();
  }
  if ( max_length <= 1 )
    goto LABEL_20;
  p_g = &showModeChanButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &showModeChanButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &showModeChanButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &showModeChanButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !showModeChangeButtonLabel )
    goto LABEL_19;
LABEL_17:
  v18.fields.b = *p_a;
  v18.fields.g = *p_b;
  v18.fields.r = *p_g;
  v18.fields.a = *p_r;
  UILabel__set_effectColor(showModeChangeButtonLabel, v18, 0LL);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_19;
  BattleViewItemlistComponent__SwitchShowNumMode(itemWindow, this->fields.isShowPossessionNum, 0LL);
}


void __fastcall BattleResultItemComponent__Open(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *touchNextRoot; // x0
  UnityEngine_GameObject_o *v7; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  PlayMakerFSM_o *myFsm; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleWindowComponent_EndCall_o *v15; // x21
  const MethodInfo *v16; // x1

  if ( (byte_40FA3D6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultItemComponent_endOpen__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4);
    sub_B16FFC(&StringLiteral_5477, v5);
    byte_40FA3D6 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  v7 = this->fields.touchNextRoot;
  if ( !v7
    || (Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  v7,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (UIWidget__set_depth(Component_srcLineSprite, 200, 0LL), (myFsm = this->fields.myFsm) == 0LL)
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5477, 0LL),
        window = this->fields.window,
        v15 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v11, v12, v13, v14),
        BattleWindowComponent_EndCall___ctor(v15, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0LL),
        !window) )
  {
LABEL_9:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v15,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultItemComponent__setCondensedScale(this, v16);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA3E0 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo, method);
    byte_40FA3E0 = 1;
  }
  v6 = sub_B170CC(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_TypeInfo, method, v2, v3, v4);
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57___ctor(
    (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40FA3DF & 1) == 0 )
  {
    sub_B16FFC(&BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo, callback);
    byte_40FA3DF = 1;
  }
  v7 = sub_B170CC(BattleResultItemComponent__PlayVoiceCoroutine_d__56_TypeInfo, callback, method, v3, v4);
  BattleResultItemComponent__PlayVoiceCoroutine_d__56___ctor(
    (BattleResultItemComponent__PlayVoiceCoroutine_d__56_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 48) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattleResultItemComponent__SetAddItemIconEffect(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
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
  AssetData_o *AssetStorage; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  struct BattleViewItemlistComponent_o *v22; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v23; // x20
  signed __int64 v24; // x24
  signed __int64 v25; // x27
  struct System_Collections_Generic_List_GameObject__o *v26; // x21
  UnityEngine_GameObject_o *v27; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct System_String_o *msSpriteName; // x8
  srcLineSprite_o *v30; // x21
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v34; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-58h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA3DD & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_18087, v10);
    sub_B16FFC(&StringLiteral_5799, v11);
    byte_40FA3DD = 1;
  }
  itemWindow = this->fields.itemWindow;
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
  g_eventId = this->fields.g_eventId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = this->fields.animationSvtId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v19 = System_String__Format_43739268((System_String_o *)StringLiteral_5799, v17, v18, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v19, 0LL);
  if ( !AssetStorage
    || (Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                           AssetStorage,
                                           (System_String_o *)StringLiteral_18087,
                                           (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784),
        (v22 = this->fields.itemWindow) == 0LL) )
  {
LABEL_30:
    sub_B170D4();
  }
  v23 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
  v24 = 0LL;
  v25 = v15 + v16;
  while ( 1 )
  {
    v26 = v22->fields.itemObjectList;
    if ( !v26 )
      goto LABEL_30;
    if ( v24 >= v26->fields._size )
      break;
    if ( v24 >= v25 )
    {
      if ( v24 >= (unsigned __int64)(unsigned int)v26->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v27 = v26->fields._items->m_Items[v24];
      if ( !v27 )
        goto LABEL_30;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v27,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !Component_srcLineSprite )
        goto LABEL_30;
      msSpriteName = Component_srcLineSprite->fields.msSpriteName;
      v30 = Component_srcLineSprite;
      if ( !msSpriteName )
        goto LABEL_30;
      if ( BYTE4(msSpriteName[3].klass) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v31 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            v23,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !v31 )
          goto LABEL_30;
        v32 = v31;
        transform = UnityEngine_GameObject__get_transform(v31, 0LL);
        if ( !transform )
          goto LABEL_30;
        v34 = transform;
        UnityEngine_Transform__SetParent(transform, this->fields.effectRoot, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        UnityEngine_Transform__set_localPosition(v34, zero, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        UnityEngine_Transform__set_localScale(v34, one, 0LL);
        UnityEngine_GameObject__SetActive(v32, 0, 0LL);
        v30[1].monitor = v32;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v30[1].monitor,
          (System_Int32_array **)v32,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
    }
    v22 = this->fields.itemWindow;
    ++v24;
    if ( !v22 )
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
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Transform_o *transform; // x0
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t animationSvtId; // [xsp+8h] [xbp-18h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-14h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA3DC & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_18134, v7);
    sub_B16FFC(&StringLiteral_5799, v8);
    byte_40FA3DC = 1;
  }
  g_eventId = this->fields.g_eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId);
  animationSvtId = this->fields.animationSvtId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId);
  v11 = System_String__Format_43739268((System_String_o *)StringLiteral_5799, v9, v10, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v11, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               AssetStorage,
                                                                               (System_String_o *)StringLiteral_18134,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v14
    || (v15 = v14,
        transform = UnityEngine_GameObject__get_transform(v14, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (v18 = transform) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  UnityEngine_Transform__SetParent(transform, itemWindow->fields.listRoot, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v18, zero, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v18, one, 0LL);
  UnityEngine_GameObject__SetActive(v15, 0, 0LL);
  this->fields.addItemSvtAnimationObj = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.addItemSvtAnimationObj,
    (System_Int32_array **)v15,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  UnityEngine_Component_o *groupRootObj; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x3
  BattleResultEventItemGroupComponent_o *v20; // x0
  const MethodInfo *v21; // x5
  BattleResultEventItemGroupComponent_o *v22; // x0

  nomalRootObj = this->fields.nomalRootObj;
  if ( !nomalRootObj
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 0, 0LL),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.groupRootObj) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(groupRootObj, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), !userGame)
    || (v20 = this->fields.groupRootObj) == 0LL
    || (BattleResultEventItemGroupComponent__SetQpInfo(v20, userGame->fields.qp - conquestRewardQp, countQp, v19),
        (v22 = this->fields.groupRootObj) == 0LL) )
  {
    sub_B170D4();
  }
  BattleResultEventItemGroupComponent__SetGroupPointInfo(
    v22,
    eventId,
    userGame->fields.userId,
    oldUsrPoint,
    viewGroupIds,
    v21);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *nomalRootObj; // x0
  UILabel_o *getQpLabel; // x27
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  int32_t qp; // w20
  BalanceConfig_c *v30; // x0
  int32_t QpMax; // w8
  int v32; // w26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  UnityEngine_GameObject_o *rootEventPoint; // x0
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  int32_t v38; // w5
  UnityEngine_GameObject_o *v39; // x0
  const MethodInfo *v40; // [xsp+0h] [xbp-70h]
  int v42; // [xsp+18h] [xbp-58h] BYREF
  int32_t v43; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40FA3D9 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&int_TypeInfo, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_23395, v21);
    sub_B16FFC(&StringLiteral_691, v22);
    byte_40FA3D9 = 1;
  }
  groupRootObj = (UnityEngine_Component_o *)this->fields.groupRootObj;
  if ( !groupRootObj )
    goto LABEL_34;
  gameObject = UnityEngine_Component__get_gameObject(groupRootObj, 0LL);
  if ( !gameObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  nomalRootObj = this->fields.nomalRootObj;
  if ( !nomalRootObj )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(nomalRootObj, 1, 0LL);
  getQpLabel = this->fields.getQpLabel;
  v43 = countQp;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v28 = System_String__Format((System_String_o *)StringLiteral_691, v27, 0LL);
  if ( !getQpLabel )
    goto LABEL_34;
  UILabel__set_text(getQpLabel, v28, 0LL);
  if ( !userGame )
    goto LABEL_34;
  qp = userGame->fields.qp;
  v30 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  QpMax = v30->static_fields->QpMax;
  if ( qp >= QpMax )
  {
    if ( !oldGame )
      goto LABEL_34;
    v32 = oldGame->fields.qp + countQp;
    if ( v32 < 0 )
      goto LABEL_37;
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v32 > QpMax )
    {
LABEL_37:
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = BalanceConfig_TypeInfo;
      }
      v32 = v30->static_fields->QpMax;
    }
  }
  else
  {
    v32 = userGame->fields.qp - (firstClearRewardQp + conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v42 = v32;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v35 = System_String__Format((System_String_o *)StringLiteral_23395, v34, 0LL);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, v35, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0LL),
        (rootEventPoint = this->fields.rootEventPoint) == 0LL) )
  {
LABEL_34:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(rootEventPoint, 0, 0LL);
  rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0LL, 0LL) )
  {
    v39 = this->fields.rootEventDamagePoint;
    if ( v39 )
    {
      UnityEngine_GameObject__SetActive(v39, 0, 0LL);
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
      v38,
      countQp,
      isNotDisplayEventPoint,
      v40);
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
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Transform_o *transform; // x0
  float v12; // s0
  float v13; // s1
  float v14; // s2
  UnityEngine_GameObject_o *v15; // x0
  float v16; // s10
  float v17; // s8
  float v18; // s9
  UnityEngine_Transform_o *v19; // x0
  const MethodInfo *v20; // x2
  struct BattleViewItemlistComponent_o *v21; // x8
  struct System_Collections_Generic_List_GameObject__o *v22; // x8
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Transform_o *v24; // x0
  float v25; // s0
  float v26; // s1
  float v27; // s2
  UnityEngine_GameObject_o *v28; // x0
  float v29; // s8
  float v30; // s10
  float v31; // s9
  UnityEngine_Transform_o *v32; // x0
  System_Collections_IEnumerator_o *v33; // x1
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA3DE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, callback);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5);
    byte_40FA3DE = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v10 = itemObjectList->fields._items->m_Items[size - 1];
  if ( !v10 )
    goto LABEL_21;
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !transform )
    goto LABEL_21;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(transform, 0LL);
  v15 = this->fields.addItemSvtAnimationObj;
  if ( !v15 )
    goto LABEL_21;
  v16 = v12;
  v17 = v13;
  v18 = v14;
  v19 = UnityEngine_GameObject__get_transform(v15, 0LL);
  if ( !v19 )
    goto LABEL_21;
  v34.fields.y = v17;
  v34.fields.z = v18;
  v34.fields.x = v16 + 0.05;
  UnityEngine_Transform__set_position(v19, v34, 0LL);
  v21 = this->fields.itemWindow;
  if ( !v21 )
    goto LABEL_21;
  v22 = v21->fields.itemObjectList;
  if ( !v22 )
    goto LABEL_21;
  if ( v22->fields._size >= 8 )
  {
    v23 = this->fields.addItemSvtAnimationObj;
    if ( v23 )
    {
      v24 = UnityEngine_GameObject__get_transform(v23, 0LL);
      if ( v24 )
      {
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_localPosition(v24, 0LL);
        v28 = this->fields.addItemSvtAnimationObj;
        if ( v28 )
        {
          v29 = v25;
          v30 = v26;
          v31 = v27;
          v32 = UnityEngine_GameObject__get_transform(v28, 0LL);
          if ( v32 )
          {
            v35.fields.y = v30 + 9.0;
            v35.fields.x = v29;
            v35.fields.z = v31;
            UnityEngine_Transform__set_localPosition(v32, v35, 0LL);
            goto LABEL_20;
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_20:
  v33 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v20);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FA3EC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flg);
    sub_B16FFC(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FA3EC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v11, 0LL);
}


void __fastcall BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  BattleViewItemlistComponent_o *itemWindow; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3EF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA3EF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3ED & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080, method);
    byte_40FA3ED = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080, 0LL);
}


void __fastcall BattleResultItemComponent__endItemDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3E9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080, method);
    byte_40FA3E9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080, 0LL);
}


void __fastcall BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_40FA3D7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9268, method);
    byte_40FA3D7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9268, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL) )
  {
    sub_B170D4();
  }
  BattleViewItemlistComponent__setShow(itemWindow, 0LL);
}


BattleDropItem_o *__fastcall BattleResultItemComponent__getNewDrop(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *newDroplist; // x0
  BattleDropItem_o *v6; // x19

  if ( (byte_40FA3F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v4);
    byte_40FA3F0 = 1;
  }
  newDroplist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  v6 = (BattleDropItem_o *)newDroplist->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    newDroplist,
    0,
    (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FA3E8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flg);
    sub_B16FFC(&Method_BattleResultItemComponent_endItemDialogCallBack__, v4);
    sub_B16FFC(&Method_BattleResultItemComponent_itemDialogCallBack__, v5);
    byte_40FA3E8 = 1;
  }
  v6 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B17004(Method_BattleResultItemComponent_itemDialogCallBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  itemDialog = this->fields.itemDialog;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_B170D4();
  ItemDetailInfoComponent__Close_28918100(itemDialog, v13, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine(
        BattleResultItemComponent_o *this,
        UnityEngine_GameObject_o *itemIconEffectObj,
        BattleDropItemComponent_o *dropItem,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40FA3E1 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo, itemIconEffectObj);
    byte_40FA3E1 = 1;
  }
  v7 = sub_B170CC(
         BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_TypeInfo,
         itemIconEffectObj,
         dropItem,
         method,
         v4);
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__58___ctor(
    (BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = itemIconEffectObj;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 32),
    (System_Int32_array **)itemIconEffectObj,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  *(_QWORD *)(v7 + 40) = dropItem;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)dropItem, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattleResultItemComponent__setCondensedScale(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *getTitleLabel; // x20
  UILabel_o *getBoostLabel; // x0

  if ( (byte_40FA3F2 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultItemComponent_TypeInfo, method);
    byte_40FA3F2 = 1;
  }
  getTitleLabel = this->fields.getTitleLabel;
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v36; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x0
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v39; // x20
  __int64 IsEventPoint; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x8
  UserEventPointEntity_o *v44; // x8
  UserEventPointEntity_o *v45; // x8
  int64_t v46; // x25
  __int64 v47; // x26
  const MethodInfo *v48; // x3
  UserEventPointEntity_o *v49; // x8
  int64_t v50; // x22
  const MethodInfo *v51; // x3
  UserEventPointEntity_o *v52; // x8
  WebViewManager_o *v53; // x0
  WarQuestSelectionMaster_o *v54; // x0
  UserEventRaidMaster_o *v55; // x21
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  int64_t TotalDamagePoint; // x21
  BalanceConfig_c *v58; // x8
  int64_t UserRaidDamagePointMax; // x23
  int64_t v60; // x21
  int64_t v61; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  BattleResultItemComponent_c *v68; // x0
  System_String_o *DP_SP_BASE_NAME; // x21
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  System_String_o *v73; // x21
  UIAtlas_o *v74; // x0
  BetterList_string__o *v75; // x0
  BattleResultItemComponent_c *v76; // x0
  UISprite_o *v77; // x0
  WebViewManager_o *v78; // x0
  EventMaster_o *v79; // x0
  UISprite_o *eventDamageIconSprite; // x21
  int32_t v81; // w20
  UnityEngine_GameObject_o *rootEventPoint; // x0
  UILabel_o *getEventPointLabel; // x23
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  UILabel_o *nowEventPointLabel; // x23
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  UISprite_o *eventIconSprite; // x23
  int32_t pointImageId; // w24
  UILabel_o *getTitleLabel; // x23
  BattleResultItemComponent_c *v92; // x0
  int32_t *p_EP_GET_FONT_BOOSTED; // x8
  UnityEngine_Component_o *v94; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultItemComponent_c *v96; // x8
  UnityEngine_GameObject_o *v97; // x23
  float *p_EP_GET_POSY_NORMAL; // x8
  BattleResultItemComponent_c *v99; // x0
  System_String_o *EP_GET_LOCALE_KEY; // x23
  System_String_o *v101; // x0
  System_String_o *v102; // x23
  BattleResultItemComponent_c *v103; // x0
  UILabel_o *v104; // x24
  System_String_o *v105; // x0
  UILabel_o *getBoostLabel; // x23
  System_String_o *v107; // x24
  Il2CppObject *v108; // x0
  System_String_o *v109; // x1
  BattleResultItemComponent_c *v110; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v112; // x0
  System_String_o *v113; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  System_String_o *v115; // x21
  UIAtlas_o *mAtlas; // x0
  BetterList_string__o *ListOfSprites; // x0
  BattleResultItemComponent_c *v118; // x0
  UISprite_o *v119; // x0
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  UnityEngine_Component_o *v121; // x0
  UnityEngine_GameObject_o *v122; // x21
  const MethodInfo *v123; // x3
  bool IsShowEventPointMax; // w0
  int64_t v125; // [xsp+8h] [xbp-68h] BYREF
  __int64 v126; // [xsp+10h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_40FA3DA & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&BalanceConfig_TypeInfo, v16);
    sub_B16FFC(&BattleResultItemComponent_TypeInfo, v17);
    sub_B16FFC(&Method_BetterList_string__Contains__, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v21);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v22);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v23);
    sub_B16FFC(&long_TypeInfo, v24);
    sub_B16FFC(&LocalizationManager_TypeInfo, v25);
    sub_B16FFC(&System_Math_TypeInfo, v26);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v27);
    sub_B16FFC(&float_TypeInfo, v28);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B16FFC(&StringLiteral_2487, v30);
    sub_B16FFC(&StringLiteral_23395, v31);
    sub_B16FFC(&StringLiteral_1, v32);
    sub_B16FFC(&StringLiteral_691, v33);
    byte_40FA3DA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_134;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         MasterData_WarQuestSelectionMaster,
         eventId,
         (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
  {
    v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v36 )
      goto LABEL_134;
    v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v36,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !v37 )
      goto LABEL_134;
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v37,
                                      eventId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      v39 = Entity;
      IsEventPoint = EventDetailEntity__IsEventPoint(Entity, 0LL);
      if ( (IsEventPoint & 1) != 0 && !isNotDisplayEventPoint )
      {
        if ( oldUsrPoint && (v43 = *(_QWORD *)&oldUsrPoint->max_length) != 0 )
        {
          if ( !(_DWORD)v43 )
            goto LABEL_135;
          v44 = oldUsrPoint->m_Items[0];
          if ( !v44 )
            goto LABEL_134;
          if ( !v44->fields.groupId )
          {
            IsEventPoint = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
            if ( !oldUsrPoint->max_length )
              goto LABEL_135;
            v45 = oldUsrPoint->m_Items[0];
            if ( !v45 )
              goto LABEL_134;
            v46 = IsEventPoint;
            v47 = IsEventPoint - v45->fields.value;
            if ( IsEventPoint > 0 || v47 >= 1 )
            {
              IsEventPoint = EventDetailEntity__IsEventPointByQp(v39, 0LL);
              if ( (IsEventPoint & 1) != 0 )
              {
                if ( !oldUsrPoint->max_length )
                  goto LABEL_135;
                v49 = oldUsrPoint->m_Items[0];
                if ( !v49 )
                  goto LABEL_134;
                v50 = v49->fields.value + countQp;
                if ( BattleResultItemComponent__GetIsShowEventPointMax(this, v39, v46, v48) )
                {
                  IsEventPoint = BattleResultItemComponent__GetIsShowEventPointMax(this, v39, v50, v51);
                  if ( (IsEventPoint & 1) != 0 )
                    v50 = v46;
                  if ( oldUsrPoint->max_length )
                  {
                    v52 = oldUsrPoint->m_Items[0];
                    if ( !v52 )
                      goto LABEL_134;
                    v47 = v50 - v52->fields.value;
                    goto LABEL_65;
                  }
LABEL_135:
                  sub_B17100(IsEventPoint, v41, v42);
                  sub_B170A0();
                }
                v47 = countQp;
              }
              else
              {
                v50 = v46;
              }
LABEL_65:
              getEventPointLabel = this->fields.getEventPointLabel;
              v126 = v47;
              v84 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v126);
              v85 = System_String__Format((System_String_o *)StringLiteral_691, v84, 0LL);
              if ( !getEventPointLabel )
                goto LABEL_134;
              UILabel__set_text(getEventPointLabel, v85, 0LL);
              nowEventPointLabel = this->fields.nowEventPointLabel;
              v125 = v50;
              v87 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v125);
              v88 = System_String__Format((System_String_o *)StringLiteral_23395, v87, 0LL);
              if ( !nowEventPointLabel )
                goto LABEL_134;
              UILabel__set_text(nowEventPointLabel, v88, 0LL);
              CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0LL);
              CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0LL);
              eventIconSprite = this->fields.eventIconSprite;
              pointImageId = v39->fields.pointImageId;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetItem(eventIconSprite, pointImageId, 0LL);
              getTitleLabel = this->fields.getTitleLabel;
              v92 = BattleResultItemComponent_TypeInfo;
              if ( boostRate > 0 )
              {
                if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  v92 = BattleResultItemComponent_TypeInfo;
                }
                p_EP_GET_FONT_BOOSTED = &v92->static_fields->EP_GET_FONT_BOOSTED;
                if ( !getTitleLabel )
                  goto LABEL_134;
                goto LABEL_80;
              }
              if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                v92 = BattleResultItemComponent_TypeInfo;
              }
              p_EP_GET_FONT_BOOSTED = &v92->static_fields->EP_GET_FONT_NORMAL;
              if ( getTitleLabel )
              {
LABEL_80:
                UILabel__set_fontSize(getTitleLabel, *p_EP_GET_FONT_BOOSTED, 0LL);
                v94 = (UnityEngine_Component_o *)this->fields.getTitleLabel;
                if ( !v94 )
                  goto LABEL_134;
                gameObject = UnityEngine_Component__get_gameObject(v94, 0LL);
                v96 = BattleResultItemComponent_TypeInfo;
                v97 = gameObject;
                if ( boostRate <= 0 )
                {
                  if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v96 = BattleResultItemComponent_TypeInfo;
                  }
                  p_EP_GET_POSY_NORMAL = &v96->static_fields->EP_GET_POSY_NORMAL;
                }
                else
                {
                  if ( (WORD1(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v96 = BattleResultItemComponent_TypeInfo;
                  }
                  p_EP_GET_POSY_NORMAL = &v96->static_fields->EP_GET_POSY_BOOSTED;
                }
                GameObjectExtensions__SetLocalPositionY(v97, *p_EP_GET_POSY_NORMAL, 0LL);
                v99 = BattleResultItemComponent_TypeInfo;
                if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  v99 = BattleResultItemComponent_TypeInfo;
                }
                EP_GET_LOCALE_KEY = v99->static_fields->EP_GET_LOCALE_KEY;
                v101 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                v102 = System_String__Concat_43743732(EP_GET_LOCALE_KEY, v101, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                if ( !LocalizationManager__ContainsKey(v102, 0LL) )
                {
                  v103 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v103 = BattleResultItemComponent_TypeInfo;
                  }
                  v102 = v103->static_fields->EP_GET_LOCALE_KEY;
                }
                v104 = this->fields.getTitleLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v105 = LocalizationManager__Get(v102, 0LL);
                if ( !v104 )
                  goto LABEL_134;
                UILabel__set_text(v104, v105, 0LL);
                getBoostLabel = this->fields.getBoostLabel;
                if ( boostRate <= 0 )
                {
                  v109 = (System_String_o *)StringLiteral_1;
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
                  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_2487, 0LL);
                  *(float *)&v126 = (float)((float)boostRate / 1000.0) + 1.0;
                  v108 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v126);
                  v109 = System_String__Format(v107, v108, 0LL);
                  if ( !getBoostLabel )
                    goto LABEL_134;
                }
                UILabel__set_text(getBoostLabel, v109, 0LL);
                v110 = BattleResultItemComponent_TypeInfo;
                if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                  v110 = BattleResultItemComponent_TypeInfo;
                }
                EP_SP_BASE_NAME = v110->static_fields->EP_SP_BASE_NAME;
                v112 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                v113 = System_String__Concat_43743732(EP_SP_BASE_NAME, v112, 0LL);
                eventPointBgSprite = this->fields.eventPointBgSprite;
                if ( !eventPointBgSprite )
                  goto LABEL_134;
                v115 = v113;
                mAtlas = eventPointBgSprite->fields.mAtlas;
                if ( !mAtlas )
                  goto LABEL_134;
                ListOfSprites = UIAtlas__GetListOfSprites(mAtlas, 0LL);
                if ( !ListOfSprites )
                  goto LABEL_134;
                if ( !BetterList_string___Contains(
                        ListOfSprites,
                        v115,
                        (const MethodInfo_2D367D8 *)Method_BetterList_string__Contains__) )
                {
                  v118 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v118 = BattleResultItemComponent_TypeInfo;
                  }
                  v115 = v118->static_fields->EP_SP_BASE_NAME;
                }
                v119 = this->fields.eventPointBgSprite;
                if ( !v119 )
                  goto LABEL_134;
                UISprite__set_spriteName(v119, v115, 0LL);
                eventPointMaxSprite = (UnityEngine_Object_o *)this->fields.eventPointMaxSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(eventPointMaxSprite, 0LL, 0LL) )
                {
                  v121 = (UnityEngine_Component_o *)this->fields.eventPointMaxSprite;
                  if ( !v121 )
                    goto LABEL_134;
                  v122 = UnityEngine_Component__get_gameObject(v121, 0LL);
                  IsShowEventPointMax = BattleResultItemComponent__GetIsShowEventPointMax(this, v39, v50, v123);
                  if ( !v122 )
                    goto LABEL_134;
                  UnityEngine_GameObject__SetActive(v122, IsShowEventPointMax, 0LL);
                }
                rootEventPoint = this->fields.rootEventPoint;
                if ( !rootEventPoint )
                  goto LABEL_134;
                goto LABEL_132;
              }
LABEL_134:
              sub_B170D4();
            }
          }
        }
        else if ( (addDamagePoint & 0x8000000000000000LL) == 0 )
        {
          v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v53 )
            goto LABEL_134;
          v54 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                  (DataManager_o *)v53,
                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          if ( v54 )
          {
            v55 = (UserEventRaidMaster_o *)v54;
            rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0LL, 0LL) )
            {
              TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v55, eventId, 0LL);
              v58 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v58 = BalanceConfig_TypeInfo;
              }
              UserRaidDamagePointMax = v58->static_fields->UserRaidDamagePointMax;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              v60 = System_Math__Min_44464240(TotalDamagePoint, UserRaidDamagePointMax, 0LL);
              v61 = System_Math__Min_44464240(
                      addDamagePoint,
                      BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax,
                      0LL);
              getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
              v126 = v61;
              v63 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v126);
              v64 = System_String__Format((System_String_o *)StringLiteral_691, v63, 0LL);
              if ( getEventDamagePointLabel )
              {
                UILabel__set_text(getEventDamagePointLabel, v64, 0LL);
                nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
                v125 = v60;
                v66 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v125);
                v67 = System_String__Format((System_String_o *)StringLiteral_23395, v66, 0LL);
                if ( nowEventDamagePointLabel )
                {
                  UILabel__set_text(nowEventDamagePointLabel, v67, 0LL);
                  v68 = BattleResultItemComponent_TypeInfo;
                  if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v68 = BattleResultItemComponent_TypeInfo;
                  }
                  DP_SP_BASE_NAME = v68->static_fields->DP_SP_BASE_NAME;
                  v70 = System_Int32__ToString((int32_t)&eventIda, 0LL);
                  v71 = System_String__Concat_43743732(DP_SP_BASE_NAME, v70, 0LL);
                  eventDamageBGSprite = this->fields.eventDamageBGSprite;
                  if ( eventDamageBGSprite )
                  {
                    v73 = v71;
                    v74 = eventDamageBGSprite->fields.mAtlas;
                    if ( v74 )
                    {
                      v75 = UIAtlas__GetListOfSprites(v74, 0LL);
                      if ( v75 )
                      {
                        if ( !BetterList_string___Contains(
                                v75,
                                v73,
                                (const MethodInfo_2D367D8 *)Method_BetterList_string__Contains__) )
                        {
                          v76 = BattleResultItemComponent_TypeInfo;
                          if ( (BYTE3(BattleResultItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                            v76 = BattleResultItemComponent_TypeInfo;
                          }
                          v73 = v76->static_fields->DP_SP_BASE_NAME;
                        }
                        v77 = this->fields.eventDamageBGSprite;
                        if ( v77 )
                        {
                          UISprite__set_spriteName(v77, v73, 0LL);
                          v78 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                          if ( v78 )
                          {
                            v79 = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)v78,
                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
                            if ( v79 )
                            {
                              EventMaster__GetRaidEventImageId(v79, eventIda, 0LL);
                              eventDamageIconSprite = this->fields.eventDamageIconSprite;
                              v81 = v39->fields.pointImageId;
                              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !AtlasManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              }
                              AtlasManager__SetItem(eventDamageIconSprite, v81, 0LL);
                              rootEventPoint = this->fields.rootEventDamagePoint;
                              if ( rootEventPoint )
                              {
LABEL_132:
                                UnityEngine_GameObject__SetActive(rootEventPoint, 1, 0LL);
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
  __int64 v53; // x3
  __int64 v54; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x19
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_List_XWeaponTrail_Element__o **v62; // x28
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Collections_Generic_List_XWeaponTrail_Element__o *v67; // x21
  BattleResultItemComponent___c_c *v68; // x0
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__48_0; // x19
  Il2CppObject *v71; // x27
  struct BattleResultItemComponent___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  _DWORD *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0
  __int64 v87; // x1
  UserEventEntity_array *v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  __int64 v91; // x19
  __int64 v92; // x8
  int v93; // w9
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v94; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v95; // x19
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  __int64 v102; // x23
  __int64 v103; // x27
  __int64 v104; // x8
  struct BattleDropItem_array *gifts; // x8
  int max_length; // w12
  __int64 v107; // x9
  BattleDropItem_o *v108; // x12
  System_Int32_array **voiceIds; // x1
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v120; // x21
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  BattleResultItemComponent___c_c *v125; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v126; // x24
  struct BattleResultItemComponent___c_StaticFields *v127; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__48_2; // x19
  Il2CppObject *v129; // x25
  struct BattleResultItemComponent___c_StaticFields *v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Collections_Generic_IEnumerable_T__o *v137; // x0
  BattleViewItemlistComponent_o *itemWindow; // x19
  BattleDropItem_array *v139; // x21
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  __int64 v143; // x4
  BattleDropItemComponent_ClickDelegate_o *v144; // x24
  BattleViewItemlistComponent_o *v145; // x0
  const MethodInfo *v146; // x1
  const MethodInfo *v147; // x1
  const MethodInfo *v148; // x1
  UserGameEntity_o *SelfUserGame; // x24
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v152; // x28
  int32_t v153; // w27
  BattleDropItem_o *current; // x19
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w8
  int64_t v157; // x4
  signed int v158; // w8
  signed int v159; // w19
  int32_t conquestRewardQp; // w21
  EventConquestInfo_o *v161; // x22
  int v162; // w8
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-F8h]
  const MethodInfo *v164; // [xsp+18h] [xbp-E8h]
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **v167; // [xsp+50h] [xbp-B0h]
  BattleResultItemComponent_o *v168; // [xsp+58h] [xbp-A8h]
  int32_t eventIda; // [xsp+64h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_T__o v170; // [xsp+68h] [xbp-98h] BYREF
  int v171; // [xsp+88h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v172; // [xsp+90h] [xbp-70h] BYREF

  if ( (byte_40FA3D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Find_DropUpInfo___, drop);
    sub_B16FFC(&BattleDropItem_TypeInfo, v23);
    sub_B16FFC(&Method_BattleResultItemComponent_setShowConf__, v24);
    sub_B16FFC(&BattleDropItemComponent_ClickDelegate_TypeInfo, v25);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v26);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__Insert__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v38);
    sub_B16FFC(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v39);
    sub_B16FFC(&Method_System_Predicate_BattleDropItem___ctor__, v40);
    sub_B16FFC(&Method_System_Predicate_DropUpInfo___ctor__, v41);
    sub_B16FFC(&System_Predicate_BattleDropItem__TypeInfo, v42);
    sub_B16FFC(&System_Predicate_DropUpInfo__TypeInfo, v43);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44);
    sub_B16FFC(&Method_BattleResultItemComponent___c__setResultData_b__48_0__, v45);
    sub_B16FFC(&Method_BattleResultItemComponent___c__setResultData_b__48_2__, v46);
    sub_B16FFC(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__, v47);
    sub_B16FFC(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo, v48);
    sub_B16FFC(&BattleResultItemComponent___c_TypeInfo, v49);
    byte_40FA3D8 = 1;
  }
  memset(&v172, 0, sizeof(v172));
  v171 = 0;
  v50 = sub_B170CC(
          BattleResultItemComponent___c__DisplayClass48_0_TypeInfo,
          drop,
          *(_QWORD *)&getqp,
          *(_QWORD *)&originalGetQp,
          oldGame);
  BattleResultItemComponent___c__DisplayClass48_0___ctor((BattleResultItemComponent___c__DisplayClass48_0_o *)v50, 0LL);
  this->fields.g_eventId = eventId;
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleDropItem__TypeInfo,
                                                                                                  v51,
                                                                                                  v52,
                                                                                                  v53,
                                                                                                  v54);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v50 )
    goto LABEL_87;
  *(_QWORD *)(v50 + 16) = v55;
  v62 = (System_Collections_Generic_List_XWeaponTrail_Element__o **)(v50 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v50 + 16), (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  if ( !*(_QWORD *)(v50 + 16) )
    goto LABEL_87;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    *(System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v50 + 16),
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  v67 = *v62;
  v68 = BattleResultItemComponent___c_TypeInfo;
  if ( (BYTE3(BattleResultItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
    v68 = BattleResultItemComponent___c_TypeInfo;
  }
  static_fields = v68->static_fields;
  _9__48_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleDropItem__TypeInfo,
                                                                          v63,
                                                                          v64,
                                                                          v65,
                                                                          v66);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__48_0,
      v71,
      Method_BattleResultItemComponent___c__setResultData_b__48_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleDropItem___ctor__);
    v72 = BattleResultItemComponent___c_TypeInfo->static_fields;
    v72->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)_9__48_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v72->__9__48_0,
      (System_Int32_array **)_9__48_0,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  if ( !v67 )
    goto LABEL_87;
  eventIda = eventId;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v67,
          (System_Predicate_T__o *)_9__48_0,
          (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.newDroplist,
    (System_Int32_array **)All,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  if ( getqp >= 1 )
  {
    v91 = sub_B170CC(BattleDropItem_TypeInfo, v87, v88, v89, v90);
    BattleDropItem___ctor((BattleDropItem_o *)v91, 0LL);
    if ( !v91 )
      goto LABEL_87;
    *(_QWORD *)(v91 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v91, getqp, originalGetQp, 0LL);
    if ( !*v62 )
      goto LABEL_87;
    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
      *v62,
      0,
      (XWeaponTrail_Element_o *)v91,
      (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  p_newDroplist = &this->fields.newDroplist;
  v167 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v50 + 16);
  v168 = this;
  if ( dropupinfos )
  {
    v92 = *(_QWORD *)(v50 + 16);
    *(_DWORD *)(v50 + 24) = 0;
    if ( !v92 )
      goto LABEL_87;
    v93 = 0;
    v94 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v50 + 32);
    while ( v93 < *(_DWORD *)(v92 + 24) )
    {
      v95 = *v94;
      if ( !*v94 )
      {
        v95 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_DropUpInfo__TypeInfo,
                                                                         v87,
                                                                         v88,
                                                                         v89,
                                                                         v90);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v95,
          (Il2CppObject *)v50,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_DropUpInfo___ctor__);
        *(_QWORD *)(v50 + 32) = v95;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v50 + 32),
          (System_Int32_array **)v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
      }
      USFGOPlayStandardCutInLimitCount_OverwriteCutIn = System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)dropupinfos,
                                                          (System_Predicate_T__o *)v95,
                                                          (const MethodInfo_20441E8 *)Method_System_Array_Find_DropUpInfo___);
      if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
      {
        v102 = *(_QWORD *)(v50 + 16);
        if ( !v102 )
          goto LABEL_87;
        v103 = *(int *)(v50 + 24);
        if ( *(_DWORD *)(v102 + 24) <= (unsigned int)v103 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v104 = *(_QWORD *)(*(_QWORD *)(v102 + 16) + 8 * v103 + 32);
        if ( !v104 )
          goto LABEL_87;
        *(_DWORD *)(v104 + 72) = USFGOPlayStandardCutInLimitCount_OverwriteCutIn[5];
      }
      v92 = *(_QWORD *)(v50 + 16);
      v93 = *(_DWORD *)(v50 + 24) + 1;
      *(_DWORD *)(v50 + 24) = v93;
      if ( !v92 )
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
        v107 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v107 >= max_length )
          {
LABEL_89:
            sub_B17100(USFGOPlayStandardCutInLimitCount_OverwriteCutIn, v87, v88);
            sub_B170A0();
          }
          v108 = gifts->m_Items[v107];
          if ( !v108 )
            break;
          v108->fields.isAddReward = 1;
          max_length = gifts->max_length;
          if ( (int)++v107 >= max_length )
            goto LABEL_39;
        }
LABEL_87:
        sub_B170D4();
      }
LABEL_39:
      if ( !*v167 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        *v167,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      v168->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = (System_Int32_array **)rewardBonus->fields.voiceIds;
      v168->fields.voiceIds = (struct System_String_array *)voiceIds;
      sub_B16F98((BattleServantConfConponent_o *)&v168->fields.voiceIds, voiceIds, v110, v111, v112, v113, v114, v115);
      v120 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_BattleDropItem__TypeInfo, v116, v117, v118, v119);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v120,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v120 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v120,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      v125 = BattleResultItemComponent___c_TypeInfo;
      v126 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)*p_newDroplist;
      if ( (BYTE3(BattleResultItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
        v125 = BattleResultItemComponent___c_TypeInfo;
      }
      v127 = v125->static_fields;
      _9__48_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v127->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( (BYTE3(v125->vtable._0_Equals.methodPtr) & 4) != 0 && !v125->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v125);
          v127 = BattleResultItemComponent___c_TypeInfo->static_fields;
        }
        v129 = (Il2CppObject *)v127->__9;
        _9__48_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                              System_Predicate_BattleDropItem__TypeInfo,
                                                                              v121,
                                                                              v122,
                                                                              v123,
                                                                              v124);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__48_2,
          v129,
          Method_BattleResultItemComponent___c__setResultData_b__48_2__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleDropItem___ctor__);
        v130 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v130->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v130->__9__48_2,
          (System_Int32_array **)_9__48_2,
          v131,
          v132,
          v133,
          v134,
          v135,
          v136);
      }
      v137 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v120,
                                                              (System_Predicate_T__o *)_9__48_2,
                                                              (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !v126 )
        goto LABEL_87;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        v126,
        v137,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  if ( !*v167 )
    goto LABEL_87;
  itemWindow = v168->fields.itemWindow;
  v139 = (BattleDropItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)*v167,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v144 = (BattleDropItemComponent_ClickDelegate_o *)sub_B170CC(
                                                      BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                      v140,
                                                      v141,
                                                      v142,
                                                      v143);
  BattleDropItemComponent_ClickDelegate___ctor(
    v144,
    (Il2CppObject *)v168,
    Method_BattleResultItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_87;
  BattleViewItemlistComponent__setListDataCustomColumn_23378520(
    itemWindow,
    v139,
    eventId,
    v144,
    v168->fields.itemColumnCount,
    0LL);
  v145 = v168->fields.itemWindow;
  if ( !v145 )
    goto LABEL_87;
  BattleViewItemlistComponent__setHide(v145, 0LL);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(v168, v146);
    BattleResultItemComponent__SetAddItemSvtAnimation(v168, v147);
    BattleResultItemComponent__SetAddItemIconEffect(v168, v148);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v167 )
    goto LABEL_87;
  v152 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v170,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*v167,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v172 = v170;
  v153 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v172,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__) )
  {
    current = (BattleDropItem_o *)v172.fields.current;
    if ( !v172.fields.current )
      sub_B170D4();
    BattleDropItem__isAutoSellItem((BattleDropItem_o *)v172.fields.current, 0LL);
    if ( current->fields.type == 2 )
    {
      if ( !v152 )
        sub_B170D4();
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v152,
                 current->fields.objectId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        sub_B170D4();
      bannerId = Entity->fields.bannerId;
      if ( bannerId == 1 || bannerId == 16 )
        v153 += BattleDropItem__getTotalNum(current, 0LL);
    }
    v153 += current->fields.num * current->fields.sellQp;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v172,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( !eventConquestInfos )
    goto LABEL_87;
  v158 = eventConquestInfos->max_length;
  if ( v158 < 1 )
  {
    conquestRewardQp = 0;
    if ( !viewGroupIds )
      goto LABEL_87;
  }
  else
  {
    v159 = 0;
    conquestRewardQp = 0;
    do
    {
      if ( v159 >= (unsigned int)v158 )
        goto LABEL_89;
      v161 = eventConquestInfos->m_Items[v159];
      if ( !v161 )
        goto LABEL_87;
      if ( v161->fields.type == 2 )
      {
        if ( !v152 )
          goto LABEL_87;
        USFGOPlayStandardCutInLimitCount_OverwriteCutIn = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                            v152,
                                                            v161->fields.objectId,
                                                            (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
        {
          v162 = USFGOPlayStandardCutInLimitCount_OverwriteCutIn[12];
          if ( v162 == 16 || v162 == 1 )
            conquestRewardQp += v161->fields.getNum;
        }
      }
      v158 = eventConquestInfos->max_length;
      ++v159;
    }
    while ( v159 < v158 );
    if ( !viewGroupIds )
      goto LABEL_87;
  }
  if ( *(_QWORD *)&viewGroupIds->max_length )
    BattleResultItemComponent__SetGroupEventRoot(
      v168,
      eventIda,
      v88,
      oldUsrPoint,
      v157,
      SelfUserGame,
      v153,
      viewGroupIds,
      conquestRewardQp,
      (const MethodInfo *)oldGamea);
  else
    BattleResultItemComponent__SetNomalRoot(
      v168,
      eventIda,
      oldUsrPoint,
      addDamagePoint,
      SelfUserGame,
      v153,
      boostRate,
      conquestRewardQp,
      firstClearRewardQp,
      oldGame,
      isNotDisplayEventPoint,
      v164);
}


void __fastcall BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3EA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9728, commandCodeId);
    byte_40FA3EA = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9728, 0LL);
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
    sub_B170D4();
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

  if ( (byte_40FA3E6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9734, *(_QWORD *)&itemId);
    byte_40FA3E6 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9734, 0LL);
}


void __fastcall BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3E2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9742, dropItem);
    byte_40FA3E2 = 1;
  }
  this->fields.tmp_userSvtId = 0LL;
  this->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0LL)
      ? (this->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (this->fields.tmp_svtId = dropItem->fields.objectId),
        (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9742, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ServantStatusDialog_EndDelegate_o *v16; // x22

  if ( (byte_40FA3EB & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultItemComponent_commandCodeDialogCallBack__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FA3EB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v11 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v16 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     v12,
                                                     v13,
                                                     v14,
                                                     v15),
        ServantStatusDialog_EndDelegate___ctor(
          v16,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v11) )
  {
    sub_B170D4();
  }
  CommonUI__OpenServantStatusDialog_18250552(v11, 0, (UserCommandCodeEntity_o *)Entity, v16, 0LL, 0LL);
}


void __fastcall BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v16; // x22

  if ( (byte_40FA3E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultItemComponent_itemDialogCallBack__, method);
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA3E7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   this->fields.tmp_itemId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v11 = (ItemEntity_o *)Entity,
        v16 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v12,
                                                          v13,
                                                          v14,
                                                          v15),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B170D4();
  }
  ItemDetailInfoComponent__Open(itemDialog, v11, v16, 50, 0LL);
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
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  int64_t tmp_userSvtId; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v14; // x22

  if ( (byte_40FA3E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultItemComponent_DialogCallBack__, method);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FA3E3 = 1;
  }
  v5 = this->fields.tmp_userSvtId < 1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v5 )
  {
    tmp_userSvtId = this->fields.tmp_userSvtId;
    v12 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v6, v7, v8, v9);
    ServantStatusDialog_EndDelegate___ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_18247068(Instance, 0, tmp_userSvtId, v12, 0LL, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  tmp_svtId = this->fields.tmp_svtId;
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v6, v7, v8, v9);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_18251308(Instance, 0, tmp_svtId, v14, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct BattleResultItemComponent_o *_4__this; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemObjectList; // x0
  struct System_Collections_Generic_List_Enumerator_GameObject__o *p__7__wrap1; // x21
  __int128 v12; // q0
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *current; // x0
  BattleDropItemComponent_o *Component_srcLineSprite; // x0
  struct BattleDropItem_o *itemData; // x8
  System_Collections_IEnumerator_o *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v23; // x20
  bool result; // w0
  BattleResultComponent_o *v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40F718F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v6);
    byte_40F718F = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &this->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B170D4();
    itemWindow = _4__this->fields.itemWindow;
    if ( !itemWindow )
      sub_B170D4();
    itemObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemWindow->fields.itemObjectList;
    if ( !itemObjectList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      itemObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v12 = *(_OWORD *)&v26.fields.list;
    this->fields.__7__wrap1.fields.current = (struct UnityEngine_GameObject_o *)v26.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v12;
    sub_B16F98(&this->fields.__7__wrap1, 0LL);
  }
  this->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = this->fields.__7__wrap1.fields.current;
    if ( !current )
      sub_B170D4();
    Component_srcLineSprite = (BattleDropItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             current,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_srcLineSprite )
      sub_B170D4();
    itemData = Component_srcLineSprite->fields.itemData;
    if ( !itemData )
      sub_B170D4();
    if ( itemData->fields.isAddReward )
    {
      if ( !_4__this )
        sub_B170D4();
      v17 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              _4__this,
              Component_srcLineSprite->fields.itemIconEffectObj,
              Component_srcLineSprite,
              0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, v17, 0LL);
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        sub_B170D4();
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v23 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v18, v19, v20, v21);
        UnityEngine_WaitForSeconds___ctor(v23, 0.01, 0LL);
        this->fields.__2__current = (Il2CppObject *)v23;
        sub_B16F98(&this->fields.__2__current, v23);
        result = 1;
        this->fields.__1__state = 1;
        return result;
      }
    }
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57____m__Finally1(this, v13);
  p__7__wrap1->fields.list = 0LL;
  *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
  p__7__wrap1->fields.current = 0LL;
  if ( !_4__this )
    sub_B170D4();
  v25 = _4__this->fields.parentComp;
  if ( !v25 )
    sub_B170D4();
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__57_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  if ( (byte_40F7190 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    byte_40F7190 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  struct BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v21; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_IEnumerator_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Random_o *v29; // x21
  struct System_String_array *voiceIds; // x8
  il2cpp_array_size_t v31; // w0
  struct BattleResultItemComponent___c__DisplayClass56_0_o *_8__1; // x8
  struct BattleResultItemComponent___c__DisplayClass56_0_o **p__8__1; // x25
  il2cpp_array_size_t v34; // w22
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  struct System_String_array *v41; // x8
  System_String_o *v42; // x21
  System_String_o *v43; // x22
  SeManager_c *v44; // x0
  Il2CppObject *v45; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v47; // x23
  struct BattleResultComponent_o *v48; // x8
  Il2CppObject **v49; // x19

  if ( (byte_40F7191 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&System_Random_TypeInfo, v6);
    sub_B16FFC(&SeManager_TypeInfo, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__, v9);
    sub_B16FFC(&BattleResultItemComponent___c__DisplayClass56_0_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_12683, v12);
    byte_40F7191 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    p__8__1 = &this->fields.__8__1;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state == 1 )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_32;
    }
    else
    {
      if ( _1__state )
        return 0;
      this->fields.__1__state = -1;
      v15 = (Il2CppObject *)sub_B170CC(BattleResultItemComponent___c__DisplayClass56_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor(v15, 0LL);
      this->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass56_0_o *)v15;
      sub_B16F98(&this->fields.__8__1, v15);
      if ( !_4__this )
        goto LABEL_32;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_32;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v21 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v16, v17, v18, v19);
        UnityEngine_WaitForSeconds___ctor(v21, 0.3, 0LL);
        this->fields.__2__current = (Il2CppObject *)v21;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(p__2__current, v21);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
    v24 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, v24, 0LL);
    v29 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, v25, v26, v27, v28);
    System_Random___ctor(v29, 0LL);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_32;
    if ( !v29 )
      goto LABEL_32;
    v31 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))v29->klass->vtable._6_Next.method)(
            v29,
            0LL,
            voiceIds->max_length,
            v29->klass->vtable._7_Next.methodPtr);
    p__8__1 = &this->fields.__8__1;
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_32;
    v34 = v31;
    _8__1->fields.IsVoiceComp = 0;
    v35 = System_Int32__ToString((int)_4__this + 264, 0LL);
    v36 = System_String__Concat_43743732((System_String_o *)StringLiteral_12683, v35, 0LL);
    v41 = _4__this->fields.voiceIds;
    if ( !v41 )
      goto LABEL_32;
    if ( v34 >= v41->max_length )
    {
      sub_B17100(v36, v37, v38);
      sub_B170A0();
    }
    v42 = v36;
    v43 = v41->m_Items[v34];
    v44 = SeManager_TypeInfo;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v44 = SeManager_TypeInfo;
    }
    v45 = (Il2CppObject *)*p__8__1;
    DEFAULT_VOLUME = v44->static_fields->DEFAULT_VOLUME;
    v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
    System_Action___ctor(
      v47,
      v45,
      Method_BattleResultItemComponent___c__DisplayClass56_0__PlayVoiceCoroutine_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playVoice_24824004(v42, v43, DEFAULT_VOLUME, v47, 0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_32;
  if ( (*p__8__1)->fields.IsVoiceComp )
  {
LABEL_29:
    ActionExtensions__Call(this->fields.callback, 0LL);
    return 0;
  }
  if ( !_4__this || (v48 = _4__this->fields.parentComp) == 0LL )
LABEL_32:
    sub_B170D4();
  if ( v48->fields.isAddRewardEffectSkip )
    goto LABEL_29;
  this->fields.__2__current = 0LL;
  v49 = &this->fields.__2__current;
  sub_B16F98(v49, 0LL);
  *((_DWORD *)v49 - 2) = 2;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__56_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_40F718D & 1) == 0 )
  {
    sub_B16FFC(&BattleResultItemComponent___c_TypeInfo, v1);
    byte_40F718D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleResultItemComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultItemComponent___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_28854740(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_28855136(s->fields.type, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_28854740(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_28855136(s->fields.type, 0LL);
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
  struct System_Collections_Generic_List_BattleDropItem__o *list; // x21
  __int64 i; // x20
  int32_t itemId; // w19
  BattleDropItem_o *v8; // x8

  if ( (byte_40F718E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, e);
    byte_40F718E = 1;
  }
  if ( !e )
    goto LABEL_9;
  list = this->fields.list;
  if ( !list )
    goto LABEL_9;
  i = this->fields.i;
  itemId = e->fields.itemId;
  if ( list->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v8 = list->fields._items->m_Items[i];
  if ( !v8 )
LABEL_9:
    sub_B170D4();
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  UnityEngine_Object_o *itemIconEffectObj; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Transform_o *v14; // x0
  int v15; // s0
  UnityEngine_WaitForSeconds_o *v18; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8
  UnityEngine_GameObject_o *root; // x0

  if ( (byte_40F7192 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_40F7192 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    dropItem = this->fields.dropItem;
    this->fields.__1__state = -1;
    if ( !dropItem )
      goto LABEL_20;
    root = dropItem->fields.root;
    if ( !root )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(root, 1, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    itemIconEffectObj = (UnityEngine_Object_o *)this->fields.itemIconEffectObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(itemIconEffectObj, 0LL, 0LL) )
      goto LABEL_15;
    v10 = this->fields.itemIconEffectObj;
    if ( v10 )
    {
      UnityEngine_GameObject__SetActive(v10, 1, 0LL);
      v11 = this->fields.itemIconEffectObj;
      if ( v11 )
      {
        transform = UnityEngine_GameObject__get_transform(v11, 0LL);
        if ( this->fields.dropItem )
        {
          v13 = transform;
          v14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.dropItem, 0LL);
          if ( v14 )
          {
            *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position(v14, 0LL);
            if ( v13 )
            {
              UnityEngine_Transform__set_position(v13, *(UnityEngine_Vector3_o *)&v15, 0LL);
LABEL_15:
              v18 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v6, v7, v8, v9);
              UnityEngine_WaitForSeconds___ctor(v18, 0.2333, 0LL);
              this->fields.__2__current = (Il2CppObject *)v18;
              p__2__current = &this->fields.__2__current;
              sub_B16F98(p__2__current, v18);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_20:
    sub_B170D4();
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__58_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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