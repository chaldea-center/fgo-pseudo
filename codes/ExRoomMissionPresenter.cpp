void ExRoomMissionPresenter___ctor(
        ExRoomMissionPresenter_o *this,
        IExRoomMissionController_o *controller,
        IExRoomMissionDialogPort_o *dialogPort,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.exRoomMissionController = controller;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)controller, v7, v8, v9, v10, v11, v12);
  this->fields.exRoomMissionDialogPort = dialogPort;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exRoomMissionDialogPort,
    (int32_t)dialogPort,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


// local variable allocation has failed, the output may be wrong!
ExRoomMissionListDisplayState_o *ExRoomMissionPresenter__BuildDisplayState(
        ExRoomMissionPresenter_o *this,
        int32_t filter,
        const MethodInfo *method)
{
  ExRoomMissionPresenter_o *v4; // x20
  struct IExRoomMissionController_o *exRoomMissionController; // x21
  IExRoomMissionController_c *klass; // x8
  __int64 v7; // x9
  IExRoomMissionController_c **p_offset; // x10
  __int64 v9; // x0
  ExRoomMissionPresenter_o *v10; // x0
  const MethodInfo *v11; // x2
  struct IExRoomMissionController_o *v12; // x21
  IExRoomMissionController_c *v13; // x8
  ExRoomMissionPresenter_o *v14; // x20
  __int64 v15; // x9
  IExRoomMissionController_c **v16; // x10
  __int64 v17; // x0
  ExRoomMissionPresenter_o *v18; // x0
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_ExRoomMissionListViewItem__o *v20; // x21
  ExRoomMissionListDisplayState_o *v21; // x22
  const MethodInfo *v22; // x4

  v4 = this;
  if ( (byte_596AED6 & 1) == 0 )
  {
    sub_2213A60(&ExRoomMissionListDisplayState_TypeInfo);
    this = (ExRoomMissionPresenter_o *)sub_2213A60(&IExRoomMissionController_TypeInfo);
    byte_596AED6 = 1;
  }
  exRoomMissionController = v4->fields.exRoomMissionController;
  if ( !exRoomMissionController )
    goto LABEL_18;
  klass = exRoomMissionController->klass;
  v7 = *(unsigned __int16 *)&exRoomMissionController->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionController->klass->_2.rank )
  {
    p_offset = (IExRoomMissionController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionController_TypeInfo )
    {
      --v7;
      p_offset += 2;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_8:
    v9 = sub_224BC3C(v4->fields.exRoomMissionController, IExRoomMissionController_TypeInfo, 1);
  }
  v10 = (ExRoomMissionPresenter_o *)(*(__int64 (__fastcall **)(struct IExRoomMissionController_o *, _QWORD, _QWORD))v9)(
                                      exRoomMissionController,
                                      (unsigned int)filter,
                                      *(_QWORD *)(v9 + 8));
  this = (ExRoomMissionPresenter_o *)ExRoomMissionPresenter__BuildViewItems(
                                       v10,
                                       (System_Collections_Generic_List_ExRoomMissionListOutput__o *)v10,
                                       v11);
  v12 = v4->fields.exRoomMissionController;
  if ( !v12 )
LABEL_18:
    sub_2213CDC(this, *(_QWORD *)&filter);
  v13 = v12->klass;
  v14 = this;
  v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    v16 = (IExRoomMissionController_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v16 - 1) != IExRoomMissionController_TypeInfo )
    {
      --v15;
      v16 += 2;
      if ( !v15 )
        goto LABEL_15;
    }
    v17 = (__int64)&v13->vtable[*(_DWORD *)v16 + 1];
  }
  else
  {
LABEL_15:
    v17 = sub_224BC3C(v12, IExRoomMissionController_TypeInfo, 1);
  }
  v18 = (ExRoomMissionPresenter_o *)(*(__int64 (__fastcall **)(struct IExRoomMissionController_o *, _QWORD, _QWORD))v17)(
                                      v12,
                                      0,
                                      *(_QWORD *)(v17 + 8));
  v20 = ExRoomMissionPresenter__BuildViewItems(
          v18,
          (System_Collections_Generic_List_ExRoomMissionListOutput__o *)v18,
          v19);
  v21 = (ExRoomMissionListDisplayState_o *)sub_2213CCC(ExRoomMissionListDisplayState_TypeInfo);
  ExRoomMissionListDisplayState___ctor(
    v21,
    (System_Collections_Generic_List_ExRoomMissionListViewItem__o *)v14,
    v20,
    filter,
    v22);
  return v21;
}


System_Collections_Generic_List_ExRoomMissionRewardEffectState__o *ExRoomMissionPresenter__BuildRewardEffectStates(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionReceiveOutput_o *result,
        const MethodInfo *method)
{
  struct System_Int32_array *ReceivedMissionIds_k__BackingField; // x1
  System_Collections_Generic_List_object__o *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_List_object__o *v8; // x22
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x1
  int32_t i; // w23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppClass *klass; // x25
  Il2CppObject *v19; // x24
  EventMissionEntity_o *v20; // x26
  GetSvts_array *GetSvts_k__BackingField; // x20
  ExRoomMissionRewardEffectState_o *v22; // x24
  const MethodInfo *v23; // x5
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  unsigned __int64 v34; // x26
  unsigned __int64 namespaze_low; // x8
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  GiftEntity_array *v40; // x23
  GetSvts_array *v41; // x21
  GetCommandCodes_array *GetCommandCodes_k__BackingField; // x22
  ExRoomMissionRewardEffectState_o *v43; // x20
  const MethodInfo *v44; // x5
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  int v56; // w8
  int32_t v57; // w20
  GetCommandCodes_array *getCommandCodes; // [xsp+8h] [xbp-68h]

  if ( (byte_596AECC & 1) == 0 )
  {
    sub_2213A60(&ExRoomMissionRewardEffectState_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ExRoomMissionRewardEffectState__TypeInfo);
    byte_596AECC = 1;
  }
  if ( !result )
    return 0;
  ReceivedMissionIds_k__BackingField = result->fields._ReceivedMissionIds_k__BackingField;
  if ( !ReceivedMissionIds_k__BackingField || !ReceivedMissionIds_k__BackingField->max_length )
    return 0;
  v6 = (System_Collections_Generic_List_object__o *)ExRoomMissionPresenter__PickMissionsById(
                                                      this,
                                                      ReceivedMissionIds_k__BackingField,
                                                      method);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ExRoomMissionRewardEffectState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState___ctor__);
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( v6 && v6->fields._size >= 1 )
  {
    for ( i = 0; i < v6->fields._size; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v6,
               i,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
      if ( Item )
      {
        klass = Item[3].klass;
        v19 = Item;
        if ( klass )
        {
          if ( klass->_1.namespaze )
          {
            v20 = (EventMissionEntity_o *)Item[1].klass;
            if ( v20 && v20->fields.giftIconId > 0 )
            {
              GetSvts_k__BackingField = result->fields._GetSvts_k__BackingField;
              getCommandCodes = result->fields._GetCommandCodes_k__BackingField;
              v22 = (ExRoomMissionRewardEffectState_o *)sub_2213CCC(ExRoomMissionRewardEffectState_TypeInfo);
              ExRoomMissionRewardEffectState___ctor(
                v22,
                (GiftEntity_array *)klass,
                v20,
                GetSvts_k__BackingField,
                getCommandCodes,
                v23);
              if ( !v7 )
                goto LABEL_38;
              items = v7->fields._items;
              v31 = Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState__Add__;
              ++v7->fields._version;
              if ( !items )
                goto LABEL_38;
              size = v7->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v7,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = &items->obj.klass + size;
                v7->fields._size = size + 1;
                v33[4] = (Il2CppClass *)v22;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v22, v24, v25, v26, v27, v28, v29);
              }
            }
            else
            {
              v34 = 0;
              while ( 1 )
              {
                namespaze_low = LODWORD(klass->_1.namespaze);
                if ( (__int64)v34 >= (int)namespaze_low )
                  break;
                if ( v34 >= namespaze_low )
                  sub_2213CE4(Item);
                if ( v8 )
                {
                  v36 = v8->fields._items;
                  v10 = (Il2CppObject *)*((_QWORD *)&klass->_1.byval_arg.data + v34);
                  v37 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                  ++v8->fields._version;
                  if ( v36 )
                  {
                    v38 = v8->fields._size;
                    if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v8,
                        v10,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v39 = &v36->obj.klass + v38;
                      v8->fields._size = v38 + 1;
                      v39[4] = (Il2CppClass *)v10;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v39 + 4),
                        (int32_t)v10,
                        v12,
                        v13,
                        v14,
                        v15,
                        v16,
                        v17);
                    }
                    klass = v19[3].klass;
                    ++v34;
                    if ( klass )
                      continue;
                  }
                }
                goto LABEL_38;
              }
            }
          }
        }
      }
    }
  }
  if ( !v8 )
LABEL_38:
    sub_2213CDC(Item, v10);
  if ( v8->fields._size < 1 )
  {
    if ( !v7 )
      goto LABEL_38;
  }
  else
  {
    v40 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v8,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v41 = result->fields._GetSvts_k__BackingField;
    GetCommandCodes_k__BackingField = result->fields._GetCommandCodes_k__BackingField;
    v43 = (ExRoomMissionRewardEffectState_o *)sub_2213CCC(ExRoomMissionRewardEffectState_TypeInfo);
    ExRoomMissionRewardEffectState___ctor(v43, v40, 0, v41, GetCommandCodes_k__BackingField, v44);
    if ( !v7 )
      goto LABEL_38;
    v51 = v7->fields._items;
    v52 = Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState__Add__;
    ++v7->fields._version;
    if ( !v51 )
      goto LABEL_38;
    v53 = v7->fields._size;
    if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        (Il2CppObject *)v43,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    }
    else
    {
      v54 = &v51->obj.klass + v53;
      v7->fields._size = v53 + 1;
      v54[4] = (Il2CppClass *)v43;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 4), (int32_t)v43, v45, v46, v47, v48, v49, v50);
    }
  }
  v56 = v7->fields._size;
  if ( v56 - 1 >= 1 )
  {
    v57 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v7,
               v57,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState__get_Item__);
      if ( !Item )
        goto LABEL_38;
      v56 = v7->fields._size;
      ++v57;
      LOBYTE(Item[3].klass) = 1;
    }
    while ( v57 < v56 - 1 );
  }
  if ( v56 <= 0 )
    return 0;
  else
    return (System_Collections_Generic_List_ExRoomMissionRewardEffectState__o *)v7;
}


