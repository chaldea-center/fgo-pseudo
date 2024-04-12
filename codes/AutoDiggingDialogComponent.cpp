void __fastcall AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42B1D6A & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B1D6A = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__EndClose(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct System_Action_List_DiggingBlockComponent___o *closeCallbackFunc; // x20
  System_Collections_Generic_List_T__o *v10; // x1

  if ( (byte_42B1D68 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_List_DiggingBlockComponent___Invoke__);
    sub_B52984(&Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    byte_42B1D68 = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    v10 = BasicHelper__Shuffle_string_(
            (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
            (const MethodInfo_1A4482C *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)closeCallbackFunc,
      (System_Uri_o *)v10,
      (const MethodInfo_2627794 *)Method_System_Action_List_DiggingBlockComponent___Invoke__);
  }
}


System_Collections_Generic_List_DiggingBlockComponent__o *__fastcall AutoDiggingDialogComponent__GetActiveBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t blockId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B1D64 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_42B1D64 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_B52A5C(v7, v8);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v9 )
      break;
    if ( !v13.fields.current )
      sub_B52A5C(v9, v10);
    klass = v13.fields.current[4].klass;
    if ( !klass )
      sub_B52A5C(v9, v10);
    if ( LODWORD(klass->_1.namespaze) == blockId && !HIDWORD(klass->_1.namespaze) )
    {
      if ( !v6 )
        sub_B52A5C(v9, v10);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v6,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13.fields.current,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v6;
}


System_Collections_Generic_List_DiggingBlockComponent__o *__fastcall AutoDiggingDialogComponent__GetAutoDiggingBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        System_Collections_Generic_List_int__o *consumeList,
        int32_t userItemNum,
        int32_t *consumeTotalNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned __int64 v13; // x24
  unsigned __int64 size; // x8
  int32_t v15; // w9

  if ( (byte_42B1D65 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
    sub_B52984(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_42B1D65 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *consumeTotalNum = 0;
  if ( !blockList )
    goto LABEL_20;
  if ( blockList->fields._size >= 1 )
  {
    v13 = 0LL;
    while ( consumeList )
    {
      if ( v13 >= (unsigned int)consumeList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( userItemNum - consumeList->fields._items->m_Items[v13 + 1] >= 0 )
      {
        if ( v13 >= (unsigned int)blockList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)blockList->fields._items->m_Items[v13],
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
        size = (unsigned int)consumeList->fields._size;
        if ( v13 >= size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v15 = consumeList->fields._items->m_Items[v13 + 1];
        userItemNum -= v15;
        if ( size <= v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        *consumeTotalNum += v15;
      }
      if ( (__int64)++v13 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v10;
    }
LABEL_20:
    sub_B52A5C(v11, v12);
  }
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v10;
}


System_Collections_Generic_List_int__o *__fastcall AutoDiggingDialogComponent__GetDiggingConsumeList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x28
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  Il2CppClass *klass; // x8
  WarEntity_o *Entity; // x20
  WebViewManager_o *v14; // x0
  __int64 v15; // x1
  CommonConsumeMaster_o *v16; // x0
  __int64 v17; // x1
  CommonConsumeEntity_o *v18; // x0
  __int64 v19; // x1
  CommonConsumeEntity_o *v20; // x21
  _DWORD *monitor; // x8
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x8
  __int64 v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B1D63 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_B52984(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1D63 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_B52A5C(v5, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v28.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v9);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_B52A5C(MasterData_WarQuestSelectionMaster, v11);
    klass = current[4].klass;
    if ( !klass )
      sub_B52A5C(MasterData_WarQuestSelectionMaster, v11);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B52A5C(0LL, v11);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)klass->_1.namespaze,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v14 )
      sub_B52A5C(0LL, v15);
    v16 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v14,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_B52A5C(v16, v17);
    if ( !v16 )
      sub_B52A5C(0LL, v17);
    v18 = CommonConsumeMaster__GetEntity(v16, HIDWORD(Entity->fields.age), 1, 0LL);
    v20 = v18;
    if ( !v18 )
    {
      if ( !v4 )
        sub_B52A5C(0LL, v19);
      System_Collections_Generic_List_int___Add(
        v4,
        0,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    monitor = current[4].monitor;
    if ( monitor )
    {
      v22 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity->fields.longName,
              monitor[6],
              (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___);
      if ( (v22 & 0x80000000) != 0 )
      {
        if ( !v20 )
          sub_B52A5C(v22, v23);
        if ( !v4 )
          sub_B52A5C(v22, v23);
        goto LABEL_25;
      }
      v24 = *(_QWORD *)&Entity->fields.bannerId;
      if ( !v24 )
        sub_B52A5C(v22, v23);
      if ( (unsigned int)v22 >= *(_DWORD *)(v24 + 24) )
      {
        v26 = sub_B52A88(v22);
        sub_B52A28(v26, 0LL);
      }
      if ( !v20 )
        sub_B52A5C(v22, v23);
      if ( !v4 )
        sub_B52A5C(v22, v23);
      System_Collections_Generic_List_int___Add(
        v4,
        v20->fields.num + *(_DWORD *)(v24 + 4LL * (int)v22 + 32),
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    else
    {
      if ( !v20 )
        sub_B52A5C(v18, v19);
      if ( !v4 )
        sub_B52A5C(v18, v19);
LABEL_25:
      System_Collections_Generic_List_int___Add(
        v4,
        v20->fields.num,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v4;
}


void __fastcall AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__OnClickCloseBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B1D67 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1D67 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall AutoDiggingDialogComponent__OnClickDecideBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_activateMaskPanel; // x0
  System_Action_bool__o *activateMaskPanel; // x20
  System_Action_o *v11; // x20

  if ( (byte_42B1D66 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool__Invoke__);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AutoDiggingDialogComponent_EndClose__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1D66 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    p_activateMaskPanel = (BattleServantConfConponent_o *)&this->fields.activateMaskPanel;
    activateMaskPanel = this->fields.activateMaskPanel;
    if ( activateMaskPanel )
    {
      p_activateMaskPanel->klass = 0LL;
      sub_B52920(p_activateMaskPanel, 0LL, v3, v4, v5, v6, v7, v8);
      System_Action_bool___Invoke(activateMaskPanel, 1, (const MethodInfo_262384C *)Method_System_Action_bool__Invoke__);
    }
    v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__Open(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        System_Action_bool__o *setMask,
        System_Action_List_DiggingBlockComponent___o *closeCallback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int64_t Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  struct UISprite_array *itemIcon; // x8
  struct UISprite_array *v18; // x8
  int64_t v19; // x25
  int v20; // w22
  unsigned __int64 v21; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x27
  UserItemMaster_o *v23; // x28
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x20
  WebViewManager_o *v27; // x0
  __int64 v28; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v30; // x1
  Il2CppClass *klass; // x8
  WarEntity_o *v32; // x20
  WebViewManager_o *v33; // x0
  __int64 v34; // x1
  CommonConsumeMaster_o *v35; // x0
  __int64 v36; // x1
  CommonConsumeEntity_o *v37; // x0
  int32_t objectId; // w20
  const MethodInfo *v39; // x2
  int v40; // w8
  struct UISprite_array *v41; // x8
  UISprite_o *v42; // x21
  const MethodInfo *v43; // x2
  struct UISprite_array *consumeItemIcon; // x8
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v48; // x20
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v50; // x20
  System_String_o *v51; // x1
  struct UILabel_array *v52; // x8
  struct UILabel_array *v53; // x8
  __int64 v54; // x8
  UILabel_o *v55; // x20
  UILabel_o *ComponentInChildren_UILabel; // x23
  UILabel_o *consumeLabel; // x20
  UILabel_o *possessionLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *messageLabel; // x20
  __int64 *v62; // x8
  const MethodInfo *v63; // x2
  _BOOL8 v64; // x0
  __int64 v65; // x1
  struct UILabel_array *v66; // x8
  UIWidget_o *v67; // x20
  __int64 v68; // x0
  __int64 v69; // x1
  int v70; // s0
  int v74; // w22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Action_o *v87; // x20
  __int64 v88; // x0
  __int64 v89; // x0
  System_Collections_Generic_List_int__o *v92; // [xsp+18h] [xbp-E8h]
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+20h] [xbp-E0h]
  char v94; // [xsp+2Ch] [xbp-D4h]
  _BYTE v95[40]; // [xsp+30h] [xbp-D0h] BYREF
  int v96; // [xsp+58h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v97; // [xsp+60h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+7Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v99; // [xsp+80h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_42B1D60 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_AutoDiggingDialogComponent__Open_b__17_0__);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
    sub_B52984(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_4625/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/);
    sub_B52984(&StringLiteral_1770/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_B52984(&StringLiteral_4623/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/);
    sub_B52984(&StringLiteral_1772/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_1771/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/);
    sub_B52984(&StringLiteral_11179/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_B52984(&StringLiteral_11178/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    sub_B52984(&StringLiteral_1773/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/);
    sub_B52984(&StringLiteral_969/*"0"*/);
    byte_42B1D60 = 1;
  }
  entity = 0LL;
  memset(&v99, 0, sizeof(v99));
  consumeTotalNum = 0;
  memset(&v97, 0, sizeof(v97));
  v96 = 0;
  this->fields.state = 1;
  v92 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v92,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v7;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.autoDiggingBlockList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_113;
  Instance = (int64_t)AutoDiggingDialogComponent__SortActiveBlockList(
                        (AutoDiggingDialogComponent_o *)Instance,
                        blockList,
                        itemIcon->max_length,
                        v16);
  v18 = this->fields.itemIcon;
  if ( !v18 )
    goto LABEL_113;
  v94 = 0;
  v19 = Instance;
  v20 = 0;
  v21 = 0LL;
  while ( (__int64)v21 < (int)v18->max_length )
  {
    v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v22,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_113;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    if ( !blockList )
      goto LABEL_113;
    v23 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v95,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v99 = *(System_Collections_Generic_List_Enumerator_T__o *)v95;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v99,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v24 )
        break;
      current = v99.fields.current;
      if ( !v99.fields.current )
        sub_B52A5C(v24, v25);
      if ( v21 == LODWORD(v99.fields.current[5].klass) )
      {
        v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v27 )
          sub_B52A5C(0LL, v28);
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)v27,
                                                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        klass = current[4].klass;
        if ( !klass )
          sub_B52A5C(MasterData_WarQuestSelectionMaster, v30);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B52A5C(0LL, v30);
        v32 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                MasterData_WarQuestSelectionMaster,
                (int32_t)klass->_1.namespaze,
                (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v33 )
          sub_B52A5C(0LL, v34);
        v35 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v33,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v32 )
          sub_B52A5C(v35, v36);
        if ( !v35 )
          sub_B52A5C(0LL, v36);
        v37 = CommonConsumeMaster__GetEntity(v35, HIDWORD(v32->fields.age), 1, 0LL);
        if ( v37 )
        {
          objectId = v37->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    *(_DWORD *)&v95[4 * v20 + 24] = 201;
    v20 = ++v96;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v99,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    if ( v20 )
    {
      v40 = v20 - 1;
      if ( *(_DWORD *)&v95[4 * v20 + 20] == 201 )
      {
        --v20;
        v96 = v40;
      }
    }
    v41 = this->fields.itemIcon;
    if ( !v41 )
      goto LABEL_113;
    if ( v21 >= v41->max_length )
      goto LABEL_114;
    v42 = v41->m_Items[v21];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetItem(v42, objectId, v39);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_113;
    if ( v21 >= consumeItemIcon->max_length )
      goto LABEL_114;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v21], objectId, v43);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v23 )
      goto LABEL_113;
    Instance = UserItemMaster__TryGetEntity(v23, &entity, Instance, objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_113;
      if ( v21 >= *(unsigned int *)(v19 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      Instance = (int64_t)AutoDiggingDialogComponent__GetDiggingConsumeList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(*(_QWORD *)(v19 + 16)
                                                                                         + 8 * v21
                                                                                         + 32),
                            v45);
      if ( v21 >= *(unsigned int *)(v19 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !entity )
        goto LABEL_113;
      Instance = (int64_t)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(*(_QWORD *)(v19 + 16)
                                                                                         + 8 * v21
                                                                                         + 32),
                            (System_Collections_Generic_List_int__o *)Instance,
                            entity->fields.num,
                            &consumeTotalNum,
                            v46);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_113;
      if ( v21 >= itemNumLabel->max_length )
        goto LABEL_114;
      if ( !entity )
        goto LABEL_113;
      v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance;
      v48 = itemNumLabel->m_Items[v21];
      Instance = (int64_t)BasicHelper__ToCommaString(entity->fields.num, 0LL);
      if ( !v48 )
        goto LABEL_113;
      UILabel__set_text(v48, (System_String_o *)Instance, 0LL);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_113;
      if ( v21 >= consumeItemNumLabel->max_length )
        goto LABEL_114;
      v50 = consumeItemNumLabel->m_Items[v21];
      Instance = (int64_t)BasicHelper__ToCommaString(consumeTotalNum, 0LL);
      if ( !v50 )
        goto LABEL_113;
      v51 = (System_String_o *)Instance;
      Instance = (int64_t)v50;
    }
    else
    {
      v52 = this->fields.itemNumLabel;
      if ( !v52 )
        goto LABEL_113;
      if ( v21 >= v52->max_length )
      {
LABEL_114:
        v88 = sub_B52A88(Instance);
        sub_B52A28(v88, 0LL);
      }
      Instance = (int64_t)v52->m_Items[v21];
      if ( !Instance )
        goto LABEL_113;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_969/*"0"*/, 0LL);
      v53 = this->fields.consumeItemNumLabel;
      if ( !v53 )
        goto LABEL_113;
      if ( v21 >= v53->max_length )
        goto LABEL_114;
      Instance = (int64_t)v53->m_Items[v21];
      if ( !Instance )
        goto LABEL_113;
      v51 = (System_String_o *)StringLiteral_969/*"0"*/;
    }
    UILabel__set_text((UILabel_o *)Instance, v51, 0LL);
    if ( !v22 )
      goto LABEL_113;
    if ( v22->fields._size < 1 )
    {
      if ( !v19 )
        goto LABEL_113;
      if ( v21 >= *(unsigned int *)(v19 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v54 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 8 * v21 + 32);
      if ( !v54 )
        goto LABEL_113;
      if ( *(int *)(v54 + 24) >= 1 )
      {
        Instance = (int64_t)v92;
        if ( !v92 )
          goto LABEL_113;
        System_Collections_Generic_List_int___Add(
          v92,
          v21,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    else
    {
      Instance = (int64_t)*p_autoDiggingBlockList;
      if ( !*p_autoDiggingBlockList )
        goto LABEL_113;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
        (System_Collections_Generic_IEnumerable_T__o *)v22,
        (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v94 = 1;
    }
    v18 = this->fields.itemIcon;
    ++v21;
    if ( !v18 )
      goto LABEL_113;
  }
  Instance = (int64_t)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_113;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_113;
  Instance = (int64_t)UnityEngine_Component__GetComponentInChildren_UILabel_(
                        (UnityEngine_Component_o *)Instance,
                        1,
                        (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  if ( !this->fields.closeButton )
    goto LABEL_113;
  v55 = (UILabel_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0LL);
  if ( !Instance )
    goto LABEL_113;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)Instance,
                                  1,
                                  (const MethodInfo_1A4935C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68597576);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11179/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v55 )
    goto LABEL_113;
  UILabel__set_text(v55, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11178/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_113;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4623/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_113;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  possessionLabel = this->fields.possessionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4625/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0LL);
  if ( !possessionLabel )
    goto LABEL_113;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0LL);
  titleLabel = this->fields.titleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1772/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_113;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1771/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_113;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (v94 & 1) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v62 = &StringLiteral_1770/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v62 = &StringLiteral_1773/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)*v62, 0LL);
  if ( !messageLabel )
    goto LABEL_113;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v94 & 1, v63);
  Instance = (int64_t)v92;
  if ( !v92 )
    goto LABEL_113;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v95,
    v92,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v97 = *(System_Collections_Generic_List_Enumerator_int__o *)v95;
  while ( 1 )
  {
    v64 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v97,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v64 )
      break;
    v66 = this->fields.consumeItemNumLabel;
    if ( !v66 )
      sub_B52A5C(v64, v65);
    if ( v97.fields.current >= v66->max_length )
    {
      v89 = sub_B52A88(v64);
      sub_B52A28(v89, 0LL);
    }
    v67 = (UIWidget_o *)v66->m_Items[v97.fields.current];
    *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_red(0LL);
    if ( !v67 )
      sub_B52A5C(v68, v69);
    UIWidget__set_color(v67, *(UnityEngine_Color_o *)&v70, 0LL);
  }
  *(_DWORD *)&v95[4 * v20 + 24] = 711;
  v74 = ++v96;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v97,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v74 && *(_DWORD *)&v95[4 * v74 + 20] == 711 )
    v96 = v74 - 1;
  this->fields.activateMaskPanel = setMask;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
    (System_Int32_array **)setMask,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.closeCallbackFunc = closeCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
LABEL_113:
    sub_B52A5C(Instance, v15);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v87 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v87, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v87, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  unsigned int v6; // w19

  if ( (byte_42B1D61 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    byte_42B1D61 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_13;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              decideButton,
                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !decideButton )
    goto LABEL_13;
  ((void (__fastcall *)(UnityEngine_Component_o *, bool, void *))decideButton->klass[1]._1.namespaze)(
    decideButton,
    isEnable,
    decideButton->klass[1]._1.byval_arg.data);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_13;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              decideButton,
                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !decideButton )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  v6 = isEnable ? 0 : 3;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    decideButton,
                                                    (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_13:
    sub_B52A5C(decideButton, isEnable);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
    decideButton,
    v6,
    0LL,
    decideButton->klass[1]._1.interfaceOffsets);
}


System_Collections_Generic_List_List_DiggingBlockComponent___o *__fastcall AutoDiggingDialogComponent__SortActiveBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t blockKindNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  int v7; // w27
  int32_t v8; // w24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppClass *klass; // x9
  int v15; // w8
  _BYTE v17[28]; // [xsp+10h] [xbp-90h] BYREF
  int v18; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42B1D62 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
    byte_42B1D62 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v18 = 0;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v9,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_24;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v17,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v19 = *(System_Collections_Generic_List_Enumerator_T__o *)v17;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v19,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v12 )
          break;
        if ( !v19.fields.current )
          sub_B52A5C(v12, v13);
        if ( LODWORD(v19.fields.current[5].klass) == v8 )
        {
          klass = v19.fields.current[4].klass;
          if ( !klass )
            sub_B52A5C(v12, v13);
          if ( !HIDWORD(klass->_1.namespaze) )
          {
            if ( !v9 )
              sub_B52A5C(v12, v13);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v19.fields.current,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
          }
        }
      }
      *(_DWORD *)&v17[4 * v7 + 24] = 91;
      v7 = ++v18;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v19,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( v7 )
      {
        v15 = v7 - 1;
        if ( *(_DWORD *)&v17[4 * v7 + 20] == 91 )
        {
          --v7;
          v18 = v15;
        }
      }
      if ( !v6 )
LABEL_24:
        sub_B52A5C(v10, v11);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v6,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__);
      ++v8;
    }
    while ( v8 < blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v6;
}


void __fastcall AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42B1D6B & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    byte_42B1D6B = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_42B1D69 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1D69 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}