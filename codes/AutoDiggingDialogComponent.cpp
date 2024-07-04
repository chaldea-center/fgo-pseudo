void __fastcall AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_48E66EC & 1) == 0 )
  {
    sub_1B00CCC(&BaseDialog_TypeInfo, method);
    byte_48E66EC = 1;
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

  if ( (byte_48E66EA & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Shuffle_DiggingBlockComponent___, method);
    byte_48E66EA = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    v6 = BasicHelper__Shuffle_object_(
           (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
           (const MethodInfo_2D527EC *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_48E66E6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v11);
    byte_48E66E6 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_1B00F28(v13, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v15 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1B00F28(v15, v16);
    monitor = v27.fields._current[4].monitor;
    if ( !monitor )
      sub_1B00F28(v15, v16);
    if ( monitor[6] == blockId && !monitor[7] )
    {
      if ( !v12 )
        sub_1B00F28(v15, v16);
      items = v12->fields._items;
      v22 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B00F28(v15, v16);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          current,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v24[4] = (Il2CppClass *)current;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)current, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
  __int64 v17; // x1
  int32_t v18; // w24
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppObject *v24; // x1
  Il2CppClass **v25; // x0
  int32_t v26; // w0
  int32_t v27; // w28

  if ( (byte_48E66E7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, blockList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1B00CCC(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    byte_48E66E7 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *consumeTotalNum = 0;
  if ( !blockList )
    goto LABEL_16;
  if ( blockList->fields._size >= 1 )
  {
    v18 = 0;
    while ( consumeList )
    {
      Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                               consumeList,
                               v18,
                               (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( userItemNum - (int)Item >= 0 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)blockList,
                 v18,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
        if ( !v15 )
          break;
        items = v15->fields._items;
        v22 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        v24 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            Item,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
        }
        v26 = System_Collections_Generic_List_int___get_Item(
                consumeList,
                v18,
                (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
        v27 = *consumeTotalNum;
        userItemNum -= v26;
        Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                 consumeList,
                                 v18,
                                 (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
        *consumeTotalNum = (_DWORD)Item + v27;
      }
      if ( ++v18 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v15;
    }
LABEL_16:
    sub_1B00F28(Item, v17);
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
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x1
  _DWORD *monitor; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  CommonConsumeEntity_o *v29; // x0
  __int64 v30; // x1
  CommonConsumeEntity_o *v31; // x21
  Il2CppClass *klass; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  __int64 v36; // x0
  __int64 v37; // x1
  Il2CppClass *v38; // x8
  int32_t v39; // w9
  int v40; // w11
  struct System_Int32_array *v41; // x8
  _QWORD *v42; // x10
  __int64 v43; // x12
  __int64 num; // x1
  int32_t v45; // w9
  char *v46; // x8
  struct System_Int32_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E66E5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_IndexOf_int___, blockList);
    sub_1B00CCC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v4);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v5);
    sub_1B00CCC(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_48E66E5 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v15 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_1B00F28(v16, v17);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v52.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B00F28(0LL, v20);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1B00F28(MasterData_object, v22);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1B00F28(MasterData_object, v22);
    if ( !MasterData_object )
      sub_1B00F28(0LL, v22);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_2FE6A4C *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v25 )
      sub_1B00F28(0LL, v26);
    v27 = DataManager__GetMasterData_object_(
            (DataManager_o *)v25,
            (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_1B00F28(v27, v28);
    if ( !v27 )
      sub_1B00F28(0LL, v28);
    v29 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v27, HIDWORD(Entity[1].monitor), 1, 0LL);
    v31 = v29;
    if ( !v29 )
    {
      if ( !v15 )
        sub_1B00F28(0LL, v30);
      items = v15->fields._items;
      v34 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B00F28(0LL, v30);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          0,
          *(const MethodInfo_33A49AC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size + 1] = 0;
      }
      klass = current[5].klass;
      if ( !klass )
        sub_1B00F28(v29, v30);
      goto LABEL_23;
    }
    klass = current[5].klass;
    if ( klass )
    {
LABEL_23:
      v36 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity[2].monitor,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_2E47BB4 *)Method_System_Array_IndexOf_int___);
      if ( (v36 & 0x80000000) != 0 )
      {
        if ( !v31 )
          sub_1B00F28(v36, v37);
        if ( !v15 )
          sub_1B00F28(v36, v37);
        num = (unsigned int)v31->fields.num;
        v47 = v15->fields._items;
        v48 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !v47 )
          sub_1B00F28(v36, num);
        v49 = v15->fields._size;
        if ( (unsigned int)v49 < v47->max_length )
          goto LABEL_40;
LABEL_35:
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          num,
          *(const MethodInfo_33A49AC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = Entity[3].klass;
        if ( !v38 )
          sub_1B00F28(v36, v37);
        if ( (unsigned int)v36 >= LODWORD(v38->_1.namespaze) )
          sub_1B00F30(v36, v37);
        if ( !v31 )
          sub_1B00F28(v36, v37);
        if ( !v15 )
          sub_1B00F28(v36, v37);
        v39 = v31->fields.num;
        v40 = *((_DWORD *)&v38->_1.byval_arg.data + (unsigned int)v36);
        v41 = v15->fields._items;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !v41 )
          sub_1B00F28(v36, v37);
        v43 = v15->fields._size;
        LODWORD(num) = v39 + v40;
        if ( (unsigned int)v43 < v41->max_length )
        {
          v45 = v43 + 1;
          v46 = (char *)v41 + 4 * v43;
          goto LABEL_41;
        }
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          num,
          *(const MethodInfo_33A49AC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v15 )
        sub_1B00F28(v29, v30);
      num = (unsigned int)v29->fields.num;
      v47 = v15->fields._items;
      v48 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !v47 )
        sub_1B00F28(v29, num);
      v49 = v15->fields._size;
      if ( (unsigned int)v49 >= v47->max_length )
        goto LABEL_35;
LABEL_40:
      v45 = v49 + 1;
      v46 = (char *)v47 + 4 * v49;
LABEL_41:
      v15->fields._size = v45;
      *((_DWORD *)v46 + 8) = num;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v15;
}


void __fastcall AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B00F28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__OnClickCloseBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_48E66E9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_AutoDiggingDialogComponent_OnClickCloseBtn__, method);
    byte_48E66E9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
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
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *p_activateMaskPanel; // x0
  struct System_Action_bool__o *activateMaskPanel; // x20
  System_Action_o *v11; // x20

  if ( (byte_48E66E8 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_AutoDiggingDialogComponent_EndClose__, v3);
    sub_1B00CCC(&Method_AutoDiggingDialogComponent_OnClickDecideBtn__, v4);
    byte_48E66E8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_AutoDiggingDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    p_activateMaskPanel = (ServantStatusBattleListViewItem_o *)&this->fields.activateMaskPanel;
    activateMaskPanel = this->fields.activateMaskPanel;
    if ( activateMaskPanel )
    {
      p_activateMaskPanel->klass = 0LL;
      sub_1B00C70(p_activateMaskPanel, 0, v7, v8);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))activateMaskPanel->fields.m_target)(
        activateMaskPanel->fields.original_method_info,
        1LL,
        *(_QWORD *)&activateMaskPanel->fields.extra_arg);
    }
    v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  System_Collections_Generic_List_object__o *v43; // x20
  int32_t v44; // w2
  int32_t v45; // w3
  int64_t Instance; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x3
  struct UISprite_array *itemIcon; // x8
  struct UISprite_array *v50; // x8
  System_Collections_Generic_List_object__o *v51; // x25
  unsigned __int64 v52; // x26
  System_Collections_Generic_List_object__o *v53; // x27
  UserItemMaster_o *v54; // x28
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppObject *current; // x20
  Il2CppObject *v58; // x0
  __int64 v59; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v61; // x1
  _DWORD *monitor; // x8
  Il2CppObject *v63; // x29
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  Il2CppObject *v66; // x0
  __int64 v67; // x1
  CommonConsumeEntity_o *v68; // x0
  int32_t objectId; // w29
  struct UISprite_array *v70; // x8
  UISprite_o *v71; // x20
  struct UISprite_array *consumeItemIcon; // x8
  Il2CppObject *Item; // x0
  const MethodInfo *v74; // x2
  System_Collections_Generic_List_int__o *DiggingConsumeList; // x27
  const MethodInfo *v76; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v78; // x28
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v80; // x28
  System_String_o *v81; // x1
  struct UILabel_array *v82; // x8
  struct UILabel_array *v83; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  UILabel_o *v87; // x23
  Il2CppObject *ComponentInChildren_object; // x24
  UILabel_o *consumeLabel; // x23
  UILabel_o *possessionLabel; // x23
  UILabel_o *titleLabel; // x23
  UILabel_o *subTitleLabel; // x23
  UILabel_o *messageLabel; // x23
  System_String_o **v94; // x8
  const MethodInfo *v95; // x2
  _BOOL8 v96; // x0
  __int64 v97; // x1
  struct UILabel_array *v98; // x8
  UIWidget_o *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  int32_t v102; // w2
  int32_t v103; // w3
  System_Action_o *v104; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+18h] [xbp-C8h]
  char v108; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+40h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+60h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48E66E2 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, blockList);
    sub_1B00CCC(&AtlasManager_TypeInfo, v7);
    sub_1B00CCC(&Method_AutoDiggingDialogComponent__Open_b__17_0__, v8);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____74599368, v9);
    sub_1B00CCC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v10);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v11);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserItemMaster___, v12);
    sub_1B00CCC(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v22);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v23);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v25);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v26);
    sub_1B00CCC(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__, v27);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_1B00CCC(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v29);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v30);
    sub_1B00CCC(&NetworkManager_TypeInfo, v31);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1B00CCC(&StringLiteral_4979/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, v33);
    sub_1B00CCC(&StringLiteral_2143/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v34);
    sub_1B00CCC(&StringLiteral_4977/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v35);
    sub_1B00CCC(&StringLiteral_2145/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, v36);
    sub_1B00CCC(&StringLiteral_2144/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, v37);
    sub_1B00CCC(&StringLiteral_10898/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v38);
    sub_1B00CCC(&StringLiteral_10897/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v39);
    sub_1B00CCC(&StringLiteral_2146/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/, v40);
    sub_1B00CCC(&StringLiteral_1207/*"0"*/, v41);
    byte_48E66E2 = 1;
  }
  entity = 0LL;
  memset(&v112, 0, sizeof(v112));
  consumeTotalNum = 0;
  memset(&v110, 0, sizeof(v110));
  this->fields.state = 1;
  v42 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  v43 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v43;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.autoDiggingBlockList, (int32_t)v43, v44, v45);
  itemIcon = this->fields.itemIcon;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  if ( !itemIcon )
    goto LABEL_96;
  Instance = (int64_t)AutoDiggingDialogComponent__SortActiveBlockList(
                        (AutoDiggingDialogComponent_o *)Instance,
                        blockList,
                        itemIcon->max_length,
                        v48);
  v50 = this->fields.itemIcon;
  if ( !v50 )
    goto LABEL_96;
  v108 = 0;
  v51 = (System_Collections_Generic_List_object__o *)Instance;
  v52 = 0LL;
  while ( (__int64)v52 < (int)v50->max_length )
  {
    v53 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v53,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_96;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    if ( !blockList )
      goto LABEL_96;
    v54 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v109,
      (System_Collections_Generic_List_object__o *)blockList,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v112 = v109;
    while ( 1 )
    {
      v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v112,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v55 )
        break;
      current = v112.fields._current;
      if ( !v112.fields._current )
        sub_1B00F28(v55, v56);
      if ( v52 == LODWORD(v112.fields._current[5].monitor) )
      {
        v58 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v58 )
          sub_1B00F28(0LL, v59);
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)v58,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        monitor = current[4].monitor;
        if ( !monitor )
          sub_1B00F28(MasterData_object, v61);
        if ( !MasterData_object )
          sub_1B00F28(0LL, v61);
        v63 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                monitor[6],
                (const MethodInfo_2FE6A4C *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v64 )
          sub_1B00F28(0LL, v65);
        v66 = DataManager__GetMasterData_object_(
                (DataManager_o *)v64,
                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v63 )
          sub_1B00F28(v66, v67);
        if ( !v66 )
          sub_1B00F28(0LL, v67);
        v68 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v66, HIDWORD(v63[1].monitor), 1, 0LL);
        if ( v68 )
        {
          objectId = v68->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v112,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v70 = this->fields.itemIcon;
    if ( !v70 )
      goto LABEL_96;
    if ( v52 >= v70->max_length )
      goto LABEL_97;
    v71 = v70->m_Items[v52];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetItem(v71, objectId, 0LL);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_96;
    if ( v52 >= consumeItemIcon->max_length )
      goto LABEL_97;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v52], objectId, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v54 )
      goto LABEL_96;
    Instance = UserItemMaster__TryGetEntity(v54, &entity, Instance, objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v51 )
        goto LABEL_96;
      Item = System_Collections_Generic_List_object___get_Item(
               v51,
               v52,
               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      DiggingConsumeList = AutoDiggingDialogComponent__GetDiggingConsumeList(
                             (AutoDiggingDialogComponent_o *)Item,
                             (System_Collections_Generic_List_DiggingBlockComponent__o *)Item,
                             v74);
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v51,
                            v52,
                            (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !entity )
        goto LABEL_96;
      Instance = (int64_t)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            (System_Collections_Generic_List_DiggingBlockComponent__o *)Instance,
                            DiggingConsumeList,
                            entity->fields.num,
                            &consumeTotalNum,
                            v76);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_96;
      if ( v52 >= itemNumLabel->max_length )
        goto LABEL_97;
      if ( !entity )
        goto LABEL_96;
      v53 = (System_Collections_Generic_List_object__o *)Instance;
      v78 = itemNumLabel->m_Items[v52];
      Instance = (int64_t)BasicHelper__ToCommaString(entity->fields.num, 0LL);
      if ( !v78 )
        goto LABEL_96;
      UILabel__set_text(v78, (System_String_o *)Instance, 0LL);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_96;
      if ( v52 >= consumeItemNumLabel->max_length )
        goto LABEL_97;
      v80 = consumeItemNumLabel->m_Items[v52];
      Instance = (int64_t)BasicHelper__ToCommaString(consumeTotalNum, 0LL);
      if ( !v80 )
        goto LABEL_96;
      v81 = (System_String_o *)Instance;
      Instance = (int64_t)v80;
    }
    else
    {
      v82 = this->fields.itemNumLabel;
      if ( !v82 )
        goto LABEL_96;
      if ( v52 >= v82->max_length )
LABEL_97:
        sub_1B00F30(Instance, v47);
      Instance = (int64_t)v82->m_Items[v52];
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1207/*"0"*/, 0LL);
      v83 = this->fields.consumeItemNumLabel;
      if ( !v83 )
        goto LABEL_96;
      if ( v52 >= v83->max_length )
        goto LABEL_97;
      Instance = (int64_t)v83->m_Items[v52];
      if ( !Instance )
        goto LABEL_96;
      v81 = (System_String_o *)StringLiteral_1207/*"0"*/;
    }
    UILabel__set_text((UILabel_o *)Instance, v81, 0LL);
    if ( !v53 )
      goto LABEL_96;
    if ( v53->fields._size < 1 )
    {
      if ( !v51 )
        goto LABEL_96;
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v51,
                            v52,
                            (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !Instance )
        goto LABEL_96;
      if ( *(int *)(Instance + 24) >= 1 )
      {
        if ( !v42 )
          goto LABEL_96;
        items = v42->fields._items;
        v85 = Method_System_Collections_Generic_List_int__Add__;
        ++v42->fields._version;
        if ( !items )
          goto LABEL_96;
        size = v42->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v42,
            v52,
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
        }
        else
        {
          v42->fields._size = size + 1;
          items->m_Items[size + 1] = v52;
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
        (System_Collections_Generic_IEnumerable_T__o *)v53,
        (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v108 = 1;
    }
    v50 = this->fields.itemIcon;
    ++v52;
    if ( !v50 )
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
                        (const MethodInfo_2D59B38 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____74599368);
  if ( !this->fields.closeButton )
    goto LABEL_96;
  v87 = (UILabel_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0LL);
  if ( !Instance )
    goto LABEL_96;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_2D59B38 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____74599368);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10898/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v87 )
    goto LABEL_96;
  UILabel__set_text(v87, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10897/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4977/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_96;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  possessionLabel = this->fields.possessionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4979/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0LL);
  if ( !possessionLabel )
    goto LABEL_96;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0LL);
  titleLabel = this->fields.titleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2145/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2144/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_96;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v94 = (System_String_o **)&StringLiteral_2143/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  if ( (v108 & 1) == 0 )
    v94 = (System_String_o **)&StringLiteral_2146/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  Instance = (int64_t)LocalizationManager__Get(*v94, 0LL);
  if ( !messageLabel )
    goto LABEL_96;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v108 & 1, v95);
  if ( !v42 )
    goto LABEL_96;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v109,
    v42,
    (const MethodInfo_33A5480 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v110 = v109;
  while ( 1 )
  {
    v96 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v110,
            (const MethodInfo_313A14C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v96 )
      break;
    v98 = this->fields.consumeItemNumLabel;
    if ( !v98 )
      sub_1B00F28(v96, v97);
    if ( LODWORD(v110.fields._current) >= v98->max_length )
      sub_1B00F30(v96, v97);
    v99 = (UIWidget_o *)v98->m_Items[SLODWORD(v110.fields._current)];
    if ( !v99 )
      sub_1B00F28(0LL, v97);
    v114.fields.r = 1.0;
    v114.fields.g = 0.0;
    v114.fields.b = 0.0;
    v114.fields.a = 1.0;
    UIWidget__set_color(v99, v114, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v110,
    (const MethodInfo_313A148 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  this->fields.activateMaskPanel = setMask;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.activateMaskPanel, (int32_t)setMask, v100, v101);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v102, v103);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
LABEL_96:
    sub_1B00F28(Instance, v47);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v104 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v104, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v104, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  __int64 v6; // x1

  if ( (byte_48E66E3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UICommonButton___, isEnable);
    byte_48E66E3 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, bool, void *))decideButton->klass[1]._1.namespaze)(
          decideButton,
          isEnable,
          decideButton->klass[1]._1.byval_arg.data),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_1B00F28(decideButton, isEnable);
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
  int v16; // w25
  System_Collections_Generic_List_object__o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
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

  if ( (byte_48E66E4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo, v13);
    sub_1B00CCC(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    byte_48E66E4 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v15 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v16 = 0;
    do
    {
      v17 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v17,
        (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v37,
        (System_Collections_Generic_List_object__o *)blockList,
        (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v38 = v37;
      while ( 1 )
      {
        v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v38,
                (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v20 )
          break;
        current = v38.fields._current;
        if ( !v38.fields._current )
          sub_1B00F28(v20, v21);
        if ( LODWORD(v38.fields._current[5].monitor) == v16 )
        {
          monitor = v38.fields._current[4].monitor;
          if ( !monitor )
            sub_1B00F28(v20, v21);
          if ( !monitor[7] )
          {
            if ( !v17 )
              sub_1B00F28(v20, v21);
            items = v17->fields._items;
            v27 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
            ++v17->fields._version;
            if ( !items )
              sub_1B00F28(v20, v21);
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                current,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v29[4] = (Il2CppClass *)current;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)current, v22, v23);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( !v15
        || (v32 = v15->fields._items,
            v33 = Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__,
            ++v15->fields._version,
            !v32) )
      {
LABEL_29:
        sub_1B00F28(v18, v19);
      }
      v34 = v15->fields._size;
      if ( (unsigned int)v34 >= v32->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v17,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &v32->obj.klass + v34;
        v15->fields._size = v34 + 1;
        v35[4] = (Il2CppClass *)v17;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v17, v30, v31);
      }
      ++v16;
    }
    while ( v16 != blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v15;
}


void __fastcall AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_48E66ED & 1) == 0 )
  {
    sub_1B00CCC(&Method_ActionExtensions_Call_bool___, method);
    byte_48E66ED = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2CBB36C *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_48E66EB & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E66EB = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B00F28(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}