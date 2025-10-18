void EventMissionItemListViewManager___ctor(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4C3D416 & 1) == 0 )
  {
    sub_1C37058(&MissionListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D416 = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC(&this->fields.dialogTitle, v3);
  v4 = StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC(&this->fields.dialogMessage, v4);
  v5 = StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC(&this->fields.dialogGetable, v5);
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0);
}


void EventMissionItemListViewManager__AcceptReward(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x23
  __int64 Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x20
  struct EventMissionEntity_o *v7; // x8
  const MethodInfo *v8; // x1
  System_Text_StringBuilder_o *v9; // x21
  System_Text_StringBuilder_o *v10; // x21
  __int64 v11; // x25
  il2cpp_array_size_t max_length; // x26
  const MethodInfo *v13; // x3
  ItemMaster_o *v14; // x23
  unsigned __int64 v15; // x21
  System_Collections_Generic_List_object__o *v16; // x25
  System_Collections_Generic_List_object__o *v17; // x24
  unsigned int v18; // w22
  Il2CppClass **v19; // x21
  Il2CppClass *v20; // x8
  GiftEntity_o **v21; // x21
  Il2CppClass *v22; // t1
  const MethodInfo *v23; // x3
  ServantEntity_o *v24; // x26
  bool IsCombineMaterial; // w27
  System_String_o *v26; // x0
  System_Text_StringBuilder_o *v27; // x27
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  Il2CppObject *v34; // x26
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  GiftEntity_o *v41; // x1
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x28
  Il2CppClass **v46; // x0
  char v47; // w29
  bool IsCountableWithPlus; // w0
  Il2CppObject **v49; // x8
  Il2CppObject *v50; // x27
  System_Text_StringBuilder_o *v51; // x26
  System_String_o *v52; // x0
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x5
  __int64 v57; // x6
  __int64 v58; // x7
  _QWORD *v59; // x9
  System_String_o *v60; // x28
  Il2CppObject *v61; // x0
  __int64 v62; // x8
  System_Text_StringBuilder_o *v63; // x27
  System_Collections_Generic_List_object__o *v64; // x22
  System_Action_o *v65; // x22
  EventRewardSetEntity_o *SetRewardData; // x23
  __int64 v67; // x1
  Il2CppObject **v68; // x20
  Il2CppObject *name; // x1
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *v71; // x19
  System_Action_o *v72; // x20
  Il2CppObject *v73; // x19
  System_String_o *v74; // x0
  System_String_o *v75; // x0
  Il2CppObject *v76; // x22
  System_String_o *v77; // x20
  System_Action_o *v78; // x21
  __int64 v79; // [xsp+40h] [xbp-80h]
  __int64 v80; // [xsp+48h] [xbp-78h]
  int v81; // [xsp+50h] [xbp-70h]
  int64_t getQpValue; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C3D401 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity___ctor___78054432);
    sub_1C37058(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__);
    sub_1C37058(&EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__);
    sub_1C37058(&EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo);
    sub_1C37058(&StringLiteral_8677/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_1C37058(&StringLiteral_8676/*"MISSION_ACTION_SUCCESS"*/);
    sub_1C37058(&StringLiteral_25214/*"{0}×{1:#,0}"*/);
    sub_1C37058(&StringLiteral_25267/*"×"*/);
    sub_1C37058(&StringLiteral_8672/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_49/*"\n "*/);
    sub_1C37058(&StringLiteral_25576/*"＋"*/);
    byte_4C3D401 = 1;
  }
  v3 = (Il2CppObject *)sub_1C372A4(EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_107;
  v3[1].klass = (Il2CppClass *)this;
  sub_1C36FFC(&v3[1], this);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_107;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_107;
  if ( !Instance )
    goto LABEL_107;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v7 = this->fields.missionToRecieve;
  if ( !v7 )
    goto LABEL_107;
  if ( !Instance )
    goto LABEL_107;
  AutomatedAction__SetStatusMissionNotify((AutomatedAction_o *)Instance, v7->fields.id, 5, 0, 0);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v8);
  v9 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v9, 0);
  v3[2].klass = (Il2CppClass *)v9;
  sub_1C36FFC(&v3[2], v9);
  v10 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v10, 0);
  v3[1].monitor = v10;
  sub_1C36FFC(&v3[1].monitor, v10);
  v11 = sub_1C372A4(EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_107;
  *(_QWORD *)(v11 + 40) = v3;
  sub_1C36FFC(v11 + 40, v3);
  Instance = (__int64)this->fields.missionToRecieve;
  if ( !Instance )
    goto LABEL_107;
  if ( *(_DWORD *)(Instance + 80) == 1 )
  {
    *(_DWORD *)(v11 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_107;
    max_length = GiftListById->max_length;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_107;
    v80 = v11 + 40;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
    v14 = (ItemMaster_o *)Instance;
    if ( (int)max_length >= 1 )
    {
      v15 = 0;
      while ( v15 < LODWORD(GiftListById->max_length) )
      {
        Instance = EventMissionItemListViewManager__IsDialogGift(this, GiftListById->m_Items[v15], v14, v13);
        if ( (Instance & 1) != 0 )
          ++*(_DWORD *)(v11 + 24);
        if ( (unsigned int)max_length == ++v15 )
          goto LABEL_20;
      }
LABEL_108:
      sub_1C372BC(Instance);
    }
LABEL_20:
    v79 = v11;
    *(_BYTE *)(v11 + 28) = 1;
    v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v17 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)max_length >= 1 )
    {
      v18 = 0;
      v81 = max_length;
      while ( v18 < LODWORD(GiftListById->max_length) )
      {
        v19 = &GiftListById->obj.klass + (int)v18;
        v22 = v19[4];
        v21 = (GiftEntity_o **)(v19 + 4);
        v20 = v22;
        if ( !v22 )
          goto LABEL_107;
        Instance = Gift__IsServant_40427180(HIDWORD(v20->_1.name), 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_107;
          Instance = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( v18 >= LODWORD(GiftListById->max_length) )
            goto LABEL_108;
          if ( !*v21 )
            goto LABEL_107;
          if ( !Instance )
            goto LABEL_107;
          Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                (*v21)->fields.objectId,
                                (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_107;
          v24 = (ServantEntity_o *)Instance;
          IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0);
          Instance = SvtType__IsStatusUp(v24->fields.type, 0);
          if ( IsCombineMaterial || (Instance & 1) != 0 )
          {
            if ( !*(_QWORD *)v80 )
              goto LABEL_107;
            Instance = *(_QWORD *)(*(_QWORD *)v80 + 32LL);
            if ( !Instance )
              goto LABEL_107;
            v26 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 360LL))(
                                       Instance,
                                       *(_QWORD *)(*(_QWORD *)Instance + 368LL));
            Instance = System_String__IsNullOrEmpty(v26, 0);
            if ( (Instance & 1) == 0 )
            {
              if ( !*(_QWORD *)v80 )
                goto LABEL_107;
              Instance = *(_QWORD *)(*(_QWORD *)v80 + 32LL);
              if ( !Instance )
                goto LABEL_107;
              Instance = (__int64)System_Text_StringBuilder__Append_63646720(
                                    (System_Text_StringBuilder_o *)Instance,
                                    (System_String_o *)StringLiteral_49/*"\n "*/,
                                    0);
            }
            if ( !*(_QWORD *)v80 )
              goto LABEL_107;
            v27 = *(System_Text_StringBuilder_o **)(*(_QWORD *)v80 + 32LL);
            Instance = (__int64)ServantEntity__getName(v24, 0, -1, 0, 0);
            if ( v18 >= LODWORD(GiftListById->max_length) )
              goto LABEL_108;
            if ( !*v21 )
              goto LABEL_107;
            v34 = (Il2CppObject *)Instance;
            LODWORD(getQpValue) = (*v21)->fields.num;
            v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &getQpValue, v28, v29, v30, v31, v32, v33);
            Instance = (__int64)System_String__Format_63602948((System_String_o *)StringLiteral_25214/*"{0}×{1:#,0}"*/, v34, v35, 0);
            if ( !v27 )
              goto LABEL_107;
            Instance = (__int64)System_Text_StringBuilder__Append_63646720(v27, (System_String_o *)Instance, 0);
            if ( v18 >= LODWORD(GiftListById->max_length) )
              goto LABEL_108;
            if ( !v17 )
              goto LABEL_107;
            v36 = (Il2CppObject *)*v21;
            items = v17->fields._items;
            v38 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v17->fields._version;
            if ( !items )
              goto LABEL_107;
            size = v17->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                v36,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v40[4] = (Il2CppClass *)v36;
              Instance = sub_1C36FFC(v40 + 4, v36);
            }
          }
        }
        else
        {
          if ( v18 >= LODWORD(GiftListById->max_length) )
            goto LABEL_108;
          Instance = EventMissionItemListViewManager__IsDialogGift(this, *v21, v14, v23);
          if ( (Instance & 1) != 0 )
          {
            if ( v18 >= LODWORD(GiftListById->max_length) )
              goto LABEL_108;
            if ( !*v21 || !v14 )
              goto LABEL_107;
            Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                                  (*v21)->fields.objectId,
                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v18 >= LODWORD(GiftListById->max_length) )
              goto LABEL_108;
            if ( !v16 )
              goto LABEL_107;
            v41 = *v21;
            v42 = v16->fields._items;
            v43 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v16->fields._version;
            if ( !v42 )
              goto LABEL_107;
            v44 = v16->fields._size;
            v45 = Instance;
            if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                (Il2CppObject *)v41,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v46 = &v42->obj.klass + v44;
              v16->fields._size = v44 + 1;
              v46[4] = (Il2CppClass *)v41;
              Instance = sub_1C36FFC(v46 + 4, v41);
            }
            if ( v18 >= LODWORD(GiftListById->max_length) )
              goto LABEL_108;
            Instance = (__int64)*v21;
            if ( !*v21 )
              goto LABEL_107;
            Instance = GiftEntity__isQp((GiftEntity_o *)Instance, 0);
            v47 = Instance;
            if ( (Instance & 1) == 0 || !this->fields.isQpAlreadyMax )
            {
              *(_BYTE *)(v79 + 28) = 0;
              if ( !v45 )
                goto LABEL_107;
              IsCountableWithPlus = ItemType__IsCountableWithPlus(*(_DWORD *)(v45 + 48), 0);
              v49 = (Il2CppObject **)&StringLiteral_25576/*"＋"*/;
              if ( !IsCountableWithPlus )
                v49 = (Il2CppObject **)&StringLiteral_25267/*"×"*/;
              v50 = *v49;
              v51 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v51, 0);
              if ( !v51 )
                goto LABEL_107;
              System_Text_StringBuilder__Append_63646720(v51, *(System_String_o **)(v45 + 24), 0);
              if ( (v47 & 1) != 0 && this->fields.isQpMaxAlert && this->fields.getQpValue )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v52 = LocalizationManager__Get((System_String_o *)StringLiteral_8677/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0);
                v59 = &long_TypeInfo;
                v60 = v52;
                getQpValue = this->fields.getQpValue;
              }
              else
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8677/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0);
                if ( v18 >= LODWORD(GiftListById->max_length) )
                  goto LABEL_108;
                if ( !*v21 )
                  goto LABEL_107;
                v59 = &int_TypeInfo;
                v60 = (System_String_o *)Instance;
                LODWORD(getQpValue) = (*v21)->fields.num;
              }
              v61 = (Il2CppObject *)j_il2cpp_value_box_0(*v59, &getQpValue, v53, v54, v55, v56, v57, v58);
              Instance = (__int64)System_Text_StringBuilder__AppendFormat_63653072(v51, v60, v50, v61, 0);
              v62 = *(_QWORD *)v80;
              if ( !*(_QWORD *)v80 )
                goto LABEL_107;
              v63 = *(System_Text_StringBuilder_o **)(v62 + 24);
              if ( *(int *)(v79 + 24) >= 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8672/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
                if ( !v63 )
                  goto LABEL_107;
                Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                                      v63,
                                      (System_String_o *)Instance,
                                      (Il2CppObject *)v51,
                                      0);
                if ( !*(_QWORD *)v80 )
                  goto LABEL_107;
                Instance = *(_QWORD *)(*(_QWORD *)v80 + 24LL);
                if ( !Instance )
                  goto LABEL_107;
                Instance = (__int64)System_Text_StringBuilder__Append_63646720(
                                      (System_Text_StringBuilder_o *)Instance,
                                      (System_String_o *)StringLiteral_49/*"\n "*/,
                                      0);
              }
              else
              {
                if ( !v63 )
                  goto LABEL_107;
                Instance = (__int64)System_Text_StringBuilder__Append_63647348(
                                      *(System_Text_StringBuilder_o **)(v62 + 24),
                                      v51,
                                      0);
              }
            }
          }
        }
        if ( v81 == ++v18 )
          goto LABEL_89;
      }
      goto LABEL_108;
    }
