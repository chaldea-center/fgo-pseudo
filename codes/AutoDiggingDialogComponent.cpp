void AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AA42 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596AA42 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void AutoDiggingDialogComponent__EndClose(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_List_DiggingBlockComponent___o *closeCallbackFunc; // x20
  System_Collections_Generic_List_T__o *v10; // x1

  if ( (byte_596AA40 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    byte_596AA40 = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    v10 = BasicHelper__Shuffle_object_(
            (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
            (const MethodInfo_3815BD8 *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    ((void (__fastcall *)(intptr_t, System_Collections_Generic_List_T__o *, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      v10,
      closeCallbackFunc->fields.method);
  }
}


System_Collections_Generic_List_DiggingBlockComponent__o *AutoDiggingDialogComponent__GetActiveBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t blockId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *current; // x1
  _DWORD *monitor; // x8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596AA3C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_596AA3C = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_2213CDC(v7, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v24,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v9 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_2213CDC(v9, 0);
    monitor = v24.fields._current[4].monitor;
    if ( !monitor )
      sub_2213CDC(v9, v24.fields._current);
    if ( monitor[6] == blockId && !monitor[7] )
    {
      if ( !v6
        || (items = v6->fields._items,
            v19 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__,
            ++v6->fields._version,
            !items) )
      {
        sub_2213CDC(v9, current);
      }
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          current,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v21[4] = (Il2CppClass *)current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)current, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v6;
}


System_Collections_Generic_List_DiggingBlockComponent__o *AutoDiggingDialogComponent__GetAutoDiggingBlockList(
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppObject *v23; // x1
  Il2CppClass **v24; // x0
  int32_t v25; // w0
  int32_t v26; // w28

  if ( (byte_596AA3D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_596AA3D = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
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
                               (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( userItemNum - (int)Item >= 0 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)blockList,
                 v13,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
        if ( !v10 )
          break;
        items = v10->fields._items;
        v21 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        v23 = Item;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            Item,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
        }
        v25 = System_Collections_Generic_List_int___get_Item(
                consumeList,
                v13,
                (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
        v26 = *consumeTotalNum;
        userItemNum -= v25;
        Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                 consumeList,
                                 v13,
                                 (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
        *consumeTotalNum = (_DWORD)Item + v26;
      }
      if ( ++v13 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v10;
    }
LABEL_16:
    sub_2213CDC(Item, v12);
  }
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v10;
}


System_Collections_Generic_List_int__o *AutoDiggingDialogComponent__GetDiggingConsumeList(
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
  Il2CppObject *Entity; // x21
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  CommonConsumeEntity_o *v18; // x0
  __int64 num; // x1
  CommonConsumeEntity_o *v20; // x20
  Il2CppClass *klass; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x10
  unsigned int size; // w9
  struct System_Int32_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x0
  Il2CppClass *v29; // x8
  char *v30; // x9
  int32_t v31; // w12
  int v32; // w11
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596AA3B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AA3B = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_2213CDC(v5, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v35 = v34;
  v34.fields._list = 0;
  *(_QWORD *)&v34.fields._index = &v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v35.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_2213CDC(MasterData_object, v11);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_2213CDC(MasterData_object, v11);
    if ( !MasterData_object )
      sub_2213CDC(0, v11);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v14 )
      sub_2213CDC(0, v15);
    v16 = DataManager__GetMasterData_object_(
            (DataManager_o *)v14,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_2213CDC(v16, v17);
    if ( !v16 )
      sub_2213CDC(0, v17);
    v18 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v16, HIDWORD(Entity[1].monitor), 1, 0);
    v20 = v18;
    if ( v18 )
    {
      klass = current[5].klass;
      if ( klass )
        goto LABEL_25;
      if ( !v4
        || (items = v4->fields._items,
            num = (unsigned int)v18->fields.num,
            v23 = Method_System_Collections_Generic_List_int__Add__,
            ++v4->fields._version,
            !items) )
      {
        sub_2213CDC(v18, num);
      }
      size = v4->fields._size;
      if ( size >= LODWORD(items->max_length) )
        goto LABEL_18;
LABEL_37:
      v4->fields._size = size + 1;
      items->m_Items[size] = num;
    }
    else
    {
      if ( !v4
        || (v25 = v4->fields._items, v26 = Method_System_Collections_Generic_List_int__Add__,
                                     ++v4->fields._version,
                                     !v25) )
      {
        sub_2213CDC(0, num);
      }
      v27 = v4->fields._size;
      if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          0,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = v27 + 1;
        v25->m_Items[v27] = 0;
      }
      klass = current[5].klass;
      if ( !klass )
        sub_2213CDC(v18, num);
LABEL_25:
      v28 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity[2].monitor,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
      if ( (v28 & 0x80000000) != 0 )
      {
        if ( !v20 )
          sub_2213CDC(v28, num);
        if ( !v4
          || (items = v4->fields._items,
              num = (unsigned int)v20->fields.num,
              v23 = Method_System_Collections_Generic_List_int__Add__,
              ++v4->fields._version,
              !items) )
        {
          sub_2213CDC(v28, num);
        }
        size = v4->fields._size;
        if ( size < LODWORD(items->max_length) )
          goto LABEL_37;
      }
      else
      {
        v29 = Entity[3].klass;
        if ( !v29 )
          sub_2213CDC(v28, num);
        if ( (unsigned int)v28 >= LODWORD(v29->_1.namespaze) )
          sub_2213CE4(v28);
        if ( !v20 )
          sub_2213CDC(v28, num);
        if ( !v4
          || (v30 = (char *)v29 + 4 * (unsigned int)v28,
              items = v4->fields._items,
              v31 = v20->fields.num,
              v23 = Method_System_Collections_Generic_List_int__Add__,
              v32 = *((_DWORD *)v30 + 8),
              ++v4->fields._version,
              !items) )
        {
          sub_2213CDC(v28, num);
        }
        size = v4->fields._size;
        LODWORD(num) = v31 + v32;
        if ( size < LODWORD(items->max_length) )
          goto LABEL_37;
      }
LABEL_18:
      System_Collections_Generic_List_int___AddWithResize(
        v4,
        num,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v4;
}


void AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void AutoDiggingDialogComponent__OnClickCloseBtn(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_596AA3F & 1) == 0 )
  {
    sub_2213A60(&Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    byte_596AA3F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    BaseDialog__Close((BaseDialog_o *)this, 0, 0);
  }
}


void AutoDiggingDialogComponent__OnClickDecideBtn(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_activateMaskPanel; // x0
  struct System_Action_bool__o *activateMaskPanel; // x22
  System_Action_o *v13; // x20

  if ( (byte_596AA3E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AutoDiggingDialogComponent_EndClose__);
    sub_2213A60(&Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    byte_596AA3E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    p_activateMaskPanel = (MissionNaviTransitionBoardItem_o *)&this->fields.activateMaskPanel;
    activateMaskPanel = this->fields.activateMaskPanel;
    if ( activateMaskPanel )
    {
      p_activateMaskPanel->klass = 0;
      sub_2213A04(p_activateMaskPanel, 0, v5, v6, v7, v8, v9, v10);
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))activateMaskPanel->fields.invoke_impl)(
        activateMaskPanel->fields.method_code,
        1,
        activateMaskPanel->fields.method);
    }
    v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0);
  }
}


void AutoDiggingDialogComponent__Open(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        System_Action_bool__o *setMask,
        System_Action_List_DiggingBlockComponent___o *closeCallback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__c *v7; // x0
  System_Collections_Generic_List_int__o *v8; // x22
  System_Collections_Generic_List_object__o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UILabel_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  struct UISprite_array *itemIcon; // x8
  struct UISprite_array *v20; // x8
  System_Collections_Generic_List_object__o *v21; // x25
  unsigned __int64 v22; // x26
  System_Collections_Generic_List_object__o *v23; // x28
  UserItemMaster_o *v24; // x29
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x20
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v31; // x1
  _DWORD *monitor; // x8
  Il2CppObject *v33; // x20
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  CommonConsumeEntity_o *v38; // x0
  int32_t objectId; // w20
  __int64 v40; // x2
  struct UISprite_array *v41; // x8
  UISprite_o *v42; // x21
  struct UISprite_array *consumeItemIcon; // x8
  __int64 v44; // x2
  Il2CppObject *Item; // x0
  const MethodInfo *v46; // x2
  System_Collections_Generic_List_int__o *DiggingConsumeList; // x20
  const MethodInfo *v48; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v50; // x20
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v52; // x20
  System_String_o *v53; // x1
  struct UILabel_array *v54; // x8
  struct UILabel_array *v55; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  UILabel_o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  Il2CppObject *ComponentInChildren_object; // x23
  UILabel_o *consumeLabel; // x20
  UILabel_o *possessionLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  __int64 v67; // x1
  __int64 v68; // x2
  UILabel_o *messageLabel; // x20
  System_String_o **v70; // x8
  const MethodInfo *v71; // x2
  _BOOL8 v72; // x0
  __int64 v73; // x1
  struct UILabel_array *v74; // x8
  UIWidget_o *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_Action_o *v88; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+18h] [xbp-C8h]
  char v92; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v94; // [xsp+40h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+60h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596AA38 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_AutoDiggingDialogComponent__Open_b__17_0__);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____91731488);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_5190/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/);
    sub_2213A60(&StringLiteral_2153/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_5188/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/);
    sub_2213A60(&StringLiteral_2155/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_2154/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/);
    sub_2213A60(&StringLiteral_11578/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_11577/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    sub_2213A60(&StringLiteral_2156/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596AA38 = 1;
  }
  v7 = System_Collections_Generic_List_int__TypeInfo;
  entity = 0;
  memset(&v96, 0, sizeof(v96));
  consumeTotalNum = 0;
  memset(&v94, 0, sizeof(v94));
  this->fields.state = 1;
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v7);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.autoDiggingBlockList,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  itemIcon = this->fields.itemIcon;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  if ( !itemIcon )
    goto LABEL_100;
  Instance = (UILabel_o *)AutoDiggingDialogComponent__SortActiveBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            blockList,
                            itemIcon->max_length,
                            v18);
  v20 = this->fields.itemIcon;
  if ( !v20 )
    goto LABEL_100;
  v92 = 0;
  v21 = (System_Collections_Generic_List_object__o *)Instance;
  v22 = 0;
  while ( (__int64)v22 < SLODWORD(v20->max_length) )
  {
    v23 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = (UILabel_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0;
    if ( !blockList )
      goto LABEL_100;
    v24 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v93,
      (System_Collections_Generic_List_object__o *)blockList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v96 = v93;
    v93.fields._list = 0;
    *(_QWORD *)&v93.fields._index = &v96;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v96,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v25 )
        break;
      current = v96.fields._current;
      if ( !v96.fields._current )
        sub_2213CDC(v25, v26);
      if ( v22 == LODWORD(v96.fields._current[5].monitor) )
      {
        v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v28 )
          sub_2213CDC(0, v29);
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)v28,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        monitor = current[4].monitor;
        if ( !monitor )
          sub_2213CDC(MasterData_object, v31);
        if ( !MasterData_object )
          sub_2213CDC(0, v31);
        v33 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                monitor[6],
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v34 )
          sub_2213CDC(0, v35);
        v36 = DataManager__GetMasterData_object_(
                (DataManager_o *)v34,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v33 )
          sub_2213CDC(v36, v37);
        if ( !v36 )
          sub_2213CDC(0, v37);
        v38 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v36, HIDWORD(v33[1].monitor), 1, 0);
        if ( v38 )
        {
          objectId = v38->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v96,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v41 = this->fields.itemIcon;
    if ( !v41 )
      goto LABEL_100;
    if ( v22 >= LODWORD(v41->max_length) )
      goto LABEL_101;
    v42 = v41->m_Items[v22];
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v40);
    Instance = (UILabel_o *)AtlasManager__SetItem(v42, objectId, 0);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_100;
    if ( v22 >= LODWORD(consumeItemIcon->max_length) )
      goto LABEL_101;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v22], objectId, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v44);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (UILabel_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v44);
      Instance = (UILabel_o *)NetworkManager_TypeInfo;
    }
    if ( !v24 )
      goto LABEL_100;
    Instance = (UILabel_o *)UserItemMaster__TryGetEntity(
                              v24,
                              &entity,
                              Instance->fields.onChange->fields.method_code,
                              objectId,
                              0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_100;
      Item = System_Collections_Generic_List_object___get_Item(
               v21,
               v22,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      DiggingConsumeList = AutoDiggingDialogComponent__GetDiggingConsumeList(
                             (AutoDiggingDialogComponent_o *)Item,
                             (System_Collections_Generic_List_DiggingBlockComponent__o *)Item,
                             v46);
      Instance = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                v21,
                                v22,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !entity )
        goto LABEL_100;
      Instance = (UILabel_o *)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                                (AutoDiggingDialogComponent_o *)Instance,
                                (System_Collections_Generic_List_DiggingBlockComponent__o *)Instance,
                                DiggingConsumeList,
                                entity->fields.num,
                                &consumeTotalNum,
                                v48);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_100;
      if ( v22 >= LODWORD(itemNumLabel->max_length) )
        goto LABEL_101;
      if ( !entity )
        goto LABEL_100;
      v23 = (System_Collections_Generic_List_object__o *)Instance;
      v50 = itemNumLabel->m_Items[v22];
      Instance = (UILabel_o *)BasicHelper__ToCommaString(entity->fields.num, 0);
      if ( !v50 )
        goto LABEL_100;
      UILabel__set_text(v50, (System_String_o *)Instance, 0);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_100;
      if ( v22 >= LODWORD(consumeItemNumLabel->max_length) )
        goto LABEL_101;
      v52 = consumeItemNumLabel->m_Items[v22];
      Instance = (UILabel_o *)BasicHelper__ToCommaString(consumeTotalNum, 0);
      if ( !v52 )
        goto LABEL_100;
      v53 = (System_String_o *)Instance;
      Instance = v52;
    }
    else
    {
      v54 = this->fields.itemNumLabel;
      if ( !v54 )
        goto LABEL_100;
      if ( v22 >= LODWORD(v54->max_length) )
LABEL_101:
        sub_2213CE4(Instance);
      Instance = v54->m_Items[v22];
      if ( !Instance )
        goto LABEL_100;
      UILabel__set_text(Instance, (System_String_o *)StringLiteral_1198/*"0"*/, 0);
      v55 = this->fields.consumeItemNumLabel;
      if ( !v55 )
        goto LABEL_100;
      if ( v22 >= LODWORD(v55->max_length) )
        goto LABEL_101;
      Instance = v55->m_Items[v22];
      if ( !Instance )
        goto LABEL_100;
      v53 = (System_String_o *)StringLiteral_1198/*"0"*/;
    }
    UILabel__set_text(Instance, v53, 0);
    if ( !v23 )
      goto LABEL_100;
    if ( v23->fields._size < 1 )
    {
      if ( !v21 )
        goto LABEL_100;
      Instance = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                v21,
                                v22,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !Instance )
        goto LABEL_100;
      if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
      {
        if ( !v8 )
          goto LABEL_100;
        items = v8->fields._items;
        v57 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_100;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            v22,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size] = v22;
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
        (System_Collections_Generic_IEnumerable_T__o *)v23,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v92 = 1;
    }
    v20 = this->fields.itemIcon;
    ++v22;
    if ( !v20 )
      goto LABEL_100;
  }
  Instance = (UILabel_o *)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_100;
  Instance = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_100;
  Instance = (UILabel_o *)UnityEngine_Component__GetComponentInChildren_object_(
                            (UnityEngine_Component_o *)Instance,
                            1,
                            (const MethodInfo_3821054 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91731488);
  if ( !this->fields.closeButton )
    goto LABEL_100;
  v59 = Instance;
  Instance = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0);
  if ( !Instance )
    goto LABEL_100;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_3821054 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91731488);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60, v61);
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11578/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !v59 )
    goto LABEL_100;
  UILabel__set_text(v59, (System_String_o *)Instance, 0);
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11577/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0);
  consumeLabel = this->fields.consumeLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5188/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0);
  if ( !consumeLabel )
    goto LABEL_100;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0);
  possessionLabel = this->fields.possessionLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5190/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0);
  if ( !possessionLabel )
    goto LABEL_100;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0);
  titleLabel = this->fields.titleLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2155/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_100;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2154/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0);
  if ( !subTitleLabel )
    goto LABEL_100;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0);
  messageLabel = this->fields.messageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67, v68);
  v70 = (System_String_o **)&StringLiteral_2153/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  if ( (v92 & 1) == 0 )
    v70 = (System_String_o **)&StringLiteral_2156/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  Instance = (UILabel_o *)LocalizationManager__Get(*v70, 0);
  if ( !messageLabel )
    goto LABEL_100;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v92 & 1, v71);
  if ( !v8 )
    goto LABEL_100;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v94,
    v8,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v93.fields._list = 0;
  *(_QWORD *)&v93.fields._index = &v94;
  while ( 1 )
  {
    v72 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v94,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v72 )
      break;
    v74 = this->fields.consumeItemNumLabel;
    if ( !v74 )
      sub_2213CDC(v72, v73);
    if ( v94.fields._current >= LODWORD(v74->max_length) )
      sub_2213CE4(v72);
    v75 = (UIWidget_o *)v74->m_Items[v94.fields._current];
    if ( !v75 )
      sub_2213CDC(0, v73);
    v98.fields.g = 0.0;
    v98.fields.b = 0.0;
    v98.fields.r = 1.0;
    v98.fields.a = 1.0;
    UIWidget__set_color(v75, v98, 0);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v94,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  this->fields.activateMaskPanel = setMask;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.activateMaskPanel,
    (int32_t)setMask,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields.closeCallbackFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeCallback,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  Instance = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
