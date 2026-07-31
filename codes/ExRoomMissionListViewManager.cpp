void ExRoomMissionListViewManager___ctor(ExRoomMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_5932E1B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_21FFC50(&MissionListViewManager_TypeInfo);
    byte_5932E1B = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.previousDisplayOrderList = v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.previousDisplayOrderList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( !*(&MissionListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, v10, v11);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0);
}


void ExRoomMissionListViewManager__Awake(ExRoomMissionListViewManager_o *this, const MethodInfo *method)
{
  ;
}


ExRoomMissionListViewManager_ScrollViewState_o *ExRoomMissionListViewManager__CaptureScrollViewState(
        ExRoomMissionListViewManager_ScrollViewState_o *__return_ptr retstr,
        ExRoomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *scrollView; // x21
  ExRoomMissionListViewManager_ScrollViewState_o *result; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct UnityEngine_Vector3_StaticFields *v10; // x8
  float z; // s1
  struct UIScrollView_o *v12; // x8
  UnityEngine_Object_o *mPanel; // x21
  bool v14; // w8
  __int128 *v15; // x22
  struct UnityEngine_Vector2_o *v16; // x20
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  UnityEngine_Object_o *p_y; // x9
  int klass; // s1
  struct UnityEngine_Vector2_o v20; // x8
  __int128 v21; // [xsp+8h] [xbp-48h] BYREF
  struct UnityEngine_Vector2_o zeroVector; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5932E19 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E19 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  v21 = 0u;
  zeroVector = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  result = (ExRoomMissionListViewManager_ScrollViewState_o *)UnityEngine_Object__op_Equality(scrollView, 0, 0);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    v12 = this->fields.scrollView;
    if ( v12 )
    {
      mPanel = (UnityEngine_Object_o *)v12->fields.mPanel;
      zeroVector = 0;
      v21 = 0u;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      v14 = UnityEngine_Object__op_Inequality(mPanel, 0, 0);
      result = (ExRoomMissionListViewManager_ScrollViewState_o *)this->fields.scrollView;
      LOBYTE(v21) = v14;
      if ( result )
      {
        result = (ExRoomMissionListViewManager_ScrollViewState_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)result,
                                                                     0);
        if ( result )
        {
          *(UnityEngine_Vector3_o *)((char *)&v21 + 4) = UnityEngine_Transform__get_localPosition(
                                                           (UnityEngine_Transform_o *)result,
                                                           0);
          result = (ExRoomMissionListViewManager_ScrollViewState_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
          if ( ((unsigned __int8)result & 1) != 0 )
            v15 = 0;
          else
            v15 = &v21;
          if ( ((unsigned __int8)result & 1) != 0 )
            v16 = (struct UnityEngine_Vector2_o *)&word_10;
          else
            v16 = &zeroVector;
          if ( ((unsigned __int8)result & 1) == 0 )
          {
            if ( !byte_5931820 )
            {
              result = (ExRoomMissionListViewManager_ScrollViewState_o *)sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
              byte_5931820 = 1;
            }
            static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
            p_y = (UnityEngine_Object_o *)&static_fields->zeroVector.fields.y;
            goto LABEL_28;
          }
          if ( mPanel )
          {
            v16 = &zeroVector;
            static_fields = (struct UnityEngine_Vector2_StaticFields *)((char *)&mPanel[13].fields.m_CachedPtr + 4);
            p_y = mPanel + 14;
            v15 = &v21;
LABEL_28:
            klass = (int)p_y->klass;
            v16->fields.x = static_fields->zeroVector.fields.x;
            *((_DWORD *)v15 + 5) = klass;
            goto LABEL_29;
          }
        }
      }
    }
    sub_21FFECC(result, v8);
  }
  v21 = 0u;
  zeroVector = 0;
  if ( !byte_5931940 )
  {
    result = (ExRoomMissionListViewManager_ScrollViewState_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v10 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v10->zeroVector.fields.z;
  *(_QWORD *)((char *)&v21 + 4) = *(_QWORD *)&v10->zeroVector.fields.x;
  *((float *)&v21 + 3) = z;
  if ( !byte_5931820 )
  {
    result = (ExRoomMissionListViewManager_ScrollViewState_o *)sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
  }
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
LABEL_29:
  v20 = zeroVector;
  *(_OWORD *)&retstr->fields.IsValid = v21;
  retstr->fields.ClipOffset = v20;
  return result;
}


void ExRoomMissionListViewManager__CreateMissionList(
        ExRoomMissionListViewManager_o *this,
        System_Collections_Generic_List_ExRoomMissionListViewItem__o *models,
        bool isSortDisable,
        const MethodInfo *method)
{
  int32_t v7; // w22
  System_Collections_Generic_Dictionary_int__int__o *Item; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *previousDisplayOrderList; // x8
  Il2CppObject *v11; // x23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w8
  struct System_Int32_array *buckets; // x8
  _QWORD *v20; // x9
  __int64 entries_low; // x10
  __int64 v22; // x8
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  ExRoomMissionListViewManager_ScrollViewState_o v25; // [xsp+0h] [xbp-B0h] BYREF
  ExRoomMissionListViewManager_ScrollViewState_o v26; // [xsp+20h] [xbp-90h] BYREF
  ExRoomMissionListViewManager_ScrollViewState_o v27; // [xsp+38h] [xbp-78h] BYREF
  int32_t value; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_5932E15 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListViewItem__get_Item__);
    byte_5932E15 = 1;
  }
  value = 0;
  memset(&v27, 0, sizeof(v27));
  if ( !isSortDisable )
  {
    memset(&v27, 0, sizeof(v27));
    if ( models )
      goto LABEL_5;
LABEL_27:
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    if ( isSortDisable )
    {
      v26 = v27;
      ExRoomMissionListViewManager__RestoreScrollViewState(this, &v26, v24);
    }
    MissionListViewManager__SetMode_54827140((MissionListViewManager_o *)this, 3, 0);
    return;
  }
  ExRoomMissionListViewManager__CaptureScrollViewState(&v27, this, (const MethodInfo *)models);
  if ( !models )
    goto LABEL_27;