LABEL_89:
    v64 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v64,
      (System_Collections_Generic_IEnumerable_T__o *)v16,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_GiftEntity___ctor___78054432);
    *(_QWORD *)(v79 + 16) = v64;
    sub_1C36FFC(v79 + 16, v64);
    Instance = *(_QWORD *)(v79 + 16);
    if ( !Instance )
      goto LABEL_107;
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)Instance,
      (System_Collections_Generic_IEnumerable_T__o *)v17,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v65 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v65,
      (Il2CppObject *)v79,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__,
      0);
    if ( this->fields.isTreasureEffect )
    {
      Instance = (__int64)this->fields.eventRootComponent;
      if ( Instance )
      {
        EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)Instance, 0);
        MissionListViewManager__StartEventMissionClearItemAction(
          (MissionListViewManager_o *)this,
          GiftListById,
          0,
          v65,
          0);
        return;
      }
LABEL_107:
      sub_1C372B4(Instance);
    }
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v65, 0);
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Instance, 0);
    v67 = StringLiteral_1/*""*/;
    *(_QWORD *)(v11 + 32) = StringLiteral_1/*""*/;
    v68 = (Il2CppObject **)(v11 + 32);
    Instance = sub_1C36FFC(v11 + 32, v67);
    if ( !SetRewardData )
      goto LABEL_107;
    name = (Il2CppObject *)SetRewardData->fields.name;
    *v68 = name;
    sub_1C36FFC(v11 + 32, name);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && getSvtList->max_length )
    {
      Instance = (__int64)this->fields.touchBlockObj;
      if ( !Instance )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      v71 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v72 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v72,
        (Il2CppObject *)v11,
        Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__,
        0);
      if ( !v71 )
        goto LABEL_107;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)v71, v72, 0);
    }
    else
    {
      v73 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_8676/*"MISSION_ACTION_SUCCESS"*/, 0);
      v75 = System_String__Format(v74, *v68, 0);
      v76 = *(Il2CppObject **)(v11 + 40);
      v77 = v75;
      v78 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v78,
        v76,
        Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__,
        0);
      if ( !v73 )
        goto LABEL_107;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v73,
        (System_String_o *)StringLiteral_1/*""*/,
        v77,
        v78,
        150,
        0,
        0,
        0,
        1,
        0,
        1,
        0,
        0,
        0.0,
        0,
        0);
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_107;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  }
}


void EventMissionItemListViewManager__CreateList(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_array *missionList,
        int32_t eventId,
        bool isDailyMission,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  EventMissionItemListViewManager__CreateList_31881664(this, missionList, eventId, isDailyMission, 1, v5);
}


void EventMissionItemListViewManager__CreateList_31881664(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_array *missionList,
        int32_t eventId,
        bool isDailyMission,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  bool v10; // w23
  __int64 Instance; // x0
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Entity; // x23
  bool v14; // w9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x26
  bool v17; // w22
  EventMissionEntity_o *v18; // x25
  System_Collections_Generic_List_object__o *itemList; // x23
  EventMissionItemListViewItem_o *v20; // x24
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct ListViewSort_o *sort; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x21
  UILabel_o *v28; // x21

  v10 = isTouchListEnabled;
  if ( (byte_4C3D3F0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C37058(&EventMissionItemListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&UserMissionNewManager_TypeInfo);
    sub_1C37058(&StringLiteral_8680/*"MISSION_EMPTY_TXT"*/);
    byte_4C3D3F0 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v10;
  if ( !scrollView )
    goto LABEL_36;
  scrollView->fields.disableDragIfFits = 1;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !Entity )
    goto LABEL_36;
  v14 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  this->fields.isEndEvent = v14;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  Instance = UserMissionNewManager__ReadData(0);
  if ( !missionList )
    goto LABEL_36;
  max_length = missionList->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    v17 = isDailyMission;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C372BC(Instance);
      v18 = missionList->m_Items[v16];
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v20 = (EventMissionItemListViewItem_o *)sub_1C372A4(EventMissionItemListViewItem_TypeInfo);
      EventMissionItemListViewItem___ctor(v20, v18, v17, v21);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v20,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v20;
        Instance = sub_1C36FFC(v25 + 4, v20);
      }
      LODWORD(max_length) = missionList->max_length;
      if ( (__int64)++v16 >= (int)max_length )
        goto LABEL_24;
    }
LABEL_36:
    sub_1C372B4(Instance);
  }
LABEL_24:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1C36FFC(&this->fields.baseSortInfo, sort);
  }
  if ( !byte_4C3D49A )
  {
    sub_1C37058(&EventRewardSaveData_TypeInfo);
    byte_4C3D49A = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
  EventMissionItemListViewManager__setList(this, (const MethodInfo *)sort);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0) )
  {
    v28 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8680/*"MISSION_EMPTY_TXT"*/, 0);
    if ( !v28 )
      goto LABEL_36;
    UILabel__set_text(v28, (System_String_o *)Instance, 0);
  }
  this->fields.currentEventId = eventId;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


TerminalTransitionInfo_o *EventMissionItemListViewManager__CreateTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v6; // x21
  EventMissionActionInfo_o *v7; // x20
  TerminalTransitionInfo_o *v8; // x21
  struct System_String_array *vals; // x1
  EventMissionItemListViewManager_o *v10; // x0
  const MethodInfo *v11; // x2
  System_String_o *VoiceAssetName; // x0

  if ( (byte_4C3D3FF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C37058(&EventMissionActionInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalTransitionInfo_TypeInfo);
    byte_4C3D3FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_15;
  EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                            (EventMissionActionAddMaster_o *)Instance,
                                            missionId,
                                            5,
                                            4,
                                            0);
  if ( EntityFromIdProgressTypeAndActionType )
  {
    v6 = EntityFromIdProgressTypeAndActionType;
    v7 = (EventMissionActionInfo_o *)sub_1C372A4(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor_44755912(v7, v6, 0);
LABEL_11:
    v8 = (TerminalTransitionInfo_o *)sub_1C372A4(TerminalTransitionInfo_TypeInfo);
    TerminalTransitionInfo___ctor(v8, 0);
    if ( v8 )
    {
      v8->fields.missionId = missionId;
      if ( v7 )
      {
        vals = v7->fields.vals;
        v8->fields.afterActionVals = vals;
        v10 = (EventMissionItemListViewManager_o *)sub_1C36FFC(&v8->fields.afterActionVals, vals);
        VoiceAssetName = EventMissionItemListViewManager__GetVoiceAssetName(v10, v7->fields.vals, v11);
        v8->fields.voiceAssetName = VoiceAssetName;
        sub_1C36FFC(&v8->fields.voiceAssetName, VoiceAssetName);
        return v8;
      }
    }
LABEL_15:
    sub_1C372B4(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_15;
  v8 = (TerminalTransitionInfo_o *)EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
                                     (EventMissionActionMaster_o *)Instance,
                                     missionId,
                                     5,
                                     4,
                                     0);
  if ( v8 )
  {
    v7 = (EventMissionActionInfo_o *)sub_1C372A4(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v7, (EventMissionActionEntity_o *)v8, 0);
    goto LABEL_11;
  }
  return v8;
}


void EventMissionItemListViewManager__Decide(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventMissionItemListViewManager__dialogCallback(this, 1, v2);
}


void EventMissionItemListViewManager__DestroyList(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


float EventMissionItemListViewManager__DoMoveEaseOut(
        EventMissionItemListViewManager_o *this,
        float currentTime,
        float duration,
        float startValue,
        float changeValue,
        const MethodInfo *method)
{
  float v6; // s0
  float v9; // s0
  float v10; // s1
  float v11; // s0

  v6 = currentTime / (float)(duration * 0.5);
  if ( v6 >= 1.0 )
  {
    v11 = exp2f((float)(v6 + -1.0) * -10.0);
    v10 = changeValue * 0.5;
    v9 = 2.0 - v11;
  }
  else
  {
    v9 = powf(v6, 5.0);
    v10 = changeValue * 0.5;
  }
  return (float)(v10 * v9) + startValue;
}


void EventMissionItemListViewManager__EndMaxErrorDialog(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventMissionItemListViewManager__dialogCallback(this, 0, v2);
}


int32_t EventMissionItemListViewManager__GetCostumeReleaseItemObjectId(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.costumeReleaseItemObjectId;
}


bool EventMissionItemListViewManager__GetIsCostumeReleaseItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isGetCostumeReleaseItem;
}


bool EventMissionItemListViewManager__GetIsQpMaxAlert(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_String_o **p_dialogMessage; // x20
  __int64 v8; // x1
  int64_t *p_overQpValue; // x26
  System_String_o *SelfUserGame; // x0
  System_String_o *v11; // x22
  int64_t klass; // x23
  int64_t QpMax; // x8
  System_String_c *v14; // x23
  __int64 v15; // x24
  System_String_o *v16; // x23
  Il2CppObject *v17; // x24
  System_String_o *v18; // x0
  BalanceConfig_c *v19; // x8
  Il2CppObject *v20; // x25
  Il2CppObject *v21; // x0
  struct System_String_o *v22; // x0
  int64_t v23; // x8
  int64_t num; // x8
  System_String_o *v25; // x21
  System_String_o *NumberFormat; // x0
  int64_t v27; // x8
  Il2CppObject *v28; // x22
  System_String_o *NumberFormatLong; // x0
  BalanceConfig_c *v30; // x8
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  bool result; // w0

  if ( (byte_4C3D412 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_8715/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/);
    sub_1C37058(&StringLiteral_8718/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D412 = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC(&this->fields.dialogTitle, v5);
  v6 = StringLiteral_1/*""*/;
  p_dialogMessage = &this->fields.dialogMessage;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC(&this->fields.dialogMessage, v6);
  v8 = StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC(&this->fields.dialogGetable, v8);
  p_overQpValue = &this->fields.overQpValue;
  this->fields.isQpAlreadyMax = 0;
  *(_OWORD *)&this->fields.overQpValue = 0u;
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_24;
  v11 = SelfUserGame;
  klass = (int64_t)SelfUserGame[4].klass;
  SelfUserGame = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = (System_String_o *)BalanceConfig_TypeInfo;
  }
  QpMax = *(_QWORD *)(*(_QWORD *)&SelfUserGame[7].fields + 8LL);
  if ( klass >= QpMax )
  {
    this->fields.isQpAlreadyMax = 1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_8715/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0);
    if ( giftEnt )
    {
      v25 = SelfUserGame;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0);
      v27 = (int64_t)v11[4].klass;
      v28 = (Il2CppObject *)NumberFormat;
      NumberFormatLong = LocalizationManager__GetNumberFormatLong(v27, 0);
      v30 = BalanceConfig_TypeInfo;
      v31 = (Il2CppObject *)NumberFormatLong;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v30 = BalanceConfig_TypeInfo;
      }
      v32 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v30->static_fields->QpMax, 0);
      v33 = System_String__Format_63603016(v25, v28, v31, v32, 0);
      *p_dialogMessage = v33;
      sub_1C36FFC(p_dialogMessage, v33);
      num = giftEnt->fields.num;
      goto LABEL_22;
    }
LABEL_24:
    sub_1C372B4(SelfUserGame);
  }
  if ( !giftEnt )
    goto LABEL_24;
  v14 = v11[4].klass;
  v15 = giftEnt->fields.num;
  if ( !LODWORD(SelfUserGame[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(SelfUserGame);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( (__int64)v14 + v15 > QpMax )
  {
    this->fields.isQpAlreadyMax = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8718/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0);
    v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0);
    v18 = LocalizationManager__GetNumberFormatLong((int64_t)v11[4].klass, 0);
    v19 = BalanceConfig_TypeInfo;
    v20 = (Il2CppObject *)v18;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    v21 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v19->static_fields->QpMax, 0);
    v22 = System_String__Format_63603016(v16, v17, v20, v21, 0);
    this->fields.dialogMessage = v22;
    sub_1C36FFC(&this->fields.dialogMessage, v22);
    v23 = BalanceConfig_TypeInfo->static_fields->QpMax - (unsigned __int64)v11[4].klass;
    this->fields.getQpValue = v23;
    num = giftEnt->fields.num - v23;
LABEL_22:
    result = 1;
    *p_overQpValue = num;
    return result;
  }
  return 0;
}