System_Collections_Generic_List_ExRoomMissionListViewItem__o *ExRoomMissionPresenter__BuildViewItems(
        ExRoomMissionPresenter_o *this,
        System_Collections_Generic_List_ExRoomMissionListOutput__o *outputs,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w21
  Il2CppObject *Item; // x23
  ExRoomMissionListViewItem_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_596AED5 & 1) == 0 )
  {
    sub_2213A60(&ExRoomMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListViewItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ExRoomMissionListViewItem__TypeInfo);
    byte_596AED5 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ExRoomMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ExRoomMissionListViewItem___ctor__);
  if ( outputs && outputs->fields._size >= 1 )
  {
    v5 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)outputs,
               v5,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
      v7 = (ExRoomMissionListViewItem_o *)sub_2213CCC(ExRoomMissionListViewItem_TypeInfo);
      ExRoomMissionListViewItem___ctor(v7, (ExRoomMissionListOutput_o *)Item, 0);
      if ( !v7
        || (v7->fields.displayOrder = v5, !v4)
        || (items = v4->fields._items,
            v17 = Method_System_Collections_Generic_List_ExRoomMissionListViewItem__Add__,
            ++v4->fields._version,
            !items) )
      {
        sub_2213CDC(v8, v9);
      }
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v7,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v7;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v7, v10, v11, v12, v13, v14, v15);
      }
      ++v5;
    }
    while ( v5 < outputs->fields._size );
  }
  return (System_Collections_Generic_List_ExRoomMissionListViewItem__o *)v4;
}


ExRoomMissionListOutput_o *ExRoomMissionPresenter__CreateMissionFromItem(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionListViewItem_o *item,
        const MethodInfo *method)
{
  EventMissionEntity_o *EventMissionEntity; // x21
  int32_t progStatus; // w20
  const MethodInfo *v7; // [xsp+8h] [xbp-28h]

  if ( (byte_596AED4 & 1) == 0 )
  {
    sub_2213A60(&ExRoomMissionListOutput_TypeInfo);
    byte_596AED4 = 1;
  }
  if ( item )
  {
    if ( MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0) )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0);
      progStatus = item->fields.progStatus;
      item = (ExRoomMissionListViewItem_o *)sub_2213CCC(ExRoomMissionListOutput_TypeInfo);
      ExRoomMissionListOutput___ctor(
        (ExRoomMissionListOutput_o *)item,
        EventMissionEntity,
        0,
        0,
        progStatus,
        0,
        0,
        0,
        0,
        v7);
    }
    else
    {
      return 0;
    }
  }
  return (ExRoomMissionListOutput_o *)item;
}


// local variable allocation has failed, the output may be wrong!
ExRoomMissionListOutput_o *ExRoomMissionPresenter__FindMissionById(
        ExRoomMissionPresenter_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  ExRoomMissionPresenter_o *v4; // x20
  struct IExRoomMissionController_o *exRoomMissionController; // x20
  IExRoomMissionController_c *klass; // x8
  __int64 v7; // x9
  IExRoomMissionController_c **p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w21
  struct IExRoomMissionController_o *v12; // x8

  v4 = this;
  if ( (byte_596AED3 & 1) == 0 )
  {
    sub_2213A60(&IExRoomMissionController_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    this = (ExRoomMissionPresenter_o *)sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    byte_596AED3 = 1;
  }
  exRoomMissionController = v4->fields.exRoomMissionController;
  if ( !exRoomMissionController )
    goto LABEL_22;
  klass = exRoomMissionController->klass;
  v7 = *(unsigned __int16 *)&exRoomMissionController->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionController->klass->_2.rank )
  {
    p_offset = (IExRoomMissionController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionController_TypeInfo )
    {
      --v7;
      p_offset += 2;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_8:
    v9 = sub_224BC3C(exRoomMissionController, IExRoomMissionController_TypeInfo, 1);
  }
  this = (ExRoomMissionPresenter_o *)(*(__int64 (__fastcall **)(struct IExRoomMissionController_o *, _QWORD, _QWORD))v9)(
                                       exRoomMissionController,
                                       0,
                                       *(_QWORD *)(v9 + 8));
  if ( !this )
LABEL_22:
    sub_2213CDC(this, *(_QWORD *)&missionId);
  v10 = (System_Collections_Generic_List_object__o *)this;
  if ( SLODWORD(this->fields.exRoomMissionDialogPort) < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( System_Collections_Generic_List_object___get_Item(
           v10,
           v11,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__) )
    {
      this = (ExRoomMissionPresenter_o *)System_Collections_Generic_List_object___get_Item(
                                           v10,
                                           v11,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
      if ( !this )
        goto LABEL_22;
      if ( this->fields.exRoomMissionController )
      {
        this = (ExRoomMissionPresenter_o *)System_Collections_Generic_List_object___get_Item(
                                             v10,
                                             v11,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
        if ( !this )
          goto LABEL_22;
        v12 = this->fields.exRoomMissionController;
        if ( !v12 )
          goto LABEL_22;
        if ( LODWORD(v12[1].klass) == missionId )
          return (ExRoomMissionListOutput_o *)System_Collections_Generic_List_object___get_Item(
                                                v10,
                                                v11,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
      }
    }
    if ( ++v11 >= v10->fields._size )
      return 0;
  }
}


void ExRoomMissionPresenter__HandleReceiveResult(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionReceiveOutput_o *result,
        System_Action_Action__o *openResultDialog,
        System_Action_ExRoomMissionListDisplayState__o *onDisplayUpdated,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  ExRoomMissionReceiveOutput_o *v36; // x20
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x3

  if ( (byte_596AEC9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExRoomMissionPresenter___c__DisplayClass15_0__HandleReceiveResult_b__0__);
    sub_2213A60(&ExRoomMissionPresenter___c__DisplayClass15_0_TypeInfo);
    byte_596AEC9 = 1;
  }
  v9 = sub_2213CCC(ExRoomMissionPresenter___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = openResultDialog;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)openResultDialog, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = result;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)result, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v9 + 40) = onDisplayUpdated;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)onDisplayUpdated, v30, v31, v32, v33, v34, v35);
  v36 = *(ExRoomMissionReceiveOutput_o **)(v9 + 32);
  v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v9,
    Method_ExRoomMissionPresenter___c__DisplayClass15_0__HandleReceiveResult_b__0__,
    0);
  ExRoomMissionPresenter__PlayRewardEffect(this, v36, v37, v38);
}


ExRoomMissionListDisplayState_o *ExRoomMissionPresenter__IExRoomMissionPresenter_GetDisplayState(
        ExRoomMissionPresenter_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ExRoomMissionPresenter__BuildDisplayState(this, this->fields.currentFilter, v2);
}


ExRoomMissionListDisplayState_o *ExRoomMissionPresenter__IExRoomMissionPresenter_GetDisplayStateUnsorted(
        ExRoomMissionPresenter_o *this,
        const MethodInfo *method)
{
  ExRoomMissionPresenter_o *v2; // x19
  struct IExRoomMissionController_o *exRoomMissionController; // x20
  IExRoomMissionController_c *klass; // x8
  unsigned int currentFilter; // w21
  __int64 v6; // x9
  IExRoomMissionController_c **p_offset; // x10
  __int64 v8; // x0
  ExRoomMissionPresenter_o *v9; // x0
  const MethodInfo *v10; // x2
  struct IExRoomMissionController_o *v11; // x21
  IExRoomMissionController_c *v12; // x8
  ExRoomMissionPresenter_o *v13; // x20
  __int64 v14; // x9
  IExRoomMissionController_c **v15; // x10
  __int64 v16; // x0
  ExRoomMissionPresenter_o *v17; // x0
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_ExRoomMissionListViewItem__o *v19; // x0
  int32_t v20; // w19
  System_Collections_Generic_List_ExRoomMissionListViewItem__o *v21; // x21
  ExRoomMissionListDisplayState_o *v22; // x22
  const MethodInfo *v23; // x4

  v2 = this;
  if ( (byte_596AED7 & 1) == 0 )
  {
    sub_2213A60(&ExRoomMissionListDisplayState_TypeInfo);
    this = (ExRoomMissionPresenter_o *)sub_2213A60(&IExRoomMissionController_TypeInfo);
    byte_596AED7 = 1;
  }
  exRoomMissionController = v2->fields.exRoomMissionController;
  if ( !exRoomMissionController )
    goto LABEL_18;
  klass = exRoomMissionController->klass;
  currentFilter = v2->fields.currentFilter;
  v6 = *(unsigned __int16 *)&exRoomMissionController->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionController->klass->_2.rank )
  {
    p_offset = (IExRoomMissionController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionController_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6];
  }
  else
  {
LABEL_8:
    v8 = sub_224BC3C(v2->fields.exRoomMissionController, IExRoomMissionController_TypeInfo, 6);
  }
  v9 = (ExRoomMissionPresenter_o *)(*(__int64 (__fastcall **)(struct IExRoomMissionController_o *, _QWORD, _QWORD))v8)(
                                     exRoomMissionController,
                                     currentFilter,
                                     *(_QWORD *)(v8 + 8));
  this = (ExRoomMissionPresenter_o *)ExRoomMissionPresenter__BuildViewItems(
                                       v9,
                                       (System_Collections_Generic_List_ExRoomMissionListOutput__o *)v9,
                                       v10);
  v11 = v2->fields.exRoomMissionController;
  if ( !v11 )
