void __fastcall AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBDA0 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDA0 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__EndClose(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Action_List_DiggingBlockComponent___o *closeCallbackFunc; // x20
  System_Collections_Generic_List_T__o *v15; // x1

  if ( (byte_42EBD9E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_List_DiggingBlockComponent___Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BasicHelper_Shuffle_DiggingBlockComponent___, v5, v6, v7);
    byte_42EBD9E = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
    v15 = BasicHelper__Shuffle_string_(
            (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
            (const MethodInfo_1AD98F4 *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)closeCallbackFunc,
      (System_Uri_o *)v15,
      (const MethodInfo_258B334 *)Method_System_Action_List_DiggingBlockComponent___Invoke__);
  }
}


System_Collections_Generic_List_DiggingBlockComponent__o *__fastcall AutoDiggingDialogComponent__GetActiveBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t blockId,
        const MethodInfo *method)
{
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EBD9A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__,
      (_DWORD)blockList,
      blockId,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v21, v22, v23);
    byte_42EBD9A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_B5D69C(v25, v26);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v27 )
      break;
    if ( !v31.fields.current )
      sub_B5D69C(v27, v28);
    klass = v31.fields.current[4].klass;
    if ( !klass )
      sub_B5D69C(v27, v28);
    if ( LODWORD(klass->_1.namespaze) == blockId && !HIDWORD(klass->_1.namespaze) )
    {
      if ( !v24 )
        sub_B5D69C(v27, v28);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v24,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31.fields.current,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v24;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x23
  __int64 v26; // x0
  __int64 v27; // x1
  unsigned __int64 v28; // x24
  unsigned __int64 size; // x8
  int32_t v30; // w9

  v7 = userItemNum;
  if ( (byte_42EBD9B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_DiggingBlockComponent__Add__,
      (_DWORD)blockList,
      (_DWORD)consumeList,
      *(_QWORD *)&userItemNum);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v22, v23, v24);
    byte_42EBD9B = 1;
  }
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *consumeTotalNum = 0;
  if ( !blockList )
    goto LABEL_20;
  if ( blockList->fields._size >= 1 )
  {
    v28 = 0LL;
    while ( consumeList )
    {
      if ( v28 >= (unsigned int)consumeList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( v7 - consumeList->fields._items->m_Items[v28 + 1] >= 0 )
      {
        if ( v28 >= (unsigned int)blockList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v25 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v25,
          (EventMissionProgressRequest_Argument_ProgressData_o *)blockList->fields._items->m_Items[v28],
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
        size = (unsigned int)consumeList->fields._size;
        if ( v28 >= size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v30 = consumeList->fields._items->m_Items[v28 + 1];
        v7 -= v30;
        if ( size <= v28 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        *consumeTotalNum += v30;
      }
      if ( (__int64)++v28 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v25;
    }
LABEL_20:
    sub_B5D69C(v26, v27);
  }
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v25;
}


System_Collections_Generic_List_int__o *__fastcall AutoDiggingDialogComponent__GetDiggingConsumeList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_List_int__o *v38; // x19
  __int64 v39; // x0
  __int64 v40; // x1
  Il2CppObject *current; // x28
  WebViewManager_o *Instance; // x0
  __int64 v43; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v45; // x1
  Il2CppClass *klass; // x8
  WarEntity_o *Entity; // x20
  WebViewManager_o *v48; // x0
  __int64 v49; // x1
  CommonConsumeMaster_o *v50; // x0
  __int64 v51; // x1
  CommonConsumeEntity_o *v52; // x0
  __int64 v53; // x1
  CommonConsumeEntity_o *v54; // x21
  _DWORD *monitor; // x8
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x8
  __int64 v60; // x0
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EBD99 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)blockList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    byte_42EBD99 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v38 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !blockList )
    sub_B5D69C(v39, v40);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v61,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v62 = v61;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v62,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v62.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v43);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_B5D69C(MasterData_WarQuestSelectionMaster, v45);
    klass = current[4].klass;
    if ( !klass )
      sub_B5D69C(MasterData_WarQuestSelectionMaster, v45);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v45);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)klass->_1.namespaze,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v48 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v48 )
      sub_B5D69C(0LL, v49);
    v50 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v48,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_B5D69C(v50, v51);
    if ( !v50 )
      sub_B5D69C(0LL, v51);
    v52 = CommonConsumeMaster__GetEntity(v50, HIDWORD(Entity->fields.age), 1, 0LL);
    v54 = v52;
    if ( !v52 )
    {
      if ( !v38 )
        sub_B5D69C(0LL, v53);
      System_Collections_Generic_List_int___Add(
        v38,
        0,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
    monitor = current[4].monitor;
    if ( monitor )
    {
      v56 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity->fields.longName,
              monitor[6],
              (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
      if ( (v56 & 0x80000000) != 0 )
      {
        if ( !v54 )
          sub_B5D69C(v56, v57);
        if ( !v38 )
          sub_B5D69C(v56, v57);
        goto LABEL_25;
      }
      v58 = *(_QWORD *)&Entity->fields.bannerId;
      if ( !v58 )
        sub_B5D69C(v56, v57);
      if ( (unsigned int)v56 >= *(_DWORD *)(v58 + 24) )
      {
        v60 = sub_B5D6C8(v56);
        sub_B5D668(v60, 0LL);
      }
      if ( !v54 )
        sub_B5D69C(v56, v57);
      if ( !v38 )
        sub_B5D69C(v56, v57);
      System_Collections_Generic_List_int___Add(
        v38,
        v54->fields.num + *(_DWORD *)(v58 + 4LL * (int)v56 + 32),
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
    else
    {
      if ( !v54 )
        sub_B5D69C(v52, v53);
      if ( !v38 )
        sub_B5D69C(v52, v53);
LABEL_25:
      System_Collections_Generic_List_int___Add(
        v38,
        v54->fields.num,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v62,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v38;
}


void __fastcall AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__OnClickCloseBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBD9D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBD9D = 1;
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleServantConfConponent_o *p_activateMaskPanel; // x0
  System_Action_bool__o *activateMaskPanel; // x20
  System_Action_o *v22; // x20

  if ( (byte_42EBD9C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_AutoDiggingDialogComponent_EndClose__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EBD9C = 1;
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
      sub_B5D560(p_activateMaskPanel, 0LL, v14, v15, v16, v17, v18, v19);
      System_Action_bool___Invoke(activateMaskPanel, 1, (const MethodInfo_25873EC *)Method_System_Action_bool__Invoke__);
    }
    v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v22, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
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
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v112; // x20
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  int64_t Instance; // x0
  __int64 v120; // x1
  const MethodInfo *v121; // x3
  struct UISprite_array *itemIcon; // x8
  struct UISprite_array *v123; // x8
  int64_t v124; // x25
  int v125; // w22
  unsigned __int64 v126; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v127; // x27
  UserItemMaster_o *v128; // x28
  _BOOL8 v129; // x0
  __int64 v130; // x1
  Il2CppObject *current; // x20
  WebViewManager_o *v132; // x0
  __int64 v133; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v135; // x1
  Il2CppClass *klass; // x8
  WarEntity_o *v137; // x20
  WebViewManager_o *v138; // x0
  __int64 v139; // x1
  CommonConsumeMaster_o *v140; // x0
  __int64 v141; // x1
  CommonConsumeEntity_o *v142; // x0
  int32_t objectId; // w20
  const MethodInfo *v144; // x2
  int v145; // w8
  struct UISprite_array *v146; // x8
  UISprite_o *v147; // x21
  const MethodInfo *v148; // x2
  struct UISprite_array *consumeItemIcon; // x8
  const MethodInfo *v150; // x2
  const MethodInfo *v151; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v153; // x20
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v155; // x20
  System_String_o *v156; // x1
  struct UILabel_array *v157; // x8
  struct UILabel_array *v158; // x8
  __int64 v159; // x8
  UILabel_o *v160; // x20
  UILabel_o *ComponentInChildren_UILabel; // x23
  UILabel_o *consumeLabel; // x20
  UILabel_o *possessionLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *messageLabel; // x20
  __int64 *v167; // x8
  const MethodInfo *v168; // x2
  _BOOL8 v169; // x0
  __int64 v170; // x1
  struct UILabel_array *v171; // x8
  UIWidget_o *v172; // x20
  __int64 v173; // x0
  __int64 v174; // x1
  int v175; // s0
  int v179; // w22
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_Action_o *v192; // x20
  __int64 v193; // x0
  __int64 v194; // x0
  System_Collections_Generic_List_int__o *v197; // [xsp+18h] [xbp-E8h]
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+20h] [xbp-E0h]
  char v199; // [xsp+2Ch] [xbp-D4h]
  _BYTE v200[40]; // [xsp+30h] [xbp-D0h] BYREF
  int v201; // [xsp+58h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v202; // [xsp+60h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+7Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v204; // [xsp+80h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_42EBD96 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)blockList, (_DWORD)setMask, closeCallback);
    sub_B5D5C4(&AtlasManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_AutoDiggingDialogComponent__Open_b__17_0__, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v55, v56, v57);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v58, v59, v60);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v61, v62, v63);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v64, v65, v66);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__, v67, v68, v69);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v70, v71, v72);
    sub_B5D5C4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v73, v74, v75);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v76, v77, v78);
    sub_B5D5C4(&NetworkManager_TypeInfo, v79, v80, v81);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_4659/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_1775/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_4657/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_1777/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_1776/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_11225/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_11224/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_1778/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v109, v110, v111);
    byte_42EBD96 = 1;
  }
  entity = 0LL;
  memset(&v204, 0, sizeof(v204));
  consumeTotalNum = 0;
  memset(&v202, 0, sizeof(v202));
  v201 = 0;
  this->fields.state = 1;
  v197 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v197,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v112 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v112,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v112;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.autoDiggingBlockList,
    (System_Int32_array **)v112,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_113;
  Instance = (int64_t)AutoDiggingDialogComponent__SortActiveBlockList(
                        (AutoDiggingDialogComponent_o *)Instance,
                        blockList,
                        itemIcon->max_length,
                        v121);
  v123 = this->fields.itemIcon;
  if ( !v123 )
    goto LABEL_113;
  v199 = 0;
  v124 = Instance;
  v125 = 0;
  v126 = 0LL;
  while ( (__int64)v126 < (int)v123->max_length )
  {
    v127 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v127,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_113;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    if ( !blockList )
      goto LABEL_113;
    v128 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v200,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v204 = *(System_Collections_Generic_List_Enumerator_T__o *)v200;
    while ( 1 )
    {
      v129 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v204,
               (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v129 )
        break;
      current = v204.fields.current;
      if ( !v204.fields.current )
        sub_B5D69C(v129, v130);
      if ( v126 == LODWORD(v204.fields.current[5].klass) )
      {
        v132 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v132 )
          sub_B5D69C(0LL, v133);
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)v132,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        klass = current[4].klass;
        if ( !klass )
          sub_B5D69C(MasterData_WarQuestSelectionMaster, v135);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B5D69C(0LL, v135);
        v137 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int32_t)klass->_1.namespaze,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v138 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v138 )
          sub_B5D69C(0LL, v139);
        v140 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v138,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v137 )
          sub_B5D69C(v140, v141);
        if ( !v140 )
          sub_B5D69C(0LL, v141);
        v142 = CommonConsumeMaster__GetEntity(v140, HIDWORD(v137->fields.age), 1, 0LL);
        if ( v142 )
        {
          objectId = v142->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    *(_DWORD *)&v200[4 * v125 + 24] = 201;
    v125 = ++v201;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v204,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    if ( v125 )
    {
      v145 = v125 - 1;
      if ( *(_DWORD *)&v200[4 * v125 + 20] == 201 )
      {
        --v125;
        v201 = v145;
      }
    }
    v146 = this->fields.itemIcon;
    if ( !v146 )
      goto LABEL_113;
    if ( v126 >= v146->max_length )
      goto LABEL_114;
    v147 = v146->m_Items[v126];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetItem(v147, objectId, v144);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_113;
    if ( v126 >= consumeItemIcon->max_length )
      goto LABEL_114;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v126], objectId, v148);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v128 )
      goto LABEL_113;
    Instance = UserItemMaster__TryGetEntity(v128, &entity, Instance, objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v124 )
        goto LABEL_113;
      if ( v126 >= *(unsigned int *)(v124 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Instance = (int64_t)AutoDiggingDialogComponent__GetDiggingConsumeList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(*(_QWORD *)(v124 + 16)
                                                                                         + 8 * v126
                                                                                         + 32),
                            v150);
      if ( v126 >= *(unsigned int *)(v124 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !entity )
        goto LABEL_113;
      Instance = (int64_t)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(*(_QWORD *)(v124 + 16)
                                                                                         + 8 * v126
                                                                                         + 32),
                            (System_Collections_Generic_List_int__o *)Instance,
                            entity->fields.num,
                            &consumeTotalNum,
                            v151);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_113;
      if ( v126 >= itemNumLabel->max_length )
        goto LABEL_114;
      if ( !entity )
        goto LABEL_113;
      v127 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance;
      v153 = itemNumLabel->m_Items[v126];
      Instance = (int64_t)BasicHelper__ToCommaString(entity->fields.num, 0LL);
      if ( !v153 )
        goto LABEL_113;
      UILabel__set_text(v153, (System_String_o *)Instance, 0LL);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_113;
      if ( v126 >= consumeItemNumLabel->max_length )
        goto LABEL_114;
      v155 = consumeItemNumLabel->m_Items[v126];
      Instance = (int64_t)BasicHelper__ToCommaString(consumeTotalNum, 0LL);
      if ( !v155 )
        goto LABEL_113;
      v156 = (System_String_o *)Instance;
      Instance = (int64_t)v155;
    }
    else
    {
      v157 = this->fields.itemNumLabel;
      if ( !v157 )
        goto LABEL_113;
      if ( v126 >= v157->max_length )
      {
LABEL_114:
        v193 = sub_B5D6C8(Instance);
        sub_B5D668(v193, 0LL);
      }
      Instance = (int64_t)v157->m_Items[v126];
      if ( !Instance )
        goto LABEL_113;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_973/*"0"*/, 0LL);
      v158 = this->fields.consumeItemNumLabel;
      if ( !v158 )
        goto LABEL_113;
      if ( v126 >= v158->max_length )
        goto LABEL_114;
      Instance = (int64_t)v158->m_Items[v126];
      if ( !Instance )
        goto LABEL_113;
      v156 = (System_String_o *)StringLiteral_973/*"0"*/;
    }
    UILabel__set_text((UILabel_o *)Instance, v156, 0LL);
    if ( !v127 )
      goto LABEL_113;
    if ( v127->fields._size < 1 )
    {
      if ( !v124 )
        goto LABEL_113;
      if ( v126 >= *(unsigned int *)(v124 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v159 = *(_QWORD *)(*(_QWORD *)(v124 + 16) + 8 * v126 + 32);
      if ( !v159 )
        goto LABEL_113;
      if ( *(int *)(v159 + 24) >= 1 )
      {
        Instance = (int64_t)v197;
        if ( !v197 )
          goto LABEL_113;
        System_Collections_Generic_List_int___Add(
          v197,
          v126,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    else
    {
      Instance = (int64_t)*p_autoDiggingBlockList;
      if ( !*p_autoDiggingBlockList )
        goto LABEL_113;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
        (System_Collections_Generic_IEnumerable_T__o *)v127,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v199 = 1;
    }
    v123 = this->fields.itemIcon;
    ++v126;
    if ( !v123 )
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
                        (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( !this->fields.closeButton )
    goto LABEL_113;
  v160 = (UILabel_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0LL);
  if ( !Instance )
    goto LABEL_113;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)Instance,
                                  1,
                                  (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11225/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v160 )
    goto LABEL_113;
  UILabel__set_text(v160, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11224/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_113;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4657/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_113;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  possessionLabel = this->fields.possessionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4659/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0LL);
  if ( !possessionLabel )
    goto LABEL_113;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0LL);
  titleLabel = this->fields.titleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1777/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_113;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1776/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_113;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (v199 & 1) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v167 = &StringLiteral_1775/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v167 = &StringLiteral_1778/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)*v167, 0LL);
  if ( !messageLabel )
    goto LABEL_113;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v199 & 1, v168);
  Instance = (int64_t)v197;
  if ( !v197 )
    goto LABEL_113;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v200,
    v197,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v202 = *(System_Collections_Generic_List_Enumerator_int__o *)v200;
  while ( 1 )
  {
    v169 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v202,
             (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v169 )
      break;
    v171 = this->fields.consumeItemNumLabel;
    if ( !v171 )
      sub_B5D69C(v169, v170);
    if ( v202.fields.current >= v171->max_length )
    {
      v194 = sub_B5D6C8(v169);
      sub_B5D668(v194, 0LL);
    }
    v172 = (UIWidget_o *)v171->m_Items[v202.fields.current];
    *(UnityEngine_Color_o *)&v175 = UnityEngine_Color__get_red(0LL);
    if ( !v172 )
      sub_B5D69C(v173, v174);
    UIWidget__set_color(v172, *(UnityEngine_Color_o *)&v175, 0LL);
  }
  *(_DWORD *)&v200[4 * v125 + 24] = 711;
  v179 = ++v201;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v202,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v179 && *(_DWORD *)&v200[4 * v179 + 20] == 711 )
    v201 = v179 - 1;
  this->fields.activateMaskPanel = setMask;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
    (System_Int32_array **)setMask,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  this->fields.closeCallbackFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v186,
    v187,
    v188,
    v189,
    v190,
    v191);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