EventMissionItemListViewItem_o *EventMissionItemListViewManager__GetItem(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventMissionItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C3D3F6 & 1) == 0 )
  {
    sub_1C37058(&EventMissionItemListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C3D3F6 = 1;
  }
  result = (EventMissionItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventMissionItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 index,
                                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (EventMissionItemListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


System_String_o *EventMissionItemListViewManager__GetReplaceDialogMessage(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *beforeGiftEntity,
        GiftEntity_o *AfterGiftEntity,
        const MethodInfo *method)
{
  ConstantStrMaster_o *Master_object; // x0
  ConstantStrMaster_o *v7; // x21
  System_String_o *Value; // x24
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  System_Object_array *v11; // x22
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x19
  __int64 v15; // x0

  if ( (byte_4C3D3F8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&StringLiteral_5629/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/);
    sub_1C37058(&StringLiteral_5630/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/);
    sub_1C37058(&StringLiteral_5707/*"EVENT_REWARD_REPLACE_MSG"*/);
    byte_4C3D3F8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_24;
  v7 = Master_object;
  Value = ConstantStrMaster__GetValue(Master_object, (System_String_o *)StringLiteral_5630/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, 0);
  v9 = ConstantStrMaster__GetValue(v7, (System_String_o *)StringLiteral_5629/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5707/*"EVENT_REWARD_REPLACE_MSG"*/, 0);
  Master_object = (ConstantStrMaster_o *)sub_1C37100(object___TypeInfo, 4);
  if ( !Master_object )
    goto LABEL_24;
  v11 = (System_Object_array *)Master_object;
  if ( Value )
  {
    Master_object = (ConstantStrMaster_o *)sub_1C37194(Value, Master_object->klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( !LODWORD(v11->max_length) )
    goto LABEL_25;
  v11->m_Items[0] = (Il2CppObject *)Value;
  Master_object = (ConstantStrMaster_o *)sub_1C36FFC(v11->m_Items, Value);
  if ( v9 )
  {
    Master_object = (ConstantStrMaster_o *)sub_1C37194(v9, v11->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( LODWORD(v11->max_length) <= 1 )
    goto LABEL_25;
  v11->m_Items[1] = (Il2CppObject *)v9;
  Master_object = (ConstantStrMaster_o *)sub_1C36FFC(&v11->m_Items[1], v9);
  if ( !beforeGiftEntity )
    goto LABEL_24;
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(beforeGiftEntity, 0);
  v12 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1C37194(Master_object, v11->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_26:
      v15 = sub_1C372D8();
      sub_1C37180(v15, 0);
    }
  }
  if ( LODWORD(v11->max_length) <= 2 )
    goto LABEL_25;
  v11->m_Items[2] = v12;
  Master_object = (ConstantStrMaster_o *)sub_1C36FFC(&v11->m_Items[2], v12);
  if ( !AfterGiftEntity )
LABEL_24:
    sub_1C372B4(Master_object);
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(AfterGiftEntity, 0);
  v13 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1C37194(Master_object, v11->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( LODWORD(v11->max_length) <= 3 )
LABEL_25:
    sub_1C372BC(Master_object);
  v11->m_Items[3] = v13;
  sub_1C36FFC(&v11->m_Items[3], v13);
  return System_String__Format_63603084(v10, v11, 0);
}


int32_t EventMissionItemListViewManager__GetSelectEventMissionId(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectEventMissionId;
}


System_String_o *EventMissionItemListViewManager__GetVoiceAssetName(
        EventMissionItemListViewManager_o *this,
        System_String_array *afterActionVals,
        const MethodInfo *method)
{
  int max_length; // w8
  System_String_o **p_monitor; // x20
  int v6; // w21
  System_String_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 naturalAligment; // x9
  EventMissionItemListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C3D400 & 1) == 0 )
  {
    sub_1C37058(&EventRewardRootComponent_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (EventMissionItemListViewManager_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D400 = 1;
  }
  if ( !afterActionVals || (max_length = afterActionVals->max_length, max_length < 2) )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_monitor;
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C372BC(this);
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v6], 0);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v6 += 2;
    if ( v6 >= max_length )
      return *p_monitor;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0 )
    sub_1C372B4(Instance);
  naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] == EventRewardRootComponent_TypeInfo )
  {
    p_monitor = (System_String_o **)&Instance[98].monitor;
    return *p_monitor;
  }
  v10 = (EventMissionItemListViewManager_o *)sub_1C37574(Instance);
  EventMissionItemListViewManager__AcceptReward(v10, v11);
  return result;
}


bool EventMissionItemListViewManager__IsDialogGift(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *gift,
        ItemMaster_o *itmMst,
        const MethodInfo *method)
{
  MissionListViewManager_o *v6; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = (MissionListViewManager_o *)this;
  if ( (byte_4C3D415 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    this = (EventMissionItemListViewManager_o *)sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D415 = 1;
  }
  entity = 0;
  if ( !gift )
    goto LABEL_18;
  if ( Gift__IsServant_40427180(gift->fields.type, 0) )
    return 0;
  if ( Gift__IsCommandCode_40427572(gift->fields.type, 0) )
    return 0;
  this = (EventMissionItemListViewManager_o *)Gift__IsCostumeRelease(gift->fields.type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !itmMst )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)itmMst,
         &entity,
         gift->fields.objectId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity && this )
    {
      if ( CommonUI__IsGetItemEffect((CommonUI_o *)this, (int32_t)entity[1].klass, 0) )
        return 0;
      this = (EventMissionItemListViewManager_o *)MissionListViewManager__get_IsPlayGetEffect(v6, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 1;
      if ( entity )
        return MissionListViewManager__IsExcludeGetItemEffect(v6, (int32_t)entity[1].klass, 0);
    }
LABEL_18:
    sub_1C372B4(this);
  }
  return 0;
}


void EventMissionItemListViewManager__ModifyItem(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8
  DataManager_o *v6; // x20
  _BOOL8 v7; // x0
  MissionListViewItem_o *current; // x22
  __int64 naturalAligment; // x10
  __int64 MissionId; // x0
  struct EventMissionEntity_o *v11; // x8
  int32_t v12; // w23
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3D407 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&EventMissionItemListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D407 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( this->fields.isEndEvent && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve
      || !MasterData_object
      || (Instance = (DataManager_o *)UserEventMissionMaster__GetEntity(
                                        (UserEventMissionMaster_o *)MasterData_object,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        missionToRecieve->fields.id,
                                        0),
          !this->fields.itemList) )
    {
LABEL_37:
      sub_1C372B4(Instance);
    }
    v6 = Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)this->fields.itemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v16 = v15;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v16,
             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v7 )
        break;
      current = (MissionListViewItem_o *)v16.fields._current;
      if ( !v16.fields._current
        || (naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment,
            v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EventMissionItemListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1C372B4(v7);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v16.fields._current, 0);
      v11 = this->fields.missionToRecieve;
      if ( !v11 )
        sub_1C372B4(MissionId);
      v12 = MissionId;
      if ( (_DWORD)MissionId == v11->fields.id )
      {
        if ( !byte_4C3D49C )
        {
          MissionId = sub_1C37058(&EventRewardSaveData_TypeInfo);
          byte_4C3D49C = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v12;
        if ( !v6 )
          sub_1C372B4(MissionId);
        MissionListViewItem__ModifyItem(current, *(_DWORD *)&v6->fields._DispLog == 5, 0);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
      {
        v14 = current->fields.viewObject;
        if ( !v14 )
          sub_1C372B4(0);
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, const MethodInfo *))v14->klass->vtable._5_SetItem.methodPtr)(
          v14,
          current,
          v14->klass->vtable._5_SetItem.method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void EventMissionItemListViewManager__MoveEaseScroll(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinish,
        EventMissionActionInfo_o *eventMissionActionInfo,
        const MethodInfo *method)
{
  EventMissionItemListViewItem_o *Item; // x0
  ListViewItem_o *v10; // x22
  UnityEngine_Object_o *viewObject; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v13; // x3
  System_Collections_IEnumerator_o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3D3F2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D3F2 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  Item = EventMissionItemListViewManager__GetItem(this, index, (const MethodInfo *)onFinish);
  if ( !Item )
    goto LABEL_16;
  v10 = (ListViewItem_o *)Item;
  viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(viewObject, 0, 0) )
  {
    itemSortList = this->fields.itemSortList;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v15,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( (ListViewItem_o *)v15.fields._current == v10 )
        {
          viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v10, 0);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (EventMissionItemListViewItem_o *)UnityEngine_Object__op_Equality(viewObject, 0, 0);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( this->fields.tempFilterStatus == 1
      && (!eventMissionActionInfo || eventMissionActionInfo->fields.missionActionType == 4) )
    {
      v14 = EventMissionItemListViewManager__SetPreviousFilter(this, v10->fields.sortIndex, onFinish, v13);
    }
    else
    {
      v14 = EventMissionItemListViewManager__MoveEaseScroll_IE(this, v10->fields.sortIndex, onFinish, v13);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v14, 0);
  }
  else
  {
LABEL_16:
    if ( !onFinish )
      sub_1C372B4(Item);
    ((void (__fastcall *)(intptr_t, intptr_t))onFinish->fields.invoke_impl)(
      onFinish->fields.method_code,
      onFinish->fields.method);
  }
}


System_Collections_IEnumerator_o *EventMissionItemListViewManager__MoveEaseScroll_IE(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22

  if ( (byte_4C3D3F4 & 1) == 0 )
  {
    sub_1C37058(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo);
    byte_4C3D3F4 = 1;
  }
  v7 = sub_1C372A4(EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C36FFC(v7 + 32, this);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1C36FFC(v7 + 48, onFinished);
  return (System_Collections_IEnumerator_o *)v7;
}


void EventMissionItemListViewManager__OnChangeAlphaAnim(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20
  const MethodInfo *v7; // x1

  if ( (byte_4C3D40A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_4C3D40A = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                  this,
                                                                  v4);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v6,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim((EventMissionItemListViewObject_o *)ObjectList, v7);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1C372B4(ObjectList);
  }
}


void EventMissionItemListViewManager__OnClickFilterList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_4C3D40D & 1) == 0 )
  {
    sub_1C37058(&Method_EventMissionItemListViewManager_OnClickFilterList__);
    byte_4C3D40D = 1;
  }
  v3 = Method_EventMissionItemListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_EventMissionItemListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_C4670C[filterStatus];
  EventMissionItemListViewManager__setList(this, v5);
}


void EventMissionItemListViewManager__OnClickListView(
        EventMissionItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  MissionListViewItem_o *monitor; // x0
  const MethodInfo *v7; // x1
  __int64 naturalAligment; // x10
  EventMissionItemListViewItem_o *Item; // x0
  MissionListViewItem_o **p_monitor; // x21
  int32_t selectNum; // w8
  MissionListViewItem_o *v12; // x1
  const MethodInfo *v13; // x1
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v15; // x2
  GiftMaster_o *v16; // x23
  GiftEntity_o *DataById; // x0
  GiftEntity_o *v18; // x22
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v20; // x2
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  GiftEntity_array *OriginalGiftData; // x19
  GiftEntity_o *IconGiftEntity; // x0
  GiftEntity_o *v25; // x21
  Il2CppObject *Instance; // x19
  const MethodInfo *v27; // x3
  System_String_o *ReplaceDialogMessage; // x21
  System_Action_o *v29; // x22

  if ( (byte_4C3D3F7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager_OnClickListView__);
    sub_1C37058(&EventMissionItemListViewObject_TypeInfo);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__);
    sub_1C37058(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D3F7 = 1;
  }
  v5 = (Il2CppObject *)sub_1C372A4(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_47;
  v5[1].klass = (Il2CppClass *)this;
  monitor = (MissionListViewItem_o *)sub_1C36FFC(&v5[1], this);
  if ( this->fields.isClickListViewEnabled )
  {
    if ( !obj )
      goto LABEL_47;
    naturalAligment = EventMissionItemListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment )
      goto LABEL_47;
    if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewObject_TypeInfo )
      goto LABEL_47;
    Item = EventMissionItemListViewObject__GetItem((EventMissionItemListViewObject_o *)obj, v7);
    v5[1].monitor = Item;
    p_monitor = (MissionListViewItem_o **)&v5[1].monitor;
    sub_1C36FFC(&v5[1].monitor, Item);
    monitor = (MissionListViewItem_o *)v5[1].monitor;
    if ( !monitor )
      goto LABEL_47;
    monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(monitor, 0);
    if ( !monitor )
      goto LABEL_47;
    selectNum = monitor->fields.selectNum;
    *(_WORD *)&this->fields.isQpMaxAlert = 0;
    this->fields.selectEventMissionId = selectNum;
    monitor = *p_monitor;
    if ( !*p_monitor )
      goto LABEL_47;
    if ( (((__int64 (__fastcall *)(MissionListViewItem_o *, const MethodInfo *))monitor->klass->vtable._8_get_IsShowRewardInfo.methodPtr)(
            monitor,
            monitor->klass->vtable._8_get_IsShowRewardInfo.method)
        & 1) == 0 )
      goto LABEL_16;
    monitor = *p_monitor;
    if ( !*p_monitor )
      goto LABEL_47;
    monitor = (MissionListViewItem_o *)EventMissionItemListViewItem__get_IsHideReward(
                                         (EventMissionItemListViewItem_o *)monitor,
                                         (const MethodInfo *)v12);
    if ( ((unsigned __int8)monitor & 1) != 0 )
      goto LABEL_16;
    v12 = *p_monitor;
    if ( !*p_monitor )
      goto LABEL_47;
    if ( LOBYTE(v12[1].monitor) )
    {
LABEL_16:
      monitor = *p_monitor;
      if ( !*p_monitor )
        goto LABEL_47;
      if ( monitor->fields.progStatus == 3 )
      {
        if ( this->fields.filterStatus == 1 )
        {
          monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(monitor, 0);
          if ( !monitor )
            goto LABEL_47;
          this->fields.tempSelectDispNo = monitor->fields.sortValue0;
          monitor = *p_monitor;
          if ( !*p_monitor )
            goto LABEL_47;
        }
        if ( EventMissionItemListViewItem__GetIsRewardQp(
               (EventMissionItemListViewItem_o *)monitor,
               (const MethodInfo *)v12) )
        {
          monitor = *p_monitor;
          if ( !*p_monitor )
            goto LABEL_47;
          IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp((EventMissionItemListViewItem_o *)monitor, v13);
          this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v15);
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        monitor = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GiftMaster___);
        if ( !*p_monitor
          || (v16 = (GiftMaster_o *)monitor,
              (monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*p_monitor, 0)) == 0)
          || !v16 )
        {
LABEL_47:
          sub_1C372B4(monitor);
        }
        DataById = GiftMaster__getDataById(v16, HIDWORD(monitor->fields.sortValue2B), 0);
        if ( !DataById
          || (v18 = DataById, !DataById->fields._IsReplacedData_k__BackingField)
          || this->fields.isTreasureEffect
          || this->fields.giftIconId != -1 )
        {
          monitor = *p_monitor;
          if ( *p_monitor )
          {
            EventMissionEntity = MissionListViewItem__get_EventMissionEntity(monitor, 0);
            EventMissionItemListViewManager__recieveReward(this, EventMissionEntity, v20);
            return;
          }
          goto LABEL_47;
        }
        monitor = *p_monitor;
        if ( !*p_monitor )
          goto LABEL_47;
        monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(monitor, 0);
        if ( !monitor )
          goto LABEL_47;
        OriginalGiftData = GiftMaster__GetOriginalGiftData(v16, HIDWORD(monitor->fields.sortValue2B), 0);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(OriginalGiftData, 0);
        if ( IconGiftEntity )
        {
          v25 = IconGiftEntity;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                                   (EventMissionItemListViewManager_o *)Instance,
                                   v25,
                                   v18,
                                   v27);
          v29 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v29,
            v5,
            Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__,
            0);
          if ( !Instance )
            goto LABEL_47;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            ReplaceDialogMessage,
            v29,
            -1,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0.0,
            0,
            0);
        }
      }
      else
      {
        v21 = Method_EventMissionItemListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v21 = (_QWORD *)sub_1C37070(Method_EventMissionItemListViewManager_OnClickListView__);
        v22 = (System_Reflection_MethodBase_o *)sub_1C3703C(v21, v21[4]);
        OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0, 0);
      }
    }
    else
    {
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, v12, 1, 0);
    }
  }
}


void EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  GiftMaster_o *Master_object; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x0
  EventMissionItemListViewManager___c_c *v8; // x8
  System_Object_array *v9; // x21
  System_Func_object__bool__o *_9__78_0; // x22
  Il2CppObject *v11; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  struct EventMissionEntity_o *v13; // x8

  if ( (byte_4C3D410 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_GiftEntity___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
    sub_1C37058(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__);
    sub_1C37058(&EventMissionItemListViewManager___c_TypeInfo);
    byte_4C3D410 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Master_object )
    goto LABEL_19;
  GiftListById = GiftMaster__GetGiftListById(Master_object, missionToRecieve->fields.giftId, 0);
  v8 = EventMissionItemListViewManager___c_TypeInfo;
  v9 = (System_Object_array *)GiftListById;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v8 = EventMissionItemListViewManager___c_TypeInfo;
  }
  _9__78_0 = (System_Func_object__bool__o *)v8->static_fields->__9__78_0;
  if ( !_9__78_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__78_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__78_0,
      v11,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__,
      0);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__78_0 = (struct System_Func_GiftEntity__bool__o *)_9__78_0;
    sub_1C36FFC(&static_fields->__9__78_0, _9__78_0);
  }
  if ( BasicHelper__Any_object__51187876(
         v9,
         (System_Func_T__bool__o *)_9__78_0,
         (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    Master_object = (GiftMaster_o *)this->fields.commandAssistLvUpDialog;
    if ( Master_object )
    {
      Master_object = (GiftMaster_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Master_object,
                                        (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
      v13 = this->fields.missionToRecieve;
      if ( v13 )
      {
        if ( Master_object )
        {
          CommandAssistLvUpDialogComponent__Open(
            (CommandAssistLvUpDialogComponent_o *)Master_object,
            this->fields.currentEventId,
            v13->fields.id,
            closeCallback,
            0);
          return;
        }
      }
    }
LABEL_19:
    sub_1C372B4(Master_object);
  }
  ActionExtensions__Call(closeCallback, 0);
}


void EventMissionItemListViewManager__OpenQpMaxAlertDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x23
  System_String_o *dialogTitle; // x24
  System_String_o *dialogMessage; // x25
  System_String_o *dialogGetable; // x26
  System_String_o *v12; // x22
  System_Action_o *v13; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v15; // x29
  __int64 v16; // x0

  if ( (byte_4C3D413 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager_Decide__);
    sub_1C37058(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__);
    sub_1C37058(&Method_EventMissionItemListViewManager_TransitionToCombineScene__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11692/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_1C37058(&StringLiteral_11691/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_1C37058(&StringLiteral_11698/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_4C3D413 = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_1C36FFC(&this->fields.dialogCallBack, callback);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11698/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11691/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v12 = v7;
  v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0);
  onTransition = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0);
  v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0);
  if ( !qpMaxAlertDialog )
    sub_1C372B4(v16);
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    v5,
    v6,
    v12,
    v13,
    onTransition,
    v15,
    1,
    0);
}


void EventMissionItemListViewManager__RedisplayEventUI(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3D411 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SceneList_TypeInfo);
    byte_4C3D411 = 1;
  }
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(titleInfo, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_13;
    m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0).fields.m_Handle;
    p_m_Handle = &m_Handle;
    name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0);
    if ( !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    SceneName = SceneList__getSceneName(72, 0);
    if ( !System_String__op_Inequality(name, SceneName, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( gameObject )
      {
        TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)gameObject, 0);
        return;
      }
LABEL_13:
      sub_1C372B4(gameObject);
    }
  }
}


void EventMissionItemListViewManager__RefrashListDisp(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  _BOOL8 v5; // x0
  __int64 naturalAligment; // x11
  int32_t size; // w8
  int32_t v8; // w21
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3D40B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&EventMissionItemListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_4C3D40B = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v4 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v9;
        ;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))i.fields._current->klass->vtable[6].methodPtr)(
          i.fields._current,
          i.fields._current->klass->vtable[6].method) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v5 )
      break;
    if ( i.fields._current )
    {
      naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (EventMissionItemListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == EventMissionItemListViewItem_TypeInfo )
      {
        continue;
      }
    }
    sub_1C372B4(v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v4 )
    goto LABEL_17;
  size = v4->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v4,
                                                                  v8,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( ++v8 >= v4->fields._size )
        return;
    }
LABEL_17:
    sub_1C372B4(ObjectList);
  }
}


void EventMissionItemListViewManager__RefrashListDisp_31899536(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x10
  const MethodInfo *v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w22
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_object__o *v14; // x23
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3D40C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&EventMissionItemListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_4C3D40C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current
      || (naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment,
          v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EventMissionItemListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_1C372B4(v6);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v16.fields._current, 0) == missionId )
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[6].methodPtr)(
        current,
        current->klass->vtable[6].method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(this, v9);
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  v11 = itemList;
  if ( size > 0 )
  {
    v12 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v11,
                                                                v12,
                                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !itemList )
        break;
      v14 = itemList;
      itemList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewObject__GetItem(
                                                                (EventMissionItemListViewObject_o *)itemList,
                                                                v13);
      if ( !itemList )
        break;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0) == missionId )
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))v14->klass->vtable._9_unknown.methodPtr)(
          v14,
          this->fields.isInput,
          v14->klass->vtable._9_unknown.method);
      if ( ++v12 >= v11->fields._size )
        return;
    }
LABEL_21:
    sub_1C372B4(itemList);
  }
}


void EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_4C3D3FE & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D3FE = 1;
  }
  if ( !byte_4C3D49B )
  {
    sub_1C37058(&EventRewardSaveData_TypeInfo);
    byte_4C3D49B = 1;
  }
  TerminalTransitionInfo = EventMissionItemListViewManager__CreateTerminalTransitionInfo(
                             this,
                             EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField,
                             v2);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(TerminalTransitionInfo, 0);
}


void EventMissionItemListViewManager__SetOpenItem(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  struct EventMissionItemListViewItem_o *v8; // x21
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C3D408 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_1C37058(&StringLiteral_18849/*"ef_mission_extric01"*/);
    sub_1C37058(&StringLiteral_21648/*"modifyOpenItem"*/);
    byte_4C3D408 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1C372B4(0);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        ObjectList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v13 = v12;
      while ( 1 )
      {
        v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v13,
               (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
        if ( !v4 )
          break;
        current = v13.fields._current;
        if ( !v13.fields._current )
          sub_1C372B4(v4);
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v13.fields._current,
                                          v5);
        v8 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_1C372B4(0);
        MissionId = MissionListViewItem__get_MissionId(Item, 0);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4C3D49C )
          {
            sub_1C37058(&EventRewardSaveData_TypeInfo);
            byte_4C3D49C = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v8;
          sub_1C36FFC(&this->fields.openTargetItem, v8);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v8, 0) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_18849/*"ef_mission_extric01"*/, transform, v11);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21648/*"modifyOpenItem"*/,
      this->fields.openItemTime,
      0);
  }
}


System_Collections_IEnumerator_o *EventMissionItemListViewManager__SetPreviousFilter(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22

  if ( (byte_4C3D3F3 & 1) == 0 )
  {
    sub_1C37058(&EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo);
    byte_4C3D3F3 = 1;
  }
  v7 = sub_1C372A4(EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C36FFC(v7 + 32, this);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1C36FFC(v7 + 48, onFinished);
  return (System_Collections_IEnumerator_o *)v7;
}


void EventMissionItemListViewManager__SetScrollEnable(
        EventMissionItemListViewManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  bool v5; // w20

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (v5 = enable,
        UnityEngine_Behaviour__set_enabled(scrollView, enable, 0),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollBar) == 0) )
  {
    sub_1C372B4(scrollView);
  }
  UnityEngine_Behaviour__set_enabled(scrollView, v5, 0);
}


void EventMissionItemListViewManager__TransitionToCombineScene(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C3D414 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3D414 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0, 0);
  EventMissionItemListViewManager__dialogCallback(this, 0, v4);
}


int32_t EventMissionItemListViewManager___SetPreviousFilter_b__41_0(
        EventMissionItemListViewManager_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  int32_t tempSelectDispNo; // w22
  int32_t v8; // w8
  unsigned int v9; // w9
  int v10; // w8

  if ( (byte_4C3D417 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3D417 = 1;
  }
  tempSelectDispNo = this->fields.tempSelectDispNo;
  v8 = tempSelectDispNo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v8 = this->fields.tempSelectDispNo;
  }
  v9 = x - tempSelectDispNo;
  if ( x - tempSelectDispNo < 0 )
    v9 = tempSelectDispNo - x;
  v10 = y - v8;
  if ( v10 < 0 )
    v10 = -v10;
  if ( v9 >= v10 )
    return y;
  else
    return x;
}