LABEL_18:
    sub_2213CDC(this, method);
  v12 = v11->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)&v11->klass->_2.rank;
  if ( *(_WORD *)&v11->klass->_2.rank )
  {
    v15 = (IExRoomMissionController_c **)&v12->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != IExRoomMissionController_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_15;
    }
    v16 = (__int64)&v12->vtable[*(_DWORD *)v15 + 1];
  }
  else
  {
LABEL_15:
    v16 = sub_224BC3C(v2->fields.exRoomMissionController, IExRoomMissionController_TypeInfo, 1);
  }
  v17 = (ExRoomMissionPresenter_o *)(*(__int64 (__fastcall **)(struct IExRoomMissionController_o *, _QWORD, _QWORD))v16)(
                                      v11,
                                      0,
                                      *(_QWORD *)(v16 + 8));
  v19 = ExRoomMissionPresenter__BuildViewItems(
          v17,
          (System_Collections_Generic_List_ExRoomMissionListOutput__o *)v17,
          v18);
  v20 = v2->fields.currentFilter;
  v21 = v19;
  v22 = (ExRoomMissionListDisplayState_o *)sub_2213CCC(ExRoomMissionListDisplayState_TypeInfo);
  ExRoomMissionListDisplayState___ctor(
    v22,
    (System_Collections_Generic_List_ExRoomMissionListViewItem__o *)v13,
    v21,
    v20,
    v23);
  return v22;
}


void ExRoomMissionPresenter__IExRoomMissionPresenter_Initialize(
        ExRoomMissionPresenter_o *this,
        System_Action_ExRoomMissionRewardEffectState__Action__o *rewardEffectPlayerCallback,
        System_Action_SeManager_SystemSeKind__o *playSeCallback,
        System_Action_ExRoomServant_VoiceType__o *playMissionReceiveVoiceCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x0
  __int64 v25; // x1
  struct IExRoomMissionController_o *exRoomMissionController; // x20
  IExRoomMissionController_c *klass; // x8
  __int64 v28; // x9
  IExRoomMissionController_c **p_offset; // x10
  __int64 v30; // x0
  struct IExRoomMissionController_o *v31; // x20
  IExRoomMissionController_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_596AEC3 & 1) == 0 )
  {
    sub_2213A60(&IExRoomMissionController_TypeInfo);
    byte_596AEC3 = 1;
  }
  this->fields.rewardEffectPlayer = rewardEffectPlayerCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rewardEffectPlayer,
    (int32_t)rewardEffectPlayerCallback,
    (System_String_o *)playSeCallback,
    (System_String_o *)playMissionReceiveVoiceCallback,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.playSe = playSeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playSe,
    (int32_t)playSeCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.playMissionReceiveVoice = playMissionReceiveVoiceCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playMissionReceiveVoice,
    (int32_t)playMissionReceiveVoiceCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  exRoomMissionController = this->fields.exRoomMissionController;
  if ( !exRoomMissionController )
    goto LABEL_18;
  klass = exRoomMissionController->klass;
  v28 = *(unsigned __int16 *)&exRoomMissionController->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionController->klass->_2.rank )
  {
    p_offset = (IExRoomMissionController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionController_TypeInfo )
    {
      --v28;
      p_offset += 2;
      if ( !v28 )
        goto LABEL_8;
    }
    v30 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
  }
  else
  {
LABEL_8:
    v30 = sub_224BC3C(this->fields.exRoomMissionController, IExRoomMissionController_TypeInfo, 5);
  }
  v24 = (*(__int64 (__fastcall **)(struct IExRoomMissionController_o *, _QWORD))v30)(
          exRoomMissionController,
          *(_QWORD *)(v30 + 8));
  v31 = this->fields.exRoomMissionController;
  this->fields.currentFilter = v24;
  if ( !v31 )
LABEL_18:
    sub_2213CDC(v24, v25);
  v32 = v31->klass;
  v33 = *(unsigned __int16 *)&v31->klass->_2.rank;
  if ( *(_WORD *)&v31->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((IExRoomMissionController_c **)v34 - 1) != IExRoomMissionController_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_15;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_15:
    v35 = sub_224BC3C(v31, IExRoomMissionController_TypeInfo, 0);
  }
  (*(void (__fastcall **)(struct IExRoomMissionController_o *, _QWORD, _QWORD))v35)(v31, 0, *(_QWORD *)(v35 + 8));
}


void ExRoomMissionPresenter__IExRoomMissionPresenter_OnTapFilter(
        ExRoomMissionPresenter_o *this,
        System_Action_ExRoomMissionListDisplayState__o *onDisplayUpdated,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct IExRoomMissionController_o *exRoomMissionController; // x21
  IExRoomMissionController_c *klass; // x8
  unsigned int currentFilter; // w22
  __int64 v10; // x9
  IExRoomMissionController_c **p_offset; // x10
  __int64 v12; // x0
  int32_t v13; // w0
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x1

  if ( (byte_596AEC4 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_ExRoomMissionListDisplayState___);
    sub_2213A60(&Method_ActionExtensions_Call_SeManager_SystemSeKind___);
    sub_2213A60(&IExRoomMissionController_TypeInfo);
    byte_596AEC4 = 1;
  }
  ActionExtensions__Call_Int32Enum_(
    (System_Action_T__o *)this->fields.playSe,
    0,
    (const MethodInfo_36FFE2C *)Method_ActionExtensions_Call_SeManager_SystemSeKind___);
  exRoomMissionController = this->fields.exRoomMissionController;
  if ( !exRoomMissionController )
    sub_2213CDC(v5, v6);
  klass = exRoomMissionController->klass;
  currentFilter = this->fields.currentFilter;
  v10 = *(unsigned __int16 *)&exRoomMissionController->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionController->klass->_2.rank )
  {
    p_offset = (IExRoomMissionController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionController_TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_8;
    }
    v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
  }
  else
  {
LABEL_8:
    v12 = sub_224BC3C(this->fields.exRoomMissionController, IExRoomMissionController_TypeInfo, 2);
  }
  v13 = (*(__int64 (__fastcall **)(struct IExRoomMissionController_o *, _QWORD, _QWORD))v12)(
          exRoomMissionController,
          currentFilter,
          *(_QWORD *)(v12 + 8));
  this->fields.currentFilter = v13;
  v15 = (Il2CppObject *)ExRoomMissionPresenter__BuildDisplayState(this, v13, v14);
  ActionExtensions__Call_object_(
    (System_Action_T__o *)onDisplayUpdated,
    v15,
    (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_ExRoomMissionListDisplayState___);
}


void ExRoomMissionPresenter__IExRoomMissionPresenter_OnTapMission(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionListViewItem_o *missionItem,
        System_Action_ExRoomMissionListDisplayState__o *onDisplayUpdated,
        System_Action_o *onCanceled,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t MissionId; // w0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  ExRoomMissionListOutput_o *MissionById; // x23
  int32_t Status_k__BackingField; // w8
  bool IsHideRewardDetail; // w8
  System_Action_T__o *playSe; // x0
  const MethodInfo_36FFE2C *v31; // x2
  GiftEntity_o *CurrentDisplayRewardEntity; // x2
  const MethodInfo *v33; // x4
  struct EventMissionEntity_o *EventMissionEntity_k__BackingField; // x8
  struct IExRoomMissionController_o *exRoomMissionController; // x19
  unsigned int id; // w20
  System_Action_object__o *v37; // x21
  IExRoomMissionController_c *klass; // x8
  __int64 v39; // x9
  IExRoomMissionController_c **p_offset; // x10
  __int64 v41; // x0

  if ( (byte_596AEC5 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_SeManager_SystemSeKind___);
    sub_2213A60(&System_Action_ExRoomMissionReceiveOutput__TypeInfo);
    sub_2213A60(&IExRoomMissionController_TypeInfo);
    sub_2213A60(&Method_ExRoomMissionPresenter___c__DisplayClass11_0__IExRoomMissionPresenter_OnTapMission_b__0__);
    sub_2213A60(&ExRoomMissionPresenter___c__DisplayClass11_0_TypeInfo);
    byte_596AEC5 = 1;
  }
  v9 = sub_2213CCC(ExRoomMissionPresenter___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_23;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = onDisplayUpdated;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)onDisplayUpdated, v18, v19, v20, v21, v22, v23);
  if ( !missionItem
    || (MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)missionItem, 0),
        (MissionById = ExRoomMissionPresenter__FindMissionById(this, MissionId, v25)) == 0)
    && (MissionById = ExRoomMissionPresenter__CreateMissionFromItem(0, missionItem, v26)) == 0 )
  {
LABEL_20:
    ActionExtensions__Call(onCanceled, 0);
    return;
  }
  Status_k__BackingField = MissionById->fields._Status_k__BackingField;
  if ( Status_k__BackingField != 3 )
  {
    if ( Status_k__BackingField == 2 )
    {
      IsHideRewardDetail = ExRoomMissionListViewItem__get_IsHideRewardDetail(missionItem, 0);
      playSe = (System_Action_T__o *)this->fields.playSe;
      v31 = (const MethodInfo_36FFE2C *)Method_ActionExtensions_Call_SeManager_SystemSeKind___;
      if ( !IsHideRewardDetail )
      {
        ActionExtensions__Call_Int32Enum_(
          playSe,
          0,
          (const MethodInfo_36FFE2C *)Method_ActionExtensions_Call_SeManager_SystemSeKind___);
        CurrentDisplayRewardEntity = ExRoomMissionListViewItem__GetCurrentDisplayRewardEntity(missionItem, 0);
        ExRoomMissionPresenter__OpenRewardDetailDialog(this, MissionById, CurrentDisplayRewardEntity, onCanceled, v33);
        return;
      }
    }
    else
    {
      playSe = (System_Action_T__o *)this->fields.playSe;
      v31 = (const MethodInfo_36FFE2C *)Method_ActionExtensions_Call_SeManager_SystemSeKind___;
    }
    ActionExtensions__Call_Int32Enum_(playSe, 2, v31);
    goto LABEL_20;
  }
  ActionExtensions__Call_Int32Enum_(
    (System_Action_T__o *)this->fields.playSe,
    8,
    (const MethodInfo_36FFE2C *)Method_ActionExtensions_Call_SeManager_SystemSeKind___);
  EventMissionEntity_k__BackingField = MissionById->fields._EventMissionEntity_k__BackingField;
  if ( !EventMissionEntity_k__BackingField
    || (exRoomMissionController = this->fields.exRoomMissionController,
        id = EventMissionEntity_k__BackingField->fields.id,
        v37 = (System_Action_object__o *)sub_2213CCC(System_Action_ExRoomMissionReceiveOutput__TypeInfo),
        System_Action_object____ctor(
          v37,
          (Il2CppObject *)v9,
          Method_ExRoomMissionPresenter___c__DisplayClass11_0__IExRoomMissionPresenter_OnTapMission_b__0__,
          0),
        !exRoomMissionController) )
  {
LABEL_23:
    sub_2213CDC(v10, v11);
  }
  klass = exRoomMissionController->klass;
  v39 = *(unsigned __int16 *)&exRoomMissionController->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionController->klass->_2.rank )
  {
    p_offset = (IExRoomMissionController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionController_TypeInfo )
    {
      --v39;
      p_offset += 2;
      if ( !v39 )
        goto LABEL_17;
    }
    v41 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
  }
  else
  {
LABEL_17:
    v41 = sub_224BC3C(exRoomMissionController, IExRoomMissionController_TypeInfo, 3);
  }
  (*(void (__fastcall **)(struct IExRoomMissionController_o *, _QWORD, System_Action_object__o *, _QWORD))v41)(
    exRoomMissionController,
    id,
    v37,
    *(_QWORD *)(v41 + 8));
}