LABEL_5:
  ListViewManager__CreateList((ListViewManager_o *)this, models->fields._size, 0);
  if ( models->fields._size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)models,
                                                                    v7,
                                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ExRoomMissionListViewItem__get_Item__);
      previousDisplayOrderList = this->fields.previousDisplayOrderList;
      v11 = (Il2CppObject *)Item;
      if ( isSortDisable )
      {
        if ( !Item || !previousDisplayOrderList )
          goto LABEL_30;
        if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
               this->fields.previousDisplayOrderList,
               HIDWORD(Item[2].fields._buckets),
               &value,
               (const MethodInfo_3F60DE4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
        {
          v18 = value;
        }
        else
        {
          Item = this->fields.previousDisplayOrderList;
          if ( !Item )
            goto LABEL_30;
          v18 = System_Collections_Generic_Dictionary_int__int___get_Count(
                  Item,
                  (const MethodInfo_3F5F114 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__)
              + v7;
        }
      }
      else
      {
        if ( !Item || !previousDisplayOrderList )
LABEL_30:
          sub_21FFECC(Item, v9);
        System_Collections_Generic_Dictionary_int__int___set_Item(
          this->fields.previousDisplayOrderList,
          HIDWORD(Item[2].fields._buckets),
          v7,
          (const MethodInfo_3F5F464 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        v18 = v7;
      }
      Item = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.itemList;
      LODWORD(v11[19].monitor) = v18;
      if ( !Item )
        goto LABEL_30;
      buckets = Item->fields._buckets;
      v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Item->fields._entries);
      if ( !buckets )
        goto LABEL_30;
      entries_low = SLODWORD(Item->fields._entries);
      if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v11,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = (__int64)buckets + 8 * entries_low;
        LODWORD(Item->fields._entries) = entries_low + 1;
        *(_QWORD *)(v22 + 32) = v11;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 32), (int32_t)v11, v12, v13, v14, v15, v16, v17);
      }
      ++v7;
    }
    while ( v7 < models->fields._size );
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  if ( isSortDisable )
  {
    v25 = v27;
    ExRoomMissionListViewManager__RestoreScrollViewState(this, &v25, v23);
  }
  MissionListViewManager__SetMode_54827140((MissionListViewManager_o *)this, 3, 0);
}