void EventMissionItemListViewManager___modifyOpenItem_b__66_0(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  void *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  System_Collections_Generic_List_object__o *EntityListFromIdProgressTypeAndActionType; // x0
  __int64 *v7; // x24
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v9; // x21
  __int64 v10; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o *v15; // x0
  struct EventMissionEntity_o *v16; // x8
  Il2CppObject *v17; // x22
  EventMissionActionInfo_o *v18; // x21
  __int64 v19; // x0
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  System_Comparison_T__o *v24; // x21
  Il2CppObject *v25; // x22
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  const MethodInfo *targetMissionId; // x1
  int v28; // w8
  __int64 v29; // x8
  int32_t v30; // w0
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4C3D419 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventMissionActionInfo__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_1C37058(&EventMissionActionInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__);
    sub_1C37058(&EventMissionItemListViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_16655/*"actionAfterCallback"*/);
    byte_4C3D419 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  memset(&v33, 0, sizeof(v33));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_47;
  EntityListFromIdProgressTypeAndActionType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType(
                                                                                             (EventMissionActionAddMaster_o *)Instance,
                                                                                             missionToRecieve->fields.id,
                                                                                             5,
                                                                                             3,
                                                                                             0);
  if ( EntityListFromIdProgressTypeAndActionType && EntityListFromIdProgressTypeAndActionType->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v34 = v32;
    v7 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v34.fields._current;
      v9 = (EventMissionActionInfo_o *)sub_1C372A4(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_44755912(v9, (EventMissionActionAddEntity_o *)current, 0);
      if ( !v3 )
        sub_1C372B4(v10);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(v10);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v9,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v9;
        sub_1C36FFC(v14 + 4, v9);
      }
    }
    v15 = &v34;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v16 = this->fields.missionToRecieve;
    if ( !v16 )
      goto LABEL_47;
    if ( !Instance )
      goto LABEL_47;
    Instance = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
                 (EventMissionActionMaster_o *)Instance,
                 v16->fields.id,
                 5,
                 3,
                 0);
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v33 = v32;
    v7 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v17 = v33.fields._current;
      v18 = (EventMissionActionInfo_o *)sub_1C372A4(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v18, (EventMissionActionEntity_o *)v17, 0);
      if ( !v3 )
        sub_1C372B4(v19);
      v20 = v3->fields._items;
      v21 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v3->fields._version;
      if ( !v20 )
        sub_1C372B4(v19);
      v22 = v3->fields._size;
      if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v18,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &v20->obj.klass + v22;
        v3->fields._size = v22 + 1;
        v23[4] = (Il2CppClass *)v18;
        sub_1C36FFC(v23 + 4, v18);
      }
    }
    v15 = &v33;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(v15, (const MethodInfo_352D80C *)*v7);
  Instance = EventMissionItemListViewManager___c_TypeInfo;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    Instance = EventMissionItemListViewManager___c_TypeInfo;
  }
  v24 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionItemListViewManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v24 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionActionInfo__TypeInfo);
    System_Comparison_object____ctor(v24, v25, Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__, 0);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__66_1 = (struct System_Comparison_EventMissionActionInfo__o *)v24;
    Instance = (void *)sub_1C36FFC(&static_fields->__9__66_1, v24);
  }
  if ( !v3 )
    goto LABEL_47;
  System_Collections_Generic_List_object___Sort_58346216(
    v3,
    v24,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  v28 = v3->fields._size;
  if ( v28 <= 0 )
    goto LABEL_42;
  Instance = System_Collections_Generic_List_object___get_Item(
               v3,
               v28 - 1,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
  if ( !Instance || (v29 = *((_QWORD *)Instance + 4)) == 0 )
LABEL_47:
    sub_1C372B4(Instance);
  if ( !*(_DWORD *)(v29 + 24) )
    sub_1C372BC(Instance);
  v30 = System_Int32__Parse(*(System_String_o **)(v29 + 32), 0);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v30 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_31899536(this, (int32_t)targetMissionId, v31);
    goto LABEL_44;
  }
LABEL_42:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_44:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16655/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0);
}


void EventMissionItemListViewManager___setAfterAction_b__60_0(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4C3D418 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4C3D418 = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_1C372B4(Instance);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, missionToRecieve->fields.id, 5, 1, 0);
  }
  else
  {
    EventMissionItemListViewManager__loadOpenMissionEffect(this, method);
  }
}


void EventMissionItemListViewManager__actionAfterCallback(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *actionCallback; // x19
  struct System_Action_o **p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = &this->fields.actionCallback;
    *p_actionCallback = 0;
    sub_1C36FFC(p_actionCallback, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))actionCallback->fields.invoke_impl)(
      actionCallback->fields.method_code,
      actionCallback->fields.method);
  }
}


System_Collections_IEnumerator_o *EventMissionItemListViewManager__afterReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4C3D402 & 1) == 0 )
  {
    sub_1C37058(&EventMissionItemListViewManager__afterReward_d__59_TypeInfo);
    byte_4C3D402 = 1;
  }
  v3 = sub_1C372A4(EventMissionItemListViewManager__afterReward_d__59_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void EventMissionItemListViewManager__checkAcceptable(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v5; // x8
  _DWORD *v6; // x20
  _DWORD *v7; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t v9; // w21
  BalanceConfig_c *v10; // x0
  int32_t PresentBoxMax; // w8
  int v12; // w20
  EventMissionItemListViewManager___c_c *v13; // x0
  System_Action_o *_9__51_0; // x20
  Il2CppObject *v15; // x21
  struct EventMissionItemListViewManager___c_StaticFields *v16; // x0
  struct System_Action_o **p__9__51_0; // x0
  __int64 *v18; // x8
  EventMissionItemListViewManager___c_c *v19; // x0
  Il2CppObject *v20; // x21
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4C3D3FA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__);
    sub_1C37058(&EventMissionItemListViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_12216/*"SHOW_MSG"*/);
    sub_1C37058(&StringLiteral_11153/*"REWARD_ACCEPTABLE"*/);
    byte_4C3D3FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_48;
  if ( !Instance )
    goto LABEL_48;
  Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0);
  v5 = this->fields.missionToRecieve;
  if ( !v5 )
    goto LABEL_48;
  if ( v5->fields.rewardType == 1 )
  {
    v6 = Instance;
    if ( !Instance )
      goto LABEL_48;
    if ( Gift__IsServant_40427180(*((_DWORD *)Instance + 5), 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_48;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_48;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v6[6],
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_48;
      v7 = Instance;
      if ( SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0) || SvtType__IsStatusUp(v7[21], 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager_TypeInfo;
        }
        if ( !MasterData_object )
          goto LABEL_48;
        Instance = UserPresentBoxMaster__getVaildList(
                     (UserPresentBoxMaster_o *)MasterData_object,
                     *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                     0);
        if ( !Instance )
          goto LABEL_48;
        v9 = *((_DWORD *)Instance + 6);
        v10 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v10 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v10->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v9 )
        {
          v19 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v19 = EventMissionItemListViewManager___c_TypeInfo;
          }
          _9__51_0 = v19->static_fields->__9__51_0;
          if ( !_9__51_0 )
          {
            if ( !v19->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v19);
              v19 = EventMissionItemListViewManager___c_TypeInfo;
            }
            v20 = (Il2CppObject *)v19->static_fields->__9;
            _9__51_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_0,
              v20,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__,
              0);
            static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__51_0 = _9__51_0;
            p__9__51_0 = &static_fields->__9__51_0;
            goto LABEL_45;
          }
LABEL_46:
          this->fields.ShowMSG = _9__51_0;
          sub_1C36FFC(&this->fields.ShowMSG, _9__51_0);
          Instance = this->fields.targetFSM;
          if ( Instance )
          {
            v18 = &StringLiteral_12216/*"SHOW_MSG"*/;
            goto LABEL_38;
          }
LABEL_48:
          sub_1C372B4(Instance);
        }
        v12 = v6[7];
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v12 + v9 > PresentBoxMax )
        {
          v13 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v13 = EventMissionItemListViewManager___c_TypeInfo;
          }
          _9__51_0 = v13->static_fields->__9__51_1;
          if ( !_9__51_0 )
          {
            if ( !v13->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v13);
              v13 = EventMissionItemListViewManager___c_TypeInfo;
            }
            v15 = (Il2CppObject *)v13->static_fields->__9;
            _9__51_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_0,
              v15,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__,
              0);
            v16 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v16->__9__51_1 = _9__51_0;
            p__9__51_0 = &v16->__9__51_1;
LABEL_45:
            sub_1C36FFC(p__9__51_0, _9__51_0);
            goto LABEL_46;
          }
          goto LABEL_46;
        }
      }
    }
  }
  Instance = this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_48;
  v18 = &StringLiteral_11153/*"REWARD_ACCEPTABLE"*/;
LABEL_38:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v18, 0);
}


void EventMissionItemListViewManager__dialogCallback(
        EventMissionItemListViewManager_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct System_Action_int__o *dialogCallBack; // x20
  struct System_Action_int__o **p_dialogCallBack; // x0

  dialogCallBack = this->fields.dialogCallBack;
  if ( dialogCallBack )
  {
    p_dialogCallBack = &this->fields.dialogCallBack;
    *p_dialogCallBack = 0;
    sub_1C36FFC(p_dialogCallBack, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))dialogCallBack->fields.invoke_impl)(
      dialogCallBack->fields.method_code,
      (unsigned int)result,
      dialogCallBack->fields.method);
  }
}


void EventMissionItemListViewManager__endloadEffect(
        EventMissionItemListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v7; // x1
  int32_t filterStatus; // w8
  struct EventMissionEntity_o *v9; // x8

  if ( (byte_4C3D405 & 1) == 0 )
  {
    sub_1C37058(&EventMissionItemListViewManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4C3D405 = 1;
  }
  if ( data )
  {
    EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData = data;
    Instance = (Il2CppObject *)sub_1C36FFC(EventMissionItemListViewManager_TypeInfo->static_fields, data);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve )
      goto LABEL_13;
    if ( MissionActionManager__checkScroll(missionToRecieve->fields.id, 5, 0) )
    {
      filterStatus = this->fields.filterStatus;
      if ( filterStatus )
      {
        this->fields.tempFilterStatus = filterStatus;
        this->fields.filterStatus = 0;
        EventMissionItemListViewManager__setList(this, v7);
      }
    }
    else
    {
      EventMissionItemListViewManager__RefrashListDisp(this, v7);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v9 = this->fields.missionToRecieve;
    if ( !v9 || !Instance )
LABEL_13:
      sub_1C372B4(Instance);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v9->fields.id, 5, 0, 0);
  }
}


