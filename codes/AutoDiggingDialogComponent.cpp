void __fastcall AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A003F3 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_4A003F3 = 1;
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

  if ( (byte_4A003F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Shuffle_DiggingBlockComponent___, method);
    byte_4A003F1 = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    v6 = BasicHelper__Shuffle_object_(
           (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
           (const MethodInfo_2E28FC8 *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Collections_Generic_List_T__o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      v6,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
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
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x0
  _BOOL8 v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A003ED & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v11);
    byte_4A003ED = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       blockList,
                                                       *(_QWORD *)&blockId);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_1B64324(v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v14 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1B64324(v14);
    monitor = v25.fields._current[4].monitor;
    if ( !monitor )
      sub_1B64324(v14);
    if ( monitor[6] == blockId && !monitor[7] )
    {
      if ( !v12 )
        sub_1B64324(v14);
      items = v12->fields._items;
      v20 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(v14);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          current,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v22[4] = (Il2CppClass *)current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)current, v15, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
  System_Collections_Generic_List_object__o *v15; // x23
  Il2CppObject *Item; // x0
  int32_t v17; // w24
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppObject *v23; // x1
  Il2CppClass **v24; // x0
  int32_t v25; // w0
  int32_t v26; // w28

  if ( (byte_4A003EE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, blockList);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    byte_4A003EE = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       blockList,
                                                       consumeList);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *consumeTotalNum = 0;
  if ( !blockList )
    goto LABEL_16;
  if ( blockList->fields._size >= 1 )
  {
    v17 = 0;
    while ( consumeList )
    {
      Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                               consumeList,
                               v17,
                               (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( userItemNum - (int)Item >= 0 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)blockList,
                 v17,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
        if ( !v15 )
          break;
        items = v15->fields._items;
        v21 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        v23 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            Item,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v23;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
        }
        v25 = System_Collections_Generic_List_int___get_Item(
                consumeList,
                v17,
                (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
        v26 = *consumeTotalNum;
        userItemNum -= v25;
        Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                 consumeList,
                                 v17,
                                 (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
        *consumeTotalNum = (_DWORD)Item + v26;
      }
      if ( ++v17 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v15;
    }
LABEL_16:
    sub_1B64324(Item);
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
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  _DWORD *monitor; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x0
  CommonConsumeEntity_o *v24; // x0
  CommonConsumeEntity_o *v25; // x21
  Il2CppClass *klass; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  Il2CppClass *v32; // x8
  int32_t v33; // w9
  int v34; // w11
  struct System_Int32_array *v35; // x8
  _QWORD *v36; // x10
  __int64 v37; // x12
  int32_t num; // w1
  int32_t v39; // w9
  char *v40; // x8
  struct System_Int32_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A003EC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, blockList);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A003EC = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v15 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    blockList,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_1B64324(v16);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v46.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1B64324(MasterData_object);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1B64324(MasterData_object);
    if ( !MasterData_object )
      sub_1B64324(0LL);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v22 )
      sub_1B64324(0LL);
    v23 = DataManager__GetMasterData_object_(
            (DataManager_o *)v22,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_1B64324(v23);
    if ( !v23 )
      sub_1B64324(0LL);
    v24 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v23, HIDWORD(Entity[1].monitor), 1, 0LL);
    v25 = v24;
    if ( !v24 )
    {
      if ( !v15 )
        sub_1B64324(0LL);
      items = v15->fields._items;
      v28 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B64324(0LL);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          0,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size + 1] = 0;
      }
      klass = current[5].klass;
      if ( !klass )
        sub_1B64324(v24);
      goto LABEL_23;
    }
    klass = current[5].klass;
    if ( klass )
    {
LABEL_23:
      v30 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity[2].monitor,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
      if ( (v30 & 0x80000000) != 0 )
      {
        if ( !v25 )
          sub_1B64324(v30);
        if ( !v15 )
          sub_1B64324(v30);
        num = v25->fields.num;
        v41 = v15->fields._items;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !v41 )
          sub_1B64324(v30);
        v43 = v15->fields._size;
        if ( (unsigned int)v43 < v41->max_length )
          goto LABEL_40;
LABEL_35:
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          num,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = Entity[3].klass;
        if ( !v32 )
          sub_1B64324(v30);
        if ( (unsigned int)v30 >= LODWORD(v32->_1.namespaze) )
          sub_1B6432C(v30, v31);
        if ( !v25 )
          sub_1B64324(v30);
        if ( !v15 )
          sub_1B64324(v30);
        v33 = v25->fields.num;
        v34 = *((_DWORD *)&v32->_1.byval_arg.data + (unsigned int)v30);
        v35 = v15->fields._items;
        v36 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !v35 )
          sub_1B64324(v30);
        v37 = v15->fields._size;
        num = v33 + v34;
        if ( (unsigned int)v37 < v35->max_length )
        {
          v39 = v37 + 1;
          v40 = (char *)v35 + 4 * v37;
          goto LABEL_41;
        }
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          num,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v15 )
        sub_1B64324(v24);
      num = v24->fields.num;
      v41 = v15->fields._items;
      v42 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !v41 )
        sub_1B64324(v24);
      v43 = v15->fields._size;
      if ( (unsigned int)v43 >= v41->max_length )
        goto LABEL_35;
LABEL_40:
      v39 = v43 + 1;
      v40 = (char *)v41 + 4 * v43;
LABEL_41:
      v15->fields._size = v39;
      *((_DWORD *)v40 + 8) = num;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v15;
}