UnityEngine_Transform_o *ExRoomMissionListViewManager__GetRewardEffectParent(
        ExRoomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *actionPanel; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5932E14 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E14 = 1;
  }
  actionPanel = (UnityEngine_Object_o *)this->fields.actionPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(actionPanel, 0, 0) )
    return this->fields.instantiatingPOS;
  v7 = this->fields.actionPanel;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_GameObject__get_transform(v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomMissionListViewManager__Initialize(
        ExRoomMissionListViewManager_o *this,
        UnityEngine_GameObject_o *actionPanelObject,
        IExRoomMissionPresenter_o *presenter,
        int32_t questCount,
        System_Action_ExRoomServant_VoiceType__o *playMissionReceiveVoiceCallback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  struct IExRoomMissionPresenter_o *exRoomMissionPresenter; // x22
  System_Action_object__object__o *v21; // x23
  System_Action_T__o *v22; // x24
  IExRoomMissionPresenter_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  const MethodInfo *v27; // x3
  struct IExRoomMissionPresenter_o *v28; // x20
  IExRoomMissionPresenter_c *v29; // x8
  __int64 v30; // x9
  IExRoomMissionPresenter_c **v31; // x10
  __int64 v32; // x0
  ExRoomMissionListDisplayState_o *v33; // x1
  __int64 v34; // x0

  if ( (byte_5932E0E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_SeManager_SystemSeKind__TypeInfo);
    sub_21FFC50(&System_Action_ExRoomMissionRewardEffectState__Action__TypeInfo);
    sub_21FFC50(&Method_ExRoomMissionListViewManager_PlayReceiveRewardEffects__);
    sub_21FFC50(&Method_ExRoomMissionListViewManager_PlaySystemSe__);
    sub_21FFC50(&IExRoomMissionPresenter_TypeInfo);
    byte_5932E0E = 1;
  }
  this->fields.actionPanel = actionPanelObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.actionPanel,
    (int32_t)actionPanelObject,
    (System_String_o *)presenter,
    *(System_String_o **)&questCount,
    (int32_t)playMissionReceiveVoiceCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.exRoomMissionPresenter = presenter;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exRoomMissionPresenter,
    (int32_t)presenter,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  exRoomMissionPresenter = this->fields.exRoomMissionPresenter;
  if ( exRoomMissionPresenter )
  {
    v21 = (System_Action_object__object__o *)sub_21FFEBC(System_Action_ExRoomMissionRewardEffectState__Action__TypeInfo);
    System_Action_object__object____ctor(
      v21,
      (Il2CppObject *)this,
      Method_ExRoomMissionListViewManager_PlayReceiveRewardEffects__,
      0);
    v22 = (System_Action_T__o *)sub_21FFEBC(System_Action_SeManager_SystemSeKind__TypeInfo);
    System_Action_Int32Enum____ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_ExRoomMissionListViewManager_PlaySystemSe__,
      0);
    klass = exRoomMissionPresenter->klass;
    v24 = *(unsigned __int16 *)&exRoomMissionPresenter->klass->_2.rank;
    if ( *(_WORD *)&exRoomMissionPresenter->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IExRoomMissionPresenter_c **)p_offset - 1) != IExRoomMissionPresenter_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_8;
      }
      v26 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v26 = sub_2237E2C(exRoomMissionPresenter, IExRoomMissionPresenter_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct IExRoomMissionPresenter_o *, System_Action_object__object__o *, System_Action_T__o *, System_Action_ExRoomServant_VoiceType__o *, _QWORD))v26)(
      exRoomMissionPresenter,
      v21,
      v22,
      playMissionReceiveVoiceCallback,
      *(_QWORD *)(v26 + 8));
  }
  ExRoomMissionListViewManager__InitializeLayout(this, questCount, v19);
  v28 = this->fields.exRoomMissionPresenter;
  if ( v28 )
  {
    v29 = v28->klass;
    v30 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      v31 = (IExRoomMissionPresenter_c **)&v29->_1.interfaceOffsets->offset;
      while ( *(v31 - 1) != IExRoomMissionPresenter_TypeInfo )
      {
        --v30;
        v31 += 2;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 1];
    }
    else
    {
LABEL_16:
      v32 = sub_2237E2C(this->fields.exRoomMissionPresenter, IExRoomMissionPresenter_TypeInfo, 1);
    }
    v34 = (*(__int64 (__fastcall **)(struct IExRoomMissionPresenter_o *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
    v33 = (ExRoomMissionListDisplayState_o *)v34;
    if ( !this )
      sub_21FFECC(v34, v34);
  }
  else
  {
    v33 = 0;
  }
  ExRoomMissionListViewManager__Refresh(this, v33, 0, v27);
}


void ExRoomMissionListViewManager__InitializeLayout(
        ExRoomMissionListViewManager_o *this,
        int32_t questCount,
        const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  System_Object_array *v8; // x19
  unsigned int v9; // w23
  unsigned int v10; // w20
  Il2CppObject *v11; // x21
  Il2CppClass *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0

  if ( (byte_5932E0F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_IProfileLayout___);
    sub_21FFC50(&IProfileLayout_TypeInfo);
    byte_5932E0F = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_IProfileLayout___);
  if ( !ComponentsInChildren_object )
    goto LABEL_16;
  max_length = ComponentsInChildren_object->max_length;
  v8 = ComponentsInChildren_object;
  if ( max_length >= 1 )
  {
    v9 = 0;
    v10 = (questCount - 1) & ~((questCount - 1) >> 31);
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_21FFED4(ComponentsInChildren_object);
      v11 = v8->m_Items[v9];
      if ( !v11 )
        break;
      klass = v11->klass;
      v13 = *(unsigned __int16 *)&v11->klass->_2.rank;
      if ( *(_WORD *)&v11->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IProfileLayout_c **)p_offset - 1) != IProfileLayout_TypeInfo )
        {
          --v13;
          p_offset += 4;
          if ( !v13 )
            goto LABEL_12;
        }
        v15 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_12:
        v15 = sub_2237E2C(v11, IProfileLayout_TypeInfo, 0);
      }
      ComponentsInChildren_object = (System_Object_array *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v15)(
                                                             v11,
                                                             v10,
                                                             *(_QWORD *)(v15 + 8));
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_16:
    sub_21FFECC(ComponentsInChildren_object, v6);
  }
}