void ExRoomMissionPresenter__IExRoomMissionPresenter_OnTapReceiveAll(
        ExRoomMissionPresenter_o *this,
        System_Action_ExRoomMissionListDisplayState__o *onCompleted,
        System_Action_o *onCancelled,
        const MethodInfo *method)
{
  __int64 v7; // x21
  Il2CppObject *Item; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct IExRoomMissionController_o *exRoomMissionController; // x22
  IExRoomMissionController_c *klass; // x8
  __int64 v24; // x9
  IExRoomMissionController_c **p_offset; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_object__o *v29; // x22
  __int64 v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  unsigned __int64 v37; // x24
  __int64 v38; // x26
  Il2CppClass *v39; // x8
  __int64 v40; // x9
  System_Action_o *v41; // x23
  const MethodInfo *v42; // x4

  if ( (byte_596AEC6 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_SeManager_SystemSeKind___);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&IExRoomMissionController_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    sub_2213A60(&Method_ExRoomMissionPresenter___c__DisplayClass12_0__IExRoomMissionPresenter_OnTapReceiveAll_b__0__);
    sub_2213A60(&ExRoomMissionPresenter___c__DisplayClass12_0_TypeInfo);
    byte_596AEC6 = 1;
  }
  v7 = sub_2213CCC(ExRoomMissionPresenter___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_22;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = onCompleted;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)onCompleted, v16, v17, v18, v19, v20, v21);
  ActionExtensions__Call_Int32Enum_(
    (System_Action_T__o *)this->fields.playSe,
    0,
    (const MethodInfo_36FFE2C *)Method_ActionExtensions_Call_SeManager_SystemSeKind___);
  exRoomMissionController = this->fields.exRoomMissionController;
  if ( !exRoomMissionController )
    goto LABEL_22;
  klass = exRoomMissionController->klass;
  v24 = *(unsigned __int16 *)&exRoomMissionController->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionController->klass->_2.rank )
  {
    p_offset = (IExRoomMissionController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionController_TypeInfo )
    {
      --v24;
      p_offset += 2;
      if ( !v24 )
        goto LABEL_9;
    }
    v26 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_9:
    v26 = sub_224BC3C(this->fields.exRoomMissionController, IExRoomMissionController_TypeInfo, 1);
  }
  v27 = (*(__int64 (__fastcall **)(struct IExRoomMissionController_o *, __int64, _QWORD))v26)(
          exRoomMissionController,
          1,
          *(_QWORD *)(v26 + 8));
  if ( v27 && (v28 = *(unsigned int *)(v27 + 24), v29 = (System_Collections_Generic_List_object__o *)v27, (int)v28 > 0) )
  {
    v30 = sub_2213B20(int___TypeInfo, v28);
    *(_QWORD *)(v7 + 24) = v30;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), v30, v31, v32, v33, v34, v35, v36);
    if ( v29->fields._size >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        v38 = *(_QWORD *)(v7 + 24);
        Item = System_Collections_Generic_List_object___get_Item(
                 v29,
                 v37,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
        if ( !Item )
          break;
        v39 = Item[1].klass;
        if ( !v39 || !v38 )
          break;
        if ( v37 >= *(unsigned int *)(v38 + 24) )
          sub_2213CE4(Item);
        v40 = v38 + 4 * v37++;
        *(_DWORD *)(v40 + 32) = v39->_1.name;
        if ( (__int64)v37 >= v29->fields._size )
          goto LABEL_20;
      }
LABEL_22:
      sub_2213CDC(Item, v9);
    }
LABEL_20:
    v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v7,
      Method_ExRoomMissionPresenter___c__DisplayClass12_0__IExRoomMissionPresenter_OnTapReceiveAll_b__0__,
      0);
    ExRoomMissionPresenter__OpenReceiveConfirmDialog(
      this,
      (System_Collections_Generic_List_ExRoomMissionListOutput__o *)v29,
      v41,
      onCancelled,
      v42);
  }
  else
  {
    ActionExtensions__Call(onCancelled, 0);
  }
}


void ExRoomMissionPresenter__OpenBulkResultDialog(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionReceiveOutput_o *result,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  struct System_Int32_array *ReceivedMissionIds_k__BackingField; // x8
  struct IExRoomMissionDialogPort_o *exRoomMissionDialogPort; // x20
  ExRoomMissionReceiveAllResultDialog_o *v9; // x21
  IExRoomMissionDialogPort_c *klass; // x8
  __int64 v11; // x9
  IExRoomMissionDialogPort_c **p_offset; // x10
  __int64 v13; // x0

  if ( (byte_596AECE & 1) == 0 )
  {
    sub_2213A60(&ExRoomMissionReceiveAllResultDialog_TypeInfo);
    sub_2213A60(&IExRoomMissionDialogPort_TypeInfo);
    byte_596AECE = 1;
  }
  if ( result
    && (ReceivedMissionIds_k__BackingField = result->fields._ReceivedMissionIds_k__BackingField) != 0
    && ReceivedMissionIds_k__BackingField->max_length
    && (exRoomMissionDialogPort = this->fields.exRoomMissionDialogPort) != 0 )
  {
    v9 = (ExRoomMissionReceiveAllResultDialog_o *)sub_2213CCC(ExRoomMissionReceiveAllResultDialog_TypeInfo);
    ExRoomMissionReceiveAllResultDialog___ctor(v9, result, 0);
    klass = exRoomMissionDialogPort->klass;
    v11 = *(unsigned __int16 *)&exRoomMissionDialogPort->klass->_2.rank;
    if ( *(_WORD *)&exRoomMissionDialogPort->klass->_2.rank )
    {
      p_offset = (IExRoomMissionDialogPort_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IExRoomMissionDialogPort_TypeInfo )
      {
        --v11;
        p_offset += 2;
        if ( !v11 )
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_11:
      v13 = sub_224BC3C(exRoomMissionDialogPort, IExRoomMissionDialogPort_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct IExRoomMissionDialogPort_o *, ExRoomMissionReceiveAllResultDialog_o *, System_Action_o *, _QWORD))v13)(
      exRoomMissionDialogPort,
      v9,
      onCompleted,
      *(_QWORD *)(v13 + 8));
  }
  else
  {
    ActionExtensions__Call(onCompleted, 0);
  }
}


void ExRoomMissionPresenter__OpenOverflowDialogs(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionReceiveOutput_o *result,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  ExRoomMissionReceiveOutput_o *v28; // x20
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x3

  if ( (byte_596AECF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExRoomMissionPresenter___c__DisplayClass21_0__OpenOverflowDialogs_b__0__);
    sub_2213A60(&ExRoomMissionPresenter___c__DisplayClass21_0_TypeInfo);
    byte_596AECF = 1;
  }
  v7 = sub_2213CCC(ExRoomMissionPresenter___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = result;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)result, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = onCompleted;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)onCompleted, v22, v23, v24, v25, v26, v27);
  v28 = *(ExRoomMissionReceiveOutput_o **)(v7 + 24);
  if ( v28 )
  {
    v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v7,
      Method_ExRoomMissionPresenter___c__DisplayClass21_0__OpenOverflowDialogs_b__0__,
      0);
    ExRoomMissionPresenter__OpenPresentBoxOverDialog(this, v28, v29, v30);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
  }
}