void __fastcall AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__OnClickCloseBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4A003F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_AutoDiggingDialogComponent_OnClickCloseBtn__, method);
    byte_4A003F0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall AutoDiggingDialogComponent__OnClickDecideBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t v9; // w3
  ServantStatusBattleListViewItem_o *p_activateMaskPanel; // x0
  struct System_Action_bool__o *activateMaskPanel; // x20
  System_Action_o *v12; // x20

  if ( (byte_4A003EF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_AutoDiggingDialogComponent_EndClose__, v3);
    sub_1B640C8(&Method_AutoDiggingDialogComponent_OnClickDecideBtn__, v4);
    byte_4A003EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_AutoDiggingDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    p_activateMaskPanel = (ServantStatusBattleListViewItem_o *)&this->fields.activateMaskPanel;
    activateMaskPanel = this->fields.activateMaskPanel;
    if ( activateMaskPanel )
    {
      p_activateMaskPanel->klass = 0LL;
      sub_1B6406C(p_activateMaskPanel, 0, v8, v9);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))activateMaskPanel->fields.m_target)(
        activateMaskPanel->fields.original_method_info,
        1LL,
        *(_QWORD *)&activateMaskPanel->fields.extra_arg);
    }
    v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
  }
}


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
  System_Collections_Generic_List_int__o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_object__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  int64_t Instance; // x0
  const MethodInfo *v49; // x3
  struct UISprite_array *itemIcon; // x8
  __int64 v51; // x1
  __int64 v52; // x2
  struct UISprite_array *v53; // x8
  System_Collections_Generic_List_object__o *v54; // x25
  unsigned __int64 v55; // x26
  System_Collections_Generic_List_object__o *v56; // x27
  UserItemMaster_o *v57; // x28
  _BOOL8 v58; // x0
  Il2CppObject *current; // x20
  Il2CppObject *v60; // x0
  Il2CppObject *MasterData_object; // x0
  _DWORD *monitor; // x8
  Il2CppObject *v63; // x29
  Il2CppObject *v64; // x0
  Il2CppObject *v65; // x0
  CommonConsumeEntity_o *v66; // x0
  int32_t objectId; // w29
  __int64 v68; // x1
  struct UISprite_array *v69; // x8
  UISprite_o *v70; // x20
  struct UISprite_array *consumeItemIcon; // x8
  Il2CppObject *Item; // x0
  const MethodInfo *v73; // x2
  System_Collections_Generic_List_int__o *DiggingConsumeList; // x27
  const MethodInfo *v75; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v77; // x28
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v79; // x28
  System_String_o *v80; // x1
  struct UILabel_array *v81; // x8
  struct UILabel_array *v82; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  UILabel_o *v86; // x23
  Il2CppObject *ComponentInChildren_object; // x24
  UILabel_o *consumeLabel; // x23
  UILabel_o *possessionLabel; // x23
  UILabel_o *titleLabel; // x23
  UILabel_o *subTitleLabel; // x23
  UILabel_o *messageLabel; // x23
  System_String_o **v93; // x8
  const MethodInfo *v94; // x2
  _BOOL8 v95; // x0
  __int64 v96; // x1
  struct UILabel_array *v97; // x8
  UIWidget_o *v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  int32_t v101; // w2
  int32_t v102; // w3
  __int64 v103; // x1
  __int64 v104; // x2
  System_Action_o *v105; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+18h] [xbp-C8h]
  char v109; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v111; // [xsp+40h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+60h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A003E9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, blockList);
    sub_1B640C8(&AtlasManager_TypeInfo, v7);
    sub_1B640C8(&Method_AutoDiggingDialogComponent__Open_b__17_0__, v8);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v12);
    sub_1B640C8(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__, v27);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_1B640C8(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v29);
    sub_1B640C8(&LocalizationManager_TypeInfo, v30);
    sub_1B640C8(&NetworkManager_TypeInfo, v31);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1B640C8(&StringLiteral_5010/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, v33);
    sub_1B640C8(&StringLiteral_2149/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v34);
    sub_1B640C8(&StringLiteral_5008/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v35);
    sub_1B640C8(&StringLiteral_2151/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, v36);
    sub_1B640C8(&StringLiteral_2150/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, v37);
    sub_1B640C8(&StringLiteral_11019/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v38);
    sub_1B640C8(&StringLiteral_11018/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v39);
    sub_1B640C8(&StringLiteral_2152/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/, v40);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v41);
    byte_4A003E9 = 1;
  }
  entity = 0LL;
  memset(&v113, 0, sizeof(v113));
  consumeTotalNum = 0;
  memset(&v111, 0, sizeof(v111));
  this->fields.state = 1;
  v42 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    blockList,
                                                    setMask);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v45 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v45;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.autoDiggingBlockList, (int32_t)v45, v46, v47);
  itemIcon = this->fields.itemIcon;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  if ( !itemIcon )
    goto LABEL_96;
  Instance = (int64_t)AutoDiggingDialogComponent__SortActiveBlockList(
                        (AutoDiggingDialogComponent_o *)Instance,
                        blockList,
                        itemIcon->max_length,
                        v49);
  v53 = this->fields.itemIcon;
  if ( !v53 )
    goto LABEL_96;
  v109 = 0;
  v54 = (System_Collections_Generic_List_object__o *)Instance;
  v55 = 0LL;
  while ( (__int64)v55 < (int)v53->max_length )
  {
    v56 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                         v51,
                                                         v52);
    System_Collections_Generic_List_object____ctor(
      v56,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_96;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    if ( !blockList )
      goto LABEL_96;
    v57 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v110,
      (System_Collections_Generic_List_object__o *)blockList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v113 = v110;
    while ( 1 )
    {
      v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v113,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v58 )
        break;
      current = v113.fields._current;
      if ( !v113.fields._current )
        sub_1B64324(v58);
      if ( v55 == LODWORD(v113.fields._current[5].monitor) )
      {
        v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v60 )
          sub_1B64324(0LL);
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)v60,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        monitor = current[4].monitor;
        if ( !monitor )
          sub_1B64324(MasterData_object);
        if ( !MasterData_object )
          sub_1B64324(0LL);
        v63 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                monitor[6],
                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v64 )
          sub_1B64324(0LL);
        v65 = DataManager__GetMasterData_object_(
                (DataManager_o *)v64,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v63 )
          sub_1B64324(v65);
        if ( !v65 )
          sub_1B64324(0LL);
        v66 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v65, HIDWORD(v63[1].monitor), 1, 0LL);
        if ( v66 )
        {
          objectId = v66->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v113,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v69 = this->fields.itemIcon;
    if ( !v69 )
      goto LABEL_96;
    if ( v55 >= v69->max_length )
      goto LABEL_97;
    v70 = v69->m_Items[v55];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetItem(v70, objectId, 0LL);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_96;
    if ( v55 >= consumeItemIcon->max_length )
      goto LABEL_97;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v55], objectId, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v57 )
      goto LABEL_96;
    Instance = UserItemMaster__TryGetEntity(v57, &entity, Instance, objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v54 )
        goto LABEL_96;
      Item = System_Collections_Generic_List_object___get_Item(
               v54,
               v55,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      DiggingConsumeList = AutoDiggingDialogComponent__GetDiggingConsumeList(
                             (AutoDiggingDialogComponent_o *)Item,
                             (System_Collections_Generic_List_DiggingBlockComponent__o *)Item,
                             v73);
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v54,
                            v55,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !entity )
        goto LABEL_96;
      Instance = (int64_t)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            (System_Collections_Generic_List_DiggingBlockComponent__o *)Instance,
                            DiggingConsumeList,
                            entity->fields.num,
                            &consumeTotalNum,
                            v75);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_96;
      if ( v55 >= itemNumLabel->max_length )
        goto LABEL_97;
      if ( !entity )
        goto LABEL_96;
      v56 = (System_Collections_Generic_List_object__o *)Instance;
      v77 = itemNumLabel->m_Items[v55];
      Instance = (int64_t)BasicHelper__ToCommaString(entity->fields.num, 0LL);
      if ( !v77 )
        goto LABEL_96;
      UILabel__set_text(v77, (System_String_o *)Instance, 0LL);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_96;
      if ( v55 >= consumeItemNumLabel->max_length )
        goto LABEL_97;
      v79 = consumeItemNumLabel->m_Items[v55];
      Instance = (int64_t)BasicHelper__ToCommaString(consumeTotalNum, 0LL);
      if ( !v79 )
        goto LABEL_96;
      v80 = (System_String_o *)Instance;
      Instance = (int64_t)v79;
    }
    else
    {
      v81 = this->fields.itemNumLabel;
      if ( !v81 )
        goto LABEL_96;
      if ( v55 >= v81->max_length )
LABEL_97:
        sub_1B6432C(Instance, v68);
      Instance = (int64_t)v81->m_Items[v55];
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1213/*"0"*/, 0LL);
      v82 = this->fields.consumeItemNumLabel;
      if ( !v82 )
        goto LABEL_96;
      if ( v55 >= v82->max_length )
        goto LABEL_97;
      Instance = (int64_t)v82->m_Items[v55];
      if ( !Instance )
        goto LABEL_96;
      v80 = (System_String_o *)StringLiteral_1213/*"0"*/;
    }
    UILabel__set_text((UILabel_o *)Instance, v80, 0LL);
    if ( !v56 )
      goto LABEL_96;
    if ( v56->fields._size < 1 )
    {
      if ( !v54 )
        goto LABEL_96;
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v54,
                            v55,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !Instance )
        goto LABEL_96;
      if ( *(int *)(Instance + 24) >= 1 )
      {
        if ( !v42 )
          goto LABEL_96;
        items = v42->fields._items;
        v84 = Method_System_Collections_Generic_List_int__Add__;
        ++v42->fields._version;
        if ( !items )
          goto LABEL_96;
        size = v42->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v42,
            v55,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
        }
        else
        {
          v42->fields._size = size + 1;
          items->m_Items[size + 1] = v55;
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
        (System_Collections_Generic_IEnumerable_T__o *)v56,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v109 = 1;
    }
    v53 = this->fields.itemIcon;
    ++v55;
    if ( !v53 )
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
                        (const MethodInfo_2E30314 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760);
  if ( !this->fields.closeButton )
    goto LABEL_96;
  v86 = (UILabel_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0LL);
  if ( !Instance )
    goto LABEL_96;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_2E30314 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____75727760);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11019/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v86 )
    goto LABEL_96;
  UILabel__set_text(v86, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11018/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5008/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_96;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  possessionLabel = this->fields.possessionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5010/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0LL);
  if ( !possessionLabel )
    goto LABEL_96;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0LL);
  titleLabel = this->fields.titleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2151/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2150/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_96;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v93 = (System_String_o **)&StringLiteral_2149/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  if ( (v109 & 1) == 0 )
    v93 = (System_String_o **)&StringLiteral_2152/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  Instance = (int64_t)LocalizationManager__Get(*v93, 0LL);
  if ( !messageLabel )
    goto LABEL_96;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v109 & 1, v94);
  if ( !v42 )
    goto LABEL_96;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v110,
    v42,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v111 = v110;
  while ( 1 )
  {
    v95 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v111,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v95 )
      break;
    v97 = this->fields.consumeItemNumLabel;
    if ( !v97 )
      sub_1B64324(v95);
    if ( LODWORD(v111.fields._current) >= v97->max_length )
      sub_1B6432C(v95, v96);
    v98 = (UIWidget_o *)v97->m_Items[SLODWORD(v111.fields._current)];
    if ( !v98 )
      sub_1B64324(0LL);
    v115.fields.r = 1.0;
    v115.fields.g = 0.0;
    v115.fields.b = 0.0;
    v115.fields.a = 1.0;
    UIWidget__set_color(v98, v115, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v111,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  this->fields.activateMaskPanel = setMask;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.activateMaskPanel, (int32_t)setMask, v99, v100);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v101, v102);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