UnityEngine_GameObject_o *EventMissionItemListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__51154888; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4C3D406 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&EventMissionItemListViewManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D406 = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              effectAssetData,
                              name,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51154888,
                                     (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C3C921 )
  {
    effectAssetData = (AssetData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C3C926 )
  {
    effectAssetData = (AssetData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1C372B4(effectAssetData);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v7;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *EventMissionItemListViewManager__get_ClippingObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v11; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3D3EF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D3EF = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C372B4(0);
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                 (EventMissionItemListViewObject_o *)Component_object,
                                 v8);
      if ( !Item )
        sub_1C372B4(0);
      if ( Item->fields.isTermination )
      {
        v11 = ListViewManager__ClippingItem_43820548((ListViewManager_o *)this, Item, 0);
        if ( v11 )
        {
          if ( !v3 )
            sub_1C372B4(v11);
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C372B4(v11);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C372B4(Item);
        items = v3->fields._items;
        v13 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C372B4(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v15 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v15[4] = (Il2CppClass *)v9;
        sub_1C36FFC(v15 + 4, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v3;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3D3EE & 1) == 0 )
  {
    sub_1C37058(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
    byte_4C3D3EE = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_316FBB4 *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4C3D404 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager_endloadEffect__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&StringLiteral_5882/*"Effect/EventMission"*/);
    byte_4C3D404 = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5882/*"Effect/EventMission"*/, v3, 1, 0);
}


void EventMissionItemListViewManager__missionRewardCallback(
        EventMissionItemListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v4; // x19
  __int64 *v5; // x8
  Il2CppObject *v6; // x20
  EventMissionItemListViewManager_o *v7; // x20
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  struct GetSvts_array *items; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *v10; // x8
  struct GetCommandCodes_array *v11; // x1
  const MethodInfo *v12; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20

  v4 = this;
  if ( (byte_4C3D3FD & 1) == 0 )
  {
    sub_1C37058(&Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    sub_1C37058(&StringLiteral_11082/*"REQUEST_NG"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    this = (EventMissionItemListViewManager_o *)sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C3D3FD = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_63596960(result, (System_String_o *)StringLiteral_22215/*"ng"*/, 0) )
  {
    v6 = (Il2CppObject *)System_String__Concat_63599904(
                           (System_String_o *)StringLiteral_15804/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16058/*"]"*/,
                           0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (EventMissionItemListViewManager_o *)JsonManager__DeserializeArray_object_(
                                                  v6,
                                                  (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    if ( this )
    {
      v7 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_22;
      dropObjectList = this->fields.dropObjectList;
      if ( !dropObjectList )
        goto LABEL_21;
      items = (struct GetSvts_array *)dropObjectList->fields._items;
      v4->fields.getSvtList = items;
      this = (EventMissionItemListViewManager_o *)sub_1C36FFC(&v4->fields.getSvtList, items);
      if ( !LODWORD(v7->fields.m_CancellationTokenSource) )
LABEL_22:
        sub_1C372BC(this);
      v10 = v7->fields.dropObjectList;
      if ( v10 )
      {
        v11 = *(struct GetCommandCodes_array **)&v10->fields._size;
        v4->fields.getCommandCodeList = v11;
        this = (EventMissionItemListViewManager_o *)sub_1C36FFC(&v4->fields.getCommandCodeList, v11);
        missionToRecieve = v4->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_4C3D49C )
          {
            sub_1C37058(&EventRewardSaveData_TypeInfo);
            byte_4C3D49C = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          EventMissionItemListViewManager__SaveTerminalTransitionInfo(v4, v12);
          this = (EventMissionItemListViewManager_o *)v4->fields.touchBlockObj;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
            if ( this )
            {
              v5 = &StringLiteral_11084/*"REQUEST_OK"*/;
              goto LABEL_20;
            }
          }
        }
      }
    }
LABEL_21:
    sub_1C372B4(this);
  }
  this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
  if ( !this )
    goto LABEL_21;
  v5 = &StringLiteral_11082/*"REQUEST_NG"*/;
LABEL_20:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void EventMissionItemListViewManager__modifyOpenItem(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  int32_t MissionId; // w21
  MissionListViewItem_o *openTargetItem; // x0
  UnityEngine_Object_o *klass; // x21
  EventMissionItemListViewObject_o *v10; // x0
  __int64 v11; // x9
  UnityEngine_Object_o *v12; // x21
  Il2CppClass *v13; // x0
  System_Action_o *v14; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3D409 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&EventMissionItemListViewItem_TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__);
    sub_1C37058(&EventMissionItemListViewObject_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D409 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1C372B4(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v16 = v15;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v16,
             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v16.fields._current;
      if ( !v16.fields._current
        || (naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment,
            v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EventMissionItemListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1C372B4(v4);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v16.fields._current, 0);
      openTargetItem = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !openTargetItem )
        sub_1C372B4(0);
      if ( MissionId == MissionListViewItem__get_MissionId(openTargetItem, 0) )
      {
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
        {
          v10 = (EventMissionItemListViewObject_o *)current[7].klass;
          if ( !v10 )
            goto LABEL_30;
          v11 = EventMissionItemListViewObject_TypeInfo->_2.naturalAligment;
          if ( v10->klass->_2.naturalAligment < (unsigned int)v11
            || (EventMissionItemListViewObject_c *)v10->klass->_2.typeHierarchy[v11 - 1] != EventMissionItemListViewObject_TypeInfo )
          {
            v10 = (EventMissionItemListViewObject_o *)sub_1C37574(v10);
LABEL_30:
            sub_1C372B4(v10);
          }
          EventMissionItemListViewObject__ModifyBoardImage(
            v10,
            (const MethodInfo *)EventMissionItemListViewObject_TypeInfo);
        }
      }
      v12 = (UnityEngine_Object_o *)current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      {
        v13 = current[7].klass;
        if ( !v13 )
          sub_1C372B4(0);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v13->_1.image + 49))(
          v13,
          current,
          *((_QWORD *)v13->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__, 0);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v14, 0);
}


void EventMissionItemListViewManager__recieveReward(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x22
  PlayMakerFSM_o *targetFSM; // x0
  struct EventMissionEntity_o **v7; // x21
  System_Action_int__o *v8; // x20
  const MethodInfo *v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  struct EventMissionEntity_o *v12; // x1

  if ( (byte_4C3D3F9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager_recieveReward__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    sub_1C37058(&EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_1C37058(&StringLiteral_8712/*"MISSION_REWARD"*/);
    byte_4C3D3F9 = 1;
  }
  v5 = sub_1C372A4(EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC(v5 + 16, this);
  *(_QWORD *)(v5 + 24) = missionEntity;
  v7 = (struct EventMissionEntity_o **)(v5 + 24);
  sub_1C36FFC(v5 + 24, missionEntity);
  MissionListViewManager__SetupGetEffectOptions(
    (MissionListViewManager_o *)this,
    *(EventMissionEntity_o **)(v5 + 24),
    0);
  if ( this->fields.isQpMaxAlert )
  {
    v8 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v8,
      (Il2CppObject *)v5,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__,
      0);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v8, v9);
    return;
  }
  v10 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C37070(Method_EventMissionItemListViewManager_recieveReward__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C3703C(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 8, 0, 0);
  v12 = *v7;
  this->fields.missionToRecieve = *v7;
  sub_1C36FFC(&this->fields.missionToRecieve, v12);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_1C372B4(targetFSM);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8712/*"MISSION_REWARD"*/, 0);
}


void EventMissionItemListViewManager__requestMissionReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4C3D3FC & 1) == 0 )
  {
    sub_1C37058(&Method_EventMissionItemListViewManager_missionRewardCallback__);
    sub_1C37058(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3D3FC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v4,
               (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
LABEL_9:
    sub_1C372B4(Instance);
  EventMissionClearRewardRequest__beginRequest(
    (EventMissionClearRewardRequest_o *)Instance,
    missionToRecieve->fields.id,
    0);
}


void EventMissionItemListViewManager__setAfterAction(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C3D403 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager__setAfterAction_b__60_0__);
    byte_4C3D403 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventMissionItemListViewManager__setAfterAction_b__60_0__, 0);
  MissionListViewManager__DisplayAfterMissionAchieveTutorial((MissionListViewManager_o *)this, v3, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventMissionItemListViewManager__setFilterId(
        EventMissionItemListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  EventMissionItemListViewManager__setList(this, *(const MethodInfo **)&id);
}


void EventMissionItemListViewManager__setFilterName(
        EventMissionItemListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UnityEngine_Object_o *filterBtnTxt; // x21
  UISprite_o *v6; // x0

  if ( (byte_4C3D40F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D40F = 1;
  }
  filterBtnTxt = (UnityEngine_Object_o *)this->fields.filterBtnTxt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(filterBtnTxt, 0, 0) )
  {
    v6 = this->fields.filterBtnTxt;
    if ( !v6 || (UISprite__set_spriteName(v6, targetFile, 0), (v6 = this->fields.filterBtnTxt) == 0) )
      sub_1C372B4(v6);
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
  }
}


void EventMissionItemListViewManager__setList(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  const MethodInfo *v6; // x2
  ListViewSort_o *operationSortInfo; // x0
  bool v8; // w2
  bool v9; // w2
  bool v10; // w2
  bool v11; // w2
  int32_t filterStatus; // w19

  if ( (byte_4C3D40E & 1) == 0 )
  {
    sub_1C37058(&ListViewSort_TypeInfo);
    sub_1C37058(&StringLiteral_17557/*"btn_txt_completed"*/);
    sub_1C37058(&StringLiteral_17590/*"btn_txt_receipt"*/);
    sub_1C37058(&StringLiteral_17589/*"btn_txt_progress"*/);
    sub_1C37058(&StringLiteral_17573/*"btn_txt_notopen"*/);
    sub_1C37058(&StringLiteral_17539/*"btn_txt_all"*/);
    byte_4C3D40E = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_43839288(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1C36FFC(&this->fields.operationSortInfo, v4);
  switch ( this->fields.filterStatus )
  {
    case 0:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17539/*"btn_txt_all"*/, v6);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 14, 1, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 15, 1, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 16, 1, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v8 = 1;
      goto LABEL_31;
    case 1:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17590/*"btn_txt_receipt"*/, v6);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v9 = 0;
      goto LABEL_16;
    case 2:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17589/*"btn_txt_progress"*/, v6);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v9 = 1;
LABEL_16:
      ListViewSort__SetFilter(operationSortInfo, 14, v9, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v10 = 0;
LABEL_22:
      ListViewSort__SetFilter(operationSortInfo, 15, v10, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v11 = 0;
LABEL_29:
      ListViewSort__SetFilter(operationSortInfo, 16, v11, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v8 = 0;
LABEL_31:
      ListViewSort__SetFilter(operationSortInfo, 17, v8, 0);
LABEL_32:
      operationSortInfo = this->fields.baseSortInfo;
      if ( !operationSortInfo )
LABEL_36:
        sub_1C372B4(operationSortInfo);
      ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
      filterStatus = this->fields.filterStatus;
      if ( !byte_4C3D49D )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D49D = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = filterStatus;
      return;
    case 3:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17573/*"btn_txt_notopen"*/, v6);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 0, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 14, 0, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v10 = 1;
      goto LABEL_22;
    case 4:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17557/*"btn_txt_completed"*/, v6);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 0, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 14, 0, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 15, 0, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v11 = 1;
      goto LABEL_29;
    default:
      goto LABEL_32;
  }
}


void EventMissionItemListViewManager__setMissionListIdx(
        EventMissionItemListViewManager_o *this,
        bool isRaid,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v4; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  int size; // w22
  int32_t TodayFirstMissionId; // w20
  int32_t v9; // w21
  __int64 naturalAligment; // x10

  v4 = this;
  if ( (byte_4C3D3F5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C37058(&EventMissionItemListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventMissionItemListViewManager_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D3F5 = 1;
  }
  if ( !byte_4C3D49A )
  {
    this = (EventMissionItemListViewManager_o *)sub_1C37058(&EventRewardSaveData_TypeInfo);
    byte_4C3D49A = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  size = itemList->fields._size;
  if ( byte_4C3D49B )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    sub_1C37058(&EventRewardSaveData_TypeInfo);
    byte_4C3D49B = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_28;
      this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
      if ( !this )
        goto LABEL_28;
      TodayFirstMissionId = EventMissionConditionMaster__getTodayFirstMissionId(
                              (EventMissionConditionMaster_o *)this,
                              v4->fields.currentEventId,
                              0);
      goto LABEL_14;
    }
  }
  TodayFirstMissionId = static_fields->_MissionId_k__BackingField;
LABEL_14:
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      this = (EventMissionItemListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (EventMissionItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v9,
                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( this )
      {
        naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (EventMissionItemListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
            this = 0;
        }
        else
        {
          this = 0;
        }
      }
      if ( TodayFirstMissionId >= 1 )
      {
        if ( !this )
          break;
        if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)this, 0) == TodayFirstMissionId )
          goto LABEL_27;
      }
      if ( size == ++v9 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C372B4(this);
  }
LABEL_26:
  v9 = 0;
LABEL_27:
  ListViewManager__SetTopItem((ListViewManager_o *)v4, v9, 0);
}


void EventMissionItemListViewManager__setNextMissionInfo(
        EventMissionItemListViewManager_o *this,
        EventMissionActionInfo_o *currentMissionActionInfo,
        EventMissionActionInfo_o *eventMissionActionInfo,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v10; // x19
  int v11; // w8
  int m_CancellationTokenSource; // w8
  int v13; // w23
  int32_t v14; // w21
  __int64 naturalAligment; // x10
  EventRewardSceneEntity_array *EntityFromIdAndEventType; // x0
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x4
  System_Action_o *v19; // x20

  v10 = this;
  if ( (byte_4C3D3F1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1C37058(&EventMissionItemListViewItem_TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__);
    sub_1C37058(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventMissionItemListViewManager_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D3F1 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    this = (EventMissionItemListViewManager_o *)sub_1C36FFC(&v10->fields.actionCallback, callback);
  }
  if ( eventMissionActionInfo )
  {
    if ( !currentMissionActionInfo )
      goto LABEL_30;
    if ( currentMissionActionInfo->fields.missionActionType == 3 )
    {
      if ( eventMissionActionInfo->fields.missionActionType == 3 )
        v11 = 1056964608;
      else
        v11 = 1069547520;
      LODWORD(v10->fields.endEffectTime) = v11;
    }
  }
  this = (EventMissionItemListViewManager_o *)v10->fields.itemList;
  if ( !this )
LABEL_30:
    sub_1C372B4(this);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v13 = m_CancellationTokenSource - 1;
  if ( m_CancellationTokenSource >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      this = (EventMissionItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v14,
                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_30;
      naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        goto LABEL_30;
      if ( (EventMissionItemListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
        goto LABEL_30;
      this = (EventMissionItemListViewManager_o *)MissionListViewItem__get_EventMissionEntity(
                                                    (MissionListViewItem_o *)this,
                                                    0);
      if ( !this )
        goto LABEL_30;
      if ( LODWORD(this->fields.m_CachedPtr) == missionID )
        goto LABEL_24;
      if ( v13 == v14 )
        break;
      this = (EventMissionItemListViewManager_o *)v10->fields.itemList;
      ++v14;
      if ( !this )
        goto LABEL_30;
    }
  }
  v14 = 0;
LABEL_24:
  this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this )
    goto LABEL_30;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               (EventRewardSceneMaster_o *)this,
                               v10->fields.currentEventId,
                               4,
                               0);
  if ( EntityFromIdAndEventType && EntityFromIdAndEventType->max_length )
  {
    v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v10,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__,
      0);
    EventMissionItemListViewManager__MoveEaseScroll(v10, v14, v17, eventMissionActionInfo, v18);
  }
  else
  {
    v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v10,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__,
      0);
    v10->fields.callbackAfterScroll = v19;
    sub_1C36FFC(&v10->fields.callbackAfterScroll, v19);
    ListViewManager__MoveTopItem((ListViewManager_o *)v10, v14, 1, 0.0, 0);
  }
}


void EventMissionItemListViewManager__unAcceptableDlg(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4C3D3FB & 1) == 0 )
  {
    this = (EventMissionItemListViewManager_o *)sub_1C37058(&StringLiteral_5446/*"END_NOTICE"*/);
    byte_4C3D3FB = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(intptr_t, intptr_t))ShowMSG->fields.invoke_impl)(
          ShowMSG->fields.method_code,
          ShowMSG->fields.method),
        (this = (EventMissionItemListViewManager_o *)v2->fields.targetFSM) == 0) )
  {
    sub_1C372B4(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5446/*"END_NOTICE"*/, 0);
}


void EventMissionItemListViewManager__MoveEaseScroll_IE_d__42___ctor(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__MoveNext(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o **_4__this; // x20
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *v4; // x19
  float y; // s8
  float v6; // s8
  float timer_5__5; // s8
  float duration_5__4; // s0
  float deltaTime; // s0
  float v10; // s1
  float v11; // s0
  float v12; // s2
  bool v13; // nf
  float v14; // s0
  float start_5__2; // s8
  float v16; // s0
  float v17; // s10
  float v18; // s0
  float v19; // s1
  bool result; // w0
  float v21; // s0
  float v22; // s0
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  _1__state = this->fields.__1__state;
  _4__this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o **)this->fields.__4__this;
  v4 = this;
  if ( _1__state == 1 )
  {
    duration_5__4 = this->fields._duration_5__4;
    timer_5__5 = this->fields._timer_5__5;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_30;
    this = _4__this[11];
    if ( !this )
      goto LABEL_30;
    v4->fields._start_5__2 = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    this = _4__this[11];
    if ( !this )
      goto LABEL_30;
    UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0);
    this = _4__this[10];
    if ( !this )
      goto LABEL_30;
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
    if ( !this )
      goto LABEL_30;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = _4__this[11];
    if ( !this )
      goto LABEL_30;
    y = localPosition.fields.y;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0);
    this = _4__this[10];
    if ( !this )
      goto LABEL_30;
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
    if ( !this )
      goto LABEL_30;
    v25 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = _4__this[12];
    if ( !this )
      goto LABEL_30;
    v6 = v25.fields.y - y;
    v26 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)this, v4->fields.index, 0);
    v26.fields.y = fabsf(v26.fields.y) / v6;
    v26.fields.x = (float)(v6 * (float)(v26.fields.y - v4->fields._start_5__2)) + -2000.0;
    timer_5__5 = 0.0;
    duration_5__4 = fminf(fmaxf(v26.fields.x / 2000.0, 0.0) + 1.0, 3.0);
    v4->fields._end_5__3 = v26.fields.y;
    v4->fields._duration_5__4 = duration_5__4;
    v4->fields._timer_5__5 = 0.0;
  }
  if ( timer_5__5 >= duration_5__4 )
  {
    if ( !_4__this )
      goto LABEL_30;
    this = _4__this[11];
    if ( !this )
      goto LABEL_30;
    UIProgressBar__set_value((UIProgressBar_o *)this, v4->fields._end_5__3, 0);
    ActionExtensions__Call(v4->fields.onFinished, 0);
    return 0;
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  v10 = v4->fields._duration_5__4;
  v11 = timer_5__5 + deltaTime;
  if ( v11 <= v10 )
    v12 = v11;
  else
    v12 = v4->fields._duration_5__4;
  v13 = v11 < 0.0;
  v14 = 0.0;
  if ( !v13 )
    v14 = v12;
  v4->fields._timer_5__5 = v14;
  if ( !_4__this )
    goto LABEL_30;
  start_5__2 = v4->fields._start_5__2;
  v16 = v14 / (float)(v10 * 0.5);
  v17 = v4->fields._end_5__3 - start_5__2;
  if ( v16 >= 1.0 )
  {
    v21 = exp2f((float)(v16 + -1.0) * -10.0);
    v19 = v17 * 0.5;
    v18 = 2.0 - v21;
  }
  else
  {
    v18 = powf(v16, 5.0);
    v19 = v17 * 0.5;
  }
  this = _4__this[11];
  v22 = v18 * v19;
  if ( !this )
LABEL_30:
    sub_1C372B4(this);
  UIProgressBar__set_value((UIProgressBar_o *)this, start_5__2 + v22, 0);
  v4->fields.__2__current = 0;
  p__2__current = &v4->fields.__2__current;
  sub_1C36FFC(p__2__current, 0);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_IDisposable_Dispose(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void EventMissionItemListViewManager__SetPreviousFilter_d__41___ctor(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventMissionItemListViewManager__SetPreviousFilter_d__41__MoveNext(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventMissionItemListViewManager__SetPreviousFilter_d__41_o *v3; // x20
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x0
  UnityEngine_Coroutine_o *started; // x0
  Il2CppObject **v8; // x20
  int32_t v9; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  int size; // w22
  System_Collections_Generic_List_int__o *v12; // x20
  int32_t i; // w21
  __int64 naturalAligment; // x10
  int32_t v15; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  System_Func_int__int__int__o *v19; // x21
  int32_t v20; // w0
  int32_t v21; // w21
  int32_t v22; // w1
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v25; // x19
  Il2CppObject **p__2__current; // x20

  v3 = this;
  if ( (byte_4C3D426 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Aggregate_int___);
    sub_1C37058(&EventMissionItemListViewItem_TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__);
    sub_1C37058(&System_Func_int__int__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C3D426 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      v3->fields.__1__state = -1;
      if ( _4__this )
      {
        openItemTime = _4__this->fields.openItemTime;
        endEffectTime = _4__this->fields.endEffectTime;
        v25 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v25, openItemTime + endEffectTime, 0);
        v3->fields.__2__current = (Il2CppObject *)v25;
        p__2__current = &v3->fields.__2__current;
        sub_1C36FFC(p__2__current, v25);
        *((_DWORD *)p__2__current - 2) = 2;
        LOBYTE(v9) = 1;
        return v9;
      }
      goto LABEL_32;
    }
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      if ( _4__this )
      {
        v6 = EventMissionItemListViewManager__MoveEaseScroll_IE(_4__this, v3->fields.index, v3->fields.onFinished, v2);
        started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0);
        v3->fields.__2__current = (Il2CppObject *)started;
        v8 = &v3->fields.__2__current;
        sub_1C36FFC(v8, started);
        LOBYTE(v9) = 1;
        *((_DWORD *)v8 - 2) = 1;
        return v9;
      }
LABEL_32:
      sub_1C372B4(this);
    }
LABEL_30:
    LOBYTE(v9) = 0;
    return v9;
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_32;
  *(_QWORD *)&_4__this->fields.filterStatus = (unsigned int)_4__this->fields.tempFilterStatus;
  EventMissionItemListViewManager__setList(_4__this, method);
  itemSortList = _4__this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_30;
  size = itemSortList->fields._size;
  if ( size < 3 || !_4__this->fields.tempSelectDispNo )
    goto LABEL_30;
  v12 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0; i != size; ++i )
  {
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)_4__this->fields.itemSortList;
    if ( !this )
      goto LABEL_32;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           i,
                                                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !this )
      goto LABEL_32;
    naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
      goto LABEL_32;
    if ( (EventMissionItemListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
      goto LABEL_32;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)MissionListViewItem__get_EventMissionEntity(
                                                                           (MissionListViewItem_o *)this,
                                                                           0);
    if ( !this )
      goto LABEL_32;
    if ( !v12 )
      goto LABEL_32;
    v15 = (int32_t)this->fields.__4__this;
    items = v12->fields._items;
    v17 = Method_System_Collections_Generic_List_int__Add__;
    ++v12->fields._version;
    if ( !items )
      goto LABEL_32;
    v18 = v12->fields._size;
    if ( (unsigned int)v18 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v12,
        v15,
        *(const MethodInfo_3786000 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v12->fields._size = v18 + 1;
      items->m_Items[v18] = v15;
    }
  }
  v19 = (System_Func_int__int__int__o *)sub_1C372A4(System_Func_int__int__int__TypeInfo);
  System_Func_int__int__int____ctor(
    v19,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__,
    0);
  v20 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (System_Func_TSource__TSource__TSource__o *)v19,
          (const MethodInfo_30EF178 *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v21 = v20;
  v9 = System_Collections_Generic_List_int___IndexOf(
         v12,
         v20,
         (const MethodInfo_3786C7C *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v9 )
  {
    v22 = v21 - 1;
    if ( v9 == size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v22, 0, 0, 0.0, 0);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v22, 0, 0.0, 0);
    goto LABEL_30;
  }
  return v9;
}


Il2CppObject *EventMissionItemListViewManager__SetPreviousFilter_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventMissionItemListViewManager__SetPreviousFilter_d__41__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_EventMissionItemListViewManager__SetPreviousFilter_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *EventMissionItemListViewManager__SetPreviousFilter_d__41__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventMissionItemListViewManager__SetPreviousFilter_d__41__System_IDisposable_Dispose(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void EventMissionItemListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C3D41A & 1) == 0 )
  {
    sub_1C37058(&EventMissionItemListViewManager___c_TypeInfo);
    byte_4C3D41A = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventMissionItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionItemListViewManager___c_TypeInfo->static_fields->__9 = (struct EventMissionItemListViewManager___c_o *)v1;
  sub_1C36FFC(EventMissionItemListViewManager___c_TypeInfo->static_fields, v1);
}