LABEL_113:
    sub_B5D69C(Instance, v120);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v192 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v192, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v192, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *decideButton; // x0
  unsigned int v7; // w19

  if ( (byte_42EBD97 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, isEnable, (_DWORD)method, v3);
    byte_42EBD97 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_13;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              decideButton,
                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !decideButton )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  v7 = isEnable ? 0 : 3;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    decideButton,
                                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(decideButton, isEnable);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
    decideButton,
    v7,
    0LL,
    decideButton->klass[1]._1.interfaceOffsets);
}


System_Collections_Generic_List_List_DiggingBlockComponent___o *__fastcall AutoDiggingDialogComponent__SortActiveBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t blockKindNum,
        const MethodInfo *method)
{
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  int v34; // w27
  int32_t v35; // w24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x22
  __int64 v37; // x0
  __int64 v38; // x1
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppClass *klass; // x9
  int v42; // w8
  _BYTE v44[28]; // [xsp+10h] [xbp-90h] BYREF
  int v45; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42EBD98 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__,
      (_DWORD)blockList,
      blockKindNum,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo, v30, v31, v32);
    byte_42EBD98 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v45 = 0;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v34 = 0;
    v35 = 0;
    do
    {
      v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v36,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_24;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v44,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v46 = *(System_Collections_Generic_List_Enumerator_T__o *)v44;
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v46,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v39 )
          break;
        if ( !v46.fields.current )
          sub_B5D69C(v39, v40);
        if ( LODWORD(v46.fields.current[5].klass) == v35 )
        {
          klass = v46.fields.current[4].klass;
          if ( !klass )
            sub_B5D69C(v39, v40);
          if ( !HIDWORD(klass->_1.namespaze) )
          {
            if ( !v36 )
              sub_B5D69C(v39, v40);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v36,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v46.fields.current,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
          }
        }
      }
      *(_DWORD *)&v44[4 * v34 + 24] = 91;
      v34 = ++v45;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v46,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( v34 )
      {
        v42 = v34 - 1;
        if ( *(_DWORD *)&v44[4 * v34 + 20] == 91 )
        {
          --v34;
          v45 = v42;
        }
      }
      if ( !v33 )
LABEL_24:
        sub_B5D69C(v37, v38);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__);
      ++v35;
    }
    while ( v35 < blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v33;
}


void __fastcall AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBDA1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42EBDA1 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EBD9F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBD9F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}