LABEL_100:
    sub_2213CDC(Instance, v17);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v88 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v88, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v88, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  __int64 v6; // x1

  if ( (byte_596AA39 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    byte_596AA39 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, bool, const char *))decideButton->klass[1]._1.name)(
          decideButton,
          isEnable,
          decideButton->klass[1]._1.namespaze),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0 )
  {
    sub_2213CDC(decideButton, isEnable);
  }
  if ( isEnable )
    v6 = 0;
  else
    v6 = 3;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, _QWORD, Il2CppClass **))decideButton->klass[1]._1.nestedTypes)(
    decideButton,
    v6,
    0,
    decideButton->klass[1]._1.implementedInterfaces);
}


System_Collections_Generic_List_List_DiggingBlockComponent___o *AutoDiggingDialogComponent__SortActiveBlockList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t blockKindNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x21
  int v7; // w24
  System_Collections_Generic_List_object__o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  __int128 v11; // q0
  _BOOL8 v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *current; // x1
  _DWORD *monitor; // x8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596AA3A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_596AA3A = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v7 = 0;
    do
    {
      v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v8,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_28;
      System_Collections_Generic_List_object___GetEnumerator(
        &v36,
        (System_Collections_Generic_List_object__o *)blockList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v11 = *(_OWORD *)&v36.fields._list;
      v36.fields._list = 0;
      *(_QWORD *)&v36.fields._index = &v37;
      *(_OWORD *)&v37.fields._list = v11;
      v37.fields._current = v36.fields._current;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v37,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v12 )
          break;
        current = v37.fields._current;
        if ( !v37.fields._current )
          sub_2213CDC(v12, 0);
        if ( LODWORD(v37.fields._current[5].monitor) == v7 )
        {
          monitor = v37.fields._current[4].monitor;
          if ( !monitor )
            sub_2213CDC(v12, v37.fields._current);
          if ( !monitor[7] )
          {
            if ( !v8
              || (items = v8->fields._items,
                  v22 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__,
                  ++v8->fields._version,
                  !items) )
            {
              sub_2213CDC(v12, current);
            }
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                current,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v24[4] = (Il2CppClass *)current;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)current, v13, v14, v15, v16, v17, v18);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v37,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( !v6
        || (v31 = v6->fields._items,
            v32 = Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__,
            ++v6->fields._version,
            !v31) )
      {
LABEL_28:
        sub_2213CDC(v9, v10);
      }
      v33 = v6->fields._size;
      if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v8,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &v31->obj.klass + v33;
        v6->fields._size = v33 + 1;
        v34[4] = (Il2CppClass *)v8;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v8, v25, v26, v27, v28, v29, v30);
      }
      ++v7;
    }
    while ( v7 != blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v6;
}


void AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_596AA43 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    byte_596AA43 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596AA41 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA41 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}