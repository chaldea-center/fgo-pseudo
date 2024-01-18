void __fastcall AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418990E & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418990E = 1;
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

  if ( (byte_418990C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_List_DiggingBlockComponent___Invoke__, method);
    sub_B2C35C(&Method_BasicHelper_Shuffle_DiggingBlockComponent___, v3);
    byte_418990C = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    v11 = BasicHelper__Shuffle_string_(
            (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
            (const MethodInfo_172924C *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)closeCallbackFunc,
      (System_Uri_o *)v11,
      (const MethodInfo_24BBAEC *)Method_System_Action_List_DiggingBlockComponent___Invoke__);
  }
}


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
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189908 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v11);
    byte_4189908 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_B2C434(v13, v14);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v15 )
      break;
    if ( !v19.fields.current )
      sub_B2C434(v15, v16);
    klass = v19.fields.current[4].klass;
    if ( !klass )
      sub_B2C434(v15, v16);
    if ( LODWORD(klass->_1.namespaze) == blockId && !HIDWORD(klass->_1.namespaze) )
    {
      if ( !v12 )
        sub_B2C434(v15, v16);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v19.fields.current,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
  __int64 v17; // x1
  unsigned __int64 v18; // x24
  unsigned __int64 size; // x8
  int32_t v20; // w9

  if ( (byte_4189909 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, blockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    byte_4189909 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *consumeTotalNum = 0;
  if ( !blockList )
    goto LABEL_20;
  if ( blockList->fields._size >= 1 )
  {
    v18 = 0LL;
    while ( consumeList )
    {
      if ( v18 >= (unsigned int)consumeList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( userItemNum - consumeList->fields._items->m_Items[v18 + 1] >= 0 )
      {
        if ( v18 >= (unsigned int)blockList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v15 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)blockList->fields._items->m_Items[v18],
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
        size = (unsigned int)consumeList->fields._size;
        if ( v18 >= size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v20 = consumeList->fields._items->m_Items[v18 + 1];
        userItemNum -= v20;
        if ( size <= v18 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        *consumeTotalNum += v20;
      }
      if ( (__int64)++v18 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v15;
    }
LABEL_20:
    sub_B2C434(v16, v17);
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
  __int64 v17; // x1
  Il2CppObject *current; // x28
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  Il2CppClass *klass; // x8
  WarEntity_o *Entity; // x20
  WebViewManager_o *v25; // x0
  __int64 v26; // x1
  CommonConsumeMaster_o *v27; // x0
  __int64 v28; // x1
  CommonConsumeEntity_o *v29; // x0
  __int64 v30; // x1
  CommonConsumeEntity_o *v31; // x21
  _DWORD *monitor; // x8
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  __int64 v37; // x0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4189907 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, blockList);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4189907 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_B2C434(v16, v17);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v39 = v38;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v39.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v20);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_B2C434(MasterData_WarQuestSelectionMaster, v22);
    klass = current[4].klass;
    if ( !klass )
      sub_B2C434(MasterData_WarQuestSelectionMaster, v22);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(0LL, v22);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)klass->_1.namespaze,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v25 )
      sub_B2C434(0LL, v26);
    v27 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v25,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_B2C434(v27, v28);
    if ( !v27 )
      sub_B2C434(0LL, v28);
    v29 = CommonConsumeMaster__GetEntity(v27, HIDWORD(Entity->fields.age), 1, 0LL);
    v31 = v29;
    if ( !v29 )
    {
      if ( !v15 )
        sub_B2C434(0LL, v30);
      System_Collections_Generic_List_int___Add(
        v15,
        0,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    monitor = current[4].monitor;
    if ( monitor )
    {
      v33 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity->fields.longName,
              monitor[6],
              (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
      if ( (v33 & 0x80000000) != 0 )
      {
        if ( !v31 )
          sub_B2C434(v33, v34);
        if ( !v15 )
          sub_B2C434(v33, v34);
        goto LABEL_25;
      }
      v35 = *(_QWORD *)&Entity->fields.bannerId;
      if ( !v35 )
        sub_B2C434(v33, v34);
      if ( (unsigned int)v33 >= *(_DWORD *)(v35 + 24) )
      {
        v37 = sub_B2C460(v33);
        sub_B2C400(v37, 0LL);
      }
      if ( !v31 )
        sub_B2C434(v33, v34);
      if ( !v15 )
        sub_B2C434(v33, v34);
      System_Collections_Generic_List_int___Add(
        v15,
        v31->fields.num + *(_DWORD *)(v35 + 4LL * (int)v33 + 32),
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    else
    {
      if ( !v31 )
        sub_B2C434(v29, v30);
      if ( !v15 )
        sub_B2C434(v29, v30);
LABEL_25:
      System_Collections_Generic_List_int___Add(
        v15,
        v31->fields.num,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v15;
}


void __fastcall AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__OnClickCloseBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418990B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418990B = 1;
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  BattleServantConfConponent_o *p_activateMaskPanel; // x0
  System_Action_bool__o *activateMaskPanel; // x20
  System_Action_o *v14; // x20

  if ( (byte_418990A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__Invoke__, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_AutoDiggingDialogComponent_EndClose__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418990A = 1;
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
      sub_B2C2F8(p_activateMaskPanel, 0LL, v6, v7, v8, v9, v10, v11);
      System_Action_bool___Invoke(activateMaskPanel, 1, (const MethodInfo_24B7BA4 *)Method_System_Action_bool__Invoke__);
    }
    v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int64_t Instance; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x3
  struct UISprite_array *itemIcon; // x8
  struct UISprite_array *v53; // x8
  int64_t v54; // x25
  int v55; // w22
  unsigned __int64 v56; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x27
  UserItemMaster_o *v58; // x28
  _BOOL8 v59; // x0
  __int64 v60; // x1
  Il2CppObject *current; // x20
  WebViewManager_o *v62; // x0
  __int64 v63; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v65; // x1
  Il2CppClass *klass; // x8
  WarEntity_o *v67; // x20
  WebViewManager_o *v68; // x0
  __int64 v69; // x1
  CommonConsumeMaster_o *v70; // x0
  __int64 v71; // x1
  CommonConsumeEntity_o *v72; // x0
  int32_t objectId; // w20
  const MethodInfo *v74; // x2
  int v75; // w8
  struct UISprite_array *v76; // x8
  UISprite_o *v77; // x21
  const MethodInfo *v78; // x2
  struct UISprite_array *consumeItemIcon; // x8
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v83; // x20
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v85; // x20
  System_String_o *v86; // x1
  struct UILabel_array *v87; // x8
  struct UILabel_array *v88; // x8
  __int64 v89; // x8
  UILabel_o *v90; // x20
  UILabel_o *ComponentInChildren_UILabel; // x23
  UILabel_o *consumeLabel; // x20
  UILabel_o *possessionLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *messageLabel; // x20
  __int64 *v97; // x8
  const MethodInfo *v98; // x2
  _BOOL8 v99; // x0
  __int64 v100; // x1
  struct UILabel_array *v101; // x8
  UIWidget_o *v102; // x20
  __int64 v103; // x0
  __int64 v104; // x1
  int v105; // s0
  int v109; // w22
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Action_o *v122; // x20
  __int64 v123; // x0
  __int64 v124; // x0
  System_Collections_Generic_List_int__o *v127; // [xsp+18h] [xbp-E8h]
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+20h] [xbp-E0h]
  char v129; // [xsp+2Ch] [xbp-D4h]
  _BYTE v130[40]; // [xsp+30h] [xbp-D0h] BYREF
  int v131; // [xsp+58h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v132; // [xsp+60h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+7Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v134; // [xsp+80h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_4189904 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, blockList);
    sub_B2C35C(&AtlasManager_TypeInfo, v7);
    sub_B2C35C(&Method_AutoDiggingDialogComponent__Open_b__17_0__, v8);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__, v27);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_B2C35C(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v29);
    sub_B2C35C(&LocalizationManager_TypeInfo, v30);
    sub_B2C35C(&NetworkManager_TypeInfo, v31);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B2C35C(&StringLiteral_4585/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, v33);
    sub_B2C35C(&StringLiteral_1750/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v34);
    sub_B2C35C(&StringLiteral_4583/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v35);
    sub_B2C35C(&StringLiteral_1752/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, v36);
    sub_B2C35C(&StringLiteral_1751/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, v37);
    sub_B2C35C(&StringLiteral_11092/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v38);
    sub_B2C35C(&StringLiteral_11091/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v39);
    sub_B2C35C(&StringLiteral_1753/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/, v40);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v41);
    byte_4189904 = 1;
  }
  entity = 0LL;
  memset(&v134, 0, sizeof(v134));
  consumeTotalNum = 0;
  memset(&v132, 0, sizeof(v132));
  v131 = 0;
  this->fields.state = 1;
  v127 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v127,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v42;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.autoDiggingBlockList,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_113;
  Instance = (int64_t)AutoDiggingDialogComponent__SortActiveBlockList(
                        (AutoDiggingDialogComponent_o *)Instance,
                        blockList,
                        itemIcon->max_length,
                        v51);
  v53 = this->fields.itemIcon;
  if ( !v53 )
    goto LABEL_113;
  v129 = 0;
  v54 = Instance;
  v55 = 0;
  v56 = 0LL;
  while ( (__int64)v56 < (int)v53->max_length )
  {
    v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v57,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_113;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    if ( !blockList )
      goto LABEL_113;
    v58 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v130,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v134 = *(System_Collections_Generic_List_Enumerator_T__o *)v130;
    while ( 1 )
    {
      v59 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v134,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v59 )
        break;
      current = v134.fields.current;
      if ( !v134.fields.current )
        sub_B2C434(v59, v60);
      if ( v56 == LODWORD(v134.fields.current[5].klass) )
      {
        v62 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v62 )
          sub_B2C434(0LL, v63);
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)v62,
                                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        klass = current[4].klass;
        if ( !klass )
          sub_B2C434(MasterData_WarQuestSelectionMaster, v65);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B2C434(0LL, v65);
        v67 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                MasterData_WarQuestSelectionMaster,
                (int32_t)klass->_1.namespaze,
                (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v68 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v68 )
          sub_B2C434(0LL, v69);
        v70 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v68,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v67 )
          sub_B2C434(v70, v71);
        if ( !v70 )
          sub_B2C434(0LL, v71);
        v72 = CommonConsumeMaster__GetEntity(v70, HIDWORD(v67->fields.age), 1, 0LL);
        if ( v72 )
        {
          objectId = v72->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    *(_DWORD *)&v130[4 * v55 + 24] = 201;
    v55 = ++v131;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v134,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    if ( v55 )
    {
      v75 = v55 - 1;
      if ( *(_DWORD *)&v130[4 * v55 + 20] == 201 )
      {
        --v55;
        v131 = v75;
      }
    }
    v76 = this->fields.itemIcon;
    if ( !v76 )
      goto LABEL_113;
    if ( v56 >= v76->max_length )
      goto LABEL_114;
    v77 = v76->m_Items[v56];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetItem(v77, objectId, v74);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_113;
    if ( v56 >= consumeItemIcon->max_length )
      goto LABEL_114;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v56], objectId, v78);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v58 )
      goto LABEL_113;
    Instance = UserItemMaster__TryGetEntity(v58, &entity, Instance, objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v54 )
        goto LABEL_113;
      if ( v56 >= *(unsigned int *)(v54 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Instance = (int64_t)AutoDiggingDialogComponent__GetDiggingConsumeList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(*(_QWORD *)(v54 + 16)
                                                                                         + 8 * v56
                                                                                         + 32),
                            v80);
      if ( v56 >= *(unsigned int *)(v54 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !entity )
        goto LABEL_113;
      Instance = (int64_t)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(*(_QWORD *)(v54 + 16)
                                                                                         + 8 * v56
                                                                                         + 32),
                            (System_Collections_Generic_List_int__o *)Instance,
                            entity->fields.num,
                            &consumeTotalNum,
                            v81);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_113;
      if ( v56 >= itemNumLabel->max_length )
        goto LABEL_114;
      if ( !entity )
        goto LABEL_113;
      v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance;
      v83 = itemNumLabel->m_Items[v56];
      Instance = (int64_t)BasicHelper__ToCommaString(entity->fields.num, 0LL);
      if ( !v83 )
        goto LABEL_113;
      UILabel__set_text(v83, (System_String_o *)Instance, 0LL);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_113;
      if ( v56 >= consumeItemNumLabel->max_length )
        goto LABEL_114;
      v85 = consumeItemNumLabel->m_Items[v56];
      Instance = (int64_t)BasicHelper__ToCommaString(consumeTotalNum, 0LL);
      if ( !v85 )
        goto LABEL_113;
      v86 = (System_String_o *)Instance;
      Instance = (int64_t)v85;
    }
    else
    {
      v87 = this->fields.itemNumLabel;
      if ( !v87 )
        goto LABEL_113;
      if ( v56 >= v87->max_length )
      {
LABEL_114:
        v123 = sub_B2C460(Instance);
        sub_B2C400(v123, 0LL);
      }
      Instance = (int64_t)v87->m_Items[v56];
      if ( !Instance )
        goto LABEL_113;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_953/*"0"*/, 0LL);
      v88 = this->fields.consumeItemNumLabel;
      if ( !v88 )
        goto LABEL_113;
      if ( v56 >= v88->max_length )
        goto LABEL_114;
      Instance = (int64_t)v88->m_Items[v56];
      if ( !Instance )
        goto LABEL_113;
      v86 = (System_String_o *)StringLiteral_953/*"0"*/;
    }
    UILabel__set_text((UILabel_o *)Instance, v86, 0LL);
    if ( !v57 )
      goto LABEL_113;
    if ( v57->fields._size < 1 )
    {
      if ( !v54 )
        goto LABEL_113;
      if ( v56 >= *(unsigned int *)(v54 + 24) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v89 = *(_QWORD *)(*(_QWORD *)(v54 + 16) + 8 * v56 + 32);
      if ( !v89 )
        goto LABEL_113;
      if ( *(int *)(v89 + 24) >= 1 )
      {
        Instance = (int64_t)v127;
        if ( !v127 )
          goto LABEL_113;
        System_Collections_Generic_List_int___Add(
          v127,
          v56,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    else
    {
      Instance = (int64_t)*p_autoDiggingBlockList;
      if ( !*p_autoDiggingBlockList )
        goto LABEL_113;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
        (System_Collections_Generic_IEnumerable_T__o *)v57,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v129 = 1;
    }
    v53 = this->fields.itemIcon;
    ++v56;
    if ( !v53 )
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
                        (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  if ( !this->fields.closeButton )
    goto LABEL_113;
  v90 = (UILabel_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0LL);
  if ( !Instance )
    goto LABEL_113;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  (UnityEngine_Component_o *)Instance,
                                  1,
                                  (const MethodInfo_172DD14 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____67394664);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11092/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v90 )
    goto LABEL_113;
  UILabel__set_text(v90, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11091/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_113;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4583/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_113;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  possessionLabel = this->fields.possessionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4585/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0LL);
  if ( !possessionLabel )
    goto LABEL_113;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0LL);
  titleLabel = this->fields.titleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1752/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_113;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1751/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_113;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (v129 & 1) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v97 = &StringLiteral_1750/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v97 = &StringLiteral_1753/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)*v97, 0LL);
  if ( !messageLabel )
    goto LABEL_113;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v129 & 1, v98);
  Instance = (int64_t)v127;
  if ( !v127 )
    goto LABEL_113;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v130,
    v127,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v132 = *(System_Collections_Generic_List_Enumerator_int__o *)v130;
  while ( 1 )
  {
    v99 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v132,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v99 )
      break;
    v101 = this->fields.consumeItemNumLabel;
    if ( !v101 )
      sub_B2C434(v99, v100);
    if ( v132.fields.current >= v101->max_length )
    {
      v124 = sub_B2C460(v99);
      sub_B2C400(v124, 0LL);
    }
    v102 = (UIWidget_o *)v101->m_Items[v132.fields.current];
    *(UnityEngine_Color_o *)&v105 = UnityEngine_Color__get_red(0LL);
    if ( !v102 )
      sub_B2C434(v103, v104);
    UIWidget__set_color(v102, *(UnityEngine_Color_o *)&v105, 0LL);
  }
  *(_DWORD *)&v130[4 * v55 + 24] = 711;
  v109 = ++v131;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v132,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v109 && *(_DWORD *)&v130[4 * v109 + 20] == 711 )
    v131 = v109 - 1;
  this->fields.activateMaskPanel = setMask;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.activateMaskPanel,
    (System_Int32_array **)setMask,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  this->fields.closeCallbackFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
LABEL_113:
    sub_B2C434(Instance, v50);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v122 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v122, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v122, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  unsigned int v6; // w19

  if ( (byte_4189905 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UICommonButton___, isEnable);
    byte_4189905 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_13;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              decideButton,
                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !decideButton )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  v6 = isEnable ? 0 : 3;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    decideButton,
                                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_13:
    sub_B2C434(decideButton, isEnable);
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
  int v16; // w27
  int32_t v17; // w24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppClass *klass; // x9
  int v24; // w8
  _BYTE v26[28]; // [xsp+10h] [xbp-90h] BYREF
  int v27; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4189906 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo, v14);
    byte_4189906 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v27 = 0;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v18,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_24;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v26,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v28 = *(System_Collections_Generic_List_Enumerator_T__o *)v26;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v28,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v21 )
          break;
        if ( !v28.fields.current )
          sub_B2C434(v21, v22);
        if ( LODWORD(v28.fields.current[5].klass) == v17 )
        {
          klass = v28.fields.current[4].klass;
          if ( !klass )
            sub_B2C434(v21, v22);
          if ( !HIDWORD(klass->_1.namespaze) )
          {
            if ( !v18 )
              sub_B2C434(v21, v22);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v28.fields.current,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
          }
        }
      }
      *(_DWORD *)&v26[4 * v16 + 24] = 91;
      v16 = ++v27;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v28,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( v16 )
      {
        v24 = v16 - 1;
        if ( *(_DWORD *)&v26[4 * v16 + 20] == 91 )
        {
          --v16;
          v27 = v24;
        }
      }
      if ( !v15 )
LABEL_24:
        sub_B2C434(v19, v20);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__);
      ++v17;
    }
    while ( v17 < blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v15;
}


void __fastcall AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418990F & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_418990F = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_418990D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418990D = 1;
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
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}