void ExRoomMissionListViewManager__OnChangeAlphaAnim(ExRoomMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_ExRoomMissionListViewObject__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x19
  int32_t v6; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x21

  if ( (byte_5932E18 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListViewObject__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E18 = 1;
  }
  ObjectList = ExRoomMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
LABEL_13:
    sub_21FFECC(ObjectList, v4);
  v5 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v6 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v5,
               v6,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ExRoomMissionListViewObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      ObjectList = (System_Collections_Generic_List_ExRoomMissionListViewObject__o *)UnityEngine_Object__op_Equality(
                                                                                       (UnityEngine_Object_o *)Item,
                                                                                       0,
                                                                                       0);
      if ( ((unsigned __int8)ObjectList & 1) == 0 )
      {
        if ( !Item )
          goto LABEL_13;
        ExRoomMissionListViewObject__OnChangeAlphaAnim((ExRoomMissionListViewObject_o *)Item, v4);
      }
      ++v6;
    }
    while ( v6 < v5->fields._size );
  }
}


void ExRoomMissionListViewManager__OnClickFilter(ExRoomMissionListViewManager_o *this, const MethodInfo *method)
{
  struct IExRoomMissionPresenter_o *exRoomMissionPresenter; // x19
  System_Action_object__o *v4; // x20
  IExRoomMissionPresenter_c *klass; // x8
  __int64 v6; // x9
  IExRoomMissionPresenter_c **p_offset; // x10
  __int64 v8; // x0

  if ( (byte_5932E11 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ExRoomMissionListDisplayState__TypeInfo);
    sub_21FFC50(&Method_ExRoomMissionListViewManager__OnClickFilter_b__15_0__);
    sub_21FFC50(&IExRoomMissionPresenter_TypeInfo);
    byte_5932E11 = 1;
  }
  exRoomMissionPresenter = this->fields.exRoomMissionPresenter;
  if ( exRoomMissionPresenter && !this->fields.isProcessing )
  {
    v4 = (System_Action_object__o *)sub_21FFEBC(System_Action_ExRoomMissionListDisplayState__TypeInfo);
    System_Action_object____ctor(
      v4,
      (Il2CppObject *)this,
      Method_ExRoomMissionListViewManager__OnClickFilter_b__15_0__,
      0);
    klass = exRoomMissionPresenter->klass;
    v6 = *(unsigned __int16 *)&exRoomMissionPresenter->klass->_2.rank;
    if ( *(_WORD *)&exRoomMissionPresenter->klass->_2.rank )
    {
      p_offset = (IExRoomMissionPresenter_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IExRoomMissionPresenter_TypeInfo )
      {
        --v6;
        p_offset += 2;
        if ( !v6 )
          goto LABEL_10;
      }
      v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_10:
      v8 = sub_2237E2C(exRoomMissionPresenter, IExRoomMissionPresenter_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct IExRoomMissionPresenter_o *, System_Action_object__o *, _QWORD))v8)(
      exRoomMissionPresenter,
      v4,
      *(_QWORD *)(v8 + 8));
  }
}


