void __fastcall AutoDiggingDialogComponent___ctor(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A3D1 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A3D1 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__EndClose(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct System_Action_List_DiggingBlockComponent___o *closeCallbackFunc; // x20
  System_Collections_Generic_List_T__o *v11; // x0

  if ( (byte_4B1A3CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Shuffle_DiggingBlockComponent___, method, v2);
    byte_4B1A3CF = 1;
  }
  AutoDiggingDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    v11 = BasicHelper__Shuffle_object_(
            (System_Collections_Generic_List_T__o *)this->fields.autoDiggingBlockList,
            (const MethodInfo_2F025E8 *)Method_BasicHelper_Shuffle_DiggingBlockComponent___);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Collections_Generic_List_T__o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      v11,
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1A3CB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__,
      blockList,
      *(_QWORD *)&blockId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v16, v17);
    byte_4B1A3CB = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       blockList,
                                                       *(_QWORD *)&blockId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !blockList )
    sub_1BCAA3C(v19, v20);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v21 )
      break;
    current = v37.fields._current;
    if ( !v37.fields._current )
      sub_1BCAA3C(v21, v22);
    monitor = v37.fields._current[4].monitor;
    if ( !monitor )
      sub_1BCAA3C(v21, v22);
    if ( monitor[6] == blockId && !monitor[7] )
    {
      if ( !v18 )
        sub_1BCAA3C(v21, v22);
      items = v18->fields._items;
      v32 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1BCAA3C(v21, v22);
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          current,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v34[4] = (Il2CppClass *)current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)current, v23, v24, v25, v26, v27, v28);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v18;
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x23
  Il2CppObject *Item; // x0
  __int64 v22; // x1
  int32_t v23; // w24
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x0
  int32_t v35; // w0
  int32_t v36; // w28

  v7 = userItemNum;
  if ( (byte_4B1A3CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, blockList, consumeList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v18, v19);
    byte_4B1A3CC = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       blockList,
                                                       consumeList,
                                                       *(_QWORD *)&userItemNum);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *consumeTotalNum = 0;
  if ( !blockList )
    goto LABEL_16;
  if ( blockList->fields._size >= 1 )
  {
    v23 = 0;
    while ( consumeList )
    {
      Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                               consumeList,
                               v23,
                               (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v7 - (int)Item >= 0 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)blockList,
                 v23,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_DiggingBlockComponent__get_Item__);
        if ( !v20 )
          break;
        items = v20->fields._items;
        v31 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        v33 = (int64_t)Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            Item,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v33;
          sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), v33, v24, v25, v26, v27, v28, v29);
        }
        v35 = System_Collections_Generic_List_int___get_Item(
                consumeList,
                v23,
                (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        v36 = *consumeTotalNum;
        v7 -= v35;
        Item = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                 consumeList,
                                 v23,
                                 (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        *consumeTotalNum = (_DWORD)Item + v36;
      }
      if ( ++v23 >= blockList->fields._size )
        return (System_Collections_Generic_List_DiggingBlockComponent__o *)v20;
    }
LABEL_16:
    sub_1BCAA3C(Item, v22);
  }
  return (System_Collections_Generic_List_DiggingBlockComponent__o *)v20;
}


