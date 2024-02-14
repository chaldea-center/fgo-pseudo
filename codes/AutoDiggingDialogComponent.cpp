void __fastcall AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_421677A & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_421677A = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__EndClose(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_Action_List_DiggingBlockComponent___o *closeCallbackFunc; // x20
  System_Collections_Generic_List_T__o *v11; // x1

  if ( (byte_4216778 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_List_DiggingBlockComponent___Invoke__, method);
    sub_B0D8A4(&Method_BasicHelper_Shuffle_DiggingBlockComponent___, v3);
    byte_4216778 = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    v11 = BasicHelper__Shuffle_string_(
            (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
            (const MethodInfo_1709CF8 *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)closeCallbackFunc,
      (System_Uri_o *)v11,
      (const MethodInfo_246EA50 *)Method_System_Action_List_DiggingBlockComponent___Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_DiggingBlockComponent__o *__fastcall AutoDiggingDialogComponent__GetActiveBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t blockId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v13; // x0
  _BOOL8 v14; // x0
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4216774 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v11);
    byte_4216774 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                  blockList,
                                                                                                  *(_QWORD *)&blockId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_B0D97C(v13);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields.current )
      sub_B0D97C(v14);
    klass = v17.fields.current[4].klass;
    if ( !klass )
      sub_B0D97C(v14);
    if ( LODWORD(klass->_1.namespaze) == blockId && !HIDWORD(klass->_1.namespaze) )
    {
      if ( !v12 )
        sub_B0D97C(v14);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v17.fields.current,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v12;
}


System_Collections_Generic_List_DiggingBlockComponent__o *__fastcall AutoDiggingDialogComponent__GetAutoDiggingBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        System_Collections_Generic_List_int__o *consumeList,
        int32_t userItemNum,
        int32_t *consumeTotalNum,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x23
  __int64 v16; // x0
  unsigned __int64 v17; // x24
  unsigned __int64 size; // x8
  int32_t v19; // w9

  if ( (byte_4216775 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, blockList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    byte_4216775 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                  blockList,
                                                                                                  consumeList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *consumeTotalNum = 0;
  if ( !blockList )
    goto LABEL_20;
  if ( blockList->fields._size >= 1 )
  {
    v17 = 0LL;
    while ( consumeList )
    {
      if ( v17 >= (unsigned int)consumeList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( userItemNum - consumeList->fields._items->m_Items[v17 + 1] >= 0 )
      {
        if ( v17 >= (unsigned int)blockList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v15 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)blockList->fields._items->m_Items[v17],
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
        size = (unsigned int)consumeList->fields._size;
        if ( v17 >= size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v19 = consumeList->fields._items->m_Items[v17 + 1];
        userItemNum -= v19;
        if ( size <= v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        *consumeTotalNum += v19;
      }
      if ( (__int64)++v17 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v15;
    }
LABEL_20:
    sub_B0D97C(v16);
  }
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v15;
}


System_Collections_Generic_List_int__o *__fastcall AutoDiggingDialogComponent__GetDiggingConsumeList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
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
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x19
  __int64 v16; // x0
  Il2CppObject *current; // x28
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  Il2CppClass *klass; // x8
  WarEntity_o *Entity; // x20
  WebViewManager_o *v22; // x0
  CommonConsumeMaster_o *v23; // x0
  CommonConsumeEntity_o *v24; // x0
  CommonConsumeEntity_o *v25; // x21
  _DWORD *monitor; // x8
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v30; // x0
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4216773 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, blockList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4216773 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    blockList,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_B0D97C(v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v32.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_B0D97C(MasterData_WarQuestSelectionMaster);
    klass = current[4].klass;
    if ( !klass )
      sub_B0D97C(MasterData_WarQuestSelectionMaster);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)klass->_1.namespaze,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v22 )
      sub_B0D97C(0LL);
    v23 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v22,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_B0D97C(v23);
    if ( !v23 )
      sub_B0D97C(0LL);
    v24 = CommonConsumeMaster__GetEntity(v23, HIDWORD(Entity->fields.age), 1, 0LL);
    v25 = v24;
    if ( !v24 )
    {
      if ( !v15 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_int___Add(
        v15,
        0,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
    monitor = current[4].monitor;
    if ( monitor )
    {
      v27 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity->fields.longName,
              monitor[6],
              (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
      if ( (v27 & 0x80000000) != 0 )
      {
        if ( !v25 )
          sub_B0D97C(v27);
        if ( !v15 )
          sub_B0D97C(v27);
        goto LABEL_25;
      }
      v28 = *(_QWORD *)&Entity->fields.bannerId;
      if ( !v28 )
        sub_B0D97C(v27);
      if ( (unsigned int)v27 >= *(_DWORD *)(v28 + 24) )
      {
        v30 = sub_B0D9A8(v27);
        sub_B0D948(v30, 0LL);
      }
      if ( !v25 )
        sub_B0D97C(v27);
      if ( !v15 )
        sub_B0D97C(v27);
      System_Collections_Generic_List_int___Add(
        v15,
        v25->fields.num + *(_DWORD *)(v28 + 4LL * (int)v27 + 32),
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
    else
    {
      if ( !v25 )
        sub_B0D97C(v24);
      if ( !v15 )
        sub_B0D97C(v24);
LABEL_25:
      System_Collections_Generic_List_int___Add(
        v15,
        v25->fields.num,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v15;
}


void __fastcall AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__OnClickCloseBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4216777 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216777 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleServantConfConponent_o *p_activateMaskPanel; // x0
  System_Action_bool__o *activateMaskPanel; // x20
  System_Action_o *v15; // x20

  if ( (byte_4216776 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__Invoke__, method);
    sub_B0D8A4(&System_Action_TypeInfo, v3);
    sub_B0D8A4(&Method_AutoDiggingDialogComponent_EndClose__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4216776 = 1;
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
      sub_B0D840(p_activateMaskPanel, 0LL, v7, v8, v9, v10, v11, v12);
      System_Action_bool___Invoke(activateMaskPanel, 1, (const MethodInfo_246AB08 *)Method_System_Action_bool__Invoke__);
    }
    v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
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
  __int64 v43; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int64_t Instance; // x0
  const MethodInfo *v52; // x3
  struct UISprite_array *itemIcon; // x8
  __int64 v54; // x1
  __int64 v55; // x2
  struct UISprite_array *v56; // x8
  int64_t v57; // x25
  int v58; // w22
  unsigned __int64 v59; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x27
  UserItemMaster_o *v61; // x28
  _BOOL8 v62; // x0
  Il2CppObject *current; // x20
  WebViewManager_o *v64; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  Il2CppClass *klass; // x8
  WarEntity_o *v67; // x20
  WebViewManager_o *v68; // x0
  CommonConsumeMaster_o *v69; // x0
  CommonConsumeEntity_o *v70; // x0
  int32_t objectId; // w20
  const MethodInfo *v72; // x2
  int v73; // w8
  struct UISprite_array *v74; // x8
  UISprite_o *v75; // x21
  const MethodInfo *v76; // x2
  struct UISprite_array *consumeItemIcon; // x8
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v81; // x20
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v83; // x20
  System_String_o *v84; // x1
  struct UILabel_array *v85; // x8
  struct UILabel_array *v86; // x8
  __int64 v87; // x8
  UILabel_o *v88; // x20
  UILabel_o *ComponentInChildren_UILabel; // x23
  UILabel_o *consumeLabel; // x20
  UILabel_o *possessionLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *messageLabel; // x20
  __int64 *v95; // x8
  const MethodInfo *v96; // x2
  _BOOL8 v97; // x0
  struct UILabel_array *v98; // x8
  UIWidget_o *v99; // x20
  __int64 v100; // x0
  int v101; // s0
  int v105; // w22
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  __int64 v118; // x1
  __int64 v119; // x2
  System_Action_o *v120; // x20
  __int64 v121; // x0
  __int64 v122; // x0
  System_Collections_Generic_List_int__o *v125; // [xsp+18h] [xbp-E8h]
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+20h] [xbp-E0h]
  char v127; // [xsp+2Ch] [xbp-D4h]
  _BYTE v128[40]; // [xsp+30h] [xbp-D0h] BYREF
  int v129; // [xsp+58h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v130; // [xsp+60h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+7Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v132; // [xsp+80h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_4216770 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, blockList);
    sub_B0D8A4(&AtlasManager_TypeInfo, v7);
    sub_B0D8A4(&Method_AutoDiggingDialogComponent__Open_b__17_0__, v8);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____67969000, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v12);
    sub_B0D8A4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__, v27);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_B0D8A4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v29);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v30);
    sub_B0D8A4(&NetworkManager_TypeInfo, v31);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B0D8A4(&StringLiteral_4601/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, v33);
    sub_B0D8A4(&StringLiteral_1758/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v34);
    sub_B0D8A4(&StringLiteral_4599/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v35);
    sub_B0D8A4(&StringLiteral_1760/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, v36);
    sub_B0D8A4(&StringLiteral_1759/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, v37);
    sub_B0D8A4(&StringLiteral_11119/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v38);
    sub_B0D8A4(&StringLiteral_11118/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v39);
    sub_B0D8A4(&StringLiteral_1761/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/, v40);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v41);
    byte_4216770 = 1;
  }
  entity = 0LL;
  memset(&v132, 0, sizeof(v132));
  consumeTotalNum = 0;
  memset(&v130, 0, sizeof(v130));
  v129 = 0;
  this->fields.state = 1;
  v125 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     blockList,
                                                     setMask);
  System_Collections_Generic_List_int____ctor(
    v125,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                  v42,
                                                                                                  v43);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v44;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.autoDiggingBlockList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_113;
  Instance = (int64_t)AutoDiggingDialogComponent__SortActiveBlockList(
                        (AutoDiggingDialogComponent_o *)Instance,
                        blockList,
                        itemIcon->max_length,
                        v52);
  v56 = this->fields.itemIcon;
  if ( !v56 )
    goto LABEL_113;
  v127 = 0;
  v57 = Instance;
  v58 = 0;
  v59 = 0LL;
  while ( (__int64)v59 < (int)v56->max_length )
  {
    v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                    v54,
                                                                                                    v55);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v60,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_113;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    if ( !blockList )
      goto LABEL_113;
    v61 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v128,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v132 = *(System_Collections_Generic_List_Enumerator_T__o *)v128;
    while ( 1 )
    {
      v62 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v132,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v62 )
        break;
      current = v132.fields.current;
      if ( !v132.fields.current )
        sub_B0D97C(v62);
      if ( v59 == LODWORD(v132.fields.current[5].klass) )
      {
        v64 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v64 )
          sub_B0D97C(0LL);
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)v64,
                                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        klass = current[4].klass;
        if ( !klass )
          sub_B0D97C(MasterData_WarQuestSelectionMaster);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B0D97C(0LL);
        v67 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                MasterData_WarQuestSelectionMaster,
                (int32_t)klass->_1.namespaze,
                (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v68 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v68 )
          sub_B0D97C(0LL);
        v69 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v68,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v67 )
          sub_B0D97C(v69);
        if ( !v69 )
          sub_B0D97C(0LL);
        v70 = CommonConsumeMaster__GetEntity(v69, HIDWORD(v67->fields.age), 1, 0LL);
        if ( v70 )
        {
          objectId = v70->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    *(_DWORD *)&v128[4 * v58 + 24] = 201;
    v58 = ++v129;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v132,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    if ( v58 )
    {
      v73 = v58 - 1;
      if ( *(_DWORD *)&v128[4 * v58 + 20] == 201 )
      {
        --v58;
        v129 = v73;
      }
    }
    v74 = this->fields.itemIcon;
    if ( !v74 )
      goto LABEL_113;
    if ( v59 >= v74->max_length )
      goto LABEL_114;
    v75 = v74->m_Items[v59];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetItem(v75, objectId, v72);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_113;
    if ( v59 >= consumeItemIcon->max_length )
      goto LABEL_114;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v59], objectId, v76);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v61 )
      goto LABEL_113;
    Instance = UserItemMaster__TryGetEntity(v61, &entity, Instance, objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v57 )
        goto LABEL_113;
      if ( v59 >= *(unsigned int *)(v57 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Instance = (int64_t)AutoDiggingDialogComponent__GetDiggingConsumeList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(*(_QWORD *)(v57 + 16)
                                                                                         + 8 * v59
                                                                                         + 32),
                            v78);
      if ( v59 >= *(unsigned int *)(v57 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !entity )
        goto LABEL_113;
      Instance = (int64_t)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(*(_QWORD *)(v57 + 16)
                                                                                         + 8 * v59
                                                                                         + 32),
                            (System_Collections_Generic_List_int__o *)Instance,
                            entity->fields.num,
                            &consumeTotalNum,
                            v79);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_113;
      if ( v59 >= itemNumLabel->max_length )
        goto LABEL_114;
      if ( !entity )
        goto LABEL_113;
      v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance;
      v81 = itemNumLabel->m_Items[v59];
      Instance = (int64_t)BasicHelper__ToCommaString(entity->fields.num, 0LL);
      if ( !v81 )
        goto LABEL_113;
      UILabel__set_text(v81, (System_String_o *)Instance, 0LL);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_113;
      if ( v59 >= consumeItemNumLabel->max_length )
        goto LABEL_114;
      v83 = consumeItemNumLabel->m_Items[v59];
      Instance = (int64_t)BasicHelper__ToCommaString(consumeTotalNum, 0LL);
      if ( !v83 )
        goto LABEL_113;
      v84 = (System_String_o *)Instance;
      Instance = (int64_t)v83;
    }
    else
    {
      v85 = this->fields.itemNumLabel;
      if ( !v85 )
        goto LABEL_113;
      if ( v59 >= v85->max_length )
      {
LABEL_114:
        v121 = sub_B0D9A8(Instance);
        sub_B0D948(v121, 0LL);
      }
      Instance = (int64_t)v85->m_Items[v59];
      if ( !Instance )
        goto LABEL_113;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_960/*"0"*/, 0LL);
      v86 = this->fields.consumeItemNumLabel;
      if ( !v86 )
        goto LABEL_113;
      if ( v59 >= v86->max_length )
        goto LABEL_114;
      Instance = (int64_t)v86->m_Items[v59];
      if ( !Instance )
        goto LABEL_113;
      v84 = (System_String_o *)StringLiteral_960/*"0"*/;
    }
    UILabel__set_text((UILabel_o *)Instance, v84, 0LL);
    if ( !v60 )
      goto LABEL_113;
    if ( v60->fields._size < 1 )
    {
      if ( !v57 )
        goto LABEL_113;
      if ( v59 >= *(unsigned int *)(v57 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v87 = *(_QWORD *)(*(_QWORD *)(v57 + 16) + 8 * v59 + 32);
      if ( !v87 )
        goto LABEL_113;
      if ( *(int *)(v87 + 24) >= 1 )
      {
        Instance = (int64_t)v125;
        if ( !v125 )
          goto LABEL_113;
        System_Collections_Generic_List_int___Add(
          v125,
          v59,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    else
    {
      Instance = (int64_t)*p_autoDiggingBlockList;
      if ( !*p_autoDiggingBlockList )
        goto LABEL_113;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
        (System_Collections_Generic_IEnumerable_T__o *)v60,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v127 = 1;
    }
    v56 = this->fields.itemIcon;
    ++v59;
    if ( !v56 )
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
                        (const MethodInfo_170E828 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67969000);
  if ( !this->fields.closeButton )
    goto LABEL_113;
  v88 = (UILabel_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0LL);
  if ( !Instance )
    goto LABEL_113;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)Instance,
                                  1,
                                  (const MethodInfo_170E828 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67969000);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11119/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v88 )
    goto LABEL_113;
  UILabel__set_text(v88, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11118/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_113;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4599/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_113;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  possessionLabel = this->fields.possessionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4601/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0LL);
  if ( !possessionLabel )
    goto LABEL_113;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0LL);
  titleLabel = this->fields.titleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1760/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_113;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1759/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_113;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (v127 & 1) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v95 = &StringLiteral_1758/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v95 = &StringLiteral_1761/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)*v95, 0LL);
  if ( !messageLabel )
    goto LABEL_113;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v127 & 1, v96);
  Instance = (int64_t)v125;
  if ( !v125 )
    goto LABEL_113;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v128,
    v125,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v130 = *(System_Collections_Generic_List_Enumerator_int__o *)v128;
  while ( 1 )
  {
    v97 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v130,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v97 )
      break;
    v98 = this->fields.consumeItemNumLabel;
    if ( !v98 )
      sub_B0D97C(v97);
    if ( v130.fields.current >= v98->max_length )
    {
      v122 = sub_B0D9A8(v97);
      sub_B0D948(v122, 0LL);
    }
    v99 = (UIWidget_o *)v98->m_Items[v130.fields.current];
    *(UnityEngine_Color_o *)&v101 = UnityEngine_Color__get_red(0LL);
    if ( !v99 )
      sub_B0D97C(v100);
    UIWidget__set_color(v99, *(UnityEngine_Color_o *)&v101, 0LL);
  }
  *(_DWORD *)&v128[4 * v58 + 24] = 711;
  v105 = ++v129;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v130,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v105 && *(_DWORD *)&v128[4 * v105 + 20] == 711 )
    v129 = v105 - 1;
  this->fields.activateMaskPanel = setMask;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
    (System_Int32_array **)setMask,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  this->fields.closeCallbackFunc = closeCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
