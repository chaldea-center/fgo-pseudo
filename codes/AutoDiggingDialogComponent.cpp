void AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C32054 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C32054 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void AutoDiggingDialogComponent__EndClose(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Action_List_DiggingBlockComponent___o *closeCallbackFunc; // x20
  System_Collections_Generic_List_T__o *v4; // x0

  if ( (byte_4C32052 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    byte_4C32052 = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C32BC4(&this->fields.closeCallbackFunc, 0);
    v4 = BasicHelper__Shuffle_object_(
           (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
           (const MethodInfo_30CC720 *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    ((void (__fastcall *)(intptr_t, System_Collections_Generic_List_T__o *, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      v4,
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
  _BOOL8 v8; // x0
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3204E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4C3204E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_1C32E7C(v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v8 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C32E7C(v8);
    monitor = v17.fields._current[4].monitor;
    if ( !monitor )
      sub_1C32E7C(v8);
    if ( monitor[6] == blockId && !monitor[7] )
    {
      if ( !v6 )
        sub_1C32E7C(v8);
      items = v6->fields._items;
      v12 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C32E7C(v8);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          current,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v14[4] = (Il2CppClass *)current;
        sub_1C32BC4(v14 + 4, current);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
  int32_t v12; // w24
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppObject *v16; // x1
  Il2CppClass **v17; // x0
  int32_t v18; // w0
  int32_t v19; // w28

  if ( (byte_4C3204F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4C3204F = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *consumeTotalNum = 0;
  if ( !blockList )
    goto LABEL_16;
  if ( blockList->fields._size >= 1 )
  {
    v12 = 0;
    while ( consumeList )
    {
      Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                               consumeList,
                               v12,
                               (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( userItemNum - (int)Item >= 0 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)blockList,
                 v12,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
        if ( !v10 )
          break;
        items = v10->fields._items;
        v14 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        v16 = Item;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            Item,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v16;
          sub_1C32BC4(v17 + 4, v16);
        }
        v18 = System_Collections_Generic_List_int___get_Item(
                consumeList,
                v12,
                (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
        v19 = *consumeTotalNum;
        userItemNum -= v18;
        Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                 consumeList,
                                 v12,
                                 (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
        *consumeTotalNum = (_DWORD)Item + v19;
      }
      if ( ++v12 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v10;
    }
LABEL_16:
    sub_1C32E7C(Item);
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
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  _DWORD *monitor; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x0
  CommonConsumeEntity_o *v13; // x0
  CommonConsumeEntity_o *v14; // x21
  Il2CppClass *klass; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  __int64 v19; // x0
  Il2CppClass *v20; // x8
  int32_t v21; // w9
  int v22; // w11
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x10
  __int64 v25; // x12
  int32_t num; // w1
  int32_t v27; // w9
  char *v28; // x8
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3204D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3204D = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v4 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_1C32E7C(v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v34 = v33;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v34.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1C32E7C(MasterData_object);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1C32E7C(MasterData_object);
    if ( !MasterData_object )
      sub_1C32E7C(0);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_3396838 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v11 )
      sub_1C32E7C(0);
    v12 = DataManager__GetMasterData_object_(
            (DataManager_o *)v11,
            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_1C32E7C(v12);
    if ( !v12 )
      sub_1C32E7C(0);
    v13 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v12, HIDWORD(Entity[1].monitor), 1, 0);
    v14 = v13;
    if ( !v13 )
    {
      if ( !v4 )
        sub_1C32E7C(0);
      items = v4->fields._items;
      v17 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C32E7C(0);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          0,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = 0;
      }
      klass = current[5].klass;
      if ( !klass )
        sub_1C32E7C(v13);
      goto LABEL_23;
    }
    klass = current[5].klass;
    if ( klass )
    {
LABEL_23:
      v19 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity[2].monitor,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___);
      if ( (v19 & 0x80000000) != 0 )
      {
        if ( !v14 )
          sub_1C32E7C(v19);
        if ( !v4 )
          sub_1C32E7C(v19);
        num = v14->fields.num;
        v29 = v4->fields._items;
        v30 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !v29 )
          sub_1C32E7C(v19);
        v31 = v4->fields._size;
        if ( (unsigned int)v31 < LODWORD(v29->max_length) )
          goto LABEL_40;
LABEL_35:
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          num,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = Entity[3].klass;
        if ( !v20 )
          sub_1C32E7C(v19);
        if ( (unsigned int)v19 >= LODWORD(v20->_1.namespaze) )
          sub_1C32E84(v19);
        if ( !v14 )
          sub_1C32E7C(v19);
        if ( !v4 )
          sub_1C32E7C(v19);
        v21 = v14->fields.num;
        v22 = *((_DWORD *)&v20->_1.byval_arg.data + (unsigned int)v19);
        v23 = v4->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !v23 )
          sub_1C32E7C(v19);
        v25 = v4->fields._size;
        num = v21 + v22;
        if ( (unsigned int)v25 < LODWORD(v23->max_length) )
        {
          v27 = v25 + 1;
          v28 = (char *)v23 + 4 * v25;
          goto LABEL_41;
        }
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          num,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v4 )
        sub_1C32E7C(v13);
      num = v13->fields.num;
      v29 = v4->fields._items;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !v29 )
        sub_1C32E7C(v13);
      v31 = v4->fields._size;
      if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
        goto LABEL_35;
LABEL_40:
      v27 = v31 + 1;
      v28 = (char *)v29 + 4 * v31;
LABEL_41:
      v4->fields._size = v27;
      *((_DWORD *)v28 + 8) = num;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v4;
}


void AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void AutoDiggingDialogComponent__OnClickCloseBtn(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C32051 & 1) == 0 )
  {
    sub_1C32C20(&Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    byte_4C32051 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    BaseDialog__Close((BaseDialog_o *)this, 0, 0);
  }
}


void AutoDiggingDialogComponent__OnClickDecideBtn(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o **p_activateMaskPanel; // x0
  struct System_Action_bool__o *activateMaskPanel; // x20
  System_Action_o *v7; // x20

  if ( (byte_4C32050 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_AutoDiggingDialogComponent_EndClose__);
    sub_1C32C20(&Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    byte_4C32050 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    p_activateMaskPanel = &this->fields.activateMaskPanel;
    activateMaskPanel = this->fields.activateMaskPanel;
    if ( activateMaskPanel )
    {
      *p_activateMaskPanel = 0;
      sub_1C32BC4(p_activateMaskPanel, 0);
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))activateMaskPanel->fields.invoke_impl)(
        activateMaskPanel->fields.method_code,
        1,
        activateMaskPanel->fields.method);
    }
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0);
  }
}


void AutoDiggingDialogComponent__Open(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        System_Action_bool__o *setMask,
        System_Action_List_DiggingBlockComponent___o *closeCallback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 Instance; // x0
  const MethodInfo *v10; // x3
  struct UISprite_array *itemIcon; // x8
  struct UISprite_array *v12; // x8
  System_Collections_Generic_List_object__o *v13; // x25
  unsigned __int64 v14; // x26
  System_Collections_Generic_List_object__o *v15; // x28
  UserItemMaster_o *v16; // x29
  _BOOL8 v17; // x0
  Il2CppObject *current; // x20
  Il2CppObject *v19; // x0
  Il2CppObject *MasterData_object; // x0
  _DWORD *monitor; // x8
  Il2CppObject *v22; // x20
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x0
  CommonConsumeEntity_o *v25; // x0
  int32_t objectId; // w20
  struct UISprite_array *v27; // x8
  UISprite_o *v28; // x21
  struct UISprite_array *consumeItemIcon; // x8
  Il2CppObject *Item; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_int__o *DiggingConsumeList; // x20
  const MethodInfo *v33; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v35; // x20
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v37; // x20
  System_String_o *v38; // x1
  struct UILabel_array *v39; // x8
  struct UILabel_array *v40; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  UILabel_o *v44; // x20
  Il2CppObject *ComponentInChildren_object; // x23
  UILabel_o *consumeLabel; // x20
  UILabel_o *possessionLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o **v51; // x8
  const MethodInfo *v52; // x2
  _BOOL8 v53; // x0
  struct UILabel_array *v54; // x8
  UIWidget_o *v55; // x0
  System_Action_o *v56; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+18h] [xbp-C8h]
  char v60; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+40h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+60h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3204A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_AutoDiggingDialogComponent__Open_b__17_0__);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____78081512);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_5003/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/);
    sub_1C32C20(&StringLiteral_2055/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_5001/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/);
    sub_1C32C20(&StringLiteral_2057/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_2056/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/);
    sub_1C32C20(&StringLiteral_11096/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C32C20(&StringLiteral_11095/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C32C20(&StringLiteral_2058/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C3204A = 1;
  }
  entity = 0;
  memset(&v64, 0, sizeof(v64));
  consumeTotalNum = 0;
  memset(&v62, 0, sizeof(v62));
  this->fields.state = 1;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v8;
  Instance = sub_1C32BC4(&this->fields.autoDiggingBlockList, v8);
  itemIcon = this->fields.itemIcon;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  if ( !itemIcon )
    goto LABEL_100;
  Instance = (__int64)AutoDiggingDialogComponent__SortActiveBlockList(
                        (AutoDiggingDialogComponent_o *)Instance,
                        blockList,
                        itemIcon->max_length,
                        v10);
  v12 = this->fields.itemIcon;
  if ( !v12 )
    goto LABEL_100;
  v60 = 0;
  v13 = (System_Collections_Generic_List_object__o *)Instance;
  v14 = 0;
  while ( (__int64)v14 < SLODWORD(v12->max_length) )
  {
    v15 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0;
    if ( !blockList )
      goto LABEL_100;
    v16 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v61,
      (System_Collections_Generic_List_object__o *)blockList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v64 = v61;
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v64,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v17 )
        break;
      current = v64.fields._current;
      if ( !v64.fields._current )
        sub_1C32E7C(v17);
      if ( v14 == LODWORD(v64.fields._current[5].monitor) )
      {
        v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v19 )
          sub_1C32E7C(0);
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)v19,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        monitor = current[4].monitor;
        if ( !monitor )
          sub_1C32E7C(MasterData_object);
        if ( !MasterData_object )
          sub_1C32E7C(0);
        v22 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                monitor[6],
                (const MethodInfo_3396838 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v23 )
          sub_1C32E7C(0);
        v24 = DataManager__GetMasterData_object_(
                (DataManager_o *)v23,
                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v22 )
          sub_1C32E7C(v24);
        if ( !v24 )
          sub_1C32E7C(0);
        v25 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v24, HIDWORD(v22[1].monitor), 1, 0);
        if ( v25 )
        {
          objectId = v25->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v64,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v27 = this->fields.itemIcon;
    if ( !v27 )
      goto LABEL_100;
    if ( v14 >= LODWORD(v27->max_length) )
      goto LABEL_101;
    v28 = v27->m_Items[v14];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetItem(v28, objectId, 0);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_100;
    if ( v14 >= LODWORD(consumeItemIcon->max_length) )
      goto LABEL_101;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v14], objectId, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !v16 )
      goto LABEL_100;
    Instance = UserItemMaster__TryGetEntity(v16, &entity, *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL), objectId, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_100;
      Item = System_Collections_Generic_List_object___get_Item(
               v13,
               v14,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      DiggingConsumeList = AutoDiggingDialogComponent__GetDiggingConsumeList(
                             (AutoDiggingDialogComponent_o *)Item,
                             (System_Collections_Generic_List_DiggingBlockComponent__o *)Item,
                             v31);
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v13,
                            v14,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !entity )
        goto LABEL_100;
      Instance = (__int64)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            (System_Collections_Generic_List_DiggingBlockComponent__o *)Instance,
                            DiggingConsumeList,
                            entity->fields.num,
                            &consumeTotalNum,
                            v33);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_100;
      if ( v14 >= LODWORD(itemNumLabel->max_length) )
        goto LABEL_101;
      if ( !entity )
        goto LABEL_100;
      v15 = (System_Collections_Generic_List_object__o *)Instance;
      v35 = itemNumLabel->m_Items[v14];
      Instance = (__int64)BasicHelper__ToCommaString(entity->fields.num, 0);
      if ( !v35 )
        goto LABEL_100;
      UILabel__set_text(v35, (System_String_o *)Instance, 0);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_100;
      if ( v14 >= LODWORD(consumeItemNumLabel->max_length) )
        goto LABEL_101;
      v37 = consumeItemNumLabel->m_Items[v14];
      Instance = (__int64)BasicHelper__ToCommaString(consumeTotalNum, 0);
      if ( !v37 )
        goto LABEL_100;
      v38 = (System_String_o *)Instance;
      Instance = (__int64)v37;
    }
    else
    {
      v39 = this->fields.itemNumLabel;
      if ( !v39 )
        goto LABEL_100;
      if ( v14 >= LODWORD(v39->max_length) )
LABEL_101:
        sub_1C32E84(Instance);
      Instance = (__int64)v39->m_Items[v14];
      if ( !Instance )
        goto LABEL_100;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1122/*"0"*/, 0);
      v40 = this->fields.consumeItemNumLabel;
      if ( !v40 )
        goto LABEL_100;
      if ( v14 >= LODWORD(v40->max_length) )
        goto LABEL_101;
      Instance = (__int64)v40->m_Items[v14];
      if ( !Instance )
        goto LABEL_100;
      v38 = (System_String_o *)StringLiteral_1122/*"0"*/;
    }
    UILabel__set_text((UILabel_o *)Instance, v38, 0);
    if ( !v15 )
      goto LABEL_100;
    if ( v15->fields._size < 1 )
    {
      if ( !v13 )
        goto LABEL_100;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v13,
                            v14,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !Instance )
        goto LABEL_100;
      if ( *(int *)(Instance + 24) >= 1 )
      {
        if ( !v7 )
          goto LABEL_100;
        items = v7->fields._items;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_100;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v14,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = v14;
        }
      }
    }
    else
    {
      Instance = (__int64)*p_autoDiggingBlockList;
      if ( !*p_autoDiggingBlockList )
        goto LABEL_100;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)Instance,
        (System_Collections_Generic_IEnumerable_T__o *)v15,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v60 = 1;
    }
    v12 = this->fields.itemIcon;
    ++v14;
    if ( !v12 )
      goto LABEL_100;
  }
  Instance = (__int64)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_100;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_100;
  Instance = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                        (UnityEngine_Component_o *)Instance,
                        1,
                        (const MethodInfo_30D4044 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78081512);
  if ( !this->fields.closeButton )
    goto LABEL_100;
  v44 = (UILabel_o *)Instance;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0);
  if ( !Instance )
    goto LABEL_100;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_30D4044 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78081512);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11096/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !v44 )
    goto LABEL_100;
  UILabel__set_text(v44, (System_String_o *)Instance, 0);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11095/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0);
  consumeLabel = this->fields.consumeLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5001/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0);
  if ( !consumeLabel )
    goto LABEL_100;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0);
  possessionLabel = this->fields.possessionLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5003/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0);
  if ( !possessionLabel )
    goto LABEL_100;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0);
  titleLabel = this->fields.titleLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2057/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_100;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2056/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0);
  if ( !subTitleLabel )
    goto LABEL_100;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v51 = (System_String_o **)&StringLiteral_2055/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  if ( (v60 & 1) == 0 )
    v51 = (System_String_o **)&StringLiteral_2058/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  Instance = (__int64)LocalizationManager__Get(*v51, 0);
  if ( !messageLabel )
    goto LABEL_100;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v60 & 1, v52);
  if ( !v7 )
    goto LABEL_100;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    v7,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v53 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v62,
            (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v53 )
      break;
    v54 = this->fields.consumeItemNumLabel;
    if ( !v54 )
      sub_1C32E7C(v53);
    if ( LODWORD(v62.fields._current) >= LODWORD(v54->max_length) )
      sub_1C32E84(v53);
    v55 = (UIWidget_o *)v54->m_Items[SLODWORD(v62.fields._current)];
    if ( !v55 )
      sub_1C32E7C(0);
    v66.fields.r = 1.0;
    v66.fields.g = 0.0;
    v66.fields.b = 0.0;
    v66.fields.a = 1.0;
    UIWidget__set_color(v55, v66, 0);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v62,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  this->fields.activateMaskPanel = setMask;
  sub_1C32BC4(&this->fields.activateMaskPanel, setMask);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C32BC4(&this->fields.closeCallbackFunc, closeCallback);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