void ExRoomMissionListViewManager__OnClickListView(
        ExRoomMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 naturalAligment; // x10
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  ExRoomMissionListViewItem_o *Item; // x0
  struct IExRoomMissionPresenter_o *exRoomMissionPresenter; // x21
  ExRoomMissionListViewItem_o *v10; // x20
  System_Action_object__o *v11; // x22
  System_Action_o *v12; // x23
  IExRoomMissionPresenter_c *klass; // x8
  __int64 v14; // x9
  IExRoomMissionPresenter_c **p_offset; // x10
  __int64 v16; // x0

  v3 = (UnityEngine_Object_o *)obj;
  if ( (byte_5932E16 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ExRoomMissionListDisplayState__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ExRoomMissionListViewManager__OnClickListView_b__21_0__);
    sub_21FFC50(&Method_ExRoomMissionListViewManager__OnClickListView_b__21_1__);
    sub_21FFC50(&ExRoomMissionListViewObject_TypeInfo);
    sub_21FFC50(&IExRoomMissionPresenter_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E16 = 1;
  }
  if ( !this->fields.isProcessing )
  {
    if ( v3 )
    {
      naturalAligment = ExRoomMissionListViewObject_TypeInfo->_2.naturalAligment;
      if ( v3->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ExRoomMissionListViewObject_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != ExRoomMissionListViewObject_TypeInfo )
          v3 = 0;
      }
      else
      {
        v3 = 0;
      }
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
    v6 = UnityEngine_Object__op_Equality(v3, 0, 0);
    if ( !v6 )
    {
      if ( !v3 )
        sub_21FFECC(v6, v7);
      Item = ExRoomMissionListViewObject__GetItem((ExRoomMissionListViewObject_o *)v3, v7);
      if ( Item )
      {
        exRoomMissionPresenter = this->fields.exRoomMissionPresenter;
        if ( exRoomMissionPresenter )
        {
          v10 = Item;
          this->fields.isProcessing = 1;
          v11 = (System_Action_object__o *)sub_21FFEBC(System_Action_ExRoomMissionListDisplayState__TypeInfo);
          System_Action_object____ctor(
            v11,
            (Il2CppObject *)this,
            Method_ExRoomMissionListViewManager__OnClickListView_b__21_0__,
            0);
          v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v12,
            (Il2CppObject *)this,
            Method_ExRoomMissionListViewManager__OnClickListView_b__21_1__,
            0);
          klass = exRoomMissionPresenter->klass;
          v14 = *(unsigned __int16 *)&exRoomMissionPresenter->klass->_2.rank;
          if ( *(_WORD *)&exRoomMissionPresenter->klass->_2.rank )
          {
            p_offset = (IExRoomMissionPresenter_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != IExRoomMissionPresenter_TypeInfo )
            {
              --v14;
              p_offset += 2;
              if ( !v14 )
                goto LABEL_19;
            }
            v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
          }
          else
          {
LABEL_19:
            v16 = sub_2237E2C(exRoomMissionPresenter, IExRoomMissionPresenter_TypeInfo, 3);
          }
          (*(void (__fastcall **)(struct IExRoomMissionPresenter_o *, ExRoomMissionListViewItem_o *, System_Action_object__o *, System_Action_o *, _QWORD))v16)(
            exRoomMissionPresenter,
            v10,
            v11,
            v12,
            *(_QWORD *)(v16 + 8));
        }
      }
    }
  }
}