void ExRoomMissionPresenter__OpenPresentBoxOverDialog(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionReceiveOutput_o *result,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  struct IExRoomMissionDialogPort_o *exRoomMissionDialogPort; // x20
  IExRoomMissionDialogPort_c *klass; // x8
  __int64 v9; // x9
  IExRoomMissionDialogPort_c **p_offset; // x10
  __int64 v11; // x0

  if ( (byte_596AED1 & 1) == 0 )
  {
    sub_2213A60(&IExRoomMissionDialogPort_TypeInfo);
    byte_596AED1 = 1;
  }
  if ( result
    && result->fields._IsOverPresentBox_k__BackingField
    && (exRoomMissionDialogPort = this->fields.exRoomMissionDialogPort) != 0 )
  {
    klass = exRoomMissionDialogPort->klass;
    v9 = *(unsigned __int16 *)&exRoomMissionDialogPort->klass->_2.rank;
    if ( *(_WORD *)&exRoomMissionDialogPort->klass->_2.rank )
    {
      p_offset = (IExRoomMissionDialogPort_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IExRoomMissionDialogPort_TypeInfo )
      {
        --v9;
        p_offset += 2;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
    }
    else
    {
LABEL_10:
      v11 = sub_224BC3C(exRoomMissionDialogPort, IExRoomMissionDialogPort_TypeInfo, 9);
    }
    (*(void (__fastcall **)(struct IExRoomMissionDialogPort_o *, System_Action_o *, _QWORD))v11)(
      exRoomMissionDialogPort,
      onCompleted,
      *(_QWORD *)(v11 + 8));
  }
  else
  {
    ActionExtensions__Call(onCompleted, 0);
  }
}


void ExRoomMissionPresenter__OpenReceiveConfirmDialog(
        ExRoomMissionPresenter_o *this,
        System_Collections_Generic_List_ExRoomMissionListOutput__o *receivableMissions,
        System_Action_o *onDecided,
        System_Action_o *onCancelled,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct IExRoomMissionDialogPort_o *exRoomMissionDialogPort; // x19
  ExRoomMissionReceiveConfirmDialog_o *v25; // x21
  System_Action_bool__o *v26; // x20
  IExRoomMissionDialogPort_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0

  if ( (byte_596AEC8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&ExRoomMissionReceiveConfirmDialog_TypeInfo);
    sub_2213A60(&IExRoomMissionDialogPort_TypeInfo);
    sub_2213A60(&Method_ExRoomMissionPresenter___c__DisplayClass14_0__OpenReceiveConfirmDialog_b__0__);
    sub_2213A60(&ExRoomMissionPresenter___c__DisplayClass14_0_TypeInfo);
    byte_596AEC8 = 1;
  }
  v9 = sub_2213CCC(ExRoomMissionPresenter___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = onCancelled;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)onCancelled, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = onDecided;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)onDecided, v18, v19, v20, v21, v22, v23);
  exRoomMissionDialogPort = this->fields.exRoomMissionDialogPort;
  if ( exRoomMissionDialogPort )
  {
    v25 = (ExRoomMissionReceiveConfirmDialog_o *)sub_2213CCC(ExRoomMissionReceiveConfirmDialog_TypeInfo);
    ExRoomMissionReceiveConfirmDialog___ctor(v25, receivableMissions, 0);
    v26 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v26,
      (Il2CppObject *)v9,
      Method_ExRoomMissionPresenter___c__DisplayClass14_0__OpenReceiveConfirmDialog_b__0__,
      0);
    klass = exRoomMissionDialogPort->klass;
    v28 = *(unsigned __int16 *)&exRoomMissionDialogPort->klass->_2.rank;
    if ( *(_WORD *)&exRoomMissionDialogPort->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IExRoomMissionDialogPort_c **)p_offset - 1) != IExRoomMissionDialogPort_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_9;
      }
      v30 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v30 = sub_224BC3C(exRoomMissionDialogPort, IExRoomMissionDialogPort_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct IExRoomMissionDialogPort_o *, ExRoomMissionReceiveConfirmDialog_o *, System_Action_bool__o *, _QWORD))v30)(
      exRoomMissionDialogPort,
      v25,
      v26,
      *(_QWORD *)(v30 + 8));
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 16), 0);
  }
}


void ExRoomMissionPresenter__OpenRewardDetailDialog(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionListOutput_o *mission,
        GiftEntity_o *selectedGiftEntity,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  ExRoomMissionRewardDetailDialog_o *v9; // x21
  struct GiftEntity_o *DetailKind; // x0
  __int64 v11; // x1
  struct IExRoomMissionDialogPort_o *exRoomMissionDialogPort; // x20
  IExRoomMissionDialogPort_c *klass; // x8
  struct GiftEntity_o *v14; // x21
  __int64 v15; // x9
  IExRoomMissionDialogPort_c *v16; // x1
  IExRoomMissionDialogPort_c **v17; // x10
  struct IExRoomMissionDialogPort_o *v18; // x0
  __int64 v19; // x2
  __int64 v20; // x9
  IExRoomMissionDialogPort_c **v21; // x10
  __int64 v22; // x9
  IExRoomMissionDialogPort_c **v23; // x10
  __int64 v24; // x9
  IExRoomMissionDialogPort_c **p_offset; // x10
  __int64 v26; // x9
  IExRoomMissionDialogPort_c **v27; // x10
  __int64 v28; // x9
  IExRoomMissionDialogPort_c **v29; // x10
  __int64 v30; // x0
  int v31; // w9

  if ( (byte_596AEC7 & 1) == 0 )
  {
    sub_2213A60(&ExRoomMissionRewardDetailDialog_TypeInfo);
    sub_2213A60(&IExRoomMissionDialogPort_TypeInfo);
    byte_596AEC7 = 1;
  }
  if ( !mission || !this->fields.exRoomMissionDialogPort )
    goto LABEL_26;
  v9 = (ExRoomMissionRewardDetailDialog_o *)sub_2213CCC(ExRoomMissionRewardDetailDialog_TypeInfo);
  ExRoomMissionRewardDetailDialog___ctor(v9, mission, selectedGiftEntity, 0);
  if ( !v9 )
    goto LABEL_60;
  if ( !ExRoomMissionRewardDetailDialog__get_CanOpen(v9, 0) )
    goto LABEL_26;
  DetailKind = (struct GiftEntity_o *)ExRoomMissionRewardDetailDialog__get_DetailKind(v9, 0);
  if ( (int)DetailKind > 3 )
  {
    switch ( (_DWORD)DetailKind )
    {
      case 4:
        exRoomMissionDialogPort = this->fields.exRoomMissionDialogPort;
        DetailKind = (struct GiftEntity_o *)ExRoomMissionRewardDetailDialog__get_RewardCommandCodeEntity(v9, 0);
        if ( exRoomMissionDialogPort )
        {
          klass = exRoomMissionDialogPort->klass;
          v14 = DetailKind;
          v24 = *(unsigned __int16 *)&exRoomMissionDialogPort->klass->_2.rank;
          v16 = IExRoomMissionDialogPort_TypeInfo;
          if ( *(_WORD *)&exRoomMissionDialogPort->klass->_2.rank )
          {
            p_offset = (IExRoomMissionDialogPort_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != IExRoomMissionDialogPort_TypeInfo )
            {
              --v24;
              p_offset += 2;
              if ( !v24 )
                goto LABEL_38;
            }
            v31 = *(_DWORD *)p_offset + 6;
            goto LABEL_58;
          }
LABEL_38:
          v18 = exRoomMissionDialogPort;
          v19 = 6;
          goto LABEL_51;
        }
        goto LABEL_60;
      case 5:
        exRoomMissionDialogPort = this->fields.exRoomMissionDialogPort;
        DetailKind = (struct GiftEntity_o *)ExRoomMissionRewardDetailDialog__get_RewardServantCostumeEntity(v9, 0);
        if ( exRoomMissionDialogPort )
        {
          klass = exRoomMissionDialogPort->klass;
          v14 = DetailKind;
          v28 = *(unsigned __int16 *)&exRoomMissionDialogPort->klass->_2.rank;
          v16 = IExRoomMissionDialogPort_TypeInfo;
          if ( *(_WORD *)&exRoomMissionDialogPort->klass->_2.rank )
          {
            v29 = (IExRoomMissionDialogPort_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(v29 - 1) != IExRoomMissionDialogPort_TypeInfo )
            {
              --v28;
              v29 += 2;
              if ( !v28 )
                goto LABEL_50;
            }
            v31 = *(_DWORD *)v29 + 7;
            goto LABEL_58;
          }
LABEL_50:
          v18 = exRoomMissionDialogPort;
          v19 = 7;
          goto LABEL_51;
        }
        goto LABEL_60;
      case 6:
        exRoomMissionDialogPort = this->fields.exRoomMissionDialogPort;
        DetailKind = (struct GiftEntity_o *)ExRoomMissionRewardDetailDialog__get_RewardEquipEntity(v9, 0);
        if ( exRoomMissionDialogPort )
        {
          klass = exRoomMissionDialogPort->klass;
          v14 = DetailKind;
          v20 = *(unsigned __int16 *)&exRoomMissionDialogPort->klass->_2.rank;
          v16 = IExRoomMissionDialogPort_TypeInfo;
          if ( *(_WORD *)&exRoomMissionDialogPort->klass->_2.rank )
          {
            v21 = (IExRoomMissionDialogPort_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(v21 - 1) != IExRoomMissionDialogPort_TypeInfo )
            {
              --v20;
              v21 += 2;
              if ( !v20 )
                goto LABEL_25;
            }
            v31 = *(_DWORD *)v21 + 8;
            goto LABEL_58;
          }
LABEL_25:
          v18 = exRoomMissionDialogPort;
          v19 = 8;
          goto LABEL_51;
        }
        goto LABEL_60;
    }
    goto LABEL_26;
  }
  if ( (_DWORD)DetailKind == 1 )
  {
    exRoomMissionDialogPort = this->fields.exRoomMissionDialogPort;
    DetailKind = (struct GiftEntity_o *)ExRoomMissionRewardDetailDialog__get_RewardItemEntity(v9, 0);
    if ( exRoomMissionDialogPort )
    {
      klass = exRoomMissionDialogPort->klass;
      v14 = DetailKind;
      v22 = *(unsigned __int16 *)&exRoomMissionDialogPort->klass->_2.rank;
      v16 = IExRoomMissionDialogPort_TypeInfo;
      if ( *(_WORD *)&exRoomMissionDialogPort->klass->_2.rank )
      {
        v23 = (IExRoomMissionDialogPort_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(v23 - 1) != IExRoomMissionDialogPort_TypeInfo )
        {
          --v22;
          v23 += 2;
          if ( !v22 )
            goto LABEL_32;
        }
        v31 = *(_DWORD *)v23 + 3;
        goto LABEL_58;
      }
LABEL_32:
      v18 = exRoomMissionDialogPort;
      v19 = 3;
      goto LABEL_51;
    }
    goto LABEL_60;
  }
  if ( (_DWORD)DetailKind != 2 )
  {
    if ( (_DWORD)DetailKind == 3 )
    {
      exRoomMissionDialogPort = this->fields.exRoomMissionDialogPort;
      if ( exRoomMissionDialogPort )
      {
        klass = exRoomMissionDialogPort->klass;
        v14 = v9->fields.selectedGiftEntity;
        v15 = *(unsigned __int16 *)&exRoomMissionDialogPort->klass->_2.rank;
        v16 = IExRoomMissionDialogPort_TypeInfo;
        if ( *(_WORD *)&exRoomMissionDialogPort->klass->_2.rank )
        {
          v17 = (IExRoomMissionDialogPort_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(v17 - 1) != IExRoomMissionDialogPort_TypeInfo )
          {
            --v15;
            v17 += 2;
            if ( !v15 )
              goto LABEL_16;
          }
          v31 = *(_DWORD *)v17 + 4;
LABEL_58:
          v30 = (__int64)&klass->vtable[v31];
          goto LABEL_59;
        }
LABEL_16:
        v18 = exRoomMissionDialogPort;
        v19 = 4;
        goto LABEL_51;
      }
LABEL_60:
      sub_2213CDC(DetailKind, v11);
    }
LABEL_26:
    ActionExtensions__Call(onCompleted, 0);
    return;
  }
  exRoomMissionDialogPort = this->fields.exRoomMissionDialogPort;
  DetailKind = (struct GiftEntity_o *)ExRoomMissionRewardDetailDialog__get_RewardServantEntity(v9, 0);
  if ( !exRoomMissionDialogPort )
    goto LABEL_60;
  klass = exRoomMissionDialogPort->klass;
  v14 = DetailKind;
  v26 = *(unsigned __int16 *)&exRoomMissionDialogPort->klass->_2.rank;
  v16 = IExRoomMissionDialogPort_TypeInfo;
  if ( *(_WORD *)&exRoomMissionDialogPort->klass->_2.rank )
  {
    v27 = (IExRoomMissionDialogPort_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(v27 - 1) != IExRoomMissionDialogPort_TypeInfo )
    {
      --v26;
      v27 += 2;
      if ( !v26 )
        goto LABEL_44;
    }
    v31 = *(_DWORD *)v27 + 5;
    goto LABEL_58;
  }
LABEL_44:
  v18 = exRoomMissionDialogPort;
  v19 = 5;
LABEL_51:
  v30 = sub_224BC3C(v18, v16, v19);
LABEL_59:
  (*(void (__fastcall **)(struct IExRoomMissionDialogPort_o *, struct GiftEntity_o *, System_Action_o *, _QWORD))v30)(
    exRoomMissionDialogPort,
    v14,
    onCompleted,
    *(_QWORD *)(v30 + 8));
}


