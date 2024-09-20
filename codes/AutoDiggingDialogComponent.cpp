void __fastcall AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5F1DF & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5F1DF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__EndClose(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_List_DiggingBlockComponent___o *closeCallbackFunc; // x20
  System_Collections_Generic_List_T__o *v6; // x0

  if ( (byte_4A5F1DD & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    byte_4A5F1DD = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    v6 = BasicHelper__Shuffle_object_(
           (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
           (const MethodInfo_2E6F4E4 *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Collections_Generic_List_T__o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      v6,
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
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5F1D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4A5F1D9 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_1B8880C(v7, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v9 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1B8880C(v9, v10);
    monitor = v21.fields._current[4].monitor;
    if ( !monitor )
      sub_1B8880C(v9, v10);
    if ( monitor[6] == blockId && !monitor[7] )
    {
      if ( !v6 )
        sub_1B8880C(v9, v10);
      items = v6->fields._items;
      v16 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1B8880C(v9, v10);
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          current,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v18[4] = (Il2CppClass *)current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)current, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppObject *v19; // x1
  Il2CppClass **v20; // x0
  int32_t v21; // w0
  int32_t v22; // w28

  if ( (byte_4A5F1DA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4A5F1DA = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
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
                               (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( userItemNum - (int)Item >= 0 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)blockList,
                 v13,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
        if ( !v10 )
          break;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        v19 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            Item,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v19;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
        }
        v21 = System_Collections_Generic_List_int___get_Item(
                consumeList,
                v13,
                (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
        v22 = *consumeTotalNum;
        userItemNum -= v21;
        Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                 consumeList,
                                 v13,
                                 (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
        *consumeTotalNum = (_DWORD)Item + v22;
      }
      if ( ++v13 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v10;
    }
LABEL_16:
    sub_1B8880C(Item, v12);
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

  if ( (byte_4A5F1D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F1D8 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_1B8880C(v5, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v41.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1B8880C(MasterData_object, v11);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1B8880C(MasterData_object, v11);
    if ( !MasterData_object )
      sub_1B8880C(0LL, v11);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_311D934 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v14 )
      sub_1B8880C(0LL, v15);
    v16 = DataManager__GetMasterData_object_(
            (DataManager_o *)v14,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_1B8880C(v16, v17);
    if ( !v16 )
      sub_1B8880C(0LL, v17);
    v18 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v16, HIDWORD(Entity[1].monitor), 1, 0LL);
    v20 = v18;
    if ( !v18 )
    {
      if ( !v4 )
        sub_1B8880C(0LL, v19);
      items = v4->fields._items;
      v23 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1B8880C(0LL, v19);
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          0,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size + 1] = 0;
      }
      klass = current[5].klass;
      if ( !klass )
        sub_1B8880C(v18, v19);
      goto LABEL_23;
    }
    klass = current[5].klass;
    if ( klass )
    {
LABEL_23:
      v25 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity[2].monitor,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
      if ( (v25 & 0x80000000) != 0 )
      {
        if ( !v20 )
          sub_1B8880C(v25, v26);
        if ( !v4 )
          sub_1B8880C(v25, v26);
        num = (unsigned int)v20->fields.num;
        v36 = v4->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !v36 )
          sub_1B8880C(v25, num);
        v38 = v4->fields._size;
        if ( (unsigned int)v38 < v36->max_length )
          goto LABEL_40;
LABEL_35:
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          num,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = Entity[3].klass;
        if ( !v27 )
          sub_1B8880C(v25, v26);
        if ( (unsigned int)v25 >= LODWORD(v27->_1.namespaze) )
          sub_1B88814(v25, v26);
        if ( !v20 )
          sub_1B8880C(v25, v26);
        if ( !v4 )
          sub_1B8880C(v25, v26);
        v28 = v20->fields.num;
        v29 = *((_DWORD *)&v27->_1.byval_arg.data + (unsigned int)v25);
        v30 = v4->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !v30 )
          sub_1B8880C(v25, v26);
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
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v4 )
        sub_1B8880C(v18, v19);
      num = (unsigned int)v18->fields.num;
      v36 = v4->fields._items;
      v37 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !v36 )
        sub_1B8880C(v18, num);
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v4;
}


void __fastcall AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__OnClickCloseBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4A5F1DC & 1) == 0 )
  {
    sub_1B885B0(&Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    byte_4A5F1DC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall AutoDiggingDialogComponent__OnClickDecideBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_activateMaskPanel; // x0
  struct System_Action_bool__o *activateMaskPanel; // x20
  System_Action_o *v9; // x20

  if ( (byte_4A5F1DB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AutoDiggingDialogComponent_EndClose__);
    sub_1B885B0(&Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    byte_4A5F1DB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    p_activateMaskPanel = (ServantStatusBattleListViewItem_o *)&this->fields.activateMaskPanel;
    activateMaskPanel = this->fields.activateMaskPanel;
    if ( activateMaskPanel )
    {
      p_activateMaskPanel->klass = 0LL;
      sub_1B88554(p_activateMaskPanel, 0, v5, v6);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))activateMaskPanel->fields.m_target)(
        activateMaskPanel->fields.original_method_info,
        1LL,
        *(_QWORD *)&activateMaskPanel->fields.extra_arg);
    }
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int64_t Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  struct UISprite_array *itemIcon; // x8
  struct UISprite_array *v15; // x8
  System_Collections_Generic_List_object__o *v16; // x25
  unsigned __int64 v17; // x26
  System_Collections_Generic_List_object__o *v18; // x27
  UserItemMaster_o *v19; // x28
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x20
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v26; // x1
  _DWORD *monitor; // x8
  Il2CppObject *v28; // x29
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  CommonConsumeEntity_o *v33; // x0
  int32_t objectId; // w29
  struct UISprite_array *v35; // x8
  UISprite_o *v36; // x20
  struct UISprite_array *consumeItemIcon; // x8
  Il2CppObject *Item; // x0
  const MethodInfo *v39; // x2
  System_Collections_Generic_List_int__o *DiggingConsumeList; // x27
  const MethodInfo *v41; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v43; // x28
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v45; // x28
  System_String_o *v46; // x1
  struct UILabel_array *v47; // x8
  struct UILabel_array *v48; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  UILabel_o *v52; // x23
  Il2CppObject *ComponentInChildren_object; // x24
  UILabel_o *consumeLabel; // x23
  UILabel_o *possessionLabel; // x23
  UILabel_o *titleLabel; // x23
  UILabel_o *subTitleLabel; // x23
  UILabel_o *messageLabel; // x23
  System_String_o **v59; // x8
  const MethodInfo *v60; // x2
  _BOOL8 v61; // x0
  __int64 v62; // x1
  struct UILabel_array *v63; // x8
  UIWidget_o *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w2
  int32_t v68; // w3
  System_Action_o *v69; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+18h] [xbp-C8h]
  char v73; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+40h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+60h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5F1D5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_AutoDiggingDialogComponent__Open_b__17_0__);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_5033/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/);
    sub_1B885B0(&StringLiteral_2147/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_5031/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/);
    sub_1B885B0(&StringLiteral_2149/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_2148/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/);
    sub_1B885B0(&StringLiteral_11073/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11072/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    sub_1B885B0(&StringLiteral_2150/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5F1D5 = 1;
  }
  entity = 0LL;
  memset(&v77, 0, sizeof(v77));
  consumeTotalNum = 0;
  memset(&v75, 0, sizeof(v75));
  this->fields.state = 1;
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.autoDiggingBlockList, (int32_t)v8, v9, v10);
  itemIcon = this->fields.itemIcon;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  if ( !itemIcon )
    goto LABEL_96;
  Instance = (int64_t)AutoDiggingDialogComponent__SortActiveBlockList(
                        (AutoDiggingDialogComponent_o *)Instance,
                        blockList,
                        itemIcon->max_length,
                        v13);
  v15 = this->fields.itemIcon;
  if ( !v15 )
    goto LABEL_96;
  v73 = 0;
  v16 = (System_Collections_Generic_List_object__o *)Instance;
  v17 = 0LL;
  while ( (__int64)v17 < (int)v15->max_length )
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_96;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    if ( !blockList )
      goto LABEL_96;
    v19 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v74,
      (System_Collections_Generic_List_object__o *)blockList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v77 = v74;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v77,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v20 )
        break;
      current = v77.fields._current;
      if ( !v77.fields._current )
        sub_1B8880C(v20, v21);
      if ( v17 == LODWORD(v77.fields._current[5].monitor) )
      {
        v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v23 )
          sub_1B8880C(0LL, v24);
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)v23,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        monitor = current[4].monitor;
        if ( !monitor )
          sub_1B8880C(MasterData_object, v26);
        if ( !MasterData_object )
          sub_1B8880C(0LL, v26);
        v28 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                monitor[6],
                (const MethodInfo_311D934 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v29 )
          sub_1B8880C(0LL, v30);
        v31 = DataManager__GetMasterData_object_(
                (DataManager_o *)v29,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v28 )
          sub_1B8880C(v31, v32);
        if ( !v31 )
          sub_1B8880C(0LL, v32);
        v33 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v31, HIDWORD(v28[1].monitor), 1, 0LL);
        if ( v33 )
        {
          objectId = v33->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v77,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v35 = this->fields.itemIcon;
    if ( !v35 )
      goto LABEL_96;
    if ( v17 >= v35->max_length )
      goto LABEL_97;
    v36 = v35->m_Items[v17];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetItem(v36, objectId, 0LL);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_96;
    if ( v17 >= consumeItemIcon->max_length )
      goto LABEL_97;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v17], objectId, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v19 )
      goto LABEL_96;
    Instance = UserItemMaster__TryGetEntity(v19, &entity, Instance, objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_96;
      Item = System_Collections_Generic_List_object___get_Item(
               v16,
               v17,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      DiggingConsumeList = AutoDiggingDialogComponent__GetDiggingConsumeList(
                             (AutoDiggingDialogComponent_o *)Item,
                             (System_Collections_Generic_List_DiggingBlockComponent__o *)Item,
                             v39);
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v16,
                            v17,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !entity )
        goto LABEL_96;
      Instance = (int64_t)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            (System_Collections_Generic_List_DiggingBlockComponent__o *)Instance,
                            DiggingConsumeList,
                            entity->fields.num,
                            &consumeTotalNum,
                            v41);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_96;
      if ( v17 >= itemNumLabel->max_length )
        goto LABEL_97;
      if ( !entity )
        goto LABEL_96;
      v18 = (System_Collections_Generic_List_object__o *)Instance;
      v43 = itemNumLabel->m_Items[v17];
      Instance = (int64_t)BasicHelper__ToCommaString(entity->fields.num, 0LL);
      if ( !v43 )
        goto LABEL_96;
      UILabel__set_text(v43, (System_String_o *)Instance, 0LL);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_96;
      if ( v17 >= consumeItemNumLabel->max_length )
        goto LABEL_97;
      v45 = consumeItemNumLabel->m_Items[v17];
      Instance = (int64_t)BasicHelper__ToCommaString(consumeTotalNum, 0LL);
      if ( !v45 )
        goto LABEL_96;
      v46 = (System_String_o *)Instance;
      Instance = (int64_t)v45;
    }
    else
    {
      v47 = this->fields.itemNumLabel;
      if ( !v47 )
        goto LABEL_96;
      if ( v17 >= v47->max_length )
LABEL_97:
        sub_1B88814(Instance, v12);
      Instance = (int64_t)v47->m_Items[v17];
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL);
      v48 = this->fields.consumeItemNumLabel;
      if ( !v48 )
        goto LABEL_96;
      if ( v17 >= v48->max_length )
        goto LABEL_97;
      Instance = (int64_t)v48->m_Items[v17];
      if ( !Instance )
        goto LABEL_96;
      v46 = (System_String_o *)StringLiteral_1212/*"0"*/;
    }
    UILabel__set_text((UILabel_o *)Instance, v46, 0LL);
    if ( !v18 )
      goto LABEL_96;
    if ( v18->fields._size < 1 )
    {
      if ( !v16 )
        goto LABEL_96;
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v16,
                            v17,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !Instance )
        goto LABEL_96;
      if ( *(int *)(Instance + 24) >= 1 )
      {
        if ( !v7 )
          goto LABEL_96;
        items = v7->fields._items;
        v50 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_96;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v17,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = v17;
        }
      }
    }
    else
    {
      Instance = (int64_t)*p_autoDiggingBlockList;
      if ( !*p_autoDiggingBlockList )
        goto LABEL_96;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)Instance,
        (System_Collections_Generic_IEnumerable_T__o *)v18,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v73 = 1;
    }
    v15 = this->fields.itemIcon;
    ++v17;
    if ( !v15 )
      goto LABEL_96;
  }
  Instance = (int64_t)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)UnityEngine_Component__GetComponentInChildren_object_(
                        (UnityEngine_Component_o *)Instance,
                        1,
                        (const MethodInfo_2E76830 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
  if ( !this->fields.closeButton )
    goto LABEL_96;
  v52 = (UILabel_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0LL);
  if ( !Instance )
    goto LABEL_96;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_2E76830 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11073/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v52 )
    goto LABEL_96;
  UILabel__set_text(v52, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11072/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5031/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_96;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  possessionLabel = this->fields.possessionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5033/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0LL);
  if ( !possessionLabel )
    goto LABEL_96;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0LL);
  titleLabel = this->fields.titleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2149/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2148/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_96;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v59 = (System_String_o **)&StringLiteral_2147/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  if ( (v73 & 1) == 0 )
    v59 = (System_String_o **)&StringLiteral_2150/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  Instance = (int64_t)LocalizationManager__Get(*v59, 0LL);
  if ( !messageLabel )
    goto LABEL_96;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v73 & 1, v60);
  if ( !v7 )
    goto LABEL_96;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    v7,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v75 = v74;
  while ( 1 )
  {
    v61 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v75,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v61 )
      break;
    v63 = this->fields.consumeItemNumLabel;
    if ( !v63 )
      sub_1B8880C(v61, v62);
    if ( LODWORD(v75.fields._current) >= v63->max_length )
      sub_1B88814(v61, v62);
    v64 = (UIWidget_o *)v63->m_Items[SLODWORD(v75.fields._current)];
    if ( !v64 )
      sub_1B8880C(0LL, v62);
    v79.fields.r = 1.0;
    v79.fields.g = 0.0;
    v79.fields.b = 0.0;
    v79.fields.a = 1.0;
    UIWidget__set_color(v64, v79, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v75,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  this->fields.activateMaskPanel = setMask;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.activateMaskPanel, (int32_t)setMask, v65, v66);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v67, v68);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