void ExRoomMissionListViewManager__OnClickReceiveAll(ExRoomMissionListViewManager_o *this, const MethodInfo *method)
{
  struct IExRoomMissionPresenter_o *exRoomMissionPresenter; // x19
  System_Action_object__o *v4; // x20
  System_Action_o *v5; // x22
  IExRoomMissionPresenter_c *klass; // x8
  __int64 v7; // x9
  IExRoomMissionPresenter_c **p_offset; // x10
  __int64 v9; // x0

  if ( (byte_5932E12 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ExRoomMissionListDisplayState__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ExRoomMissionListViewManager__OnClickReceiveAll_b__16_0__);
    sub_21FFC50(&Method_ExRoomMissionListViewManager__OnClickReceiveAll_b__16_1__);
    sub_21FFC50(&IExRoomMissionPresenter_TypeInfo);
    byte_5932E12 = 1;
  }
  exRoomMissionPresenter = this->fields.exRoomMissionPresenter;
  if ( exRoomMissionPresenter && !this->fields.isProcessing )
  {
    this->fields.isProcessing = 1;
    v4 = (System_Action_object__o *)sub_21FFEBC(System_Action_ExRoomMissionListDisplayState__TypeInfo);
    System_Action_object____ctor(
      v4,
      (Il2CppObject *)this,
      Method_ExRoomMissionListViewManager__OnClickReceiveAll_b__16_0__,
      0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ExRoomMissionListViewManager__OnClickReceiveAll_b__16_1__, 0);
    klass = exRoomMissionPresenter->klass;
    v7 = *(unsigned __int16 *)&exRoomMissionPresenter->klass->_2.rank;
    if ( *(_WORD *)&exRoomMissionPresenter->klass->_2.rank )
    {
      p_offset = (IExRoomMissionPresenter_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IExRoomMissionPresenter_TypeInfo )
      {
        --v7;
        p_offset += 2;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
    }
    else
    {
LABEL_10:
      v9 = sub_2237E2C(exRoomMissionPresenter, IExRoomMissionPresenter_TypeInfo, 4);
    }
    (*(void (__fastcall **)(struct IExRoomMissionPresenter_o *, System_Action_object__o *, System_Action_o *, _QWORD))v9)(
      exRoomMissionPresenter,
      v4,
      v5,
      *(_QWORD *)(v9 + 8));
  }
}


void ExRoomMissionListViewManager__PlayReceiveRewardEffects(
        ExRoomMissionListViewManager_o *this,
        ExRoomMissionRewardEffectState_o *rewardEffectState,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct GetSvts_array *GetSvts_k__BackingField; // x1
  struct GetCommandCodes_array *GetCommandCodes_k__BackingField; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  GiftEntity_array *RewardGifts_k__BackingField; // x21
  System_Action_o *v22; // x22

  if ( (byte_5932E13 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call__);
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5932E13 = 1;
  }
  if ( rewardEffectState && ExRoomMissionRewardEffectState__get_HasRewardEffects(rewardEffectState, 0) )
  {
    GetSvts_k__BackingField = rewardEffectState->fields._GetSvts_k__BackingField;
    this->fields.getSvtList = GetSvts_k__BackingField;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.getSvtList,
      (int32_t)GetSvts_k__BackingField,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    GetCommandCodes_k__BackingField = rewardEffectState->fields._GetCommandCodes_k__BackingField;
    this->fields.getCommandCodeList = GetCommandCodes_k__BackingField;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.getCommandCodeList,
      (int32_t)GetCommandCodes_k__BackingField,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    RewardGifts_k__BackingField = rewardEffectState->fields._RewardGifts_k__BackingField;
    v22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)onCompleted, Method_ActionExtensions_Call__, 0);
    MissionListViewManager__StartItemGetEffectAction(
      (MissionListViewManager_o *)this,
      RewardGifts_k__BackingField,
      0,
      v22,
      0);
  }
  else
  {
    ActionExtensions__Call(onCompleted, 0);
  }
}


void ExRoomMissionListViewManager__PlaySystemSe(
        ExRoomMissionListViewManager_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_5932E10 & 1) == 0 )
  {
    sub_21FFC50(&Method_ExRoomMissionListViewManager_PlaySystemSe__);
    byte_5932E10 = 1;
  }
  v4 = Method_ExRoomMissionListViewManager_PlaySystemSe__;
  if ( (*((_BYTE *)Method_ExRoomMissionListViewManager_PlaySystemSe__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_ExRoomMissionListViewManager_PlaySystemSe__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, seKind, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomMissionListViewManager__Refresh(
        ExRoomMissionListViewManager_o *this,
        ExRoomMissionListDisplayState_o *displayState,
        bool isSortDisable,
        const MethodInfo *method)
{
  __int64 v7; // x0
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_ExRoomMissionListViewItem__o *DisplayModels_k__BackingField; // x1

  ExRoomMissionListViewManager__UpdateHeader(this, displayState, (const MethodInfo *)isSortDisable);
  if ( !displayState )
  {
    DisplayModels_k__BackingField = 0;
    if ( this )
      goto LABEL_3;
LABEL_5:
    sub_21FFECC(v7, DisplayModels_k__BackingField);
  }
  DisplayModels_k__BackingField = displayState->fields._DisplayModels_k__BackingField;
  if ( !this )
    goto LABEL_5;
LABEL_3:
  ExRoomMissionListViewManager__CreateMissionList(this, DisplayModels_k__BackingField, isSortDisable, v8);
}


void ExRoomMissionListViewManager__RestoreScrollViewState(
        ExRoomMissionListViewManager_o *this,
        ExRoomMissionListViewManager_ScrollViewState_o *state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 transform; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UIScrollView_o *v9; // x8
  UnityEngine_Object_o *mPanel; // x21
  UIScrollView_o *v11; // x22

  if ( (byte_5932E1A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E1A = 1;
  }
  if ( state->fields.IsValid )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, state, method);
    transform = UnityEngine_Object__op_Equality(scrollView, 0, 0);
    if ( (transform & 1) == 0 )
    {
      v9 = this->fields.scrollView;
      if ( v9 )
      {
        mPanel = (UnityEngine_Object_o *)v9->fields.mPanel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
        if ( UnityEngine_Object__op_Equality(mPanel, 0, 0) )
          return;
        transform = (__int64)this->fields.scrollView;
        if ( transform )
        {
          UIScrollView__DisableSpring((UIScrollView_o *)transform, 0);
          v11 = this->fields.scrollView;
          if ( !byte_5931940 )
          {
            transform = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931940 = 1;
          }
          if ( v11 )
          {
            UIScrollView__set_currentMomentum(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            if ( mPanel )
            {
              UIPanel__set_clipOffset((UIPanel_o *)mPanel, state->fields.ClipOffset, 0);
              transform = (__int64)this->fields.scrollView;
              if ( transform )
              {
                transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
                if ( transform )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)transform,
                    state->fields.LocalPosition,
                    0);
                  ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0);
                  return;
                }
              }
            }
          }
        }
      }
      sub_21FFECC(transform, v7);
    }
  }
}