void ExRoomMissionPresenter__OpenSingleResultDialog(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionReceiveOutput_o *result,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  struct System_Int32_array *ReceivedMissionIds_k__BackingField; // x1
  System_Collections_Generic_List_object__o *v8; // x0
  __int64 v9; // x1
  ExRoomMissionListOutput_o *v10; // x22
  struct IExRoomMissionDialogPort_o *exRoomMissionDialogPort; // x20
  ExRoomMissionReceiveSingleResultDialog_o *v12; // x21
  IExRoomMissionDialogPort_c *klass; // x8
  __int64 v14; // x9
  IExRoomMissionDialogPort_c **p_offset; // x10
  __int64 v16; // x0

  if ( (byte_596AECD & 1) == 0 )
  {
    sub_2213A60(&ExRoomMissionReceiveSingleResultDialog_TypeInfo);
    sub_2213A60(&IExRoomMissionDialogPort_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    byte_596AECD = 1;
  }
  if ( !result )
    goto LABEL_16;
  ReceivedMissionIds_k__BackingField = result->fields._ReceivedMissionIds_k__BackingField;
  if ( !ReceivedMissionIds_k__BackingField || !ReceivedMissionIds_k__BackingField->max_length )
    goto LABEL_16;
  v8 = (System_Collections_Generic_List_object__o *)ExRoomMissionPresenter__PickMissionsById(
                                                      this,
                                                      ReceivedMissionIds_k__BackingField,
                                                      (const MethodInfo *)onCompleted);
  if ( !v8 )
    sub_2213CDC(0, v9);
  v10 = v8->fields._size < 1
      ? 0LL
      : (ExRoomMissionListOutput_o *)System_Collections_Generic_List_object___get_Item(
                                       v8,
                                       0,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
  exRoomMissionDialogPort = this->fields.exRoomMissionDialogPort;
  if ( exRoomMissionDialogPort )
  {
    v12 = (ExRoomMissionReceiveSingleResultDialog_o *)sub_2213CCC(ExRoomMissionReceiveSingleResultDialog_TypeInfo);
    ExRoomMissionReceiveSingleResultDialog___ctor(v12, v10, 0);
    klass = exRoomMissionDialogPort->klass;
    v14 = *(unsigned __int16 *)&exRoomMissionDialogPort->klass->_2.rank;
    if ( *(_WORD *)&exRoomMissionDialogPort->klass->_2.rank )
    {
      p_offset = (IExRoomMissionDialogPort_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IExRoomMissionDialogPort_TypeInfo )
      {
        --v14;
        p_offset += 2;
        if ( !v14 )
          goto LABEL_15;
      }
      v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
    }
    else
    {
LABEL_15:
      v16 = sub_224BC3C(exRoomMissionDialogPort, IExRoomMissionDialogPort_TypeInfo, 1);
    }
    (*(void (__fastcall **)(struct IExRoomMissionDialogPort_o *, ExRoomMissionReceiveSingleResultDialog_o *, System_Action_o *, _QWORD))v16)(
      exRoomMissionDialogPort,
      v12,
      onCompleted,
      *(_QWORD *)(v16 + 8));
  }
  else
  {
LABEL_16:
    ActionExtensions__Call(onCompleted, 0);
  }
}


void ExRoomMissionPresenter__OpenUserPresentBoxErrorDialog(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionReceiveOutput_o *result,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  unsigned int OverflowType_k__BackingField; // w20
  struct IExRoomMissionDialogPort_o *exRoomMissionDialogPort; // x21
  IExRoomMissionDialogPort_c *klass; // x8
  __int64 v10; // x9
  IExRoomMissionDialogPort_c **p_offset; // x10
  __int64 v12; // x0

  if ( (byte_596AED0 & 1) == 0 )
  {
    sub_2213A60(&IExRoomMissionDialogPort_TypeInfo);
    byte_596AED0 = 1;
  }
  if ( result
    && (OverflowType_k__BackingField = result->fields._OverflowType_k__BackingField) != 0
    && (exRoomMissionDialogPort = this->fields.exRoomMissionDialogPort) != 0 )
  {
    klass = exRoomMissionDialogPort->klass;
    v10 = *(unsigned __int16 *)&exRoomMissionDialogPort->klass->_2.rank;
    if ( *(_WORD *)&exRoomMissionDialogPort->klass->_2.rank )
    {
      p_offset = (IExRoomMissionDialogPort_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IExRoomMissionDialogPort_TypeInfo )
      {
        --v10;
        p_offset += 2;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 10];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(exRoomMissionDialogPort, IExRoomMissionDialogPort_TypeInfo, 10);
    }
    (*(void (__fastcall **)(struct IExRoomMissionDialogPort_o *, _QWORD, System_Action_o *, _QWORD))v12)(
      exRoomMissionDialogPort,
      OverflowType_k__BackingField,
      onCompleted,
      *(_QWORD *)(v12 + 8));
  }
  else
  {
    ActionExtensions__Call(onCompleted, 0);
  }
}


System_Collections_Generic_List_ExRoomMissionListOutput__o *ExRoomMissionPresenter__PickMissionsById(
        ExRoomMissionPresenter_o *this,
        System_Int32_array *missionIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  Il2CppObject *Item; // x0
  __int64 v7; // x1
  struct IExRoomMissionController_o *exRoomMissionController; // x21
  IExRoomMissionController_c *klass; // x8
  __int64 v10; // x9
  IExRoomMissionController_c **p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_List_object__o *v13; // x21
  unsigned __int64 v14; // x25
  int32_t v15; // w22
  Il2CppClass *v16; // x8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppObject *v26; // x1
  Il2CppClass **v27; // x0

  if ( (byte_596AED2 & 1) == 0 )
  {
    sub_2213A60(&IExRoomMissionController_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ExRoomMissionListOutput__TypeInfo);
    byte_596AED2 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ExRoomMissionListOutput__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ExRoomMissionListOutput___ctor__);
  if ( missionIds && missionIds->max_length )
  {
    exRoomMissionController = this->fields.exRoomMissionController;
    if ( !exRoomMissionController )
      goto LABEL_33;
    klass = exRoomMissionController->klass;
    v10 = *(unsigned __int16 *)&exRoomMissionController->klass->_2.rank;
    if ( *(_WORD *)&exRoomMissionController->klass->_2.rank )
    {
      p_offset = (IExRoomMissionController_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IExRoomMissionController_TypeInfo )
      {
        --v10;
        p_offset += 2;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(exRoomMissionController, IExRoomMissionController_TypeInfo, 1);
    }
    Item = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IExRoomMissionController_o *, _QWORD, _QWORD))v12)(
                             exRoomMissionController,
                             0,
                             *(_QWORD *)(v12 + 8));
    if ( SLODWORD(missionIds->max_length) >= 1 )
    {
      v13 = (System_Collections_Generic_List_object__o *)Item;
      if ( Item )
      {
        v14 = 0;
        while ( 1 )
        {
          if ( v13->fields._size >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( System_Collections_Generic_List_object___get_Item(
                     v13,
                     v15,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__) )
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v13,
                         v15,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
                if ( !Item )
                  goto LABEL_33;
                if ( Item[1].klass )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v13,
                           v15,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
                  if ( !Item )
                    goto LABEL_33;
                  v16 = Item[1].klass;
                  if ( !v16 )
                    goto LABEL_33;
                  if ( v14 >= LODWORD(missionIds->max_length) )
                    sub_2213CE4(Item);
                  if ( LODWORD(v16->_1.name) == missionIds->m_Items[v14] )
                    break;
                }
              }
              if ( ++v15 >= v13->fields._size )
                goto LABEL_25;
            }
            Item = System_Collections_Generic_List_object___get_Item(
                     v13,
                     v15,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
            if ( !v5 )
              break;
            items = v5->fields._items;
            v24 = Method_System_Collections_Generic_List_ExRoomMissionListOutput__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            v26 = Item;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                Item,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v26;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v26, v17, v18, v19, v20, v21, v22);
            }
          }
LABEL_25:
          if ( (__int64)++v14 >= SLODWORD(missionIds->max_length) )
            return (System_Collections_Generic_List_ExRoomMissionListOutput__o *)v5;
        }
      }
