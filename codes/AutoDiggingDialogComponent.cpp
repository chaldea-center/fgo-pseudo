void __fastcall AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FBF4E & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FBF4E = 1;
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

  if ( (byte_40FBF4C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_List_DiggingBlockComponent___Invoke__, method);
    sub_B16FFC(&Method_BasicHelper_Shuffle_DiggingBlockComponent___, v3);
    byte_40FBF4C = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    v11 = BasicHelper__Shuffle_string_(
            (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
            (const MethodInfo_18B8AE4 *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)closeCallbackFunc,
      (System_Uri_o *)v11,
      (const MethodInfo_24B7324 *)Method_System_Action_List_DiggingBlockComponent___Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_DiggingBlockComponent__o *__fastcall AutoDiggingDialogComponent__GetActiveBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t blockId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FBF48 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v12);
    byte_40FBF48 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                  blockList,
                                                                                                  *(_QWORD *)&blockId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B170D4();
    klass = v16.fields.current[4].klass;
    if ( !klass )
      sub_B170D4();
    if ( LODWORD(klass->_1.namespaze) == blockId && !HIDWORD(klass->_1.namespaze) )
    {
      if ( !v13 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16.fields.current,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_DiggingBlockComponent__o *__fastcall AutoDiggingDialogComponent__GetAutoDiggingBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        System_Collections_Generic_List_int__o *consumeList,
        int32_t userItemNum,
        int32_t *consumeTotalNum,
        const MethodInfo *method)
{
  int32_t v7; // w20
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x23
  unsigned __int64 v16; // x24
  unsigned __int64 size; // x8
  int32_t v18; // w9

  v7 = userItemNum;
  if ( (byte_40FBF49 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, blockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    byte_40FBF49 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                  blockList,
                                                                                                  consumeList,
                                                                                                  *(_QWORD *)&userItemNum,
                                                                                                  consumeTotalNum);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *consumeTotalNum = 0;
  if ( !blockList )
    goto LABEL_20;
  if ( blockList->fields._size >= 1 )
  {
    v16 = 0LL;
    while ( consumeList )
    {
      if ( v16 >= (unsigned int)consumeList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( v7 - consumeList->fields._items->m_Items[v16 + 1] >= 0 )
      {
        if ( v16 >= (unsigned int)blockList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v15 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)blockList->fields._items->m_Items[v16],
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
        size = (unsigned int)consumeList->fields._size;
        if ( v16 >= size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v18 = consumeList->fields._items->m_Items[v16 + 1];
        v7 -= v18;
        if ( size <= v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        *consumeTotalNum += v18;
      }
      if ( (__int64)++v16 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v15;
    }
LABEL_20:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v15;
}


System_Collections_Generic_List_int__o *__fastcall AutoDiggingDialogComponent__GetDiggingConsumeList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_int__o *v17; // x19
  Il2CppObject *current; // x28
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  Il2CppClass *klass; // x8
  WarEntity_o *Entity; // x20
  WebViewManager_o *v23; // x0
  CommonConsumeMaster_o *v24; // x0
  CommonConsumeEntity_o *v25; // x21
  _DWORD *monitor; // x8
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x8
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FBF47 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, blockList);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FBF47 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v17 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    blockList,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v33 = v32;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v33.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_B170D4();
    klass = current[4].klass;
    if ( !klass )
      sub_B170D4();
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)klass->_1.namespaze,
               (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v23 )
      sub_B170D4();
    v24 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v23,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_B170D4();
    if ( !v24 )
      sub_B170D4();
    v25 = CommonConsumeMaster__GetEntity(v24, HIDWORD(Entity->fields.age), 1, 0LL);
    if ( !v25 )
    {
      if ( !v17 )
        sub_B170D4();
      System_Collections_Generic_List_int___Add(
        v17,
        0,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    monitor = current[4].monitor;
    if ( monitor )
    {
      v27 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity->fields.longName,
              monitor[6],
              (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
      if ( (v27 & 0x80000000) != 0 )
      {
        if ( !v25 )
          sub_B170D4();
        if ( !v17 )
          sub_B170D4();
        goto LABEL_25;
      }
      v30 = *(_QWORD *)&Entity->fields.bannerId;
      if ( !v30 )
        sub_B170D4();
      if ( (unsigned int)v27 >= *(_DWORD *)(v30 + 24) )
      {
        sub_B17100(v27, v28, v29);
        sub_B170A0();
      }
      if ( !v25 )
        sub_B170D4();
      if ( !v17 )
        sub_B170D4();
      System_Collections_Generic_List_int___Add(
        v17,
        v25->fields.num + *(_DWORD *)(v30 + 4LL * (int)v27 + 32),
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    else
    {
      if ( !v25 )
        sub_B170D4();
      if ( !v17 )
        sub_B170D4();
LABEL_25:
      System_Collections_Generic_List_int___Add(
        v17,
        v25->fields.num,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v17;
}


void __fastcall AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__OnClickCloseBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FBF4B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBF4B = 1;
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

  if ( (byte_40FBF4A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__Invoke__, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_AutoDiggingDialogComponent_EndClose__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FBF4A = 1;
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
      sub_B16F98(p_activateMaskPanel, 0LL, v7, v8, v9, v10, v11, v12);
      System_Action_bool___Invoke(activateMaskPanel, 1, (const MethodInfo_24B33DC *)Method_System_Action_bool__Invoke__);
    }
    v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
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
  __int64 v44; // x3
  __int64 v45; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  AutoDiggingDialogComponent_o *v53; // x0
  const MethodInfo *v54; // x3
  struct UISprite_array *itemIcon; // x8
  System_Collections_Generic_List_List_DiggingBlockComponent___o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  struct UISprite_array *v61; // x8
  System_Collections_Generic_List_List_DiggingBlockComponent___o *v62; // x25
  int v63; // w22
  unsigned __int64 v64; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x27
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserItemMaster_o *v68; // x28
  Il2CppObject *current; // x20
  WebViewManager_o *v70; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v71; // x0
  Il2CppClass *klass; // x8
  WarEntity_o *v73; // x20
  WebViewManager_o *v74; // x0
  CommonConsumeMaster_o *v75; // x0
  CommonConsumeEntity_o *v76; // x0
  int32_t objectId; // w20
  System_Collections_Generic_List_DiggingBlockComponent__o *AutoDiggingBlockList; // x0
  __int64 v79; // x1
  const MethodInfo *v80; // x2
  int v81; // w8
  struct UISprite_array *v82; // x8
  UISprite_o *v83; // x21
  struct UISprite_array *consumeItemIcon; // x8
  int64_t UserId; // x0
  AutoDiggingDialogComponent_o *DiggingConsumeList; // x0
  const MethodInfo *v87; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v89; // x20
  System_String_o *v90; // x0
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v92; // x20
  System_String_o *v93; // x0
  System_String_o *v94; // x1
  UILabel_o *v95; // x0
  struct UILabel_array *v96; // x8
  UILabel_o *v97; // x0
  struct UILabel_array *v98; // x8
  System_Collections_Generic_List_DiggingBlockComponent__o *v99; // x8
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_Component_o *transform; // x0
  UILabel_o *ComponentInChildren_UILabel; // x0
  UILabel_o *v103; // x20
  UnityEngine_Component_o *v104; // x0
  UILabel_o *v105; // x23
  System_String_o *v106; // x0
  System_String_o *v107; // x0
  UILabel_o *consumeLabel; // x20
  System_String_o *v109; // x0
  UILabel_o *possessionLabel; // x20
  System_String_o *v111; // x0
  UILabel_o *titleLabel; // x20
  System_String_o *v113; // x0
  UILabel_o *subTitleLabel; // x20
  System_String_o *v115; // x0
  UILabel_o *messageLabel; // x20
  __int64 *v117; // x8
  System_String_o *v118; // x0
  const MethodInfo *v119; // x2
  _BOOL8 v120; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  struct UILabel_array *v123; // x8
  UIWidget_o *v124; // x20
  int v125; // s0
  int v129; // w22
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x3
  __int64 v146; // x4
  System_Action_o *v147; // x20
  System_Collections_Generic_List_int__o *v150; // [xsp+18h] [xbp-E8h]
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **p_autoDiggingBlockList; // [xsp+20h] [xbp-E0h]
  char v152; // [xsp+2Ch] [xbp-D4h]
  _BYTE v153[40]; // [xsp+30h] [xbp-D0h] BYREF
  int v154; // [xsp+58h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v155; // [xsp+60h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+7Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v157; // [xsp+80h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_40FBF44 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, blockList);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&Method_AutoDiggingDialogComponent__Open_b__17_0__, v8);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__, v27);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_B16FFC(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v29);
    sub_B16FFC(&LocalizationManager_TypeInfo, v30);
    sub_B16FFC(&NetworkManager_TypeInfo, v31);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B16FFC(&StringLiteral_4570/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, v33);
    sub_B16FFC(&StringLiteral_1752/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v34);
    sub_B16FFC(&StringLiteral_4568/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v35);
    sub_B16FFC(&StringLiteral_1754/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, v36);
    sub_B16FFC(&StringLiteral_1753/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, v37);
    sub_B16FFC(&StringLiteral_11056/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v38);
    sub_B16FFC(&StringLiteral_11055/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v39);
    sub_B16FFC(&StringLiteral_1755/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/, v40);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v41);
    byte_40FBF44 = 1;
  }
  entity = 0LL;
  memset(&v157, 0, sizeof(v157));
  consumeTotalNum = 0;
  memset(&v155, 0, sizeof(v155));
  v154 = 0;
  this->fields.state = 1;
  v150 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     blockList,
                                                     setMask,
                                                     closeCallback,
                                                     method);
  System_Collections_Generic_List_int____ctor(
    v150,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                  v42,
                                                                                                  v43,
                                                                                                  v44,
                                                                                                  v45);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v46;
  p_autoDiggingBlockList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)&this->fields.autoDiggingBlockList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.autoDiggingBlockList,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_113;
  v56 = AutoDiggingDialogComponent__SortActiveBlockList(v53, blockList, itemIcon->max_length, v54);
  v61 = this->fields.itemIcon;
  if ( !v61 )
    goto LABEL_113;
  v152 = 0;
  v62 = v56;
  v63 = 0;
  v64 = 0LL;
  while ( (__int64)v64 < (int)v61->max_length )
  {
    v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                    v57,
                                                                                                    v58,
                                                                                                    v59,
                                                                                                    v60);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v65,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_113;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    if ( !blockList )
      goto LABEL_113;
    v68 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v153,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v157 = *(System_Collections_Generic_List_Enumerator_T__o *)v153;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v157,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      current = v157.fields.current;
      if ( !v157.fields.current )
        sub_B170D4();
      if ( v64 == LODWORD(v157.fields.current[5].klass) )
      {
        v70 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v70 )
          sub_B170D4();
        v71 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v70,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        klass = current[4].klass;
        if ( !klass )
          sub_B170D4();
        if ( !v71 )
          sub_B170D4();
        v73 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v71,
                (int32_t)klass->_1.namespaze,
                (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v74 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v74 )
          sub_B170D4();
        v75 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v74,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v73 )
          sub_B170D4();
        if ( !v75 )
          sub_B170D4();
        v76 = CommonConsumeMaster__GetEntity(v75, HIDWORD(v73->fields.age), 1, 0LL);
        if ( v76 )
        {
          objectId = v76->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    *(_DWORD *)&v153[4 * v63 + 24] = 201;
    v63 = ++v154;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v157,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    if ( v63 )
    {
      v81 = v63 - 1;
      if ( *(_DWORD *)&v153[4 * v63 + 20] == 201 )
      {
        --v63;
        v154 = v81;
      }
    }
    v82 = this->fields.itemIcon;
    if ( !v82 )
      goto LABEL_113;
    if ( v64 >= v82->max_length )
      goto LABEL_114;
    v83 = v82->m_Items[v64];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AutoDiggingBlockList = (System_Collections_Generic_List_DiggingBlockComponent__o *)AtlasManager__SetItem(
                                                                                         v83,
                                                                                         objectId,
                                                                                         v80);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_113;
    if ( v64 >= consumeItemIcon->max_length )
      goto LABEL_114;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v64], objectId, v80);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v68 )
      goto LABEL_113;
    AutoDiggingBlockList = (System_Collections_Generic_List_DiggingBlockComponent__o *)UserItemMaster__TryGetEntity(
                                                                                         v68,
                                                                                         &entity,
                                                                                         UserId,
                                                                                         objectId,
                                                                                         0LL);
    if ( ((unsigned __int8)AutoDiggingBlockList & 1) != 0 )
    {
      if ( !v62 )
        goto LABEL_113;
      if ( v64 >= (unsigned int)v62->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      DiggingConsumeList = (AutoDiggingDialogComponent_o *)AutoDiggingDialogComponent__GetDiggingConsumeList(
                                                             (AutoDiggingDialogComponent_o *)AutoDiggingBlockList,
                                                             v62->fields._items->m_Items[v64],
                                                             v80);
      if ( v64 >= (unsigned int)v62->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !entity )
        goto LABEL_113;
      AutoDiggingBlockList = AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                               DiggingConsumeList,
                               v62->fields._items->m_Items[v64],
                               (System_Collections_Generic_List_int__o *)DiggingConsumeList,
                               entity->fields.num,
                               &consumeTotalNum,
                               v87);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_113;
      if ( v64 >= itemNumLabel->max_length )
        goto LABEL_114;
      if ( !entity )
        goto LABEL_113;
      v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)AutoDiggingBlockList;
      v89 = itemNumLabel->m_Items[v64];
      v90 = BasicHelper__ToCommaString(entity->fields.num, 0LL);
      if ( !v89 )
        goto LABEL_113;
      UILabel__set_text(v89, v90, 0LL);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_113;
      if ( v64 >= consumeItemNumLabel->max_length )
        goto LABEL_114;
      v92 = consumeItemNumLabel->m_Items[v64];
      v93 = BasicHelper__ToCommaString(consumeTotalNum, 0LL);
      if ( !v92 )
        goto LABEL_113;
      v94 = v93;
      v95 = v92;
    }
    else
    {
      v96 = this->fields.itemNumLabel;
      if ( !v96 )
        goto LABEL_113;
      if ( v64 >= v96->max_length )
      {
LABEL_114:
        sub_B17100(AutoDiggingBlockList, v79, v80);
        sub_B170A0();
      }
      v97 = v96->m_Items[v64];
      if ( !v97 )
        goto LABEL_113;
      UILabel__set_text(v97, (System_String_o *)StringLiteral_951/*"0"*/, 0LL);
      v98 = this->fields.consumeItemNumLabel;
      if ( !v98 )
        goto LABEL_113;
      if ( v64 >= v98->max_length )
        goto LABEL_114;
      v95 = v98->m_Items[v64];
      if ( !v95 )
        goto LABEL_113;
      v94 = (System_String_o *)StringLiteral_951/*"0"*/;
    }
    UILabel__set_text(v95, v94, 0LL);
    if ( !v65 )
      goto LABEL_113;
    if ( v65->fields._size < 1 )
    {
      if ( !v62 )
        goto LABEL_113;
      if ( v64 >= (unsigned int)v62->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v99 = v62->fields._items->m_Items[v64];
      if ( !v99 )
        goto LABEL_113;
      if ( v99->fields._size >= 1 )
      {
        if ( !v150 )
          goto LABEL_113;
        System_Collections_Generic_List_int___Add(
          v150,
          v64,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    else
    {
      if ( !*p_autoDiggingBlockList )
        goto LABEL_113;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        *p_autoDiggingBlockList,
        (System_Collections_Generic_IEnumerable_T__o *)v65,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v152 = 1;
    }
    v61 = this->fields.itemIcon;
    ++v64;
    if ( !v61 )
      goto LABEL_113;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_113;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(decideButton, 0LL);
  if ( !transform )
    goto LABEL_113;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  transform,
                                  1,
                                  (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( !this->fields.closeButton )
    goto LABEL_113;
  v103 = ComponentInChildren_UILabel;
  v104 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)this->fields.closeButton,
                                      0LL);
  if ( !v104 )
    goto LABEL_113;
  v105 = UnityEngine_Component__GetComponentInChildren_UILabel_(
           v104,
           1,
           (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_11056/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v103 )
    goto LABEL_113;
  UILabel__set_text(v103, v106, 0LL);
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_11055/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !v105 )
    goto LABEL_113;
  UILabel__set_text(v105, v107, 0LL);
  consumeLabel = this->fields.consumeLabel;
  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_4568/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_113;
  UILabel__set_text(consumeLabel, v109, 0LL);
  possessionLabel = this->fields.possessionLabel;
  v111 = LocalizationManager__Get((System_String_o *)StringLiteral_4570/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0LL);
  if ( !possessionLabel )
    goto LABEL_113;
  UILabel__set_text(possessionLabel, v111, 0LL);
  titleLabel = this->fields.titleLabel;
  v113 = LocalizationManager__Get((System_String_o *)StringLiteral_1754/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_113;
  UILabel__set_text(titleLabel, v113, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_1753/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_113;
  UILabel__set_text(subTitleLabel, v115, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (v152 & 1) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v117 = &StringLiteral_1752/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v117 = &StringLiteral_1755/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  }
  v118 = LocalizationManager__Get((System_String_o *)*v117, 0LL);
  if ( !messageLabel )
    goto LABEL_113;
  UILabel__set_text(messageLabel, v118, 0LL);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v152 & 1, v119);
  if ( !v150 )
    goto LABEL_113;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v153,
    v150,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v155 = *(System_Collections_Generic_List_Enumerator_int__o *)v153;
  while ( 1 )
  {
    v120 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v155,
             (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v120 )
      break;
    v123 = this->fields.consumeItemNumLabel;
    if ( !v123 )
      sub_B170D4();
    if ( v155.fields.current >= v123->max_length )
    {
      sub_B17100(v120, v121, v122);
      sub_B170A0();
    }
    v124 = (UIWidget_o *)v123->m_Items[v155.fields.current];
    *(UnityEngine_Color_o *)&v125 = UnityEngine_Color__get_red(0LL);
    if ( !v124 )
      sub_B170D4();
    UIWidget__set_color(v124, *(UnityEngine_Color_o *)&v125, 0LL);
  }
  *(_DWORD *)&v153[4 * v63 + 24] = 711;
  v129 = ++v154;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v155,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v129 && *(_DWORD *)&v153[4 * v129 + 20] == 711 )
    v154 = v129 - 1;
  this->fields.activateMaskPanel = setMask;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
    (System_Int32_array **)setMask,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  this->fields.closeCallbackFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_113:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v147 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v143, v144, v145, v146);
  System_Action___ctor(v147, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v147, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Behaviour_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  unsigned int v10; // w19
  WebViewObject_o *v11; // x0

  if ( (byte_40FBF45 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UICommonButton___, isEnable);
    byte_40FBF45 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_13;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              decideButton,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !Component_WebViewObject )
    goto LABEL_13;
  ((void (__fastcall *)(WebViewObject_o *, bool, const char *))Component_WebViewObject->klass[1]._1.gc_desc)(
    Component_WebViewObject,
    isEnable,
    Component_WebViewObject->klass[1]._1.name);
  v7 = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !v7 )
    goto LABEL_13;
  v8 = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    v7,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !v8 )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled(v8, isEnable, 0LL);
  v9 = (UnityEngine_Component_o *)this->fields.decideButton;
  v10 = isEnable ? 0 : 3;
  if ( !v9
    || (v11 = UnityEngine_Component__GetComponent_WebViewObject_(
                v9,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  ((void (__fastcall *)(WebViewObject_o *, _QWORD, _QWORD, Il2CppClass **))v11->klass[1]._1.methods)(
    v11,
    v10,
    0LL,
    v11->klass[1]._1.nestedTypes);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_List_DiggingBlockComponent___o *__fastcall AutoDiggingDialogComponent__SortActiveBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t blockKindNum,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int v21; // w27
  int32_t v22; // w24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  Il2CppClass *klass; // x9
  int v25; // w8
  _BYTE v27[28]; // [xsp+10h] [xbp-90h] BYREF
  int v28; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40FBF46 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo, v15);
    byte_40FBF46 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v28 = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo,
                                                                                                  blockList,
                                                                                                  *(_QWORD *)&blockKindNum,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v17, v18, v19, v20);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v23,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_24;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v27,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v29 = *(System_Collections_Generic_List_Enumerator_T__o *)v27;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v29,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
      {
        if ( !v29.fields.current )
          sub_B170D4();
        if ( LODWORD(v29.fields.current[5].klass) == v22 )
        {
          klass = v29.fields.current[4].klass;
          if ( !klass )
            sub_B170D4();
          if ( !HIDWORD(klass->_1.namespaze) )
          {
            if ( !v23 )
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v29.fields.current,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
          }
        }
      }
      *(_DWORD *)&v27[4 * v21 + 24] = 91;
      v21 = ++v28;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v29,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( v21 )
      {
        v25 = v21 - 1;
        if ( *(_DWORD *)&v27[4 * v21 + 20] == 91 )
        {
          --v21;
          v28 = v25;
        }
      }
      if ( !v16 )
LABEL_24:
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__);
      ++v22;
    }
    while ( v22 < blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v16;
}


void __fastcall AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FBF4F & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40FBF4F = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FBF4D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBF4D = 1;
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
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}