LABEL_113:
    sub_B0D97C(Instance);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v120 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v118, v119);
  System_Action___ctor(v120, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v120, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  unsigned int v6; // w19

  if ( (byte_4216771 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, isEnable);
    byte_4216771 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_13;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              decideButton,
                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !decideButton )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  v6 = isEnable ? 0 : 3;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    decideButton,
                                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_13:
    sub_B0D97C(decideButton);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
    decideButton,
    v6,
    0LL,
    decideButton->klass[1]._1.interfaceOffsets);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_List_DiggingBlockComponent___o *__fastcall AutoDiggingDialogComponent__SortActiveBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t blockKindNum,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  int v18; // w27
  int32_t v19; // w24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  __int64 v21; // x0
  _BOOL8 v22; // x0
  Il2CppClass *klass; // x9
  int v24; // w8
  _BYTE v26[28]; // [xsp+10h] [xbp-90h] BYREF
  int v27; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4216772 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo, v14);
    byte_4216772 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v27 = 0;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo,
                                                                                                  blockList,
                                                                                                  *(_QWORD *)&blockKindNum);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v16, v17);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v20,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_24;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v26,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v28 = *(System_Collections_Generic_List_Enumerator_T__o *)v26;
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v28,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v22 )
          break;
        if ( !v28.fields.current )
          sub_B0D97C(v22);
        if ( LODWORD(v28.fields.current[5].klass) == v19 )
        {
          klass = v28.fields.current[4].klass;
          if ( !klass )
            sub_B0D97C(v22);
          if ( !HIDWORD(klass->_1.namespaze) )
          {
            if ( !v20 )
              sub_B0D97C(v22);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v28.fields.current,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
          }
        }
      }
      *(_DWORD *)&v26[4 * v18 + 24] = 91;
      v18 = ++v27;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v28,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( v18 )
      {
        v24 = v18 - 1;
        if ( *(_DWORD *)&v26[4 * v18 + 20] == 91 )
        {
          --v18;
          v27 = v24;
        }
      }
      if ( !v15 )
LABEL_24:
        sub_B0D97C(v21);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__);
      ++v19;
    }
    while ( v19 < blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v15;
}


void __fastcall AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_421677B & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, method);
    byte_421677B = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4216779 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216779 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B0D97C(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}