LABEL_33:
      sub_2213CDC(Item, v7);
    }
  }
  return (System_Collections_Generic_List_ExRoomMissionListOutput__o *)v5;
}


void ExRoomMissionPresenter__PlayMissionReceiveVoice(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionReceiveOutput_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_Action_ExRoomServant_VoiceType__o *playMissionReceiveVoice; // x8

  if ( this->fields.playMissionReceiveVoice )
  {
    v4 = ExRoomMissionPresenter__ResolveMissionReceiveVoiceType(this, result, method);
    if ( (_DWORD)v4 )
    {
      playMissionReceiveVoice = this->fields.playMissionReceiveVoice;
      if ( !playMissionReceiveVoice )
        sub_2213CDC(v4, v5);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))playMissionReceiveVoice->fields.invoke_impl)(
        playMissionReceiveVoice->fields.method_code,
        (unsigned int)v4,
        playMissionReceiveVoice->fields.method);
    }
  }
}


void ExRoomMissionPresenter__PlayRewardEffect(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionReceiveOutput_o *result,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ExRoomMissionRewardEffectState__o *v7; // x0
  const MethodInfo *v8; // x4

  if ( (byte_596AECA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState__get_Count__);
    byte_596AECA = 1;
  }
  v7 = ExRoomMissionPresenter__BuildRewardEffectStates(this, result, (const MethodInfo *)onCompleted);
  if ( v7 && v7->fields._size >= 1 && this->fields.rewardEffectPlayer )
    ExRoomMissionPresenter__PlayRewardEffectsSequential(this, v7, 0, onCompleted, v8);
  else
    ActionExtensions__Call(onCompleted, 0);
}


void ExRoomMissionPresenter__PlayRewardEffectsSequential(
        ExRoomMissionPresenter_o *this,
        System_Collections_Generic_List_ExRoomMissionRewardEffectState__o *states,
        int32_t index,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  __int64 v9; // x26
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w1
  struct System_Object_array *items; // x8
  System_Collections_Generic_List_object__o *v32; // x25
  struct System_Action_ExRoomMissionRewardEffectState__Action__o *rewardEffectPlayer; // x20
  System_Action_o *v34; // x19

  while ( 1 )
  {
    if ( (byte_596AECB & 1) == 0 )
    {
      sub_2213A60(&System_Action_TypeInfo);
      sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState__get_Count__);
      sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState__get_Item__);
      sub_2213A60(&Method_ExRoomMissionPresenter___c__DisplayClass17_0__PlayRewardEffectsSequential_b__0__);
      sub_2213A60(&ExRoomMissionPresenter___c__DisplayClass17_0_TypeInfo);
      byte_596AECB = 1;
    }
    v9 = sub_2213CCC(ExRoomMissionPresenter___c__DisplayClass17_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    if ( !v9 )
      goto LABEL_13;
    *(_QWORD *)(v9 + 16) = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
    *(_QWORD *)(v9 + 24) = states;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)states, v18, v19, v20, v21, v22, v23);
    *(_QWORD *)(v9 + 40) = onCompleted;
    *(_DWORD *)(v9 + 32) = index;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)onCompleted, v24, v25, v26, v27, v28, v29);
    Item = *(System_Collections_Generic_List_object__o **)(v9 + 24);
    if ( !Item )
      goto LABEL_13;
    v30 = *(_DWORD *)(v9 + 32);
    if ( v30 >= Item->fields._size )
    {
      ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0);
      return;
    }
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v30,
                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionRewardEffectState__get_Item__);
    if ( !Item )
      goto LABEL_13;
    items = Item->fields._items;
    v32 = Item;
    if ( items )
    {
      if ( LODWORD(items->max_length) )
        break;
    }
    states = *(System_Collections_Generic_List_ExRoomMissionRewardEffectState__o **)(v9 + 24);
    onCompleted = *(System_Action_o **)(v9 + 40);
    index = *(_DWORD *)(v9 + 32) + 1;
  }
  rewardEffectPlayer = this->fields.rewardEffectPlayer;
  v34 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v9,
    Method_ExRoomMissionPresenter___c__DisplayClass17_0__PlayRewardEffectsSequential_b__0__,
    0);
  if ( !rewardEffectPlayer )
LABEL_13:
    sub_2213CDC(Item, v11);
  ((void (__fastcall *)(intptr_t, System_Collections_Generic_List_object__o *, System_Action_o *, intptr_t))rewardEffectPlayer->fields.invoke_impl)(
    rewardEffectPlayer->fields.method_code,
    v32,
    v34,
    rewardEffectPlayer->fields.method);
}


int32_t ExRoomMissionPresenter__ResolveMissionReceiveVoiceType(
        ExRoomMissionPresenter_o *this,
        ExRoomMissionReceiveOutput_o *result,
        const MethodInfo *method)
{
  struct System_Int32_array *ReceivedMissionIds_k__BackingField; // x1
  System_Collections_Generic_List_ExRoomMissionListOutput__o *v6; // x0
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w20
  Il2CppObject *Item; // x0
  Il2CppClass *klass; // x8
  int32_t generic_class; // w1
  System_Nullable_int__o v12; // x0
  __int64 v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596AED8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    byte_596AED8 = 1;
  }
  if ( !result )
    goto LABEL_14;
  ReceivedMissionIds_k__BackingField = result->fields._ReceivedMissionIds_k__BackingField;
  if ( !ReceivedMissionIds_k__BackingField || !ReceivedMissionIds_k__BackingField->max_length )
    goto LABEL_14;
  v6 = ExRoomMissionPresenter__PickMissionsById(this, ReceivedMissionIds_k__BackingField, method);
  if ( !v6 )
    return (int)v6;
  v7 = (System_Collections_Generic_List_object__o *)v6;
  if ( v6->fields._size < 1 )
  {
LABEL_14:
    LODWORD(v6) = 0;
    return (int)v6;
  }
  v8 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v7,
             v8,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    if ( Item )
    {
      klass = Item[1].klass;
      if ( klass )
      {
        generic_class = (int32_t)klass->_1.generic_class;
        v12 = (System_Nullable_int__o)&v14;
        v14 = 0;
        System_Nullable_int____ctor(v12, generic_class, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
        if ( SHIDWORD(v14) > 2 )
          break;
      }
    }
    if ( ++v8 >= v7->fields._size )
    {
      LODWORD(v6) = 8;
      return (int)v6;
    }
  }
  LODWORD(v6) = 9;
  return (int)v6;
}


void ExRoomMissionPresenter___c__DisplayClass11_0___ctor(
        ExRoomMissionPresenter___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionPresenter___c__DisplayClass11_0___IExRoomMissionPresenter_OnTapMission_b__0(
        ExRoomMissionPresenter___c__DisplayClass11_0_o *this,
        ExRoomMissionReceiveOutput_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  ExRoomMissionPresenter_o *_4__this; // x20
  ExRoomMissionReceiveOutput_o *v21; // x22
  System_Action_object__o *v22; // x23
  const MethodInfo *v23; // x4

  if ( (byte_596AED9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&Method_ExRoomMissionPresenter___c__DisplayClass11_1__IExRoomMissionPresenter_OnTapMission_b__1__);
    sub_2213A60(&ExRoomMissionPresenter___c__DisplayClass11_1_TypeInfo);
    byte_596AED9 = 1;
  }
  v5 = sub_2213CCC(ExRoomMissionPresenter___c__DisplayClass11_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = result;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)result, v14, v15, v16, v17, v18, v19);
  _4__this = this->fields.__4__this;
  v21 = *(ExRoomMissionReceiveOutput_o **)(v5 + 16);
  v22 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v5,
    Method_ExRoomMissionPresenter___c__DisplayClass11_1__IExRoomMissionPresenter_OnTapMission_b__1__,
    0);
  if ( !_4__this )
LABEL_6:
    sub_2213CDC(v6, v7);
  ExRoomMissionPresenter__HandleReceiveResult(
    _4__this,
    v21,
    (System_Action_Action__o *)v22,
    this->fields.onDisplayUpdated,
    v23);
}