void ExRoomMissionListViewManager__SetProcessing(
        ExRoomMissionListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isProcessing = value;
}


// local variable allocation has failed, the output may be wrong!
void ExRoomMissionListViewManager__UpdateHeader(
        ExRoomMissionListViewManager_o *this,
        ExRoomMissionListDisplayState_o *state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *filterLabelSprite; // x21
  __int64 v8; // x1
  UICommonButton_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *receiveAllButton; // x21
  __int64 v13; // x2
  UnityEngine_Object_o *receiveAllLabelSprite; // x21
  float v15; // s0 OVERLAPPED
  float v16; // s3
  float v17; // s1
  float v18; // s2

  if ( (byte_5932E17 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E17 = 1;
  }
  if ( state )
  {
    UISpriteHelper__SetSpriteName(
      this->fields.filterLabelSprite,
      state->fields._FilterLabelSpriteName_k__BackingField,
      0);
    filterLabelSprite = (UnityEngine_Object_o *)this->fields.filterLabelSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(filterLabelSprite, 0, 0) )
    {
      v9 = (UICommonButton_o *)this->fields.filterLabelSprite;
      if ( !v9 )
        goto LABEL_22;
      (*(void (__fastcall **)(UICommonButton_o *, _QWORD))&v9->klass[1]._2.element_size)(
        v9,
        *(_QWORD *)&v9->klass[1]._2.static_fields_size);
    }
    UILabelHelper__SetTextSafely(
      this->fields.missionCountLabel,
      state->fields._MissionCountLabelText_k__BackingField,
      0);
    receiveAllButton = (UnityEngine_Object_o *)this->fields.receiveAllButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    if ( UnityEngine_Object__op_Inequality(receiveAllButton, 0, 0) )
    {
      v9 = this->fields.receiveAllButton;
      if ( !v9 )
        goto LABEL_22;
      UICommonButton__SetEnable(v9, state->fields._CanReceiveAll_k__BackingField, 0);
    }
    receiveAllLabelSprite = (UnityEngine_Object_o *)this->fields.receiveAllLabelSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v13);
    if ( UnityEngine_Object__op_Inequality(receiveAllLabelSprite, 0, 0) )
    {
      v9 = (UICommonButton_o *)this->fields.receiveAllLabelSprite;
      if ( v9 )
      {
        v15 = 1.0;
        v16 = 1.0;
        if ( !state->fields._CanReceiveAll_k__BackingField )
          v15 = 0.5;
        v17 = v15;
        v18 = v15;
        UIWidget__set_color((UIWidget_o *)v9, *(UnityEngine_Color_o *)&v15, 0);
        return;
      }
LABEL_22:
      sub_21FFECC(v9, v8);
    }
  }
}


void ExRoomMissionListViewManager___OnClickFilter_b__15_0(
        ExRoomMissionListViewManager_o *this,
        ExRoomMissionListDisplayState_o *displayState,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ExRoomMissionListViewManager__Refresh(this, displayState, 0, v3);
}