void EventMissionItemListViewManager___c___ctor(EventMissionItemListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventMissionItemListViewManager___c___OpenCommandAssistLvUpDialog_b__78_0(
        EventMissionItemListViewManager___c_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  if ( !gift )
    sub_1C372B4(this);
  return gift->fields.type == 14;
}


void EventMissionItemListViewManager___c___checkAcceptable_b__51_0(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x0
  EventMissionItemListViewManager___c_c *v4; // x8
  System_String_o *v5; // x20
  System_String_o *v6; // x21
  System_Action_o *_9__51_2; // x22
  Il2CppObject *v8; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4C3D41B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__);
    sub_1C37058(&EventMissionItemListViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_8674/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D41B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8674/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0);
  v4 = EventMissionItemListViewManager___c_TypeInfo;
  v5 = v3;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v4 = EventMissionItemListViewManager___c_TypeInfo;
  }
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_2 = v4->static_fields->__9__51_2;
  if ( !_9__51_2 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v4->static_fields->__9;
    _9__51_2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__51_2, v8, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__, 0);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_2 = _9__51_2;
    v3 = (System_String_o *)sub_1C36FFC(&static_fields->__9__51_2, _9__51_2);
  }
  if ( !Instance )
    sub_1C372B4(v3);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v6, v5, _9__51_2, 150, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void EventMissionItemListViewManager___c___checkAcceptable_b__51_1(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x0
  EventMissionItemListViewManager___c_c *v4; // x8
  System_String_o *v5; // x20
  System_String_o *v6; // x21
  System_Action_o *_9__51_3; // x22
  Il2CppObject *v8; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4C3D41D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__);
    sub_1C37058(&EventMissionItemListViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_8675/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D41D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8675/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0);
  v4 = EventMissionItemListViewManager___c_TypeInfo;
  v5 = v3;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v4 = EventMissionItemListViewManager___c_TypeInfo;
  }
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_3 = v4->static_fields->__9__51_3;
  if ( !_9__51_3 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v4->static_fields->__9;
    _9__51_3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__51_3, v8, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__, 0);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_3 = _9__51_3;
    v3 = (System_String_o *)sub_1C36FFC(&static_fields->__9__51_3, _9__51_3);
  }
  if ( !Instance )
    sub_1C372B4(v3);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v6, v5, _9__51_3, 150, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void EventMissionItemListViewManager___c___checkAcceptable_b__51_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3D41C & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D41C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void EventMissionItemListViewManager___c___checkAcceptable_b__51_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3D41E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D41E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


int32_t EventMissionItemListViewManager___c___modifyOpenItem_b__66_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.id - b->fields.id;
}


void EventMissionItemListViewManager___c__DisplayClass47_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMissionItemListViewManager___c__DisplayClass47_0___OnClickListView_b__0(
        EventMissionItemListViewManager___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  MissionListViewItem_o *selectItem; // x0
  EventMissionItemListViewManager_o *_4__this; // x19
  const MethodInfo *v5; // x2

  selectItem = (MissionListViewItem_o *)this->fields.selectItem;
  if ( !selectItem
    || (_4__this = this->fields.__4__this,
        selectItem = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(selectItem, 0),
        !_4__this) )
  {
    sub_1C372B4(selectItem);
  }
  EventMissionItemListViewManager__recieveReward(_4__this, (EventMissionEntity_o *)selectItem, v5);
}