System_Collections_Generic_List_int__o *__fastcall AutoDiggingDialogComponent__GetDiggingConsumeList(
        AutoDiggingDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x19
  __int64 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v34; // x1
  _DWORD *monitor; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  CommonConsumeEntity_o *v41; // x0
  __int64 v42; // x1
  CommonConsumeEntity_o *v43; // x21
  Il2CppClass *klass; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  __int64 v48; // x0
  __int64 v49; // x1
  Il2CppClass *v50; // x8
  int32_t v51; // w9
  int v52; // w11
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x10
  __int64 v55; // x12
  __int64 num; // x1
  int32_t v57; // w9
  char *v58; // x8
  struct System_Int32_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A3CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, blockList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B1A3CA = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v27 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    blockList,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !blockList )
    sub_1BCAA3C(v28, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v64 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v64.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v32);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1BCAA3C(MasterData_object, v34);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1BCAA3C(MasterData_object, v34);
    if ( !MasterData_object )
      sub_1BCAA3C(0LL, v34);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v37 )
      sub_1BCAA3C(0LL, v38);
    v39 = DataManager__GetMasterData_object_(
            (DataManager_o *)v37,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !Entity )
      sub_1BCAA3C(v39, v40);
    if ( !v39 )
      sub_1BCAA3C(0LL, v40);
    v41 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v39, HIDWORD(Entity[1].monitor), 1, 0LL);
    v43 = v41;
    if ( !v41 )
    {
      if ( !v27 )
        sub_1BCAA3C(0LL, v42);
      items = v27->fields._items;
      v46 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !items )
        sub_1BCAA3C(0LL, v42);
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          0,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = size + 1;
        items->m_Items[size + 1] = 0;
      }
      klass = current[5].klass;
      if ( !klass )
        sub_1BCAA3C(v41, v42);
      goto LABEL_23;
    }
    klass = current[5].klass;
    if ( klass )
    {
LABEL_23:
      v48 = System_Array__IndexOf_int_(
              (System_Int32_array *)Entity[2].monitor,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
      if ( (v48 & 0x80000000) != 0 )
      {
        if ( !v43 )
          sub_1BCAA3C(v48, v49);
        if ( !v27 )
          sub_1BCAA3C(v48, v49);
        num = (unsigned int)v43->fields.num;
        v59 = v27->fields._items;
        v60 = Method_System_Collections_Generic_List_int__Add__;
        ++v27->fields._version;
        if ( !v59 )
          sub_1BCAA3C(v48, num);
        v61 = v27->fields._size;
        if ( (unsigned int)v61 < v59->max_length )
          goto LABEL_40;
LABEL_35:
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          num,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = Entity[3].klass;
        if ( !v50 )
          sub_1BCAA3C(v48, v49);
        if ( (unsigned int)v48 >= LODWORD(v50->_1.namespaze) )
          sub_1BCAA44(v48, v49);
        if ( !v43 )
          sub_1BCAA3C(v48, v49);
        if ( !v27 )
          sub_1BCAA3C(v48, v49);
        v51 = v43->fields.num;
        v52 = *((_DWORD *)&v50->_1.byval_arg.data + (unsigned int)v48);
        v53 = v27->fields._items;
        v54 = Method_System_Collections_Generic_List_int__Add__;
        ++v27->fields._version;
        if ( !v53 )
          sub_1BCAA3C(v48, v49);
        v55 = v27->fields._size;
        LODWORD(num) = v51 + v52;
        if ( (unsigned int)v55 < v53->max_length )
        {
          v57 = v55 + 1;
          v58 = (char *)v53 + 4 * v55;
          goto LABEL_41;
        }
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          num,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v27 )
        sub_1BCAA3C(v41, v42);
      num = (unsigned int)v41->fields.num;
      v59 = v27->fields._items;
      v60 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !v59 )
        sub_1BCAA3C(v41, num);
      v61 = v27->fields._size;
      if ( (unsigned int)v61 >= v59->max_length )
        goto LABEL_35;
LABEL_40:
      v57 = v61 + 1;
      v58 = (char *)v59 + 4 * v61;
LABEL_41:
      v27->fields._size = v57;
      *((_DWORD *)v58 + 8) = num;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v27;
}


