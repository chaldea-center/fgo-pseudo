void __fastcall AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C262F8 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C262F8 = 1;
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

  if ( (byte_4C262F6 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Shuffle_DiggingBlockComponent___, method);
    byte_4C262F6 = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    v10 = BasicHelper__Shuffle_object_(
            (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
            (const MethodInfo_2FDF86C *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C262F2 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v11);
    byte_4C262F2 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_1C3B9C0(v13, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v15 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1C3B9C0(v15, v16);
    monitor = v31.fields._current[4].monitor;
    if ( !monitor )
      sub_1C3B9C0(v15, v16);
    if ( monitor[6] == blockId && !monitor[7] )
    {
      if ( !v12 )
        sub_1C3B9C0(v15, v16);
      items = v12->fields._items;
      v26 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1C3B9C0(v15, v16);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          current,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v28[4] = (Il2CppClass *)current;
        sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)current, v17, v18, v19, v20, v21, v22);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int64_t v28; // x1
  Il2CppClass **v29; // x0
  int32_t v30; // w0
  int32_t v31; // w28

  if ( (byte_4C262F3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, blockList);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1C3B764(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    byte_4C262F3 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
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
                               (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( userItemNum - (int)Item >= 0 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)blockList,
                 v18,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
        if ( !v15 )
          break;
        items = v15->fields._items;
        v26 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        v28 = (int64_t)Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            Item,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v28;
          sub_1C3B708((PartyOrganizationUtility_o *)(v29 + 4), v28, v19, v20, v21, v22, v23, v24);
        }
        v30 = System_Collections_Generic_List_int___get_Item(
                consumeList,
                v18,
                (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
        v31 = *consumeTotalNum;
        userItemNum -= v30;
        Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                 consumeList,
                                 v18,
                                 (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
        *consumeTotalNum = (_DWORD)Item + v31;
      }
      if ( ++v18 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v15;
    }
LABEL_16:
    sub_1C3B9C0(Item, v17);
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

  if ( (byte_4C262F1 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_IndexOf_int___, blockList);
    sub_1C3B764(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4C262F1 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v15 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_1C3B9C0(v16, v17);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v52.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C3B9C0(0LL, v20);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1C3B9C0(MasterData_object, v22);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1C3B9C0(MasterData_object, v22);
    if ( !MasterData_object )
      sub_1C3B9C0(0LL, v22);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_329AE48 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v25 )
      sub_1C3B9C0(0LL, v26);
    v27 = DataManager__GetMasterData_object_(
            (DataManager_o *)v25,
            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_1C3B9C0(v27, v28);
    if ( !v27 )
      sub_1C3B9C0(0LL, v28);
    v29 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v27, HIDWORD(Entity[1].monitor), 1, 0LL);
    v31 = v29;
    if ( !v29 )
    {
      if ( !v15 )
        sub_1C3B9C0(0LL, v30);
      items = v15->fields._items;
      v34 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1C3B9C0(0LL, v30);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          0,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size + 1] = 0;
      }
      klass = current[5].klass;
      if ( !klass )
        sub_1C3B9C0(v29, v30);
      goto LABEL_23;
    }
    klass = current[5].klass;
    if ( klass )
    {
LABEL_23:
      v36 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity[2].monitor,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_30EE4E0 *)Method_System_Array_IndexOf_int___);
      if ( (v36 & 0x80000000) != 0 )
      {
        if ( !v31 )
          sub_1C3B9C0(v36, v37);
        if ( !v15 )
          sub_1C3B9C0(v36, v37);
        num = (unsigned int)v31->fields.num;
        v47 = v15->fields._items;
        v48 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !v47 )
          sub_1C3B9C0(v36, num);
        v49 = v15->fields._size;
        if ( (unsigned int)v49 < v47->max_length )
          goto LABEL_40;
LABEL_35:
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          num,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = Entity[3].klass;
        if ( !v38 )
          sub_1C3B9C0(v36, v37);
        if ( (unsigned int)v36 >= LODWORD(v38->_1.namespaze) )
          sub_1C3B9C8(v36, v37);
        if ( !v31 )
          sub_1C3B9C0(v36, v37);
        if ( !v15 )
          sub_1C3B9C0(v36, v37);
        v39 = v31->fields.num;
        v40 = *((_DWORD *)&v38->_1.byval_arg.data + (unsigned int)v36);
        v41 = v15->fields._items;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !v41 )
          sub_1C3B9C0(v36, v37);
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
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v15 )
        sub_1C3B9C0(v29, v30);
      num = (unsigned int)v29->fields.num;
      v47 = v15->fields._items;
      v48 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !v47 )
        sub_1C3B9C0(v29, num);
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
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v15;
}


void __fastcall AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C3B9C0(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__OnClickCloseBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C262F5 & 1) == 0 )
  {
    sub_1C3B764(&Method_AutoDiggingDialogComponent_OnClickCloseBtn__, method);
    byte_4C262F5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutoDiggingDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  PartyOrganizationUtility_o *p_activateMaskPanel; // x0
  struct System_Action_bool__o *activateMaskPanel; // x20
  System_Action_o *v15; // x20

  if ( (byte_4C262F4 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_AutoDiggingDialogComponent_EndClose__, v3);
    sub_1C3B764(&Method_AutoDiggingDialogComponent_OnClickDecideBtn__, v4);
    byte_4C262F4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_AutoDiggingDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    p_activateMaskPanel = (PartyOrganizationUtility_o *)&this->fields.activateMaskPanel;
    activateMaskPanel = this->fields.activateMaskPanel;
    if ( activateMaskPanel )
    {
      p_activateMaskPanel->klass = 0LL;
      sub_1C3B708(p_activateMaskPanel, 0LL, v7, v8, v9, v10, v11, v12);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))activateMaskPanel->fields.m_target)(
        activateMaskPanel->fields.original_method_info,
        1LL,
        *(_QWORD *)&activateMaskPanel->fields.extra_arg);
    }
    v15 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UILabel_o *Instance; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x3
  struct UISprite_array *itemIcon; // x8
  struct UISprite_array *v54; // x8
  System_Collections_Generic_List_object__o *v55; // x25
  unsigned __int64 v56; // x26
  System_Collections_Generic_List_object__o *v57; // x28
  UserItemMaster_o *v58; // x29
  _BOOL8 v59; // x0
  __int64 v60; // x1
  Il2CppObject *current; // x20
  Il2CppObject *v62; // x0
  __int64 v63; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v65; // x1
  _DWORD *monitor; // x8
  Il2CppObject *v67; // x20
  Il2CppObject *v68; // x0
  __int64 v69; // x1
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  CommonConsumeEntity_o *v72; // x0
  int32_t objectId; // w20
  struct UISprite_array *v74; // x8
  UISprite_o *v75; // x21
  struct UISprite_array *consumeItemIcon; // x8
  Il2CppObject *Item; // x0
  const MethodInfo *v78; // x2
  System_Collections_Generic_List_int__o *DiggingConsumeList; // x20
  const MethodInfo *v80; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v82; // x20
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v84; // x20
  System_String_o *v85; // x1
  struct UILabel_array *v86; // x8
  struct UILabel_array *v87; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  UILabel_o *v91; // x20
  Il2CppObject *ComponentInChildren_object; // x23
  UILabel_o *consumeLabel; // x20
  UILabel_o *possessionLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o **v98; // x8
  const MethodInfo *v99; // x2
  _BOOL8 v100; // x0
  __int64 v101; // x1
  struct UILabel_array *v102; // x8
  UIWidget_o *v103; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  System_Action_o *v116; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+18h] [xbp-C8h]
  char v120; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v121; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v122; // [xsp+40h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v124; // [xsp+60h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Color_o v126; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C262EE & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, blockList);
    sub_1C3B764(&AtlasManager_TypeInfo, v7);
    sub_1C3B764(&Method_AutoDiggingDialogComponent__Open_b__17_0__, v8);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____77925392, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserItemMaster___, v12);
    sub_1C3B764(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v25);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v26);
    sub_1C3B764(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__, v27);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_1C3B764(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v29);
    sub_1C3B764(&LocalizationManager_TypeInfo, v30);
    sub_1C3B764(&NetworkManager_TypeInfo, v31);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1C3B764(&StringLiteral_5130/*"Decrement("*/, v33);
    sub_1C3B764(&StringLiteral_2160/*"AddQuickCardIds"*/, v34);
    sub_1C3B764(&StringLiteral_5128/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/, v35);
    sub_1C3B764(&StringLiteral_2162/*"AddRule"*/, v36);
    sub_1C3B764(&StringLiteral_2161/*"AddQuickCardWeights"*/, v37);
    sub_1C3B764(&StringLiteral_11302/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/, v38);
    sub_1C3B764(&StringLiteral_11301/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/, v39);
    sub_1C3B764(&StringLiteral_2163/*"AddStrengthCardIds"*/, v40);
    sub_1C3B764(&StringLiteral_1191/*"1.0"*/, v41);
    byte_4C262EE = 1;
  }
  entity = 0LL;
  memset(&v124, 0, sizeof(v124));
  consumeTotalNum = 0;
  memset(&v122, 0, sizeof(v122));
  this->fields.state = 1;
  v42 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v43 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v43;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.autoDiggingBlockList,
    (int64_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  itemIcon = this->fields.itemIcon;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  if ( !itemIcon )
    goto LABEL_100;
  Instance = (UILabel_o *)AutoDiggingDialogComponent__SortActiveBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            blockList,
                            itemIcon->max_length,
                            v52);
  v54 = this->fields.itemIcon;
  if ( !v54 )
    goto LABEL_100;
  v120 = 0;
  v55 = (System_Collections_Generic_List_object__o *)Instance;
  v56 = 0LL;
  while ( (__int64)v56 < (int)v54->max_length )
  {
    v57 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v57,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = (UILabel_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    if ( !blockList )
      goto LABEL_100;
    v58 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v121,
      (System_Collections_Generic_List_object__o *)blockList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v124 = v121;
    while ( 1 )
    {
      v59 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v124,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v59 )
        break;
      current = v124.fields._current;
      if ( !v124.fields._current )
        sub_1C3B9C0(v59, v60);
      if ( v56 == LODWORD(v124.fields._current[5].monitor) )
      {
        v62 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v62 )
          sub_1C3B9C0(0LL, v63);
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)v62,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        monitor = current[4].monitor;
        if ( !monitor )
          sub_1C3B9C0(MasterData_object, v65);
        if ( !MasterData_object )
          sub_1C3B9C0(0LL, v65);
        v67 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                monitor[6],
                (const MethodInfo_329AE48 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v68 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v68 )
          sub_1C3B9C0(0LL, v69);
        v70 = DataManager__GetMasterData_object_(
                (DataManager_o *)v68,
                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v67 )
          sub_1C3B9C0(v70, v71);
        if ( !v70 )
          sub_1C3B9C0(0LL, v71);
        v72 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v70, HIDWORD(v67[1].monitor), 1, 0LL);
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
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v124,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v74 = this->fields.itemIcon;
    if ( !v74 )
      goto LABEL_100;
    if ( v56 >= v74->max_length )
      goto LABEL_101;
    v75 = v74->m_Items[v56];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (UILabel_o *)AtlasManager__SetItem(v75, objectId, 0LL);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_100;
    if ( v56 >= consumeItemIcon->max_length )
      goto LABEL_101;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v56], objectId, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v51);
      byte_4C1C955 = 1;
    }
    Instance = (UILabel_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (UILabel_o *)NetworkManager_TypeInfo;
    }
    if ( !v58 )
      goto LABEL_100;
    Instance = (UILabel_o *)UserItemMaster__TryGetEntity(
                              v58,
                              &entity,
                              (int64_t)Instance->fields.onChange->fields.original_method_info,
                              objectId,
                              0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v55 )
        goto LABEL_100;
      Item = System_Collections_Generic_List_object___get_Item(
               v55,
               v56,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      DiggingConsumeList = AutoDiggingDialogComponent__GetDiggingConsumeList(
                             (AutoDiggingDialogComponent_o *)Item,
                             (System_Collections_Generic_List_DiggingBlockComponent__o *)Item,
                             v78);
      Instance = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                v55,
                                v56,
                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !entity )
        goto LABEL_100;
      Instance = (UILabel_o *)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                                (AutoDiggingDialogComponent_o *)Instance,
                                (System_Collections_Generic_List_DiggingBlockComponent__o *)Instance,
                                DiggingConsumeList,
                                entity->fields.num,
                                &consumeTotalNum,
                                v80);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_100;
      if ( v56 >= itemNumLabel->max_length )
        goto LABEL_101;
      if ( !entity )
        goto LABEL_100;
      v57 = (System_Collections_Generic_List_object__o *)Instance;
      v82 = itemNumLabel->m_Items[v56];
      Instance = (UILabel_o *)BasicHelper__ToCommaString(entity->fields.num, 0LL);
      if ( !v82 )
        goto LABEL_100;
      UILabel__set_text(v82, (System_String_o *)Instance, 0LL);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_100;
      if ( v56 >= consumeItemNumLabel->max_length )
        goto LABEL_101;
      v84 = consumeItemNumLabel->m_Items[v56];
      Instance = (UILabel_o *)BasicHelper__ToCommaString(consumeTotalNum, 0LL);
      if ( !v84 )
        goto LABEL_100;
      v85 = (System_String_o *)Instance;
      Instance = v84;
    }
    else
    {
      v86 = this->fields.itemNumLabel;
      if ( !v86 )
        goto LABEL_100;
      if ( v56 >= v86->max_length )
LABEL_101:
        sub_1C3B9C8(Instance, v51);
      Instance = v86->m_Items[v56];
      if ( !Instance )
        goto LABEL_100;
      UILabel__set_text(Instance, (System_String_o *)StringLiteral_1191/*"1.0"*/, 0LL);
      v87 = this->fields.consumeItemNumLabel;
      if ( !v87 )
        goto LABEL_100;
      if ( v56 >= v87->max_length )
        goto LABEL_101;
      Instance = v87->m_Items[v56];
      if ( !Instance )
        goto LABEL_100;
      v85 = (System_String_o *)StringLiteral_1191/*"1.0"*/;
    }
    UILabel__set_text(Instance, v85, 0LL);
    if ( !v57 )
      goto LABEL_100;
    if ( v57->fields._size < 1 )
    {
      if ( !v55 )
        goto LABEL_100;
      Instance = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                v55,
                                v56,
                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !Instance )
        goto LABEL_100;
      if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
      {
        if ( !v42 )
          goto LABEL_100;
        items = v42->fields._items;
        v89 = Method_System_Collections_Generic_List_int__Add__;
        ++v42->fields._version;
        if ( !items )
          goto LABEL_100;
        size = v42->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v42,
            v56,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v42->fields._size = size + 1;
          items->m_Items[size + 1] = v56;
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
        (System_Collections_Generic_IEnumerable_T__o *)v57,
        (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v120 = 1;
    }
    v54 = this->fields.itemIcon;
    ++v56;
    if ( !v54 )
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
                            (const MethodInfo_2FE7090 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____77925392);
  if ( !this->fields.closeButton )
    goto LABEL_100;
  v91 = Instance;
  Instance = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0LL);
  if ( !Instance )
    goto LABEL_100;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_2FE7090 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____77925392);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11302/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/, 0LL);
  if ( !v91 )
    goto LABEL_100;
  UILabel__set_text(v91, (System_String_o *)Instance, 0LL);
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11301/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5128/*"Declined ask to buy purchase: Product: '{0}', PurchaseFailureReason: {1}"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_100;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  possessionLabel = this->fields.possessionLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5130/*"Decrement("*/, 0LL);
  if ( !possessionLabel )
    goto LABEL_100;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0LL);
  titleLabel = this->fields.titleLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2162/*"AddRule"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_100;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2161/*"AddQuickCardWeights"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_100;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v98 = (System_String_o **)&StringLiteral_2160/*"AddQuickCardIds"*/;
  if ( (v120 & 1) == 0 )
    v98 = (System_String_o **)&StringLiteral_2163/*"AddStrengthCardIds"*/;
  Instance = (UILabel_o *)LocalizationManager__Get(*v98, 0LL);
  if ( !messageLabel )
    goto LABEL_100;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v120 & 1, v99);
  if ( !v42 )
    goto LABEL_100;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v121,
    v42,
    (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v122 = v121;
  while ( 1 )
  {
    v100 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             (System_Collections_Generic_List_Enumerator_int__o *)&v122,
             (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v100 )
      break;
    v102 = this->fields.consumeItemNumLabel;
    if ( !v102 )
      sub_1C3B9C0(v100, v101);
    if ( LODWORD(v122.fields._current) >= v102->max_length )
      sub_1C3B9C8(v100, v101);
    v103 = (UIWidget_o *)v102->m_Items[SLODWORD(v122.fields._current)];
    if ( !v103 )
      sub_1C3B9C0(0LL, v101);
    v126.fields.r = 1.0;
    v126.fields.g = 0.0;
    v126.fields.b = 0.0;
    v126.fields.a = 1.0;
    UIWidget__set_color(v103, v126, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v122,
    (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  this->fields.activateMaskPanel = setMask;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.activateMaskPanel,
    (int64_t)setMask,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeCallback,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  Instance = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
LABEL_100:
    sub_1C3B9C0(Instance, v51);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v116 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v116, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v116, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  __int64 v6; // x1

  if ( (byte_4C262EF & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UICommonButton___, isEnable);
    byte_4C262EF = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, bool, void *))decideButton->klass[1]._1.namespaze)(
          decideButton,
          isEnable,
          decideButton->klass[1]._1.byval_arg.data),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_1C3B9C0(decideButton, isEnable);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  Il2CppClass **v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C262F0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, blockList);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo, v13);
    sub_1C3B764(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    byte_4C262F0 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v15 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v16 = 0;
    do
    {
      v17 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v17,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        (System_Collections_Generic_List_object__o *)blockList,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v46 = v45;
      while ( 1 )
      {
        v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v46,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v20 )
          break;
        current = v46.fields._current;
        if ( !v46.fields._current )
          sub_1C3B9C0(v20, v21);
        if ( LODWORD(v46.fields._current[5].monitor) == v16 )
        {
          monitor = v46.fields._current[4].monitor;
          if ( !monitor )
            sub_1C3B9C0(v20, v21);
          if ( !monitor[7] )
          {
            if ( !v17 )
              sub_1C3B9C0(v20, v21);
            items = v17->fields._items;
            v31 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
            ++v17->fields._version;
            if ( !items )
              sub_1C3B9C0(v20, v21);
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                current,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v33[4] = (Il2CppClass *)current;
              sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)current, v22, v23, v24, v25, v26, v27);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v46,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( !v15
        || (v40 = v15->fields._items,
            v41 = Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__,
            ++v15->fields._version,
            !v40) )
      {
LABEL_29:
        sub_1C3B9C0(v18, v19);
      }
      v42 = v15->fields._size;
      if ( (unsigned int)v42 >= v40->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v17,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &v40->obj.klass + v42;
        v15->fields._size = v42 + 1;
        v43[4] = (Il2CppClass *)v17;
        sub_1C3B708((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v17, v34, v35, v36, v37, v38, v39);
      }
      ++v16;
    }
    while ( v16 != blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v15;
}


void __fastcall AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C262F9 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_bool___, method);
    byte_4C262F9 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2F42210 *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C262F7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C262F7 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C3B9C0(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}