void EventMissionItemListViewManager___c__DisplayClass49_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMissionItemListViewManager___c__DisplayClass49_0___recieveReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass49_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PlayMakerFSM_o *targetFSM; // x0
  struct EventMissionItemListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct EventMissionItemListViewManager_o *v10; // x8

  if ( (byte_4C3D41F & 1) == 0 )
  {
    sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    sub_1C37058(&StringLiteral_8712/*"MISSION_REWARD"*/);
    byte_4C3D41F = 1;
  }
  if ( result == 1 )
  {
    v5 = Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (missionEntity = this->fields.missionEntity,
          _4__this->fields.missionToRecieve = missionEntity,
          targetFSM = (PlayMakerFSM_o *)sub_1C36FFC(&_4__this->fields.missionToRecieve, missionEntity),
          (v10 = this->fields.__4__this) == 0)
      || (targetFSM = v10->fields.targetFSM) == 0 )
    {
      sub_1C372B4(targetFSM);
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8712/*"MISSION_REWARD"*/, 0);
  }
}


void EventMissionItemListViewManager___c__DisplayClass58_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__2(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4C3D422 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D422 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C372B4(Instance);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0);
}


void EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__3(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventRewardRootComponent_o *eventRootComponent; // x20
  System_Action_o *_9__4; // x22

  if ( (byte_4C3D420 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__);
    byte_4C3D420 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventRootComponent = _4__this->fields.eventRootComponent;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    Instance = (Il2CppObject *)sub_1C36FFC(&this->fields.__9__4, _9__4);
  }
  if ( !eventRootComponent )
LABEL_10:
    sub_1C372B4(Instance);
  EventRewardRootComponent__StartSwitchFigure(eventRootComponent, _9__4, 0);
}


void EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__4(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventMissionItemListViewManager___c__DisplayClass58_0_o *v3; // x19
  const MethodInfo *v4; // x1
  EventMissionItemListViewManager_o *v5; // x19
  System_Collections_IEnumerator_o *v6; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (EventMissionItemListViewManager___c__DisplayClass58_0_o *)_4__this->fields.touchBlockObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0), (v5 = v3->fields.__4__this) == 0) )
  {
    sub_1C372B4(this);
  }
  v6 = EventMissionItemListViewManager__afterReward(v5, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)v5, v6, 0);
}


void EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__6(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4C3D421 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D421 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C372B4(Instance);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0);
}


void EventMissionItemListViewManager___c__DisplayClass58_1___ctor(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v2; // x19
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v4; // x8
  struct EventMissionItemListViewManager_o *v5; // x8
  System_Text_StringBuilder_o *v6; // x20
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v7; // x8
  System_String_o *v8; // x21
  const MethodInfo *v9; // x1
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v12; // x1
  System_String_o *v13; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v14; // x8
  System_String_o *v15; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v16; // x8
  System_String_o *v17; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v18; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v19; // x21
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v20; // x8
  struct EventMissionItemListViewManager_o *v21; // x8
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v22; // x8
  struct EventMissionItemListViewManager_o *v23; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v24; // x21
  Il2CppObject *NumberFormatLong; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v26; // x8
  struct EventMissionItemListViewManager_o *v27; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x21
  long double inited; // q0
  _QWORD *v32; // x22
  __int64 v33; // x8
  __int64 v34; // x0
  __int64 v35; // x0
  CommonUI_o *v36; // x21
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v37; // x22
  Il2CppObject *v38; // x24
  MissionRewardGetDialog_ClickDelegate_o *klass; // x23
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v40; // x20

  v2 = this;
  if ( (byte_4C3D423 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_object___);
    sub_1C37058(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__);
    sub_1C37058(&StringLiteral_8716/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/);
    sub_1C37058(&StringLiteral_8673/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_1C37058(&StringLiteral_8676/*"MISSION_ACTION_SUCCESS"*/);
    sub_1C37058(&StringLiteral_8678/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/);
    sub_1C37058(&StringLiteral_50/*"\n \n"*/);
    sub_1C37058(&StringLiteral_51/*"\n \n "*/);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1C37058(&StringLiteral_8717/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/);
    byte_4C3D423 = 1;
  }
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_68;
  if ( giftList->fields._size < 1 )
  {
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
      CS___8__locals1 = v2->fields.CS___8__locals1;
      if ( CS___8__locals1 )
      {
        _4__this = (UnityEngine_MonoBehaviour_o *)CS___8__locals1->fields.__4__this;
        if ( _4__this )
        {
          v12 = EventMissionItemListViewManager__afterReward(CS___8__locals1->fields.__4__this, v9);
          UnityEngine_MonoBehaviour__StartCoroutine_71252324(_4__this, v12, 0);
          return;
        }
      }
    }
    goto LABEL_68;
  }
  v4 = v2->fields.CS___8__locals1;
  if ( !v4 )
    goto LABEL_68;
  v5 = v4->fields.__4__this;
  if ( !v5 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v5->fields.touchBlockObj;
  if ( !this )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v6 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0);
  v7 = v2->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v7->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_68;
  v8 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                            this,
                            this->klass->vtable._3_ToString.method);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v8, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemDialogNum >= 2 )
    {
      if ( !v8 )
        goto LABEL_68;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__Substring_63607580(
                                                                          v8,
                                                                          0,
                                                                          v8->fields._stringLength - 2,
                                                                          0);
      if ( !v6 )
        goto LABEL_68;
      System_Text_StringBuilder__Append_63646720(v6, (System_String_o *)this, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8673/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_63646720(
                                                                          v6,
                                                                          v13,
                                                                          0);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8676/*"MISSION_ACTION_SUCCESS"*/,
                                                                          0);
      if ( !v6 )
        goto LABEL_68;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                          v6,
                                                                          (System_String_o *)this,
                                                                          (Il2CppObject *)v8,
                                                                          0);
    }
    v14 = v2->fields.CS___8__locals1;
    if ( !v14 )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v14->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_68;
    v15 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                               this,
                               this->klass->vtable._3_ToString.method);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v15, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_63646720(
                                                                          v6,
                                                                          (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                          0);
  }
  v16 = v2->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v16->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_68;
  v17 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                             this,
                             this->klass->vtable._3_ToString.method);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v17, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8678/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/,
                                                                        0);
    v18 = v2->fields.CS___8__locals1;
    if ( !v18 )
      goto LABEL_68;
    v19 = this;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v18->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                                                                        this,
                                                                        this->klass->vtable._3_ToString.method);
    if ( !v6 )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                        v6,
                                                                        (System_String_o *)v19,
                                                                        (Il2CppObject *)this,
                                                                        0);
  }
  v20 = v2->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_68;
  v21 = v20->fields.__4__this;
  if ( !v21 )
    goto LABEL_68;
  if ( v21->fields.isQpMaxAlert )
  {
    if ( !v6 )
      goto LABEL_68;
    if ( v2->fields.isGetNoReward )
    {
      System_Text_StringBuilder__set_Length(v6, 0, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8716/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                          0);
      v22 = v2->fields.CS___8__locals1;
      if ( v22 )
      {
        v23 = v22->fields.__4__this;
        if ( v23 )
        {
          v24 = this;
          NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v23->fields.overQpValue, 0);
          System_Text_StringBuilder__AppendFormat(v6, (System_String_o *)v24, NumberFormatLong, 0);
          goto LABEL_61;
        }
      }
LABEL_68:
      sub_1C372B4(this);
    }
    System_Text_StringBuilder__Append_63646720(v6, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8717/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                        0);
    v26 = v2->fields.CS___8__locals1;
    if ( !v26 )
      goto LABEL_68;
    v27 = v26->fields.__4__this;
    if ( !v27 )
      goto LABEL_68;
    v28 = this;
    v29 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v27->fields.overQpValue, 0);
    v30 = System_String__Format((System_String_o *)v28, v29, 0);
    v32 = Method_System_Array_Empty_object___;
    v33 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v33 )
    {
      sub_1C877C8(Method_System_Array_Empty_object___);
      v33 = v32[7];
    }
    v34 = *(_QWORD *)(v33 + 16);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = ((__int64 (*)(void))sub_1C8776C)();
    if ( !*(_DWORD *)(v34 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v34);
    v35 = *(_QWORD *)(v32[7] + 16LL);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1C8776C(inited);
    System_Text_StringBuilder__AppendFormat_63653260(v6, v30, **(System_Object_array ***)(v35 + 184), 0);
  }
LABEL_61:
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v2->fields.giftList )
    goto LABEL_68;
  v36 = (CommonUI_o *)this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                      (System_Collections_Generic_List_object__o *)v2->fields.giftList,
                                                                      (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v6 )
    goto LABEL_68;
  v37 = this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
                                                                      v6,
                                                                      v6->klass->vtable._3_ToString.method);
  v38 = (Il2CppObject *)v2->fields.CS___8__locals1;
  if ( !v38 )
    goto LABEL_68;
  klass = (MissionRewardGetDialog_ClickDelegate_o *)v38[3].klass;
  v40 = this;
  if ( !klass )
  {
    klass = (MissionRewardGetDialog_ClickDelegate_o *)sub_1C372A4(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      klass,
      v38,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__,
      0);
    v38[3].klass = (Il2CppClass *)klass;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1C36FFC(&v38[3], klass);
  }
  if ( !v36 )
    goto LABEL_68;
  CommonUI__OpenMissionRewardGetDialog(
    v36,
    (GiftEntity_array *)v37,
    (System_String_o *)v40,
    klass,
    v2->fields.isGetNoReward,
    0);
}


void EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  MissionListViewManager_o *v4; // x20
  System_Action_o *klass; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C3D424 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__);
    byte_4C3D424 = 1;
  }
  monitor = v2[2].monitor;
  if ( !monitor )
    goto LABEL_8;
  v4 = (MissionListViewManager_o *)*((_QWORD *)monitor + 2);
  klass = (System_Action_o *)v2[3].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__,
      0);
    v2[3].klass = (Il2CppClass *)klass;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1C36FFC(&v2[3], klass);
  }
  if ( !v4 )
LABEL_8:
    sub_1C372B4(this);
  MissionListViewManager__StartSvtListGetEffect(v4, 0, klass, 0);
}


void EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__5(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct EventMissionItemListViewManager_o *_4__this; // x8
  Il2CppObject *v6; // x20
  System_String_o *v7; // x0
  Il2CppObject *v8; // x23
  System_Action_o *monitor; // x22
  System_String_o *v10; // x19
  System_String_o *v11; // x21

  if ( (byte_4C3D425 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__);
    sub_1C37058(&StringLiteral_8676/*"MISSION_ACTION_SUCCESS"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D425 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  SummonAssetManager__UnloadSummonAssets(Instance, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8676/*"MISSION_ACTION_SUCCESS"*/, 0);
  Instance = (SummonAssetManager_o *)System_String__Format(v7, (Il2CppObject *)this->fields.sendName, 0);
  v8 = (Il2CppObject *)this->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_14;
  monitor = (System_Action_o *)v8[3].monitor;
  v10 = (System_String_o *)Instance;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      v8,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__,
      0);
    v8[3].monitor = monitor;
    Instance = (SummonAssetManager_o *)sub_1C36FFC(&v8[3].monitor, monitor);
  }
  if ( !v6 )
LABEL_14:
    sub_1C372B4(Instance);
  CommonUI__OpenNotificationDialog((CommonUI_o *)v6, v11, v10, monitor, 150, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void EventMissionItemListViewManager___c__DisplayClass59_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMissionItemListViewManager___c__DisplayClass59_0___afterReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 1;
}


bool EventMissionItemListViewManager___c__DisplayClass59_0___afterReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void EventMissionItemListViewManager__afterReward_d__59___ctor(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventMissionItemListViewManager__afterReward_d__59__MoveNext(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x20
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x2
  System_Func_bool__o *v9; // x20
  UnityEngine_WaitUntil_o *v10; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4C3D427 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__);
    sub_1C37058(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__);
    sub_1C37058(&EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C37058(&StringLiteral_5441/*"END_EFFECT"*/);
    byte_4C3D427 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0);
    if ( !_4__this )
      goto LABEL_13;
    Instance = (Il2CppObject *)_4__this->fields.targetFSM;
    if ( !Instance )
      goto LABEL_13;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5441/*"END_EFFECT"*/, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = sub_1C372A4(EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( v5 )
    {
      *(_BYTE *)(v5 + 16) = 0;
      v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v7,
        (Il2CppObject *)v5,
        Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__,
        0);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v7, v8);
        v9 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__,
          0);
        v10 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v10, v9, 0);
        this->fields.__2__current = (Il2CppObject *)v10;
        p__2__current = &this->fields.__2__current;
        sub_1C36FFC(p__2__current, v10);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_13:
    sub_1C372B4(Instance);
  }
  return 0;
}


Il2CppObject *EventMissionItemListViewManager__afterReward_d__59__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventMissionItemListViewManager__afterReward_d__59__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_EventMissionItemListViewManager__afterReward_d__59_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *EventMissionItemListViewManager__afterReward_d__59__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventMissionItemListViewManager__afterReward_d__59__System_IDisposable_Dispose(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  ;
}


void EventMissionItemListViewManager_resData___ctor(
        EventMissionItemListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}