void ExRoomMissionPresenter___c__DisplayClass11_1___ctor(
        ExRoomMissionPresenter___c__DisplayClass11_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionPresenter___c__DisplayClass11_1___IExRoomMissionPresenter_OnTapMission_b__1(
        ExRoomMissionPresenter___c__DisplayClass11_1_o *this,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ExRoomMissionPresenter___c__DisplayClass11_0_o *CS___8__locals1; // x8
  ExRoomMissionPresenter_o *_4__this; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
    sub_2213CDC(this, onCompleted);
  ExRoomMissionPresenter__OpenSingleResultDialog(_4__this, this->fields.result, onCompleted, v3);
}


void ExRoomMissionPresenter___c__DisplayClass12_0___ctor(
        ExRoomMissionPresenter___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionPresenter___c__DisplayClass12_0___IExRoomMissionPresenter_OnTapReceiveAll_b__0(
        ExRoomMissionPresenter___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  ExRoomMissionPresenter___c__DisplayClass12_0_o *v2; // x22
  struct ExRoomMissionPresenter_o *_4__this; // x8
  struct IExRoomMissionController_o *exRoomMissionController; // x19
  System_Action_object__o *_9__1; // x21
  struct System_Int32_array *missionIds; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  IExRoomMissionController_c *klass; // x8
  __int64 v14; // x9
  IExRoomMissionController_c **p_offset; // x10
  __int64 v16; // x0

  v2 = this;
  if ( (byte_596AEDA & 1) == 0 )
  {
    sub_2213A60(&System_Action_ExRoomMissionReceiveOutput__TypeInfo);
    sub_2213A60(&IExRoomMissionController_TypeInfo);
    this = (ExRoomMissionPresenter___c__DisplayClass12_0_o *)sub_2213A60(&Method_ExRoomMissionPresenter___c__DisplayClass12_0__IExRoomMissionPresenter_OnTapReceiveAll_b__1__);
    byte_596AEDA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  exRoomMissionController = _4__this->fields.exRoomMissionController;
  _9__1 = (System_Action_object__o *)v2->fields.__9__1;
  missionIds = v2->fields.missionIds;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_object__o *)sub_2213CCC(System_Action_ExRoomMissionReceiveOutput__TypeInfo);
    System_Action_object____ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ExRoomMissionPresenter___c__DisplayClass12_0__IExRoomMissionPresenter_OnTapReceiveAll_b__1__,
      0);
    v2->fields.__9__1 = (struct System_Action_ExRoomMissionReceiveOutput__o *)_9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !exRoomMissionController )
LABEL_14:
    sub_2213CDC(this, method);
  klass = exRoomMissionController->klass;
  v14 = *(unsigned __int16 *)&exRoomMissionController->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionController->klass->_2.rank )
  {
    p_offset = (IExRoomMissionController_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionController_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_11;
    }
    v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
  }
  else
  {
LABEL_11:
    v16 = sub_224BC3C(exRoomMissionController, IExRoomMissionController_TypeInfo, 4);
  }
  (*(void (__fastcall **)(struct IExRoomMissionController_o *, struct System_Int32_array *, System_Action_object__o *, _QWORD))v16)(
    exRoomMissionController,
    missionIds,
    _9__1,
    *(_QWORD *)(v16 + 8));
}


void ExRoomMissionPresenter___c__DisplayClass12_0___IExRoomMissionPresenter_OnTapReceiveAll_b__1(
        ExRoomMissionPresenter___c__DisplayClass12_0_o *this,
        ExRoomMissionReceiveOutput_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  ExRoomMissionPresenter_o *_4__this; // x20
  ExRoomMissionReceiveOutput_o *v21; // x22
  System_Action_object__o *v22; // x23
  const MethodInfo *v23; // x4

  if ( (byte_596AEDB & 1) == 0 )
  {
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&Method_ExRoomMissionPresenter___c__DisplayClass12_1__IExRoomMissionPresenter_OnTapReceiveAll_b__2__);
    sub_2213A60(&ExRoomMissionPresenter___c__DisplayClass12_1_TypeInfo);
    byte_596AEDB = 1;
  }
  v5 = sub_2213CCC(ExRoomMissionPresenter___c__DisplayClass12_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = result;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)result, v14, v15, v16, v17, v18, v19);
  _4__this = this->fields.__4__this;
  v21 = *(ExRoomMissionReceiveOutput_o **)(v5 + 16);
  v22 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v5,
    Method_ExRoomMissionPresenter___c__DisplayClass12_1__IExRoomMissionPresenter_OnTapReceiveAll_b__2__,
    0);
  if ( !_4__this )
LABEL_6:
    sub_2213CDC(v6, v7);
  ExRoomMissionPresenter__HandleReceiveResult(
    _4__this,
    v21,
    (System_Action_Action__o *)v22,
    this->fields.onCompleted,
    v23);
}


void ExRoomMissionPresenter___c__DisplayClass12_1___ctor(
        ExRoomMissionPresenter___c__DisplayClass12_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionPresenter___c__DisplayClass12_1___IExRoomMissionPresenter_OnTapReceiveAll_b__2(
        ExRoomMissionPresenter___c__DisplayClass12_1_o *this,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ExRoomMissionPresenter___c__DisplayClass12_0_o *CS___8__locals1; // x8
  ExRoomMissionPresenter_o *_4__this; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
    sub_2213CDC(this, onCompleted);
  ExRoomMissionPresenter__OpenBulkResultDialog(_4__this, this->fields.result, onCompleted, v3);
}


void ExRoomMissionPresenter___c__DisplayClass14_0___ctor(
        ExRoomMissionPresenter___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionPresenter___c__DisplayClass14_0___OpenReceiveConfirmDialog_b__0(
        ExRoomMissionPresenter___c__DisplayClass14_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 16;
  if ( isOk )
    v3 = 24;
  ActionExtensions__Call(*(System_Action_o **)((char *)&this->klass + v3), 0);
}


void ExRoomMissionPresenter___c__DisplayClass15_0___ctor(
        ExRoomMissionPresenter___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionPresenter___c__DisplayClass15_0___HandleReceiveResult_b__0(
        ExRoomMissionPresenter___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  ExRoomMissionPresenter___c__DisplayClass15_0_o *v2; // x19
  System_Action_o *_9__1; // x20
  struct System_Action_Action__o *openResultDialog; // x22
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v2 = this;
  if ( (byte_596AEDC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ExRoomMissionPresenter___c__DisplayClass15_0_o *)sub_2213A60(&Method_ExRoomMissionPresenter___c__DisplayClass15_0__HandleReceiveResult_b__1__);
    byte_596AEDC = 1;
  }
  _9__1 = v2->fields.__9__1;
  openResultDialog = v2->fields.openResultDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ExRoomMissionPresenter___c__DisplayClass15_0__HandleReceiveResult_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6, v7, v8, v9, v10);
  }
  if ( !openResultDialog )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, System_Action_o *, intptr_t))openResultDialog->fields.invoke_impl)(
    openResultDialog->fields.method_code,
    _9__1,
    openResultDialog->fields.method);
}


void ExRoomMissionPresenter___c__DisplayClass15_0___HandleReceiveResult_b__1(
        ExRoomMissionPresenter___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ExRoomMissionPresenter___c__DisplayClass15_0_o *v3; // x19
  System_Action_o *_9__2; // x23
  ExRoomMissionPresenter_o *_4__this; // x20
  ExRoomMissionReceiveOutput_o *result; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_596AEDD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ExRoomMissionPresenter___c__DisplayClass15_0_o *)sub_2213A60(&Method_ExRoomMissionPresenter___c__DisplayClass15_0__HandleReceiveResult_b__2__);
    byte_596AEDD = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  result = v3->fields.result;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_ExRoomMissionPresenter___c__DisplayClass15_0__HandleReceiveResult_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  ExRoomMissionPresenter__OpenOverflowDialogs(_4__this, result, _9__2, v2);
}


void ExRoomMissionPresenter___c__DisplayClass15_0___HandleReceiveResult_b__2(
        ExRoomMissionPresenter___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ExRoomMissionPresenter_o *_4__this; // x0
  const MethodInfo *v5; // x2
  System_Action_T__o *onDisplayUpdated; // x19
  Il2CppObject *v7; // x1

  if ( (byte_596AEDE & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_ExRoomMissionListDisplayState___);
    byte_596AEDE = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExRoomMissionPresenter__PlayMissionReceiveVoice(_4__this, this->fields.result, v2),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  onDisplayUpdated = (System_Action_T__o *)this->fields.onDisplayUpdated;
  v7 = (Il2CppObject *)ExRoomMissionPresenter__BuildDisplayState(_4__this, _4__this->fields.currentFilter, v5);
  ActionExtensions__Call_object_(
    onDisplayUpdated,
    v7,
    (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_ExRoomMissionListDisplayState___);
}


void ExRoomMissionPresenter___c__DisplayClass17_0___ctor(
        ExRoomMissionPresenter___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionPresenter___c__DisplayClass17_0___PlayRewardEffectsSequential_b__0(
        ExRoomMissionPresenter___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ExRoomMissionPresenter_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  ExRoomMissionPresenter__PlayRewardEffectsSequential(
    _4__this,
    this->fields.states,
    this->fields.index + 1,
    this->fields.onCompleted,
    v2);
}


void ExRoomMissionPresenter___c__DisplayClass21_0___ctor(
        ExRoomMissionPresenter___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionPresenter___c__DisplayClass21_0___OpenOverflowDialogs_b__0(
        ExRoomMissionPresenter___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ExRoomMissionPresenter__OpenUserPresentBoxErrorDialog(
    this->fields.__4__this,
    this->fields.result,
    this->fields.onCompleted,
    v2);
}