void __fastcall AutoDiggingDialogComponent__Init(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AutoDiggingDialogComponent__OnClickCloseBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B1A3CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AutoDiggingDialogComponent_OnClickCloseBtn__, method, v2);
    byte_4B1A3CE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_AutoDiggingDialogComponent_OnClickCloseBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickCloseBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_AutoDiggingDialogComponent_OnClickCloseBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall AutoDiggingDialogComponent__OnClickDecideBtn(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  __int64 v12; // x3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *p_activateMaskPanel; // x0
  struct System_Action_bool__o *activateMaskPanel; // x20
  System_Action_o *v19; // x20

  if ( (byte_4B1A3CD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AutoDiggingDialogComponent_EndClose__, v4, v5);
    sub_1BCA7E0(&Method_AutoDiggingDialogComponent_OnClickDecideBtn__, v6, v7);
    byte_4B1A3CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v8 = Method_AutoDiggingDialogComponent_OnClickDecideBtn__;
    if ( (*((_BYTE *)Method_AutoDiggingDialogComponent_OnClickDecideBtn__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_AutoDiggingDialogComponent_OnClickDecideBtn__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
    p_activateMaskPanel = (PartyOrganizationUtility_o *)&this->fields.activateMaskPanel;
    activateMaskPanel = this->fields.activateMaskPanel;
    if ( activateMaskPanel )
    {
      p_activateMaskPanel->klass = 0LL;
      sub_1BCA784(p_activateMaskPanel, 0LL, v11, v12, v13, v14, v15, v16);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))activateMaskPanel->fields.m_target)(
        activateMaskPanel->fields.original_method_info,
        1LL,
        *(_QWORD *)&activateMaskPanel->fields.extra_arg);
    }
    v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_AutoDiggingDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v19, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  System_Collections_Generic_List_int__o *v77; // x22
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_List_object__o *v81; // x20
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t Instance; // x0
  __int64 v89; // x1
  const MethodInfo *v90; // x3
  struct UISprite_array *itemIcon; // x8
  __int64 v92; // x2
  __int64 v93; // x3
  struct UISprite_array *v94; // x8
  System_Collections_Generic_List_object__o *v95; // x25
  unsigned __int64 v96; // x26
  System_Collections_Generic_List_object__o *v97; // x27
  UserItemMaster_o *v98; // x28
  _BOOL8 v99; // x0
  __int64 v100; // x1
  Il2CppObject *current; // x20
  Il2CppObject *v102; // x0
  __int64 v103; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v105; // x1
  _DWORD *monitor; // x8
  Il2CppObject *v107; // x29
  Il2CppObject *v108; // x0
  __int64 v109; // x1
  Il2CppObject *v110; // x0
  __int64 v111; // x1
  CommonConsumeEntity_o *v112; // x0
  int32_t objectId; // w29
  struct UISprite_array *v114; // x8
  UISprite_o *v115; // x20
  struct UISprite_array *consumeItemIcon; // x8
  __int64 v117; // x1
  Il2CppObject *Item; // x0
  const MethodInfo *v119; // x2
  System_Collections_Generic_List_int__o *DiggingConsumeList; // x27
  const MethodInfo *v121; // x5
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v123; // x28
  struct UILabel_array *consumeItemNumLabel; // x8
  UILabel_o *v125; // x28
  System_String_o *v126; // x1
  struct UILabel_array *v127; // x8
  struct UILabel_array *v128; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v130; // x9
  __int64 size; // x10
  UILabel_o *v132; // x23
  __int64 v133; // x1
  Il2CppObject *ComponentInChildren_object; // x24
  UILabel_o *consumeLabel; // x23
  UILabel_o *possessionLabel; // x23
  UILabel_o *titleLabel; // x23
  UILabel_o *subTitleLabel; // x23
  __int64 v139; // x1
  UILabel_o *messageLabel; // x23
  System_String_o **v141; // x8
  const MethodInfo *v142; // x2
  _BOOL8 v143; // x0
  __int64 v144; // x1
  struct UILabel_array *v145; // x8
  UIWidget_o *v146; // x0
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x3
  System_Action_o *v162; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o **p_autoDiggingBlockList; // [xsp+18h] [xbp-C8h]
  char v166; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v167; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v168; // [xsp+40h] [xbp-A0h] BYREF
  int32_t consumeTotalNum; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v170; // [xsp+60h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Color_o v172; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1A3C7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, blockList, setMask);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_AutoDiggingDialogComponent__Open_b__17_0__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__get_Count__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__, v47, v48);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v49, v50);
    sub_1BCA7E0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v51, v52);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v53, v54);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v55, v56);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57, v58);
    sub_1BCA7E0(&StringLiteral_5107/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_2167/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_5105/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_2169/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_2168/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_11210/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_11209/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_2170/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v75, v76);
    byte_4B1A3C7 = 1;
  }
  entity = 0LL;
  memset(&v170, 0, sizeof(v170));
  consumeTotalNum = 0;
  memset(&v168, 0, sizeof(v168));
  this->fields.state = 1;
  v77 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    blockList,
                                                    setMask,
                                                    closeCallback);
  System_Collections_Generic_List_int____ctor(
    v77,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v81 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       v78,
                                                       v79,
                                                       v80);
  System_Collections_Generic_List_object____ctor(
    v81,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.autoDiggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v81;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.autoDiggingBlockList,
    (int64_t)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  itemIcon = this->fields.itemIcon;
  p_autoDiggingBlockList = &this->fields.autoDiggingBlockList;
  if ( !itemIcon )
    goto LABEL_96;
  Instance = (int64_t)AutoDiggingDialogComponent__SortActiveBlockList(
                        (AutoDiggingDialogComponent_o *)Instance,
                        blockList,
                        itemIcon->max_length,
                        v90);
  v94 = this->fields.itemIcon;
  if ( !v94 )
    goto LABEL_96;
  v166 = 0;
  v95 = (System_Collections_Generic_List_object__o *)Instance;
  v96 = 0LL;
  while ( (__int64)v96 < (int)v94->max_length )
  {
    v97 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                         v89,
                                                         v92,
                                                         v93);
    System_Collections_Generic_List_object____ctor(
      v97,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_96;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
    entity = 0LL;
    if ( !blockList )
      goto LABEL_96;
    v98 = (UserItemMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v167,
      (System_Collections_Generic_List_object__o *)blockList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v170 = v167;
    while ( 1 )
    {
      v99 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v170,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
      if ( !v99 )
        break;
      current = v170.fields._current;
      if ( !v170.fields._current )
        sub_1BCAA3C(v99, v100);
      if ( v96 == LODWORD(v170.fields._current[5].monitor) )
      {
        v102 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v102 )
          sub_1BCAA3C(0LL, v103);
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)v102,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
        monitor = current[4].monitor;
        if ( !monitor )
          sub_1BCAA3C(MasterData_object, v105);
        if ( !MasterData_object )
          sub_1BCAA3C(0LL, v105);
        v107 = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 monitor[6],
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
        v108 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v108 )
          sub_1BCAA3C(0LL, v109);
        v110 = DataManager__GetMasterData_object_(
                 (DataManager_o *)v108,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v107 )
          sub_1BCAA3C(v110, v111);
        if ( !v110 )
          sub_1BCAA3C(0LL, v111);
        v112 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)v110, HIDWORD(v107[1].monitor), 1, 0LL);
        if ( v112 )
        {
          objectId = v112->fields.objectId;
          goto LABEL_22;
        }
        break;
      }
    }
    objectId = 0;
