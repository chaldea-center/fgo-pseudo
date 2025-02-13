void __fastcall AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BE082B & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BE082B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__EndClose(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_List_DiggingBlockComponent___o *closeCallbackFunc; // x20
  System_Collections_Generic_List_T__o *v10; // x0

  if ( (byte_4BE0829 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    byte_4BE0829 = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    v10 = BasicHelper__Shuffle_object_(
            (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
            (const MethodInfo_2F9F75C *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Collections_Generic_List_T__o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      v10,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


System_Collections_Generic_List_DiggingBlockComponent__o *__fastcall AutoDiggingDialogComponent__GetActiveBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t blockId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BE0825 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4BE0825 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_1C22094(v7, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v9 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1C22094(v9, v10);
    monitor = v25.fields._current[4].monitor;
    if ( !monitor )
      sub_1C22094(v9, v10);
    if ( monitor[6] == blockId && !monitor[7] )
    {
      if ( !v6 )
        sub_1C22094(v9, v10);
      items = v6->fields._items;
      v20 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C22094(v9, v10);
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          current,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v22[4] = (Il2CppClass *)current;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)current, v11, v12, v13, v14, v15, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
  System_Collections_Generic_List_object__o *v10; // x23
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  int32_t v13; // w24
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int64_t v23; // x1
  Il2CppClass **v24; // x0
  int32_t v25; // w0
  int32_t v26; // w28

  if ( (byte_4BE0826 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4BE0826 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *consumeTotalNum = 0;
  if ( !blockList )
    goto LABEL_16;
  if ( blockList->fields._size >= 1 )
  {
    v13 = 0;
    while ( consumeList )
    {
      Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                               consumeList,
                               v13,
                               (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( userItemNum - (int)Item >= 0 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)blockList,
                 v13,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
        if ( !v10 )
          break;
        items = v10->fields._items;
        v21 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        v23 = (int64_t)Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            Item,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v23;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), v23, v14, v15, v16, v17, v18, v19);
        }
        v25 = System_Collections_Generic_List_int___get_Item(
                consumeList,
                v13,
                (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
        v26 = *consumeTotalNum;
        userItemNum -= v25;
        Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                 consumeList,
                                 v13,
                                 (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
        *consumeTotalNum = (_DWORD)Item + v26;
      }
      if ( ++v13 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v10;
    }
LABEL_16:
    sub_1C22094(Item, v12);
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
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x1
  _DWORD *monitor; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  CommonConsumeEntity_o *v18; // x0
  __int64 v19; // x1
  CommonConsumeEntity_o *v20; // x21
  Il2CppClass *klass; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  __int64 v25; // x0
  __int64 v26; // x1
  Il2CppClass *v27; // x8
  int32_t v28; // w9
  int v29; // w11
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x10
  __int64 v32; // x12
  __int64 num; // x1
  int32_t v34; // w9
  char *v35; // x8
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BE0824 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE0824 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_1C22094(v5, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v41.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1C22094(MasterData_object, v11);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1C22094(MasterData_object, v11);
    if ( !MasterData_object )
      sub_1C22094(0LL, v11);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v14 )
      sub_1C22094(0LL, v15);
    v16 = DataManager__GetMasterData_object_(
            (DataManager_o *)v14,
            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_1C22094(v16, v17);
    if ( !v16 )
      sub_1C22094(0LL, v17);
    v18 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v16, HIDWORD(Entity[1].monitor), 1, 0LL);
    v20 = v18;
    if ( !v18 )
    {
      if ( !v4 )
        sub_1C22094(0LL, v19);
      items = v4->fields._items;
      v23 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C22094(0LL, v19);
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          0,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size + 1] = 0;
      }
      klass = current[5].klass;
      if ( !klass )
        sub_1C22094(v18, v19);
      goto LABEL_23;
    }
    klass = current[5].klass;
    if ( klass )
    {
LABEL_23:
      v25 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity[2].monitor,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
      if ( (v25 & 0x80000000) != 0 )
      {
        if ( !v20 )
          sub_1C22094(v25, v26);
        if ( !v4 )
          sub_1C22094(v25, v26);
        num = (unsigned int)v20->fields.num;
        v36 = v4->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !v36 )
          sub_1C22094(v25, num);
        v38 = v4->fields._size;
        if ( (unsigned int)v38 < v36->max_length )
          goto LABEL_40;
LABEL_35:
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          num,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = Entity[3].klass;
        if ( !v27 )
          sub_1C22094(v25, v26);
        if ( (unsigned int)v25 >= LODWORD(v27->_1.namespaze) )
          sub_1C2209C(v25, v26);
        if ( !v20 )
          sub_1C22094(v25, v26);
        if ( !v4 )
          sub_1C22094(v25, v26);
        v28 = v20->fields.num;
        v29 = *((_DWORD *)&v27->_1.byval_arg.data + (unsigned int)v25);
        v30 = v4->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !v30 )
          sub_1C22094(v25, v26);
        v32 = v4->fields._size;
        LODWORD(num) = v28 + v29;
        if ( (unsigned int)v32 < v30->max_length )
        {
          v34 = v32 + 1;
          v35 = (char *)v30 + 4 * v32;
          goto LABEL_41;
        }
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          num,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v4 )
        sub_1C22094(v18, v19);
      num = (unsigned int)v18->fields.num;
      v36 = v4->fields._items;
      v37 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !v36 )
        sub_1C22094(v18, num);
      v38 = v4->fields._size;
      if ( (unsigned int)v38 >= v36->max_length )
        goto LABEL_35;
LABEL_40:
      v34 = v38 + 1;
      v35 = (char *)v36 + 4 * v38;
LABEL_41:
      v4->fields._size = v34;
      *((_DWORD *)v35 + 8) = num;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v4;
}


void __fastcall AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__OnClickCloseBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4BE0828 & 1) == 0 )
  {
    sub_1C21E38(&Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    byte_4BE0828 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall AutoDiggingDialogComponent__OnClickDecideBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_activateMaskPanel; // x0
  struct System_Action_bool__o *activateMaskPanel; // x20
  System_Action_o *v13; // x20

  if ( (byte_4BE0827 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_AutoDiggingDialogComponent_EndClose__);
    sub_1C21E38(&Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    byte_4BE0827 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    p_activateMaskPanel = (PartyOrganizationUtility_o *)&this->fields.activateMaskPanel;
    activateMaskPanel = this->fields.activateMaskPanel;
    if ( activateMaskPanel )
    {
      p_activateMaskPanel->klass = 0LL;
      sub_1C21DDC(p_activateMaskPanel, 0LL, v5, v6, v7, v8, v9, v10);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))activateMaskPanel->fields.m_target)(
        activateMaskPanel->fields.original_method_info,
        1LL,
        *(_QWORD *)&activateMaskPanel->fields.extra_arg);
    }
    v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall AutoDiggingDialogComponent__Open(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        System_Action_bool__o *setMask,
        System_Action_List_DiggingBlockComponent___o *closeCallback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UILabel_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  struct UISprite_array *itemIcon; // x8
  struct UISprite_array *v19; // x8
  System_Collections_Generic_List_object__o *v20; // x25
  unsigned __int64 v21; // x26
  System_Collections_Generic_List_object__o *v22; // x28
  UserItemMaster_o *v23; // x29
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x20
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v30; // x1
  _DWORD *monitor; // x8
  Il2CppObject *v32; // x20
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  CommonConsumeEntity_o *v37; // x0
  int32_t objectId; // w20
  struct UISprite_array *v39; // x8
  UISprite_o *v40; // x21
  struct UISprite_array *consumeItemIcon; // x8
  Il2CppObject *Item; // x0
  const MethodInfo *v43; // x2
  System_Collections_Generic_List_int__o *DiggingConsumeList; // x20
  const MethodInfo *v45; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v47; // x20
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v49; // x20
  System_String_o *v50; // x1
  struct UILabel_array *v51; // x8
  struct UILabel_array *v52; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  UILabel_o *v56; // x20
  Il2CppObject *ComponentInChildren_object; // x23
  UILabel_o *consumeLabel; // x20
  UILabel_o *possessionLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o **v63; // x8
  const MethodInfo *v64; // x2
  _BOOL8 v65; // x0
  __int64 v66; // x1
  struct UILabel_array *v67; // x8
  UIWidget_o *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  System_Action_o *v81; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+18h] [xbp-C8h]
  char v85; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+40h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+60h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BE0821 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_AutoDiggingDialogComponent__Open_b__17_0__);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____77648704);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_5142/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/);
    sub_1C21E38(&StringLiteral_2185/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_5140/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/);
    sub_1C21E38(&StringLiteral_2187/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_2186/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/);
    sub_1C21E38(&StringLiteral_11287/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C21E38(&StringLiteral_11286/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C21E38(&StringLiteral_2188/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BE0821 = 1;
  }
  entity = 0LL;
  memset(&v89, 0, sizeof(v89));
  consumeTotalNum = 0;
  memset(&v87, 0, sizeof(v87));
  this->fields.state = 1;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v8;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.autoDiggingBlockList,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  itemIcon = this->fields.itemIcon;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  if ( !itemIcon )
    goto LABEL_100;
  Instance = (UILabel_o *)AutoDiggingDialogComponent__SortActiveBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            blockList,
                            itemIcon->max_length,
                            v17);
  v19 = this->fields.itemIcon;
  if ( !v19 )
    goto LABEL_100;
  v85 = 0;
  v20 = (System_Collections_Generic_List_object__o *)Instance;
  v21 = 0LL;
  while ( (__int64)v21 < (int)v19->max_length )
  {
    v22 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = (UILabel_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    if ( !blockList )
      goto LABEL_100;
    v23 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v86,
      (System_Collections_Generic_List_object__o *)blockList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v89 = v86;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v89,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v24 )
        break;
      current = v89.fields._current;
      if ( !v89.fields._current )
        sub_1C22094(v24, v25);
      if ( v21 == LODWORD(v89.fields._current[5].monitor) )
      {
        v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v27 )
          sub_1C22094(0LL, v28);
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)v27,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        monitor = current[4].monitor;
        if ( !monitor )
          sub_1C22094(MasterData_object, v30);
        if ( !MasterData_object )
          sub_1C22094(0LL, v30);
        v32 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                monitor[6],
                (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v33 )
          sub_1C22094(0LL, v34);
        v35 = DataManager__GetMasterData_object_(
                (DataManager_o *)v33,
                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v32 )
          sub_1C22094(v35, v36);
        if ( !v35 )
          sub_1C22094(0LL, v36);
        v37 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v35, HIDWORD(v32[1].monitor), 1, 0LL);
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
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v89,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v39 = this->fields.itemIcon;
    if ( !v39 )
      goto LABEL_100;
    if ( v21 >= v39->max_length )
      goto LABEL_101;
    v40 = v39->m_Items[v21];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (UILabel_o *)AtlasManager__SetItem(v40, objectId, 0LL);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_100;
    if ( v21 >= consumeItemIcon->max_length )
      goto LABEL_101;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v21], objectId, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    Instance = (UILabel_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (UILabel_o *)NetworkManager_TypeInfo;
    }
    if ( !v23 )
      goto LABEL_100;
    Instance = (UILabel_o *)UserItemMaster__TryGetEntity(
                              v23,
                              &entity,
                              (int64_t)Instance->fields.onChange->fields.original_method_info,
                              objectId,
                              0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_100;
      Item = System_Collections_Generic_List_object___get_Item(
               v20,
               v21,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      DiggingConsumeList = AutoDiggingDialogComponent__GetDiggingConsumeList(
                             (AutoDiggingDialogComponent_o *)Item,
                             (System_Collections_Generic_List_DiggingBlockComponent__o *)Item,
                             v43);
      Instance = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                v20,
                                v21,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !entity )
        goto LABEL_100;
      Instance = (UILabel_o *)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                                (AutoDiggingDialogComponent_o *)Instance,
                                (System_Collections_Generic_List_DiggingBlockComponent__o *)Instance,
                                DiggingConsumeList,
                                entity->fields.num,
                                &consumeTotalNum,
                                v45);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_100;
      if ( v21 >= itemNumLabel->max_length )
        goto LABEL_101;
      if ( !entity )
        goto LABEL_100;
      v22 = (System_Collections_Generic_List_object__o *)Instance;
      v47 = itemNumLabel->m_Items[v21];
      Instance = (UILabel_o *)BasicHelper__ToCommaString(entity->fields.num, 0LL);
      if ( !v47 )
        goto LABEL_100;
      UILabel__set_text(v47, (System_String_o *)Instance, 0LL);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_100;
      if ( v21 >= consumeItemNumLabel->max_length )
        goto LABEL_101;
      v49 = consumeItemNumLabel->m_Items[v21];
      Instance = (UILabel_o *)BasicHelper__ToCommaString(consumeTotalNum, 0LL);
      if ( !v49 )
        goto LABEL_100;
      v50 = (System_String_o *)Instance;
      Instance = v49;
    }
    else
    {
      v51 = this->fields.itemNumLabel;
      if ( !v51 )
        goto LABEL_100;
      if ( v21 >= v51->max_length )
LABEL_101:
        sub_1C2209C(Instance, v16);
      Instance = v51->m_Items[v21];
      if ( !Instance )
        goto LABEL_100;
      UILabel__set_text(Instance, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL);
      v52 = this->fields.consumeItemNumLabel;
      if ( !v52 )
        goto LABEL_100;
      if ( v21 >= v52->max_length )
        goto LABEL_101;
      Instance = v52->m_Items[v21];
      if ( !Instance )
        goto LABEL_100;
      v50 = (System_String_o *)StringLiteral_1212/*"0"*/;
    }
    UILabel__set_text(Instance, v50, 0LL);
    if ( !v22 )
      goto LABEL_100;
    if ( v22->fields._size < 1 )
    {
      if ( !v20 )
        goto LABEL_100;
      Instance = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                v20,
                                v21,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !Instance )
        goto LABEL_100;
      if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
      {
        if ( !v7 )
          goto LABEL_100;
        items = v7->fields._items;
        v54 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_100;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v21,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = v21;
        }
      }
    }
    else
    {
      Instance = (UILabel_o *)*p_autoDiggingBlockList;
      if ( !*p_autoDiggingBlockList )
        goto LABEL_100;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)Instance,
        (System_Collections_Generic_IEnumerable_T__o *)v22,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v85 = 1;
    }
    v19 = this->fields.itemIcon;
    ++v21;
    if ( !v19 )
      goto LABEL_100;
  }
  Instance = (UILabel_o *)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_100;
  Instance = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_100;
  Instance = (UILabel_o *)UnityEngine_Component__GetComponentInChildren_object_(
                            (UnityEngine_Component_o *)Instance,
                            1,
                            (const MethodInfo_2FA6D2C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____77648704);
  if ( !this->fields.closeButton )
    goto LABEL_100;
  v56 = Instance;
  Instance = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0LL);
  if ( !Instance )
    goto LABEL_100;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_2FA6D2C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____77648704);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11287/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v56 )
    goto LABEL_100;
  UILabel__set_text(v56, (System_String_o *)Instance, 0LL);
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11286/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5140/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_100;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  possessionLabel = this->fields.possessionLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5142/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0LL);
  if ( !possessionLabel )
    goto LABEL_100;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0LL);
  titleLabel = this->fields.titleLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2187/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_100;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2186/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_100;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v63 = (System_String_o **)&StringLiteral_2185/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  if ( (v85 & 1) == 0 )
    v63 = (System_String_o **)&StringLiteral_2188/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  Instance = (UILabel_o *)LocalizationManager__Get(*v63, 0LL);
  if ( !messageLabel )
    goto LABEL_100;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v85 & 1, v64);
  if ( !v7 )
    goto LABEL_100;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v86,
    v7,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v87 = v86;
  while ( 1 )
  {
    v65 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v87,
            (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v65 )
      break;
    v67 = this->fields.consumeItemNumLabel;
    if ( !v67 )
      sub_1C22094(v65, v66);
    if ( LODWORD(v87.fields._current) >= v67->max_length )
      sub_1C2209C(v65, v66);
    v68 = (UIWidget_o *)v67->m_Items[SLODWORD(v87.fields._current)];
    if ( !v68 )
      sub_1C22094(0LL, v66);
    v91.fields.r = 1.0;
    v91.fields.g = 0.0;
    v91.fields.b = 0.0;
    v91.fields.a = 1.0;
    UIWidget__set_color(v68, v91, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v87,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  this->fields.activateMaskPanel = setMask;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.activateMaskPanel,
    (int64_t)setMask,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeCallback,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  Instance = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
LABEL_100:
    sub_1C22094(Instance, v16);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v81 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v81, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  __int64 v6; // x1

  if ( (byte_4BE0822 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    byte_4BE0822 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, bool, void *))decideButton->klass[1]._1.namespaze)(
          decideButton,
          isEnable,
          decideButton->klass[1]._1.byval_arg.data),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_1C22094(decideButton, isEnable);
  }
  if ( isEnable )
    v6 = 0LL;
  else
    v6 = 3LL;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
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
  System_Collections_Generic_List_object__o *v6; // x21
  int v7; // w25
  System_Collections_Generic_List_object__o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  Il2CppClass **v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BE0823 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4BE0823 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v7 = 0;
    do
    {
      v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v8,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v36,
        (System_Collections_Generic_List_object__o *)blockList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v37 = v36;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v37,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v11 )
          break;
        current = v37.fields._current;
        if ( !v37.fields._current )
          sub_1C22094(v11, v12);
        if ( LODWORD(v37.fields._current[5].monitor) == v7 )
        {
          monitor = v37.fields._current[4].monitor;
          if ( !monitor )
            sub_1C22094(v11, v12);
          if ( !monitor[7] )
          {
            if ( !v8 )
              sub_1C22094(v11, v12);
            items = v8->fields._items;
            v22 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
            ++v8->fields._version;
            if ( !items )
              sub_1C22094(v11, v12);
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                current,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v24[4] = (Il2CppClass *)current;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)current, v13, v14, v15, v16, v17, v18);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v37,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( !v6
        || (v31 = v6->fields._items,
            v32 = Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__,
            ++v6->fields._version,
            !v31) )
      {
LABEL_29:
        sub_1C22094(v9, v10);
      }
      v33 = v6->fields._size;
      if ( (unsigned int)v33 >= v31->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v8,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &v31->obj.klass + v33;
        v6->fields._size = v33 + 1;
        v34[4] = (Il2CppClass *)v8;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v8, v25, v26, v27, v28, v29, v30);
      }
      ++v7;
    }
    while ( v7 != blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v6;
}


void __fastcall AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BE082C & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_bool___);
    byte_4BE082C = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2F02520 *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4BE082A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE082A = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C22094(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}