void ExRoomMissionListViewManager___OnClickListView_b__21_0(
        ExRoomMissionListViewManager_o *this,
        ExRoomMissionListDisplayState_o *inDisplayState,
        const MethodInfo *method)
{
  ExRoomMissionListViewManager_o *v3; // x19
  struct IExRoomMissionPresenter_o *exRoomMissionPresenter; // x20
  IExRoomMissionPresenter_c *klass; // x8
  __int64 v6; // x9
  IExRoomMissionPresenter_c **p_offset; // x10
  __int64 v8; // x0
  ExRoomMissionListDisplayState_o *v9; // x0
  const MethodInfo *v10; // x3

  v3 = this;
  if ( (byte_5932E1D & 1) == 0 )
  {
    this = (ExRoomMissionListViewManager_o *)sub_21FFC50(&IExRoomMissionPresenter_TypeInfo);
    byte_5932E1D = 1;
  }
  exRoomMissionPresenter = v3->fields.exRoomMissionPresenter;
  if ( !exRoomMissionPresenter )
    sub_21FFECC(this, inDisplayState);
  klass = exRoomMissionPresenter->klass;
  v6 = *(unsigned __int16 *)&exRoomMissionPresenter->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionPresenter->klass->_2.rank )
  {
    p_offset = (IExRoomMissionPresenter_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionPresenter_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
  }
  else
  {
LABEL_8:
    v8 = sub_2237E2C(v3->fields.exRoomMissionPresenter, IExRoomMissionPresenter_TypeInfo, 5);
  }
  v9 = (ExRoomMissionListDisplayState_o *)(*(__int64 (__fastcall **)(struct IExRoomMissionPresenter_o *, _QWORD))v8)(
                                            exRoomMissionPresenter,
                                            *(_QWORD *)(v8 + 8));
  ExRoomMissionListViewManager__Refresh(v3, v9, 1, v10);
  v3->fields.isProcessing = 0;
}


void ExRoomMissionListViewManager___OnClickListView_b__21_1(
        ExRoomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.isProcessing = 0;
}


void ExRoomMissionListViewManager___OnClickReceiveAll_b__16_0(
        ExRoomMissionListViewManager_o *this,
        ExRoomMissionListDisplayState_o *inDisplayState,
        const MethodInfo *method)
{
  ExRoomMissionListViewManager_o *v3; // x19
  struct IExRoomMissionPresenter_o *exRoomMissionPresenter; // x20
  IExRoomMissionPresenter_c *klass; // x8
  __int64 v6; // x9
  IExRoomMissionPresenter_c **p_offset; // x10
  __int64 v8; // x0
  ExRoomMissionListDisplayState_o *v9; // x0
  const MethodInfo *v10; // x3

  v3 = this;
  if ( (byte_5932E1C & 1) == 0 )
  {
    this = (ExRoomMissionListViewManager_o *)sub_21FFC50(&IExRoomMissionPresenter_TypeInfo);
    byte_5932E1C = 1;
  }
  exRoomMissionPresenter = v3->fields.exRoomMissionPresenter;
  if ( !exRoomMissionPresenter )
    sub_21FFECC(this, inDisplayState);
  klass = exRoomMissionPresenter->klass;
  v6 = *(unsigned __int16 *)&exRoomMissionPresenter->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionPresenter->klass->_2.rank )
  {
    p_offset = (IExRoomMissionPresenter_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionPresenter_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
  }
  else
  {
LABEL_8:
    v8 = sub_2237E2C(v3->fields.exRoomMissionPresenter, IExRoomMissionPresenter_TypeInfo, 5);
  }
  v9 = (ExRoomMissionListDisplayState_o *)(*(__int64 (__fastcall **)(struct IExRoomMissionPresenter_o *, _QWORD))v8)(
                                            exRoomMissionPresenter,
                                            *(_QWORD *)(v8 + 8));
  ExRoomMissionListViewManager__Refresh(v3, v9, 1, v10);
  v3->fields.isProcessing = 0;
}


void ExRoomMissionListViewManager___OnClickReceiveAll_b__16_1(
        ExRoomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.isProcessing = 0;
}


System_Collections_Generic_List_ExRoomMissionListViewObject__o *ExRoomMissionListViewManager__get_ObjectList(
        ExRoomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_5932E0D & 1) == 0 )
  {
    sub_21FFC50(&Method_MissionListViewManager_GetObjectList_ExRoomMissionListViewObject___);
    byte_5932E0D = 1;
  }
  return (System_Collections_Generic_List_ExRoomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_38BB334 *)Method_MissionListViewManager_GetObjectList_ExRoomMissionListViewObject___);
}