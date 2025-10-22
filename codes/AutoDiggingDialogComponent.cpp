void AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C513BE & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C513BE = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void AutoDiggingDialogComponent__EndClose(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Action_List_DiggingBlockComponent___o *closeCallbackFunc; // x20
  System_Collections_Generic_List_T__o *v4; // x0

  if ( (byte_4C513BC & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    byte_4C513BC = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C3E508(&this->fields.closeCallbackFunc, 0);
    v4 = BasicHelper__Shuffle_object_(
           (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
           (const MethodInfo_30E8DA0 *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
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
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C513B8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4C513B8 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_1C3E7C0(v7, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v9 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1C3E7C0(v9, v10);
    monitor = v19.fields._current[4].monitor;
    if ( !monitor )
      sub_1C3E7C0(v9, v10);
    if ( monitor[6] == blockId && !monitor[7] )
    {
      if ( !v6 )
        sub_1C3E7C0(v9, v10);
      items = v6->fields._items;
      v14 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C3E7C0(v9, v10);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          current,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v16[4] = (Il2CppClass *)current;
        sub_1C3E508(v16 + 4, current);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppObject *v17; // x1
  Il2CppClass **v18; // x0
  int32_t v19; // w0
  int32_t v20; // w28

  if ( (byte_4C513B9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4C513B9 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
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
                               (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( userItemNum - (int)Item >= 0 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)blockList,
                 v13,
                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
        if ( !v10 )
          break;
        items = v10->fields._items;
        v15 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        v17 = Item;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            Item,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v17;
          sub_1C3E508(v18 + 4, v17);
        }
        v19 = System_Collections_Generic_List_int___get_Item(
                consumeList,
                v13,
                (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__);
        v20 = *consumeTotalNum;
        userItemNum -= v19;
        Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                 consumeList,
                                 v13,
                                 (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__);
        *consumeTotalNum = (_DWORD)Item + v20;
      }
      if ( ++v13 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v10;
    }
LABEL_16:
    sub_1C3E7C0(Item, v12);
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

  if ( (byte_4C513B7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_IndexOf_int___);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C513B7 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v4 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_1C3E7C0(v5, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v41.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C3E7C0(0, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1C3E7C0(MasterData_object, v11);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1C3E7C0(MasterData_object, v11);
    if ( !MasterData_object )
      sub_1C3E7C0(0, v11);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v14 )
      sub_1C3E7C0(0, v15);
    v16 = DataManager__GetMasterData_object_(
            (DataManager_o *)v14,
            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_1C3E7C0(v16, v17);
    if ( !v16 )
      sub_1C3E7C0(0, v17);
    v18 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v16, HIDWORD(Entity[1].monitor), 1, 0);
    v20 = v18;
    if ( !v18 )
    {
      if ( !v4 )
        sub_1C3E7C0(0, v19);
      items = v4->fields._items;
      v23 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C3E7C0(0, v19);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          0,
          *(const MethodInfo_379843C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = 0;
      }
      klass = current[5].klass;
      if ( !klass )
        sub_1C3E7C0(v18, v19);
      goto LABEL_23;
    }
    klass = current[5].klass;
    if ( klass )
    {
LABEL_23:
      v25 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity[2].monitor,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_3200C2C *)Method_System_Array_IndexOf_int___);
      if ( (v25 & 0x80000000) != 0 )
      {
        if ( !v20 )
          sub_1C3E7C0(v25, v26);
        if ( !v4 )
          sub_1C3E7C0(v25, v26);
        num = (unsigned int)v20->fields.num;
        v36 = v4->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !v36 )
          sub_1C3E7C0(v25, num);
        v38 = v4->fields._size;
        if ( (unsigned int)v38 < LODWORD(v36->max_length) )
          goto LABEL_40;
LABEL_35:
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          num,
          *(const MethodInfo_379843C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = Entity[3].klass;
        if ( !v27 )
          sub_1C3E7C0(v25, v26);
        if ( (unsigned int)v25 >= LODWORD(v27->_1.namespaze) )
          sub_1C3E7C8(v25, v26);
        if ( !v20 )
          sub_1C3E7C0(v25, v26);
        if ( !v4 )
          sub_1C3E7C0(v25, v26);
        v28 = v20->fields.num;
        v29 = *((_DWORD *)&v27->_1.byval_arg.data + (unsigned int)v25);
        v30 = v4->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !v30 )
          sub_1C3E7C0(v25, v26);
        v32 = v4->fields._size;
        LODWORD(num) = v28 + v29;
        if ( (unsigned int)v32 < LODWORD(v30->max_length) )
        {
          v34 = v32 + 1;
          v35 = (char *)v30 + 4 * v32;
          goto LABEL_41;
        }
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          num,
          *(const MethodInfo_379843C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v4 )
        sub_1C3E7C0(v18, v19);
      num = (unsigned int)v18->fields.num;
      v36 = v4->fields._items;
      v37 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !v36 )
        sub_1C3E7C0(v18, num);
      v38 = v4->fields._size;
      if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v4;
}


void AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void AutoDiggingDialogComponent__OnClickCloseBtn(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C513BB & 1) == 0 )
  {
    sub_1C3E564(&Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    byte_4C513BB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
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

  if ( (byte_4C513BA & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_AutoDiggingDialogComponent_EndClose__);
    sub_1C3E564(&Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    byte_4C513BA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    p_activateMaskPanel = &this->fields.activateMaskPanel;
    activateMaskPanel = this->fields.activateMaskPanel;
    if ( activateMaskPanel )
    {
      *p_activateMaskPanel = 0;
      sub_1C3E508(p_activateMaskPanel, 0);
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))activateMaskPanel->fields.invoke_impl)(
        activateMaskPanel->fields.method_code,
        1,
        activateMaskPanel->fields.method);
    }
    v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  struct UISprite_array *itemIcon; // x8
  struct UISprite_array *v13; // x8
  System_Collections_Generic_List_object__o *v14; // x25
  unsigned __int64 v15; // x26
  System_Collections_Generic_List_object__o *v16; // x28
  UserItemMaster_o *v17; // x29
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x20
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v24; // x1
  _DWORD *monitor; // x8
  Il2CppObject *v26; // x20
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  CommonConsumeEntity_o *v31; // x0
  int32_t objectId; // w20
  struct UISprite_array *v33; // x8
  UISprite_o *v34; // x21
  struct UISprite_array *consumeItemIcon; // x8
  Il2CppObject *Item; // x0
  const MethodInfo *v37; // x2
  System_Collections_Generic_List_int__o *DiggingConsumeList; // x20
  const MethodInfo *v39; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v41; // x20
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v43; // x20
  System_String_o *v44; // x1
  struct UILabel_array *v45; // x8
  struct UILabel_array *v46; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  UILabel_o *v50; // x20
  Il2CppObject *ComponentInChildren_object; // x23
  UILabel_o *consumeLabel; // x20
  UILabel_o *possessionLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o **v57; // x8
  const MethodInfo *v58; // x2
  _BOOL8 v59; // x0
  __int64 v60; // x1
  struct UILabel_array *v61; // x8
  UIWidget_o *v62; // x0
  System_Action_o *v63; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+18h] [xbp-C8h]
  char v67; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+40h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+60h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C513B4 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_AutoDiggingDialogComponent__Open_b__17_0__);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____78207296);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_5004/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/);
    sub_1C3E564(&StringLiteral_2055/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_5002/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/);
    sub_1C3E564(&StringLiteral_2057/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_1C3E564(&StringLiteral_2056/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/);
    sub_1C3E564(&StringLiteral_11099/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C3E564(&StringLiteral_11098/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C3E564(&StringLiteral_2058/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_1122/*"0"*/);
    byte_4C513B4 = 1;
  }
  entity = 0;
  memset(&v71, 0, sizeof(v71));
  consumeTotalNum = 0;
  memset(&v69, 0, sizeof(v69));
  this->fields.state = 1;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v8;
  Instance = sub_1C3E508(&this->fields.autoDiggingBlockList, v8);
  itemIcon = this->fields.itemIcon;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  if ( !itemIcon )
    goto LABEL_100;
  Instance = (__int64)AutoDiggingDialogComponent__SortActiveBlockList(
                        (AutoDiggingDialogComponent_o *)Instance,
                        blockList,
                        itemIcon->max_length,
                        v11);
  v13 = this->fields.itemIcon;
  if ( !v13 )
    goto LABEL_100;
  v67 = 0;
  v14 = (System_Collections_Generic_List_object__o *)Instance;
  v15 = 0;
  while ( (__int64)v15 < SLODWORD(v13->max_length) )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0;
    if ( !blockList )
      goto LABEL_100;
    v17 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v68,
      (System_Collections_Generic_List_object__o *)blockList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v71 = v68;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v71,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v18 )
        break;
      current = v71.fields._current;
      if ( !v71.fields._current )
        sub_1C3E7C0(v18, v19);
      if ( v15 == LODWORD(v71.fields._current[5].monitor) )
      {
        v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v21 )
          sub_1C3E7C0(0, v22);
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)v21,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        monitor = current[4].monitor;
        if ( !monitor )
          sub_1C3E7C0(MasterData_object, v24);
        if ( !MasterData_object )
          sub_1C3E7C0(0, v24);
        v26 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                monitor[6],
                (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v27 )
          sub_1C3E7C0(0, v28);
        v29 = DataManager__GetMasterData_object_(
                (DataManager_o *)v27,
                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v26 )
          sub_1C3E7C0(v29, v30);
        if ( !v29 )
          sub_1C3E7C0(0, v30);
        v31 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v29, HIDWORD(v26[1].monitor), 1, 0);
        if ( v31 )
        {
          objectId = v31->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v71,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v33 = this->fields.itemIcon;
    if ( !v33 )
      goto LABEL_100;
    if ( v15 >= LODWORD(v33->max_length) )
      goto LABEL_101;
    v34 = v33->m_Items[v15];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetItem(v34, objectId, 0);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_100;
    if ( v15 >= LODWORD(consumeItemIcon->max_length) )
      goto LABEL_101;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v15], objectId, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !v17 )
      goto LABEL_100;
    Instance = UserItemMaster__TryGetEntity(v17, &entity, *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL), objectId, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_100;
      Item = System_Collections_Generic_List_object___get_Item(
               v14,
               v15,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      DiggingConsumeList = AutoDiggingDialogComponent__GetDiggingConsumeList(
                             (AutoDiggingDialogComponent_o *)Item,
                             (System_Collections_Generic_List_DiggingBlockComponent__o *)Item,
                             v37);
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v14,
                            v15,
                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !entity )
        goto LABEL_100;
      Instance = (__int64)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            (System_Collections_Generic_List_DiggingBlockComponent__o *)Instance,
                            DiggingConsumeList,
                            entity->fields.num,
                            &consumeTotalNum,
                            v39);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_100;
      if ( v15 >= LODWORD(itemNumLabel->max_length) )
        goto LABEL_101;
      if ( !entity )
        goto LABEL_100;
      v16 = (System_Collections_Generic_List_object__o *)Instance;
      v41 = itemNumLabel->m_Items[v15];
      Instance = (__int64)BasicHelper__ToCommaString(entity->fields.num, 0);
      if ( !v41 )
        goto LABEL_100;
      UILabel__set_text(v41, (System_String_o *)Instance, 0);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_100;
      if ( v15 >= LODWORD(consumeItemNumLabel->max_length) )
        goto LABEL_101;
      v43 = consumeItemNumLabel->m_Items[v15];
      Instance = (__int64)BasicHelper__ToCommaString(consumeTotalNum, 0);
      if ( !v43 )
        goto LABEL_100;
      v44 = (System_String_o *)Instance;
      Instance = (__int64)v43;
    }
    else
    {
      v45 = this->fields.itemNumLabel;
      if ( !v45 )
        goto LABEL_100;
      if ( v15 >= LODWORD(v45->max_length) )
LABEL_101:
        sub_1C3E7C8(Instance, v10);
      Instance = (__int64)v45->m_Items[v15];
      if ( !Instance )
        goto LABEL_100;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1122/*"0"*/, 0);
      v46 = this->fields.consumeItemNumLabel;
      if ( !v46 )
        goto LABEL_100;
      if ( v15 >= LODWORD(v46->max_length) )
        goto LABEL_101;
      Instance = (__int64)v46->m_Items[v15];
      if ( !Instance )
        goto LABEL_100;
      v44 = (System_String_o *)StringLiteral_1122/*"0"*/;
    }
    UILabel__set_text((UILabel_o *)Instance, v44, 0);
    if ( !v16 )
      goto LABEL_100;
    if ( v16->fields._size < 1 )
    {
      if ( !v14 )
        goto LABEL_100;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v14,
                            v15,
                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !Instance )
        goto LABEL_100;
      if ( *(int *)(Instance + 24) >= 1 )
      {
        if ( !v7 )
          goto LABEL_100;
        items = v7->fields._items;
        v48 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_100;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v15,
            *(const MethodInfo_379843C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = v15;
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
        (System_Collections_Generic_IEnumerable_T__o *)v16,
        (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v67 = 1;
    }
    v13 = this->fields.itemIcon;
    ++v15;
    if ( !v13 )
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
                        (const MethodInfo_30F06C4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78207296);
  if ( !this->fields.closeButton )
    goto LABEL_100;
  v50 = (UILabel_o *)Instance;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0);
  if ( !Instance )
    goto LABEL_100;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_30F06C4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78207296);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11099/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !v50 )
    goto LABEL_100;
  UILabel__set_text(v50, (System_String_o *)Instance, 0);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11098/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0);
  consumeLabel = this->fields.consumeLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5002/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0);
  if ( !consumeLabel )
    goto LABEL_100;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0);
  possessionLabel = this->fields.possessionLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5004/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0);
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
  v57 = (System_String_o **)&StringLiteral_2055/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  if ( (v67 & 1) == 0 )
    v57 = (System_String_o **)&StringLiteral_2058/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  Instance = (__int64)LocalizationManager__Get(*v57, 0);
  if ( !messageLabel )
    goto LABEL_100;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v67 & 1, v58);
  if ( !v7 )
    goto LABEL_100;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    v7,
    (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v69 = v68;
  while ( 1 )
  {
    v59 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v69,
            (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v59 )
      break;
    v61 = this->fields.consumeItemNumLabel;
    if ( !v61 )
      sub_1C3E7C0(v59, v60);
    if ( LODWORD(v69.fields._current) >= LODWORD(v61->max_length) )
      sub_1C3E7C8(v59, v60);
    v62 = (UIWidget_o *)v61->m_Items[SLODWORD(v69.fields._current)];
    if ( !v62 )
      sub_1C3E7C0(0, v60);
    v73.fields.r = 1.0;
    v73.fields.g = 0.0;
    v73.fields.b = 0.0;
    v73.fields.a = 1.0;
    UIWidget__set_color(v62, v73, 0);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v69,
    (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  this->fields.activateMaskPanel = setMask;
  sub_1C3E508(&this->fields.activateMaskPanel, setMask);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C3E508(&this->fields.closeCallbackFunc, closeCallback);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
LABEL_100:
    sub_1C3E7C0(Instance, v10);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v63 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v63, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  __int64 v6; // x1

  if ( (byte_4C513B5 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    byte_4C513B5 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, bool, const char *))decideButton->klass[1]._1.name)(
          decideButton,
          isEnable,
          decideButton->klass[1]._1.namespaze),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0 )
  {
    sub_1C3E7C0(decideButton, isEnable);
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
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  Il2CppClass **v18; // x0
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C513B6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4C513B6 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v7 = 0;
    do
    {
      v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v8,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        (System_Collections_Generic_List_object__o *)blockList,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v25 = v24;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v11 )
          break;
        current = v25.fields._current;
        if ( !v25.fields._current )
          sub_1C3E7C0(v11, v12);
        if ( LODWORD(v25.fields._current[5].monitor) == v7 )
        {
          monitor = v25.fields._current[4].monitor;
          if ( !monitor )
            sub_1C3E7C0(v11, v12);
          if ( !monitor[7] )
          {
            if ( !v8 )
              sub_1C3E7C0(v11, v12);
            items = v8->fields._items;
            v16 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
            ++v8->fields._version;
            if ( !items )
              sub_1C3E7C0(v11, v12);
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                current,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v18[4] = (Il2CppClass *)current;
              sub_1C3E508(v18 + 4, current);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v25,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( !v6
        || (v19 = v6->fields._items,
            v20 = Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__,
            ++v6->fields._version,
            !v19) )
      {
LABEL_29:
        sub_1C3E7C0(v9, v10);
      }
      v21 = v6->fields._size;
      if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v8,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &v19->obj.klass + v21;
        v6->fields._size = v21 + 1;
        v22[4] = (Il2CppClass *)v8;
        sub_1C3E508(v22 + 4, v8);
      }
      ++v7;
    }
    while ( v7 != blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v6;
}


void AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C513BF & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_bool___);
    byte_4C513BF = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_3046270 *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C513BD & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C513BD = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C3E7C0(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}