LABEL_96:
    sub_1B8880C(Instance, v12);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v69 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v69, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v69, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  __int64 v6; // x1

  if ( (byte_4A5F1D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    byte_4A5F1D6 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, bool, void *))decideButton->klass[1]._1.namespaze)(
          decideButton,
          isEnable,
          decideButton->klass[1]._1.byval_arg.data),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_1B8880C(decideButton, isEnable);
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
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5F1D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    byte_4A5F1D7 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v7 = 0;
    do
    {
      v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v8,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        (System_Collections_Generic_List_object__o *)blockList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v29 = v28;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v29,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v11 )
          break;
        current = v29.fields._current;
        if ( !v29.fields._current )
          sub_1B8880C(v11, v12);
        if ( LODWORD(v29.fields._current[5].monitor) == v7 )
        {
          monitor = v29.fields._current[4].monitor;
          if ( !monitor )
            sub_1B8880C(v11, v12);
          if ( !monitor[7] )
          {
            if ( !v8 )
              sub_1B8880C(v11, v12);
            items = v8->fields._items;
            v18 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
            ++v8->fields._version;
            if ( !items )
              sub_1B8880C(v11, v12);
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                current,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v20[4] = (Il2CppClass *)current;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)current, v13, v14);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v29,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( !v6
        || (v23 = v6->fields._items,
            v24 = Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__,
            ++v6->fields._version,
            !v23) )
      {
LABEL_29:
        sub_1B8880C(v9, v10);
      }
      v25 = v6->fields._size;
      if ( (unsigned int)v25 >= v23->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v8,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &v23->obj.klass + v25;
        v6->fields._size = v25 + 1;
        v26[4] = (Il2CppClass *)v8;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v8, v21, v22);
      }
      ++v7;
    }
    while ( v7 != blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v6;
}


void __fastcall AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5F1E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A5F1E0 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5F1DE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1DE = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}