LABEL_22:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v170,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v114 = this->fields.itemIcon;
    if ( !v114 )
      goto LABEL_96;
    if ( v96 >= v114->max_length )
      goto LABEL_97;
    v115 = v114->m_Items[v96];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v89);
    Instance = AtlasManager__SetItem(v115, objectId, 0LL);
    consumeItemIcon = this->fields.consumeItemIcon;
    if ( !consumeItemIcon )
      goto LABEL_96;
    if ( v96 >= consumeItemIcon->max_length )
      goto LABEL_97;
    AtlasManager__SetItem(consumeItemIcon->m_Items[v96], objectId, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v117);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v98 )
      goto LABEL_96;
    Instance = UserItemMaster__TryGetEntity(v98, &entity, Instance, objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v95 )
        goto LABEL_96;
      Item = System_Collections_Generic_List_object___get_Item(
               v95,
               v96,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      DiggingConsumeList = AutoDiggingDialogComponent__GetDiggingConsumeList(
                             (AutoDiggingDialogComponent_o *)Item,
                             (System_Collections_Generic_List_DiggingBlockComponent__o *)Item,
                             v119);
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v95,
                            v96,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !entity )
        goto LABEL_96;
      Instance = (int64_t)AutoDiggingDialogComponent__GetAutoDiggingBlockList(
                            (AutoDiggingDialogComponent_o *)Instance,
                            (System_Collections_Generic_List_DiggingBlockComponent__o *)Instance,
                            DiggingConsumeList,
                            entity->fields.num,
                            &consumeTotalNum,
                            v121);
      itemNumLabel = this->fields.itemNumLabel;
      if ( !itemNumLabel )
        goto LABEL_96;
      if ( v96 >= itemNumLabel->max_length )
        goto LABEL_97;
      if ( !entity )
        goto LABEL_96;
      v97 = (System_Collections_Generic_List_object__o *)Instance;
      v123 = itemNumLabel->m_Items[v96];
      Instance = (int64_t)BasicHelper__ToCommaString(entity->fields.num, 0LL);
      if ( !v123 )
        goto LABEL_96;
      UILabel__set_text(v123, (System_String_o *)Instance, 0LL);
      consumeItemNumLabel = this->fields.consumeItemNumLabel;
      if ( !consumeItemNumLabel )
        goto LABEL_96;
      if ( v96 >= consumeItemNumLabel->max_length )
        goto LABEL_97;
      v125 = consumeItemNumLabel->m_Items[v96];
      Instance = (int64_t)BasicHelper__ToCommaString(consumeTotalNum, 0LL);
      if ( !v125 )
        goto LABEL_96;
      v126 = (System_String_o *)Instance;
      Instance = (int64_t)v125;
    }
    else
    {
      v127 = this->fields.itemNumLabel;
      if ( !v127 )
        goto LABEL_96;
      if ( v96 >= v127->max_length )
LABEL_97:
        sub_1BCAA44(Instance, v89);
      Instance = (int64_t)v127->m_Items[v96];
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL);
      v128 = this->fields.consumeItemNumLabel;
      if ( !v128 )
        goto LABEL_96;
      if ( v96 >= v128->max_length )
        goto LABEL_97;
      Instance = (int64_t)v128->m_Items[v96];
      if ( !Instance )
        goto LABEL_96;
      v126 = (System_String_o *)StringLiteral_1209/*"0"*/;
    }
    UILabel__set_text((UILabel_o *)Instance, v126, 0LL);
    if ( !v97 )
      goto LABEL_96;
    if ( v97->fields._size < 1 )
    {
      if ( !v95 )
        goto LABEL_96;
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v95,
                            v96,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_DiggingBlockComponent___get_Item__);
      if ( !Instance )
        goto LABEL_96;
      if ( *(int *)(Instance + 24) >= 1 )
      {
        if ( !v77 )
          goto LABEL_96;
        items = v77->fields._items;
        v130 = Method_System_Collections_Generic_List_int__Add__;
        ++v77->fields._version;
        if ( !items )
          goto LABEL_96;
        size = v77->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v77,
            v96,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
        }
        else
        {
          v77->fields._size = size + 1;
          items->m_Items[size + 1] = v96;
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
        (System_Collections_Generic_IEnumerable_T__o *)v97,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_DiggingBlockComponent__AddRange__);
      v166 = 1;
    }
    v94 = this->fields.itemIcon;
    ++v96;
    if ( !v94 )
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
                        (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !this->fields.closeButton )
    goto LABEL_96;
  v132 = (UILabel_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.closeButton, 0LL);
  if ( !Instance )
    goto LABEL_96;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)Instance,
                                 1,
                                 (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v133);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11210/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !v132 )
    goto LABEL_96;
  UILabel__set_text(v132, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11209/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)Instance, 0LL);
  consumeLabel = this->fields.consumeLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5105/*"DIGGING_CONFIRM_DIALOG_CONSUME"*/, 0LL);
  if ( !consumeLabel )
    goto LABEL_96;
  UILabel__set_text(consumeLabel, (System_String_o *)Instance, 0LL);
  possessionLabel = this->fields.possessionLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5107/*"DIGGING_CONFIRM_DIALOG_POSSESSION"*/, 0LL);
  if ( !possessionLabel )
    goto LABEL_96;
  UILabel__set_text(possessionLabel, (System_String_o *)Instance, 0LL);
  titleLabel = this->fields.titleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2169/*"AUTO_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2168/*"AUTO_DIGGING_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_96;
  UILabel__set_text(subTitleLabel, (System_String_o *)Instance, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v139);
  v141 = (System_String_o **)&StringLiteral_2167/*"AUTO_DIGGING_CONFIRM_DIALOG_MESSAGE"*/;
  if ( (v166 & 1) == 0 )
    v141 = (System_String_o **)&StringLiteral_2170/*"AUTO_DIGGING_CONFIRM_DIALOG_WARNING_MESSAGE"*/;
  Instance = (int64_t)LocalizationManager__Get(*v141, 0LL);
  if ( !messageLabel )
    goto LABEL_96;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  AutoDiggingDialogComponent__SetAutoDiggingBtnState(this, v166 & 1, v142);
  if ( !v77 )
    goto LABEL_96;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v167,
    v77,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v168 = v167;
  while ( 1 )
  {
    v143 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             (System_Collections_Generic_List_Enumerator_int__o *)&v168,
             (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v143 )
      break;
    v145 = this->fields.consumeItemNumLabel;
    if ( !v145 )
      sub_1BCAA3C(v143, v144);
    if ( LODWORD(v168.fields._current) >= v145->max_length )
      sub_1BCAA44(v143, v144);
    v146 = (UIWidget_o *)v145->m_Items[SLODWORD(v168.fields._current)];
    if ( !v146 )
      sub_1BCAA3C(0LL, v144);
    v172.fields.r = 1.0;
    v172.fields.g = 0.0;
    v172.fields.b = 0.0;
    v172.fields.a = 1.0;
    UIWidget__set_color(v146, v172, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v168,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  this->fields.activateMaskPanel = setMask;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.activateMaskPanel,
    (int64_t)setMask,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeCallback,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
LABEL_96:
    sub_1BCAA3C(Instance, v89);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v162 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v159, v160, v161);
  System_Action___ctor(v162, (Il2CppObject *)this, Method_AutoDiggingDialogComponent__Open_b__17_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v162, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoDiggingDialogComponent__SetAutoDiggingBtnState(
        AutoDiggingDialogComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  __int64 v6; // x1

  if ( (byte_4B1A3C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UICommonButton___, isEnable, method);
    byte_4B1A3C8 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, bool, void *))decideButton->klass[1]._1.namespaze)(
          decideButton,
          isEnable,
          decideButton->klass[1]._1.byval_arg.data),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_1BCAA3C(decideButton, isEnable);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  int v28; // w25
  System_Collections_Generic_List_object__o *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *current; // x8
  _DWORD *monitor; // x9
  struct System_Object_array *items; // x9
  _QWORD *v43; // x10
  __int64 size; // x11
  Il2CppClass **v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A3C9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__,
      blockList,
      *(_QWORD *)&blockKindNum);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v22, v23);
    byte_4B1A3C9 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_List_DiggingBlockComponent___TypeInfo,
                                                       blockList,
                                                       *(_QWORD *)&blockKindNum,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_List_DiggingBlockComponent____ctor__);
  if ( blockKindNum >= 1 )
  {
    v28 = 0;
    do
    {
      v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                           v25,
                                                           v26,
                                                           v27);
      System_Collections_Generic_List_object____ctor(
        v29,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( !blockList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v57,
        (System_Collections_Generic_List_object__o *)blockList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
      v58 = v57;
      while ( 1 )
      {
        v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v58,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
        if ( !v32 )
          break;
        current = v58.fields._current;
        if ( !v58.fields._current )
          sub_1BCAA3C(v32, v33);
        if ( LODWORD(v58.fields._current[5].monitor) == v28 )
        {
          monitor = v58.fields._current[4].monitor;
          if ( !monitor )
            sub_1BCAA3C(v32, v33);
          if ( !monitor[7] )
          {
            if ( !v29 )
              sub_1BCAA3C(v32, v33);
            items = v29->fields._items;
            v43 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
            ++v29->fields._version;
            if ( !items )
              sub_1BCAA3C(v32, v33);
            size = v29->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v29,
                current,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = &items->obj.klass + size;
              v29->fields._size = size + 1;
              v45[4] = (Il2CppClass *)current;
              sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)current, v34, v35, v36, v37, v38, v39);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v58,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
      if ( !v24
        || (v52 = v24->fields._items,
            v53 = Method_System_Collections_Generic_List_List_DiggingBlockComponent___Add__,
            ++v24->fields._version,
            !v52) )
      {
LABEL_29:
        sub_1BCAA3C(v30, v31);
      }
      v54 = v24->fields._size;
      if ( (unsigned int)v54 >= v52->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)v29,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &v52->obj.klass + v54;
        v24->fields._size = v54 + 1;
        v55[4] = (Il2CppClass *)v29;
        sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v29, v46, v47, v48, v49, v50, v51);
      }
      ++v28;
    }
    while ( v28 != blockKindNum );
  }
  return (System_Collections_Generic_List_List_DiggingBlockComponent___o *)v24;
}


void __fastcall AutoDiggingDialogComponent___Open_b__17_0(AutoDiggingDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A3D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B1A3D2 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.activateMaskPanel,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall AutoDiggingDialogComponent__get_closeBtnObject(
        AutoDiggingDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A3D0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A3D0 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}