LABEL_96:
    sub_1B64324(Instance);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v105 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v103, v104);
  System_Action___ctor(v105, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v105, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  __int64 v6; // x1

  if ( (byte_4A003EA & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UICommonButton___, isEnable);
    byte_4A003EA = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, bool, void *))decideButton->klass[1]._1.namespaze)(
          decideButton,
          isEnable,
          decideButton->klass[1]._1.byval_arg.data),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_1B64324(decideButton);
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
  System_Collections_Generic_List_object__o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  int v18; // w25
  System_Collections_Generic_List_object__o *v19; // x22
  __int64 v20; // x0
  _BOOL8 v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A003EB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    byte_4A003EB = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo,
                                                       blockList,
                                                       *(_QWORD *)&blockKindNum);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v18 = 0;
    do
    {
      v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                           v16,
                                                           v17);
      System_Collections_Generic_List_object____ctor(
        v19,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v37,
        (System_Collections_Generic_List_object__o *)blockList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v38 = v37;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v38,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v21 )
          break;
        current = v38.fields._current;
        if ( !v38.fields._current )
          sub_1B64324(v21);
        if ( LODWORD(v38.fields._current[5].monitor) == v18 )
        {
          monitor = v38.fields._current[4].monitor;
          if ( !monitor )
            sub_1B64324(v21);
          if ( !monitor[7] )
          {
            if ( !v19 )
              sub_1B64324(v21);
            items = v19->fields._items;
            v27 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
            ++v19->fields._version;
            if ( !items )
              sub_1B64324(v21);
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                current,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v29[4] = (Il2CppClass *)current;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)current, v22, v23);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( !v15
        || (v32 = v15->fields._items,
            v33 = Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__,
            ++v15->fields._version,
            !v32) )
      {
LABEL_29:
        sub_1B64324(v20);
      }
      v34 = v15->fields._size;
      if ( (unsigned int)v34 >= v32->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v19,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &v32->obj.klass + v34;
        v15->fields._size = v34 + 1;
        v35[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v19, v30, v31);
      }
      ++v18;
    }
    while ( v18 != blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v15;
}


void __fastcall AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A003F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    byte_4A003F4 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4A003F2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A003F2 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}