LABEL_100:
    sub_1C32E7C(Instance);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v56 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v56, 0, 0, 0);
}


void AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  __int64 v6; // x1

  if ( (byte_4C3204B & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    byte_4C3204B = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, bool, const char *))decideButton->klass[1]._1.name)(
          decideButton,
          isEnable,
          decideButton->klass[1]._1.namespaze),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0 )
  {
    sub_1C32E7C(decideButton);
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
  int v7; // w25
  System_Collections_Generic_List_object__o *v8; // x22
  __int64 v9; // x0
  _BOOL8 v10; // x0
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  Il2CppClass **v16; // x0
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3204C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4C3204C = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v7 = 0;
    do
    {
      v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v8,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)blockList,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v23 = v22;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v23,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v10 )
          break;
        current = v23.fields._current;
        if ( !v23.fields._current )
          sub_1C32E7C(v10);
        if ( LODWORD(v23.fields._current[5].monitor) == v7 )
        {
          monitor = v23.fields._current[4].monitor;
          if ( !monitor )
            sub_1C32E7C(v10);
          if ( !monitor[7] )
          {
            if ( !v8 )
              sub_1C32E7C(v10);
            items = v8->fields._items;
            v14 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
            ++v8->fields._version;
            if ( !items )
              sub_1C32E7C(v10);
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                current,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v16[4] = (Il2CppClass *)current;
              sub_1C32BC4(v16 + 4, current);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( !v6
        || (v17 = v6->fields._items,
            v18 = Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__,
            ++v6->fields._version,
            !v17) )
      {
LABEL_29:
        sub_1C32E7C(v9);
      }
      v19 = v6->fields._size;
      if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v8,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &v17->obj.klass + v19;
        v6->fields._size = v19 + 1;
        v20[4] = (Il2CppClass *)v8;
        sub_1C32BC4(v20 + 4, v8);
      }
      ++v7;
    }
    while ( v7 != blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v6;
}


void AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C32055 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_bool___);
    byte_4C32055 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_3029BF0 *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C32053 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32053 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}