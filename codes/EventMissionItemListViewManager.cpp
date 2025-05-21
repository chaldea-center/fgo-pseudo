void __fastcall EventMissionItemListViewManager___ctor(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B3F042 & 1) == 0 )
  {
    sub_1BDB878(&MissionListViewManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v3);
    byte_4B3F042 = 1;
  }
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C(&this->fields.dialogTitle);
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C(&this->fields.dialogMessage);
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C(&this->fields.dialogGetable);
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager__AcceptReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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
  Il2CppObject *v35; // x23
  __int64 Instance; // x0
  GiftEntity_o *v37; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x20
  struct EventMissionEntity_o *v40; // x8
  const MethodInfo *v41; // x1
  System_Text_StringBuilder_o *v42; // x21
  System_Text_StringBuilder_o *v43; // x21
  __int64 v44; // x25
  __int64 v45; // x26
  __int64 v46; // x2
  const MethodInfo *v47; // x3
  ItemMaster_o *v48; // x23
  unsigned __int64 v49; // x21
  System_Collections_Generic_List_object__o *v50; // x25
  System_Collections_Generic_List_object__o *v51; // x24
  il2cpp_array_size_t v52; // w22
  Il2CppClass **v53; // x21
  Il2CppClass *v54; // x8
  GiftEntity_o **v55; // x21
  Il2CppClass *v56; // t1
  ServantEntity_o *v57; // x26
  bool IsCombineMaterial; // w27
  System_String_o *v59; // x0
  System_Text_StringBuilder_o *v60; // x27
  __int64 v61; // x4
  Il2CppObject *v62; // x26
  Il2CppObject *v63; // x0
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x28
  Il2CppClass **v72; // x0
  char v73; // w29
  bool IsCountableWithPlus; // w0
  Il2CppObject **v75; // x8
  Il2CppObject *v76; // x27
  System_Text_StringBuilder_o *v77; // x26
  System_String_o *v78; // x0
  __int64 v79; // x4
  _QWORD *v80; // x9
  System_String_o *v81; // x28
  Il2CppObject *v82; // x0
  __int64 v83; // x8
  System_Text_StringBuilder_o *v84; // x27
  System_Collections_Generic_List_object__o *v85; // x22
  System_Action_o *v86; // x22
  EventRewardSetEntity_o *SetRewardData; // x23
  Il2CppObject **v88; // x20
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *v90; // x19
  System_Action_o *v91; // x20
  Il2CppObject *v92; // x19
  System_String_o *v93; // x0
  System_String_o *v94; // x0
  Il2CppObject *v95; // x22
  System_String_o *v96; // x20
  System_Action_o *v97; // x21
  __int64 v98; // [xsp+40h] [xbp-80h]
  __int64 v99; // [xsp+48h] [xbp-78h]
  int v100; // [xsp+50h] [xbp-70h]
  int64_t getQpValue; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B3F02D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_GiftMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BDB878(&int_TypeInfo, v8);
    sub_1BDB878(&long_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_GiftEntity__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_GiftEntity___ctor___77023344, v13);
    sub_1BDB878(&System_Collections_Generic_List_GiftEntity__TypeInfo, v14);
    sub_1BDB878(&LocalizationManager_TypeInfo, v15);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BDB878(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v18);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v19);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v20);
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, v21);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__, v22);
    sub_1BDB878(&EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo, v23);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__, v24);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__, v25);
    sub_1BDB878(&EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo, v26);
    sub_1BDB878(&StringLiteral_8669/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v27);
    sub_1BDB878(&StringLiteral_8668/*"MISSION_ACTION_SUCCESS"*/, v28);
    sub_1BDB878(&StringLiteral_25303/*"{0}×{1:#,0}"*/, v29);
    sub_1BDB878(&StringLiteral_25354/*"×"*/, v30);
    sub_1BDB878(&StringLiteral_8664/*"MISSION_ACTION_ITEM_FORMAT"*/, v31);
    sub_1BDB878(&StringLiteral_1/*""*/, v32);
    sub_1BDB878(&StringLiteral_49/*"\n "*/, v33);
    sub_1BDB878(&StringLiteral_25658/*"＋"*/, v34);
    byte_4B3F02D = 1;
  }
  v35 = (Il2CppObject *)sub_1BDBAC4(EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor(v35, 0LL);
  if ( !v35 )
    goto LABEL_107;
  v35[1].klass = (Il2CppClass *)this;
  sub_1BDB81C(&v35[1]);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_107;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_107;
  if ( !Instance )
    goto LABEL_107;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v40 = this->fields.missionToRecieve;
  if ( !v40 )
    goto LABEL_107;
  if ( !Instance )
    goto LABEL_107;
  AutomatedAction__SetStatusMissionNotify((AutomatedAction_o *)Instance, v40->fields.id, 5, 0, 0LL);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v41);
  v42 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v42, 0LL);
  v35[2].klass = (Il2CppClass *)v42;
  sub_1BDB81C(&v35[2]);
  v43 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v43, 0LL);
  v35[1].monitor = v43;
  sub_1BDB81C(&v35[1].monitor);
  v44 = sub_1BDBAC4(EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_107;
  *(_QWORD *)(v44 + 40) = v35;
  sub_1BDB81C(v44 + 40);
  Instance = (__int64)this->fields.missionToRecieve;
  if ( !Instance )
    goto LABEL_107;
  if ( *(_DWORD *)(Instance + 80) == 1 )
  {
    *(_DWORD *)(v44 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_107;
    v45 = *(_QWORD *)&GiftListById->max_length;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_107;
    v99 = v44 + 40;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
    v48 = (ItemMaster_o *)Instance;
    if ( (int)v45 >= 1 )
    {
      v49 = 0LL;
      while ( v49 < GiftListById->max_length )
      {
        Instance = EventMissionItemListViewManager__IsDialogGift(this, GiftListById->m_Items[v49], v48, v47);
        if ( (Instance & 1) != 0 )
          ++*(_DWORD *)(v44 + 24);
        if ( (unsigned int)v45 == ++v49 )
          goto LABEL_20;
      }
LABEL_108:
      sub_1BDBADC(Instance, v37, v46, v47);
    }
LABEL_20:
    v98 = v44;
    *(_BYTE *)(v44 + 28) = 1;
    v50 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v50,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v51 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v51,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)v45 >= 1 )
    {
      v52 = 0;
      v100 = v45;
      while ( v52 < GiftListById->max_length )
      {
        v53 = &GiftListById->obj.klass + (int)v52;
        v56 = v53[4];
        v55 = (GiftEntity_o **)(v53 + 4);
        v54 = v56;
        if ( !v56 )
          goto LABEL_107;
        Instance = Gift__IsServant_39448868(HIDWORD(v54->_1.name), 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_107;
          Instance = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( v52 >= GiftListById->max_length )
            goto LABEL_108;
          if ( !*v55 )
            goto LABEL_107;
          if ( !Instance )
            goto LABEL_107;
          Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                (*v55)->fields.objectId,
                                (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_107;
          v57 = (ServantEntity_o *)Instance;
          IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL);
          Instance = SvtType__IsStatusUp(v57->fields.type, 0LL);
          if ( IsCombineMaterial || (Instance & 1) != 0 )
          {
            if ( !*(_QWORD *)v99 )
              goto LABEL_107;
            Instance = *(_QWORD *)(*(_QWORD *)v99 + 32LL);
            if ( !Instance )
              goto LABEL_107;
            v59 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 360LL))(
                                       Instance,
                                       *(_QWORD *)(*(_QWORD *)Instance + 368LL));
            Instance = System_String__IsNullOrEmpty(v59, 0LL);
            if ( (Instance & 1) == 0 )
            {
              if ( !*(_QWORD *)v99 )
                goto LABEL_107;
              Instance = *(_QWORD *)(*(_QWORD *)v99 + 32LL);
              if ( !Instance )
                goto LABEL_107;
              Instance = (__int64)System_Text_StringBuilder__Append_62657444(
                                    (System_Text_StringBuilder_o *)Instance,
                                    (System_String_o *)StringLiteral_49/*"\n "*/,
                                    0LL);
            }
            if ( !*(_QWORD *)v99 )
              goto LABEL_107;
            v60 = *(System_Text_StringBuilder_o **)(*(_QWORD *)v99 + 32LL);
            Instance = (__int64)ServantEntity__getName(v57, 0, -1, 0, 0LL);
            if ( v52 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !*v55 )
              goto LABEL_107;
            v62 = (Il2CppObject *)Instance;
            LODWORD(getQpValue) = (*v55)->fields.num;
            v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &getQpValue, v46, v47, v61);
            Instance = (__int64)System_String__Format_62613552((System_String_o *)StringLiteral_25303/*"{0}×{1:#,0}"*/, v62, v63, 0LL);
            if ( !v60 )
              goto LABEL_107;
            Instance = (__int64)System_Text_StringBuilder__Append_62657444(v60, (System_String_o *)Instance, 0LL);
            if ( v52 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !v51 )
              goto LABEL_107;
            v37 = *v55;
            items = v51->fields._items;
            v65 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v51->fields._version;
            if ( !items )
              goto LABEL_107;
            size = v51->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v51,
                (Il2CppObject *)v37,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
            }
            else
            {
              v67 = &items->obj.klass + size;
              v51->fields._size = size + 1;
              v67[4] = (Il2CppClass *)v37;
              Instance = sub_1BDB81C(v67 + 4);
            }
          }
        }
        else
        {
          if ( v52 >= GiftListById->max_length )
            goto LABEL_108;
          Instance = EventMissionItemListViewManager__IsDialogGift(this, *v55, v48, v47);
          if ( (Instance & 1) != 0 )
          {
            if ( v52 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !*v55 || !v48 )
              goto LABEL_107;
            Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v48,
                                  (*v55)->fields.objectId,
                                  (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v52 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !v50 )
              goto LABEL_107;
            v37 = *v55;
            v68 = v50->fields._items;
            v69 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v50->fields._version;
            if ( !v68 )
              goto LABEL_107;
            v70 = v50->fields._size;
            v71 = Instance;
            if ( (unsigned int)v70 >= v68->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v50,
                (Il2CppObject *)v37,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
            }
            else
            {
              v72 = &v68->obj.klass + v70;
              v50->fields._size = v70 + 1;
              v72[4] = (Il2CppClass *)v37;
              Instance = sub_1BDB81C(v72 + 4);
            }
            if ( v52 >= GiftListById->max_length )
              goto LABEL_108;
            Instance = (__int64)*v55;
            if ( !*v55 )
              goto LABEL_107;
            Instance = GiftEntity__isQp((GiftEntity_o *)Instance, 0LL);
            v73 = Instance;
            if ( (Instance & 1) == 0 || !this->fields.isQpAlreadyMax )
            {
              *(_BYTE *)(v98 + 28) = 0;
              if ( !v71 )
                goto LABEL_107;
              IsCountableWithPlus = ItemType__IsCountableWithPlus(*(_DWORD *)(v71 + 48), 0LL);
              v75 = (Il2CppObject **)&StringLiteral_25658/*"＋"*/;
              if ( !IsCountableWithPlus )
                v75 = (Il2CppObject **)&StringLiteral_25354/*"×"*/;
              v76 = *v75;
              v77 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v77, 0LL);
              if ( !v77 )
                goto LABEL_107;
              System_Text_StringBuilder__Append_62657444(v77, *(System_String_o **)(v71 + 24), 0LL);
              if ( (v73 & 1) != 0 && this->fields.isQpMaxAlert && this->fields.getQpValue )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v78 = LocalizationManager__Get((System_String_o *)StringLiteral_8669/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                v80 = &long_TypeInfo;
                v81 = v78;
                getQpValue = this->fields.getQpValue;
              }
              else
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8669/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                if ( v52 >= GiftListById->max_length )
                  goto LABEL_108;
                if ( !*v55 )
                  goto LABEL_107;
                v80 = &int_TypeInfo;
                v81 = (System_String_o *)Instance;
                LODWORD(getQpValue) = (*v55)->fields.num;
              }
              v82 = (Il2CppObject *)j_il2cpp_value_box_0(*v80, &getQpValue, v46, v47, v79);
              Instance = (__int64)System_Text_StringBuilder__AppendFormat_62663796(v77, v81, v76, v82, 0LL);
              v83 = *(_QWORD *)v99;
              if ( !*(_QWORD *)v99 )
                goto LABEL_107;
              v84 = *(System_Text_StringBuilder_o **)(v83 + 24);
              if ( *(int *)(v98 + 24) >= 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8664/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v84 )
                  goto LABEL_107;
                Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                                      v84,
                                      (System_String_o *)Instance,
                                      (Il2CppObject *)v77,
                                      0LL);
                if ( !*(_QWORD *)v99 )
                  goto LABEL_107;
                Instance = *(_QWORD *)(*(_QWORD *)v99 + 24LL);
                if ( !Instance )
                  goto LABEL_107;
                Instance = (__int64)System_Text_StringBuilder__Append_62657444(
                                      (System_Text_StringBuilder_o *)Instance,
                                      (System_String_o *)StringLiteral_49/*"\n "*/,
                                      0LL);
              }
              else
              {
                if ( !v84 )
                  goto LABEL_107;
                Instance = (__int64)System_Text_StringBuilder__Append_62658072(
                                      *(System_Text_StringBuilder_o **)(v83 + 24),
                                      v77,
                                      0LL);
              }
            }
          }
        }
        if ( v100 == ++v52 )
          goto LABEL_89;
      }
      goto LABEL_108;
    }
LABEL_89:
    v85 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_57497272(
      v85,
      (System_Collections_Generic_IEnumerable_T__o *)v50,
      (const MethodInfo_36D56B8 *)Method_System_Collections_Generic_List_GiftEntity___ctor___77023344);
    *(_QWORD *)(v98 + 16) = v85;
    sub_1BDB81C(v98 + 16);
    Instance = *(_QWORD *)(v98 + 16);
    if ( !Instance )
      goto LABEL_107;
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)Instance,
      (System_Collections_Generic_IEnumerable_T__o *)v51,
      (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v86 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v86,
      (Il2CppObject *)v98,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__,
      0LL);
    if ( this->fields.isTreasureEffect )
    {
      Instance = (__int64)this->fields.eventRootComponent;
      if ( Instance )
      {
        EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)Instance, 0LL);
        MissionListViewManager__StartEventMissionClearItemAction(
          (MissionListViewManager_o *)this,
          GiftListById,
          0,
          v86,
          0LL);
        return;
      }
LABEL_107:
      sub_1BDBAD4(Instance, v37);
    }
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v86, 0LL);
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Instance, 0LL);
    *(_QWORD *)(v44 + 32) = StringLiteral_1/*""*/;
    v88 = (Il2CppObject **)(v44 + 32);
    Instance = sub_1BDB81C(v44 + 32);
    if ( !SetRewardData )
      goto LABEL_107;
    *v88 = (Il2CppObject *)SetRewardData->fields.name;
    sub_1BDB81C(v44 + 32);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && *(_QWORD *)&getSvtList->max_length )
    {
      Instance = (__int64)this->fields.touchBlockObj;
      if ( !Instance )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v90 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v91 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v91,
        (Il2CppObject *)v44,
        Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__,
        0LL);
      if ( !v90 )
        goto LABEL_107;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)v90, v91, 0LL);
    }
    else
    {
      v92 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v93 = LocalizationManager__Get((System_String_o *)StringLiteral_8668/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v94 = System_String__Format(v93, *v88, 0LL);
      v95 = *(Il2CppObject **)(v44 + 40);
      v96 = v94;
      v97 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v97,
        v95,
        Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__,
        0LL);
      if ( !v92 )
        goto LABEL_107;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v92,
        (System_String_o *)StringLiteral_1/*""*/,
        v96,
        v97,
        150,
        0,
        0,
        0,
        1,
        0,
        1,
        0,
        0LL,
        0.0,
        0,
        0LL);
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_107;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__CreateList(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_array *missionList,
        int32_t eventId,
        bool isDailyMission,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  EventMissionItemListViewManager__CreateList_31062484(this, missionList, eventId, isDailyMission, 1, v5);
}


void __fastcall EventMissionItemListViewManager__CreateList_31062484(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_array *missionList,
        int32_t eventId,
        bool isDailyMission,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  bool v10; // w23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 Instance; // x0
  __int64 v21; // x1
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Entity; // x23
  bool v24; // w9
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x8
  unsigned __int64 v28; // x26
  bool v29; // w22
  EventMissionEntity_o *v30; // x25
  System_Collections_Generic_List_object__o *itemList; // x23
  EventMissionItemListViewItem_o *v32; // x24
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  struct ListViewSort_o *sort; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x21
  UILabel_o *v40; // x21

  v10 = isTouchListEnabled;
  if ( (byte_4B3F01C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMaster___, missionList);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_1BDB878(&EventMissionItemListViewItem_TypeInfo, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1BDB878(&LocalizationManager_TypeInfo, v14);
    sub_1BDB878(&NetworkManager_TypeInfo, v15);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v16);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BDB878(&UserMissionNewManager_TypeInfo, v18);
    sub_1BDB878(&StringLiteral_8672/*"MISSION_EMPTY_TXT"*/, v19);
    byte_4B3F01C = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v10;
  if ( !scrollView )
    goto LABEL_36;
  scrollView->fields.disableDragIfFits = 1;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_36;
  v24 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  this->fields.isEndEvent = v24;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  Instance = UserMissionNewManager__ReadData(0LL);
  if ( !missionList )
    goto LABEL_36;
  v27 = *(_QWORD *)&missionList->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    v29 = isDailyMission;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v27 )
        sub_1BDBADC(Instance, v21, v25, v26);
      v30 = missionList->m_Items[v28];
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v32 = (EventMissionItemListViewItem_o *)sub_1BDBAC4(EventMissionItemListViewItem_TypeInfo);
      EventMissionItemListViewItem___ctor(v32, v30, v29, v33);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v32,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v32;
        Instance = sub_1BDB81C(v37 + 4);
      }
      LODWORD(v27) = missionList->max_length;
      if ( (__int64)++v28 >= (int)v27 )
        goto LABEL_24;
    }
LABEL_36:
    sub_1BDBAD4(Instance, v21);
  }
LABEL_24:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1BDB81C(&this->fields.baseSortInfo);
  }
  if ( !byte_4B3F0D2 )
  {
    sub_1BDB878(&EventRewardSaveData_TypeInfo, sort);
    byte_4B3F0D2 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
  EventMissionItemListViewManager__setList(this, (const MethodInfo *)sort);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v40 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8672/*"MISSION_EMPTY_TXT"*/, 0LL);
    if ( !v40 )
      goto LABEL_36;
    UILabel__set_text(v40, (System_String_o *)Instance, 0LL);
  }
  this->fields.currentEventId = eventId;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
TerminalTransitionInfo_o *__fastcall EventMissionItemListViewManager__CreateTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v11; // x21
  EventMissionActionInfo_o *v12; // x20
  TerminalTransitionInfo_o *v13; // x21
  EventMissionItemListViewManager_o *v14; // x0
  const MethodInfo *v15; // x2

  if ( (byte_4B3F02B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionId);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v4);
    sub_1BDB878(&EventMissionActionInfo_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BDB878(&TerminalTransitionInfo_TypeInfo, v7);
    byte_4B3F02B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_15;
  EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                            (EventMissionActionAddMaster_o *)Instance,
                                            missionId,
                                            5,
                                            4,
                                            0LL);
  if ( EntityFromIdProgressTypeAndActionType )
  {
    v11 = EntityFromIdProgressTypeAndActionType;
    v12 = (EventMissionActionInfo_o *)sub_1BDBAC4(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor_43827660(v12, v11, 0LL);
LABEL_11:
    v13 = (TerminalTransitionInfo_o *)sub_1BDBAC4(TerminalTransitionInfo_TypeInfo);
    TerminalTransitionInfo___ctor(v13, 0LL);
    if ( v13 )
    {
      v13->fields.missionId = missionId;
      if ( v12 )
      {
        v13->fields.afterActionVals = v12->fields.vals;
        v14 = (EventMissionItemListViewManager_o *)sub_1BDB81C(&v13->fields.afterActionVals);
        v13->fields.voiceAssetName = EventMissionItemListViewManager__GetVoiceAssetName(v14, v12->fields.vals, v15);
        sub_1BDB81C(&v13->fields.voiceAssetName);
        return v13;
      }
    }
LABEL_15:
    sub_1BDBAD4(Instance, v9);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_15;
  v13 = (TerminalTransitionInfo_o *)EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionId,
                                      5,
                                      4,
                                      0LL);
  if ( v13 )
  {
    v12 = (EventMissionActionInfo_o *)sub_1BDBAC4(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v12, (EventMissionActionEntity_o *)v13, 0LL);
    goto LABEL_11;
  }
  return v13;
}


void __fastcall EventMissionItemListViewManager__Decide(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventMissionItemListViewManager__dialogCallback(this, 1, v2);
}


void __fastcall EventMissionItemListViewManager__DestroyList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


float __fastcall EventMissionItemListViewManager__DoMoveEaseOut(
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


void __fastcall EventMissionItemListViewManager__EndMaxErrorDialog(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventMissionItemListViewManager__dialogCallback(this, 0, v2);
}


int32_t __fastcall EventMissionItemListViewManager__GetCostumeReleaseItemObjectId(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.costumeReleaseItemObjectId;
}


bool __fastcall EventMissionItemListViewManager__GetIsCostumeReleaseItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isGetCostumeReleaseItem;
}


bool __fastcall EventMissionItemListViewManager__GetIsQpMaxAlert(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_String_o **p_dialogMessage; // x20
  int64_t *p_overQpValue; // x26
  System_String_o *SelfUserGame; // x0
  __int64 v12; // x1
  System_String_o *v13; // x22
  int64_t klass; // x23
  int64_t QpMax; // x8
  System_String_c *v16; // x23
  __int64 v17; // x24
  System_String_o *v18; // x23
  Il2CppObject *v19; // x24
  System_String_o *v20; // x0
  BalanceConfig_c *v21; // x8
  Il2CppObject *v22; // x25
  Il2CppObject *v23; // x0
  int64_t v24; // x8
  int64_t num; // x8
  System_String_o *v26; // x21
  System_String_o *NumberFormat; // x0
  int64_t v28; // x8
  Il2CppObject *v29; // x22
  System_String_o *NumberFormatLong; // x0
  BalanceConfig_c *v31; // x8
  Il2CppObject *v32; // x23
  Il2CppObject *v33; // x0
  bool result; // w0

  if ( (byte_4B3F03E & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, giftEnt);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_8707/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v6);
    sub_1BDB878(&StringLiteral_8710/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v7);
    sub_1BDB878(&StringLiteral_1/*""*/, v8);
    byte_4B3F03E = 1;
  }
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C(&this->fields.dialogTitle);
  p_dialogMessage = &this->fields.dialogMessage;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C(&this->fields.dialogMessage);
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C(&this->fields.dialogGetable);
  p_overQpValue = &this->fields.overQpValue;
  this->fields.isQpAlreadyMax = 0;
  *(_OWORD *)&this->fields.overQpValue = 0u;
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_24;
  v13 = SelfUserGame;
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
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_8707/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    if ( giftEnt )
    {
      v26 = SelfUserGame;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
      v28 = (int64_t)v13[4].klass;
      v29 = (Il2CppObject *)NumberFormat;
      NumberFormatLong = LocalizationManager__GetNumberFormatLong(v28, 0LL);
      v31 = BalanceConfig_TypeInfo;
      v32 = (Il2CppObject *)NumberFormatLong;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v31 = BalanceConfig_TypeInfo;
      }
      v33 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v31->static_fields->QpMax, 0LL);
      *p_dialogMessage = System_String__Format_62613620(v26, v29, v32, v33, 0LL);
      sub_1BDB81C(p_dialogMessage);
      num = giftEnt->fields.num;
      goto LABEL_22;
    }
LABEL_24:
    sub_1BDBAD4(SelfUserGame, v12);
  }
  if ( !giftEnt )
    goto LABEL_24;
  v16 = v13[4].klass;
  v17 = giftEnt->fields.num;
  if ( !LODWORD(SelfUserGame[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(SelfUserGame);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( (__int64)v16 + v17 > QpMax )
  {
    this->fields.isQpAlreadyMax = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8710/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    v19 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
    v20 = LocalizationManager__GetNumberFormatLong((int64_t)v13[4].klass, 0LL);
    v21 = BalanceConfig_TypeInfo;
    v22 = (Il2CppObject *)v20;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    v23 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v21->static_fields->QpMax, 0LL);
    this->fields.dialogMessage = System_String__Format_62613620(v18, v19, v22, v23, 0LL);
    sub_1BDB81C(&this->fields.dialogMessage);
    v24 = BalanceConfig_TypeInfo->static_fields->QpMax - (unsigned __int64)v13[4].klass;
    this->fields.getQpValue = v24;
    num = giftEnt->fields.num - v24;
LABEL_22:
    result = 1;
    *p_overQpValue = num;
    return result;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
EventMissionItemListViewItem_o *__fastcall EventMissionItemListViewManager__GetItem(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventMissionItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B3F022 & 1) == 0 )
  {
    sub_1BDB878(&EventMissionItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B3F022 = 1;
  }
  result = (EventMissionItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventMissionItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 index,
                                                 (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventMissionItemListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


System_String_o *__fastcall EventMissionItemListViewManager__GetReplaceDialogMessage(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *beforeGiftEntity,
        GiftEntity_o *AfterGiftEntity,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ConstantStrMaster_o *Master_object; // x0
  __int64 v13; // x1
  ConstantStrMaster_o *v14; // x21
  System_String_o *Value; // x24
  System_String_o *v16; // x23
  System_String_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  System_Object_array *v20; // x22
  Il2CppObject *v21; // x20
  Il2CppObject *v22; // x19
  __int64 v24; // x0

  if ( (byte_4B3F024 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ConstantStrMaster___, beforeGiftEntity);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&object___TypeInfo, v8);
    sub_1BDB878(&StringLiteral_5653/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, v9);
    sub_1BDB878(&StringLiteral_5654/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, v10);
    sub_1BDB878(&StringLiteral_5721/*"EVENT_REWARD_REPLACE_MSG"*/, v11);
    byte_4B3F024 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_24;
  v14 = Master_object;
  Value = ConstantStrMaster__GetValue(Master_object, (System_String_o *)StringLiteral_5654/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, 0LL);
  v16 = ConstantStrMaster__GetValue(v14, (System_String_o *)StringLiteral_5653/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5721/*"EVENT_REWARD_REPLACE_MSG"*/, 0LL);
  Master_object = (ConstantStrMaster_o *)sub_1BDB920(object___TypeInfo, 4LL);
  if ( !Master_object )
    goto LABEL_24;
  v20 = (System_Object_array *)Master_object;
  if ( Value )
  {
    Master_object = (ConstantStrMaster_o *)sub_1BDB9B4(Value, Master_object->klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( !v20->max_length )
    goto LABEL_25;
  v20->m_Items[0] = (Il2CppObject *)Value;
  Master_object = (ConstantStrMaster_o *)sub_1BDB81C(v20->m_Items);
  if ( v16 )
  {
    Master_object = (ConstantStrMaster_o *)sub_1BDB9B4(v16, v20->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_25;
  v20->m_Items[1] = (Il2CppObject *)v16;
  Master_object = (ConstantStrMaster_o *)sub_1BDB81C(&v20->m_Items[1]);
  if ( !beforeGiftEntity )
    goto LABEL_24;
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(beforeGiftEntity, 0LL);
  v21 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1BDB9B4(Master_object, v20->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_26:
      v24 = sub_1BDBAF8();
      sub_1BDB9A0(v24, 0LL);
    }
  }
  if ( v20->max_length <= 2 )
    goto LABEL_25;
  v20->m_Items[2] = v21;
  Master_object = (ConstantStrMaster_o *)sub_1BDB81C(&v20->m_Items[2]);
  if ( !AfterGiftEntity )
LABEL_24:
    sub_1BDBAD4(Master_object, v13);
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(AfterGiftEntity, 0LL);
  v22 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1BDB9B4(Master_object, v20->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( v20->max_length <= 3 )
LABEL_25:
    sub_1BDBADC(Master_object, v13, v18, v19);
  v20->m_Items[3] = v22;
  sub_1BDB81C(&v20->m_Items[3]);
  return System_String__Format_62613688(v17, v20, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager__GetSelectEventMissionId(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectEventMissionId;
}


System_String_o *__fastcall EventMissionItemListViewManager__GetVoiceAssetName(
        EventMissionItemListViewManager_o *this,
        System_String_array *afterActionVals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  signed int max_length; // w8
  System_String_o **v8; // x20
  signed int v9; // w21
  System_String_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 methodPtr_low; // x9
  EventMissionItemListViewManager_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B3F02C & 1) == 0 )
  {
    sub_1BDB878(&EventRewardRootComponent_TypeInfo, afterActionVals);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    this = (EventMissionItemListViewManager_o *)sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B3F02C = 1;
  }
  if ( !afterActionVals || (max_length = afterActionVals->max_length, max_length < 2) )
  {
    v8 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v8;
  }
  v8 = (System_String_o **)&StringLiteral_1/*""*/;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)max_length )
      sub_1BDBADC(this, afterActionVals, method, v3);
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v9], 0LL);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v9 += 2;
    if ( v9 >= max_length )
      return *v8;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0LL )
    sub_1BDBAD4(Instance, v12);
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
    && (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardRootComponent_TypeInfo )
  {
    v8 = (System_String_o **)&Instance[98];
    return *v8;
  }
  v14 = (EventMissionItemListViewManager_o *)sub_1BDBD94(Instance);
  EventMissionItemListViewManager__AcceptReward(v14, v15);
  return result;
}


bool __fastcall EventMissionItemListViewManager__IsDialogGift(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *gift,
        ItemMaster_o *itmMst,
        const MethodInfo *method)
{
  MissionListViewManager_o *v6; // x19
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = (MissionListViewManager_o *)this;
  if ( (byte_4B3F041 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, gift);
    this = (EventMissionItemListViewManager_o *)sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B3F041 = 1;
  }
  entity = 0LL;
  if ( !gift )
    goto LABEL_18;
  if ( Gift__IsServant_39448868(gift->fields.type, 0LL) )
    return 0;
  if ( Gift__IsCommandCode_39449260(gift->fields.type, 0LL) )
    return 0;
  this = (EventMissionItemListViewManager_o *)Gift__IsCostumeRelease(gift->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !itmMst )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)itmMst,
         &entity,
         gift->fields.objectId,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity && this )
    {
      if ( CommonUI__IsGetItemEffect((CommonUI_o *)this, (int32_t)entity[1].klass, 0LL) )
        return 0;
      this = (EventMissionItemListViewManager_o *)MissionListViewManager__get_IsPlayGetEffect(v6, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 1;
      if ( entity )
        return MissionListViewManager__IsExcludeGetItemEffect(v6, (int32_t)entity[1].klass, 0LL);
    }
LABEL_18:
    sub_1BDBAD4(this, gift);
  }
  return 0;
}


void __fastcall EventMissionItemListViewManager__ModifyItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8
  DataManager_o *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  MissionListViewItem_o *current; // x22
  __int64 methodPtr_low; // x10
  __int64 MissionId; // x0
  __int64 v21; // x1
  struct EventMissionEntity_o *v22; // x8
  int32_t v23; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v25; // x1
  struct ListViewObject_o *v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B3F033 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1BDB878(&EventMissionItemListViewItem_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1BDB878(&NetworkManager_TypeInfo, v8);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B3F033 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.isEndEvent && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, v12);
      byte_4B3ED56 = 1;
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
                                        0LL),
          !this->fields.itemList) )
    {
LABEL_37:
      sub_1BDBAD4(Instance, v12);
    }
    v15 = Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)this->fields.itemList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v28 = v27;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v16 )
        break;
      current = (MissionListViewItem_o *)v28.fields._current;
      if ( !v28.fields._current
        || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventMissionItemListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1BDBAD4(v16, v17);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v28.fields._current, 0LL);
      v22 = this->fields.missionToRecieve;
      if ( !v22 )
        sub_1BDBAD4(MissionId, v21);
      v23 = MissionId;
      if ( (_DWORD)MissionId == v22->fields.id )
      {
        if ( !byte_4B3F0D4 )
        {
          MissionId = sub_1BDB878(&EventRewardSaveData_TypeInfo, v21);
          byte_4B3F0D4 = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v23;
        if ( !v15 )
          sub_1BDBAD4(MissionId, v21);
        MissionListViewItem__ModifyItem(current, *(_DWORD *)&v15->fields._DispLog == 5, 0LL);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v26 = current->fields.viewObject;
        if ( !v26 )
          sub_1BDBAD4(0LL, v25);
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v26->klass->vtable._5_SetItem.method)(
          v26,
          current,
          v26->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__MoveEaseScroll(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinish,
        EventMissionActionInfo_o *eventMissionActionInfo,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  EventMissionItemListViewItem_o *Item; // x0
  __int64 v14; // x1
  ListViewItem_o *v15; // x22
  UnityEngine_Object_o *viewObject; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v18; // x3
  System_Collections_IEnumerator_o *v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B3F01E & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v12);
    byte_4B3F01E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Item = EventMissionItemListViewManager__GetItem(this, index, (const MethodInfo *)onFinish);
  if ( !Item )
    goto LABEL_16;
  v15 = (ListViewItem_o *)Item;
  viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    itemSortList = this->fields.itemSortList;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( (ListViewItem_o *)v20.fields._current == v15 )
        {
          viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v15, 0LL);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (EventMissionItemListViewItem_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( this->fields.tempFilterStatus == 1
      && (!eventMissionActionInfo || eventMissionActionInfo->fields.missionActionType == 4) )
    {
      v19 = EventMissionItemListViewManager__SetPreviousFilter(this, v15->fields.sortIndex, onFinish, v18);
    }
    else
    {
      v19 = EventMissionItemListViewManager__MoveEaseScroll_IE(this, v15->fields.sortIndex, onFinish, v18);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
  }
  else
  {
LABEL_16:
    if ( !onFinish )
      sub_1BDBAD4(Item, v14);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onFinish->fields.m_target)(
      onFinish->fields.original_method_info,
      *(_QWORD *)&onFinish->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__MoveEaseScroll_IE(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22

  if ( (byte_4B3F020 & 1) == 0 )
  {
    sub_1BDB878(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo, *(_QWORD *)&index);
    byte_4B3F020 = 1;
  }
  v7 = sub_1BDBAC4(EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BDB81C(v7 + 32);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1BDB81C(v7 + 48);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall EventMissionItemListViewManager__OnChangeAlphaAnim(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w21
  int32_t v7; // w20

  if ( (byte_4B3F036 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v3);
    byte_4B3F036 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                  this,
                                                                  v5);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v7,
                                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim((EventMissionItemListViewObject_o *)ObjectList, v5);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1BDBAD4(ObjectList, v5);
  }
}


void __fastcall EventMissionItemListViewManager__OnClickFilterList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_4B3F039 & 1) == 0 )
  {
    sub_1BDB878(&Method_EventMissionItemListViewManager_OnClickFilterList__, method);
    byte_4B3F039 = 1;
  }
  v3 = Method_EventMissionItemListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_EventMissionItemListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_C22DD0[filterStatus];
  EventMissionItemListViewManager__setList(this, v5);
}


void __fastcall EventMissionItemListViewManager__OnClickListView(
        EventMissionItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
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
  __int64 v15; // x1
  Il2CppObject *v16; // x20
  MissionListViewItem_o *monitor; // x0
  MissionListViewItem_o *v18; // x1
  __int64 methodPtr_low; // x10
  MissionListViewItem_o **p_monitor; // x21
  int32_t selectNum; // w8
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v23; // x2
  GiftAddMaster_o *v24; // x22
  GiftAddEntity_o *ValidPriorDataById; // x0
  GiftAddEntity_o *v26; // x22
  int32_t giftId; // w25
  int32_t priorGiftId; // w25
  int32_t z_low; // w24
  ScrTerminalListTop_c *v30; // x0
  struct ScrTerminalListTop_StaticFields *static_fields; // x8
  struct System_String_o *TREASURE_GET_NORMAL; // x1
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  int32_t targetId; // w24
  struct System_String_o *OverwriteTreasureEffectId; // x1
  GiftMaster_o *v37; // x23
  GiftEntity_o *DataById; // x0
  GiftEntity_o *v39; // x22
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v41; // x2
  GiftEntity_array *OriginalGiftData; // x19
  GiftEntity_o *IconGiftEntity; // x0
  GiftEntity_o *v44; // x21
  Il2CppObject *Instance; // x19
  const MethodInfo *v46; // x3
  System_String_o *ReplaceDialogMessage; // x21
  System_Action_o *v48; // x22

  if ( (byte_4B3F023 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, obj);
    sub_1BDB878(&Method_DataManager_GetMaster_GiftAddMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_EventMissionItemListViewManager_OnClickListView__, v8);
    sub_1BDB878(&EventMissionItemListViewObject_TypeInfo, v9);
    sub_1BDB878(&MissionInfoMaker_TypeInfo, v10);
    sub_1BDB878(&ScrTerminalListTop_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__, v13);
    sub_1BDB878(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, v14);
    sub_1BDB878(&StringLiteral_1/*""*/, v15);
    byte_4B3F023 = 1;
  }
  v16 = (Il2CppObject *)sub_1BDBAC4(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_84;
  v16[1].klass = (Il2CppClass *)this;
  monitor = (MissionListViewItem_o *)sub_1BDB81C(&v16[1]);
  if ( this->fields.isClickListViewEnabled )
  {
    if ( !obj )
      goto LABEL_84;
    methodPtr_low = LOBYTE(EventMissionItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
      goto LABEL_84;
    if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewObject_TypeInfo )
      goto LABEL_84;
    v16[1].monitor = EventMissionItemListViewObject__GetItem(
                       (EventMissionItemListViewObject_o *)obj,
                       (const MethodInfo *)v18);
    p_monitor = (MissionListViewItem_o **)&v16[1].monitor;
    sub_1BDB81C(&v16[1].monitor);
    monitor = (MissionListViewItem_o *)v16[1].monitor;
    if ( !monitor )
      goto LABEL_84;
    monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(monitor, 0LL);
    if ( !monitor )
      goto LABEL_84;
    selectNum = monitor->fields.selectNum;
    *(_WORD *)&this->fields.isQpMaxAlert = 0;
    this->fields.selectEventMissionId = selectNum;
    monitor = *p_monitor;
    if ( !*p_monitor )
      goto LABEL_84;
    if ( (((__int64 (__fastcall *)(MissionListViewItem_o *, void *))monitor->klass->vtable._8_get_IsShowRewardInfo.method)(
            monitor,
            monitor->klass[1]._1.image) & 1) == 0 )
      goto LABEL_16;
    monitor = *p_monitor;
    if ( !*p_monitor )
      goto LABEL_84;
    monitor = (MissionListViewItem_o *)EventMissionItemListViewItem__get_IsHideReward(
                                         (EventMissionItemListViewItem_o *)monitor,
                                         (const MethodInfo *)v18);
    if ( ((unsigned __int8)monitor & 1) != 0 )
      goto LABEL_16;
    v18 = *p_monitor;
    if ( !*p_monitor )
      goto LABEL_84;
    if ( LOBYTE(v18[1].monitor) )
    {
LABEL_16:
      monitor = *p_monitor;
      if ( !*p_monitor )
        goto LABEL_84;
      if ( monitor->fields.progStatus == 3 )
      {
        if ( this->fields.filterStatus == 1 )
        {
          monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(monitor, 0LL);
          if ( !monitor )
            goto LABEL_84;
          this->fields.tempSelectDispNo = monitor->fields.sortValue0;
          monitor = *p_monitor;
          if ( !*p_monitor )
            goto LABEL_84;
        }
        if ( EventMissionItemListViewItem__GetIsRewardQp(
               (EventMissionItemListViewItem_o *)monitor,
               (const MethodInfo *)v18) )
        {
          monitor = *p_monitor;
          if ( !*p_monitor )
            goto LABEL_84;
          IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp(
                         (EventMissionItemListViewItem_o *)monitor,
                         (const MethodInfo *)v18);
          this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v23);
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        monitor = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GiftAddMaster___);
        if ( !*p_monitor )
          goto LABEL_84;
        v24 = (GiftAddMaster_o *)monitor;
        monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*p_monitor, 0LL);
        if ( !monitor || !v24 )
          goto LABEL_84;
        ValidPriorDataById = GiftAddMaster__GetValidPriorDataById(v24, HIDWORD(monitor->fields.sortValue2B), 0LL);
        v26 = ValidPriorDataById;
        if ( ValidPriorDataById && ValidPriorDataById->fields.priority >= 2 )
        {
          monitor = *p_monitor;
          if ( !*p_monitor )
            goto LABEL_84;
          giftId = v26->fields.giftId;
          monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(monitor, 0LL);
          if ( !monitor )
            goto LABEL_84;
          if ( giftId == HIDWORD(monitor->fields.sortValue2B) )
          {
            monitor = *p_monitor;
            if ( !*p_monitor )
              goto LABEL_84;
            priorGiftId = v26->fields.priorGiftId;
            monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(monitor, 0LL);
            if ( !monitor )
              goto LABEL_84;
            if ( priorGiftId != HIDWORD(monitor->fields.sortValue2B) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              monitor = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GiftAddMaster___);
              if ( !monitor )
                goto LABEL_84;
              v26 = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)monitor, v26->fields.priorGiftId, 0LL);
            }
          }
        }
        monitor = *p_monitor;
        if ( !*p_monitor )
          goto LABEL_84;
        monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(monitor, 0LL);
        if ( !monitor )
          goto LABEL_84;
        z_low = LODWORD(monitor->fields.basePosition.fields.z);
        this->fields.giftIconId = z_low;
        if ( z_low >= 1 )
        {
          v30 = ScrTerminalListTop_TypeInfo;
          if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
            v30 = ScrTerminalListTop_TypeInfo;
          }
          static_fields = v30->static_fields;
          if ( z_low <= 3 )
            TREASURE_GET_NORMAL = static_fields->TREASURE_GET_NORMAL;
          else
            TREASURE_GET_NORMAL = static_fields->PRIZE_GET_NORMAL;
          this->fields.useTreasureGetEffectName = TREASURE_GET_NORMAL;
          sub_1BDB81C(&this->fields.useTreasureGetEffectName);
        }
        if ( v26 )
        {
          monitor = *p_monitor;
          if ( !*p_monitor )
            goto LABEL_84;
          targetId = v26->fields.targetId;
          monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(monitor, 0LL);
          if ( !monitor )
            goto LABEL_84;
          if ( targetId == monitor->fields.selectNum )
          {
            OverwriteTreasureEffectId = GiftAddEntity__GetOverwriteTreasureEffectId(v26, 0LL);
            if ( !OverwriteTreasureEffectId )
              OverwriteTreasureEffectId = this->fields.useTreasureGetEffectName;
            this->fields.useTreasureGetEffectName = OverwriteTreasureEffectId;
            sub_1BDB81C(&this->fields.useTreasureGetEffectName);
            this->fields.overWriteTitleSpriteName = GiftAddEntity__GetOverWriteTitleSprite(v26, 0LL);
            sub_1BDB81C(&this->fields.overWriteTitleSpriteName);
          }
        }
        if ( this->fields.useTreasureGetEffectName )
          this->fields.isTreasureEffect = 1;
        if ( this->fields.overWriteTitleSpriteName )
          this->fields.isChangeTitleSprite = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        monitor = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GiftMaster___);
        if ( !*p_monitor
          || (v37 = (GiftMaster_o *)monitor,
              (monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*p_monitor, 0LL)) == 0LL)
          || !v37 )
        {
LABEL_84:
          sub_1BDBAD4(monitor, v18);
        }
        DataById = GiftMaster__getDataById(v37, HIDWORD(monitor->fields.sortValue2B), 0LL);
        if ( !DataById
          || (v39 = DataById, !DataById->fields._IsReplacedData_k__BackingField)
          || this->fields.isTreasureEffect
          || this->fields.giftIconId != -1 )
        {
          monitor = *p_monitor;
          if ( *p_monitor )
          {
            EventMissionEntity = MissionListViewItem__get_EventMissionEntity(monitor, 0LL);
            EventMissionItemListViewManager__recieveReward(this, EventMissionEntity, v41);
            return;
          }
          goto LABEL_84;
        }
        monitor = *p_monitor;
        if ( !*p_monitor )
          goto LABEL_84;
        monitor = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(monitor, 0LL);
        if ( !monitor )
          goto LABEL_84;
        OriginalGiftData = GiftMaster__GetOriginalGiftData(v37, HIDWORD(monitor->fields.sortValue2B), 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(OriginalGiftData, 0LL);
        if ( IconGiftEntity )
        {
          v44 = IconGiftEntity;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                                   (EventMissionItemListViewManager_o *)Instance,
                                   v44,
                                   v39,
                                   v46);
          v48 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v48,
            v16,
            Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__,
            0LL);
          if ( !Instance )
            goto LABEL_84;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            ReplaceDialogMessage,
            v48,
            -1,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            0LL,
            0.0,
            0,
            0LL);
        }
      }
      else
      {
        v33 = Method_EventMissionItemListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v33 = (_QWORD *)sub_1BDB890(Method_EventMissionItemListViewManager_OnClickListView__);
        v34 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v33, v33[4]);
        OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0, 0LL);
      }
    }
    else
    {
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, v18, 1, 0LL);
    }
  }
}


void __fastcall EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  GiftMaster_o *Master_object; // x0
  __int64 v12; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x0
  EventMissionItemListViewManager___c_c *v15; // x8
  System_Object_array *v16; // x21
  System_Func_object__bool__o *_9__78_0; // x22
  Il2CppObject *v18; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  struct EventMissionEntity_o *v20; // x8

  if ( (byte_4B3F03C & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_GiftEntity___, closeCallback);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&System_Func_GiftEntity__bool__TypeInfo, v8);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__, v9);
    sub_1BDB878(&EventMissionItemListViewManager___c_TypeInfo, v10);
    byte_4B3F03C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Master_object )
    goto LABEL_19;
  GiftListById = GiftMaster__GetGiftListById(Master_object, missionToRecieve->fields.giftId, 0LL);
  v15 = EventMissionItemListViewManager___c_TypeInfo;
  v16 = (System_Object_array *)GiftListById;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v15 = EventMissionItemListViewManager___c_TypeInfo;
  }
  _9__78_0 = (System_Func_object__bool__o *)v15->static_fields->__9__78_0;
  if ( !_9__78_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__78_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__78_0,
      v18,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__,
      0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__78_0 = (struct System_Func_GiftEntity__bool__o *)_9__78_0;
    sub_1BDB81C(&static_fields->__9__78_0);
  }
  if ( BasicHelper__Any_object__50450088(
         v16,
         (System_Func_T__bool__o *)_9__78_0,
         (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    Master_object = (GiftMaster_o *)this->fields.commandAssistLvUpDialog;
    if ( Master_object )
    {
      Master_object = (GiftMaster_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Master_object,
                                        (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
      v20 = this->fields.missionToRecieve;
      if ( v20 )
      {
        if ( Master_object )
        {
          CommandAssistLvUpDialogComponent__Open(
            (CommandAssistLvUpDialogComponent_o *)Master_object,
            this->fields.currentEventId,
            v20->fields.id,
            closeCallback,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1BDBAD4(Master_object, v12);
  }
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall EventMissionItemListViewManager__OpenQpMaxAlertDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x23
  System_String_o *dialogTitle; // x24
  System_String_o *dialogMessage; // x25
  System_String_o *dialogGetable; // x26
  System_String_o *v19; // x22
  System_Action_o *v20; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v22; // x29
  __int64 v23; // x0
  __int64 v24; // x1

  if ( (byte_4B3F03F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_EventMissionItemListViewManager_Decide__, v5);
    sub_1BDB878(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__, v6);
    sub_1BDB878(&Method_EventMissionItemListViewManager_TransitionToCombineScene__, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_11661/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v9);
    sub_1BDB878(&StringLiteral_11660/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v10);
    sub_1BDB878(&StringLiteral_11667/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v11);
    byte_4B3F03F = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_1BDB81C(&this->fields.dialogCallBack);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11661/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11667/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11660/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v19 = v14;
  v20 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0LL);
  onTransition = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0LL);
  v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0LL);
  if ( !qpMaxAlertDialog )
    sub_1BDBAD4(v23, v24);
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    v12,
    v13,
    v19,
    v20,
    onTransition,
    v22,
    1,
    0LL);
}


void __fastcall EventMissionItemListViewManager__RedisplayEventUI(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B3F03D & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&SceneList_TypeInfo, v3);
    byte_4B3F03D = 1;
  }
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
    if ( !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    SceneName = SceneList__getSceneName(72, 0LL);
    if ( !System_String__op_Inequality(name, SceneName, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( gameObject )
      {
        TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)gameObject, 0LL);
        return;
      }
LABEL_13:
      sub_1BDBAD4(gameObject, v6);
    }
  }
}


void __fastcall EventMissionItemListViewManager__RefrashListDisp(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v16; // w21
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B3F037 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1BDB878(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v8);
    byte_4B3F037 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v11 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v17;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    if ( i.fields._current )
    {
      methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (EventMissionItemListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionItemListViewItem_TypeInfo )
      {
        continue;
      }
    }
    sub_1BDBAD4(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v11 )
    goto LABEL_17;
  size = v11->fields._size;
  if ( size >= 1 )
  {
    v16 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v11,
                                                                  v16,
                                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v16 >= v11->fields._size )
        return;
    }
LABEL_17:
    sub_1BDBAD4(ObjectList, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__RefrashListDisp_31080836(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v16; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w22
  System_Collections_Generic_List_object__o *v20; // x23
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B3F038 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&missionId);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BDB878(&EventMissionItemListViewItem_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v10);
    byte_4B3F038 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    itemList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current
      || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventMissionItemListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_1BDBAD4(v12, v13);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v22.fields._current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(this, v16);
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  v18 = itemList;
  if ( size > 0 )
  {
    v19 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v18,
                                                                v19,
                                                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !itemList )
        break;
      v20 = itemList;
      itemList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewObject__GetItem(
                                                                (EventMissionItemListViewObject_o *)itemList,
                                                                *(const MethodInfo **)&missionId);
      if ( !itemList )
        break;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0LL) == missionId )
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))v20->klass->vtable._9_unknown.method)(
          v20,
          this->fields.isInput,
          v20->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v19 >= v18->fields._size )
        return;
    }
LABEL_21:
    sub_1BDBAD4(itemList, *(_QWORD *)&missionId);
  }
}


void __fastcall EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_4B3F02A & 1) == 0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B3F02A = 1;
  }
  if ( !byte_4B3F0D3 )
  {
    sub_1BDB878(&EventRewardSaveData_TypeInfo, method);
    byte_4B3F0D3 = 1;
  }
  TerminalTransitionInfo = EventMissionItemListViewManager__CreateTerminalTransitionInfo(
                             this,
                             EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField,
                             v2);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(TerminalTransitionInfo, 0LL);
}


void __fastcall EventMissionItemListViewManager__SetOpenItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v15; // x1
  struct EventMissionItemListViewItem_o *v16; // x21
  __int64 v17; // x1
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B3F034 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v6);
    sub_1BDB878(&StringLiteral_18856/*"ef_mission_extric01"*/, v7);
    sub_1BDB878(&StringLiteral_21665/*"modifyOpenItem"*/, v8);
    byte_4B3F034 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1BDBAD4(0LL, v10);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        ObjectList,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v22 = v21;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
        if ( !v11 )
          break;
        current = v22.fields._current;
        if ( !v22.fields._current )
          sub_1BDBAD4(v11, v12);
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v22.fields._current,
                                          v12);
        v16 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_1BDBAD4(0LL, v15);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4B3F0D4 )
          {
            sub_1BDB878(&EventRewardSaveData_TypeInfo, v17);
            byte_4B3F0D4 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v16;
          sub_1BDB81C(&this->fields.openTargetItem);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v16, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_18856/*"ef_mission_extric01"*/, transform, v20);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21665/*"modifyOpenItem"*/,
      this->fields.openItemTime,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__SetPreviousFilter(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22

  if ( (byte_4B3F01F & 1) == 0 )
  {
    sub_1BDB878(&EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo, *(_QWORD *)&index);
    byte_4B3F01F = 1;
  }
  v7 = sub_1BDBAC4(EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BDB81C(v7 + 32);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1BDB81C(v7 + 48);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__SetScrollEnable(
        EventMissionItemListViewManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  bool v5; // w20

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (v5 = enable,
        UnityEngine_Behaviour__set_enabled(scrollView, enable, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollBar) == 0LL) )
  {
    sub_1BDBAD4(scrollView, enable);
  }
  UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager__TransitionToCombineScene(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4B3F040 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3F040 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
  EventMissionItemListViewManager__dialogCallback(this, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionItemListViewManager___SetPreviousFilter_b__41_0(
        EventMissionItemListViewManager_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  int32_t tempSelectDispNo; // w22
  int32_t v8; // w8
  unsigned int v9; // w9
  int v10; // w8

  if ( (byte_4B3F043 & 1) == 0 )
  {
    sub_1BDB878(&System_Math_TypeInfo, *(_QWORD *)&x);
    byte_4B3F043 = 1;
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


void __fastcall EventMissionItemListViewManager___modifyOpenItem_b__66_0(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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
  System_Collections_Generic_List_object__o *v25; // x20
  void *Instance; // x0
  __int64 v27; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  System_Collections_Generic_List_object__o *EntityListFromIdProgressTypeAndActionType; // x0
  __int64 *v30; // x24
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v32; // x21
  __int64 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o *v39; // x0
  struct EventMissionEntity_o *v40; // x8
  Il2CppObject *v41; // x22
  EventMissionActionInfo_o *v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  System_Comparison_T__o *v49; // x21
  Il2CppObject *v50; // x22
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  const MethodInfo *targetMissionId; // x1
  int v53; // w8
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x8
  int32_t v57; // w0
  const MethodInfo *v58; // x2
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B3F045 & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_EventMissionActionInfo__TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v10);
    sub_1BDB878(&EventMissionActionInfo_TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v19);
    sub_1BDB878(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v20);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__, v22);
    sub_1BDB878(&EventMissionItemListViewManager___c_TypeInfo, v23);
    sub_1BDB878(&StringLiteral_16637/*"actionAfterCallback"*/, v24);
    byte_4B3F045 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  memset(&v60, 0, sizeof(v60));
  v25 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_47;
  EntityListFromIdProgressTypeAndActionType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType(
                                                                                             (EventMissionActionAddMaster_o *)Instance,
                                                                                             missionToRecieve->fields.id,
                                                                                             5,
                                                                                             3,
                                                                                             0LL);
  if ( EntityListFromIdProgressTypeAndActionType && EntityListFromIdProgressTypeAndActionType->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v59,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v61 = v59;
    v30 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v61,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v61.fields._current;
      v32 = (EventMissionActionInfo_o *)sub_1BDBAC4(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_43827660(v32, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v25 )
        sub_1BDBAD4(v33, v34);
      items = v25->fields._items;
      v36 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v25->fields._version;
      if ( !items )
        sub_1BDBAD4(v33, v34);
      size = v25->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)v32,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v32;
        sub_1BDB81C(v38 + 4);
      }
    }
    v39 = &v61;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v40 = this->fields.missionToRecieve;
    if ( !v40 )
      goto LABEL_47;
    if ( !Instance )
      goto LABEL_47;
    Instance = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
                 (EventMissionActionMaster_o *)Instance,
                 v40->fields.id,
                 5,
                 3,
                 0LL);
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v59,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v60 = v59;
    v30 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v60,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v41 = v60.fields._current;
      v42 = (EventMissionActionInfo_o *)sub_1BDBAC4(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v42, (EventMissionActionEntity_o *)v41, 0LL);
      if ( !v25 )
        sub_1BDBAD4(v43, v44);
      v45 = v25->fields._items;
      v46 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v25->fields._version;
      if ( !v45 )
        sub_1BDBAD4(v43, v44);
      v47 = v25->fields._size;
      if ( (unsigned int)v47 >= v45->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)v42,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &v45->obj.klass + v47;
        v25->fields._size = v47 + 1;
        v48[4] = (Il2CppClass *)v42;
        sub_1BDB81C(v48 + 4);
      }
    }
    v39 = &v60;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(v39, (const MethodInfo_346A2A0 *)*v30);
  Instance = EventMissionItemListViewManager___c_TypeInfo;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    Instance = EventMissionItemListViewManager___c_TypeInfo;
  }
  v49 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v49 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionItemListViewManager___c_TypeInfo;
    }
    v50 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v49 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_EventMissionActionInfo__TypeInfo);
    System_Comparison_object____ctor(
      v49,
      v50,
      Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__,
      0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__66_1 = (struct System_Comparison_EventMissionActionInfo__o *)v49;
    Instance = (void *)sub_1BDB81C(&static_fields->__9__66_1);
  }
  if ( !v25 )
    goto LABEL_47;
  System_Collections_Generic_List_object___Sort_57505928(
    v25,
    v49,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  v53 = v25->fields._size;
  if ( v53 <= 0 )
    goto LABEL_42;
  Instance = System_Collections_Generic_List_object___get_Item(
               v25,
               v53 - 1,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
  if ( !Instance || (v56 = *((_QWORD *)Instance + 4)) == 0 )
LABEL_47:
    sub_1BDBAD4(Instance, v27);
  if ( !*(_DWORD *)(v56 + 24) )
    sub_1BDBADC(Instance, v27, v54, v55);
  v57 = System_Int32__Parse(*(System_String_o **)(v56 + 32), 0LL);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v57 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_31080836(this, (int32_t)targetMissionId, v58);
    goto LABEL_44;
  }
LABEL_42:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_44:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16637/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0LL);
}


void __fastcall EventMissionItemListViewManager___setAfterAction_b__60_0(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4B3F044 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4B3F044 = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_1BDBAD4(Instance, v4);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, missionToRecieve->fields.id, 5, 1, 0LL);
  }
  else
  {
    EventMissionItemListViewManager__loadOpenMissionEffect(this, method);
  }
}


void __fastcall EventMissionItemListViewManager__actionAfterCallback(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *actionCallback; // x19
  struct System_Action_o **p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = &this->fields.actionCallback;
    *p_actionCallback = 0LL;
    sub_1BDB81C(p_actionCallback);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))actionCallback->fields.m_target)(
      actionCallback->fields.original_method_info,
      *(_QWORD *)&actionCallback->fields.extra_arg);
  }
}


System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__afterReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4B3F02E & 1) == 0 )
  {
    sub_1BDB878(&EventMissionItemListViewManager__afterReward_d__59_TypeInfo, method);
    byte_4B3F02E = 1;
  }
  v3 = sub_1BDBAC4(EventMissionItemListViewManager__afterReward_d__59_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BDB81C(v3 + 32);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall EventMissionItemListViewManager__checkAcceptable(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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
  void *Instance; // x0
  __int64 v16; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v18; // x8
  _DWORD *v19; // x20
  _DWORD *v20; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t v22; // w21
  BalanceConfig_c *v23; // x0
  int32_t PresentBoxMax; // w8
  int v25; // w20
  EventMissionItemListViewManager___c_c *v26; // x0
  System_Action_o *_9__51_0; // x20
  Il2CppObject *v28; // x21
  struct EventMissionItemListViewManager___c_StaticFields *v29; // x0
  struct System_Action_o **p__9__51_0; // x0
  __int64 *v31; // x8
  EventMissionItemListViewManager___c_c *v32; // x0
  Il2CppObject *v33; // x21
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4B3F026 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&BalanceConfig_TypeInfo, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v6);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BDB878(&NetworkManager_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__, v10);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__, v11);
    sub_1BDB878(&EventMissionItemListViewManager___c_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_12186/*"SHOW_MSG"*/, v13);
    sub_1BDB878(&StringLiteral_11127/*"REWARD_ACCEPTABLE"*/, v14);
    byte_4B3F026 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_48;
  if ( !Instance )
    goto LABEL_48;
  Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v18 = this->fields.missionToRecieve;
  if ( !v18 )
    goto LABEL_48;
  if ( v18->fields.rewardType == 1 )
  {
    v19 = Instance;
    if ( !Instance )
      goto LABEL_48;
    if ( Gift__IsServant_39448868(*((_DWORD *)Instance + 5), 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_48;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_48;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v19[6],
                   (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_48;
      v20 = Instance;
      if ( SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0LL) || SvtType__IsStatusUp(v20[21], 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B3ED56 )
        {
          sub_1BDB878(&NetworkManager_TypeInfo, v16);
          byte_4B3ED56 = 1;
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
                     0LL);
        if ( !Instance )
          goto LABEL_48;
        v22 = *((_DWORD *)Instance + 6);
        v23 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v23 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v23->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v22 )
        {
          v32 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v32 = EventMissionItemListViewManager___c_TypeInfo;
          }
          _9__51_0 = v32->static_fields->__9__51_0;
          if ( !_9__51_0 )
          {
            if ( !v32->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v32);
              v32 = EventMissionItemListViewManager___c_TypeInfo;
            }
            v33 = (Il2CppObject *)v32->static_fields->__9;
            _9__51_0 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_0,
              v33,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__,
              0LL);
            static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__51_0 = _9__51_0;
            p__9__51_0 = &static_fields->__9__51_0;
            goto LABEL_45;
          }
LABEL_46:
          this->fields.ShowMSG = _9__51_0;
          sub_1BDB81C(&this->fields.ShowMSG);
          Instance = this->fields.targetFSM;
          if ( Instance )
          {
            v31 = &StringLiteral_12186/*"SHOW_MSG"*/;
            goto LABEL_38;
          }
LABEL_48:
          sub_1BDBAD4(Instance, v16);
        }
        v25 = v19[7];
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v25 + v22 > PresentBoxMax )
        {
          v26 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v26 = EventMissionItemListViewManager___c_TypeInfo;
          }
          _9__51_0 = v26->static_fields->__9__51_1;
          if ( !_9__51_0 )
          {
            if ( !v26->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v26);
              v26 = EventMissionItemListViewManager___c_TypeInfo;
            }
            v28 = (Il2CppObject *)v26->static_fields->__9;
            _9__51_0 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_0,
              v28,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__,
              0LL);
            v29 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v29->__9__51_1 = _9__51_0;
            p__9__51_0 = &v29->__9__51_1;
LABEL_45:
            sub_1BDB81C(p__9__51_0);
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
  v31 = &StringLiteral_11127/*"REWARD_ACCEPTABLE"*/;
LABEL_38:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v31, 0LL);
}


void __fastcall EventMissionItemListViewManager__dialogCallback(
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
    *p_dialogCallBack = 0LL;
    sub_1BDB81C(p_dialogCallBack);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))dialogCallBack->fields.m_target)(
      dialogCallBack->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&dialogCallBack->fields.extra_arg);
  }
}


void __fastcall EventMissionItemListViewManager__endloadEffect(
        EventMissionItemListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v9; // x1
  int32_t filterStatus; // w8
  struct EventMissionEntity_o *v11; // x8

  if ( (byte_4B3F031 & 1) == 0 )
  {
    sub_1BDB878(&EventMissionItemListViewManager_TypeInfo, data);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    byte_4B3F031 = 1;
  }
  if ( data )
  {
    EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData = data;
    Instance = (Il2CppObject *)sub_1BDB81C(EventMissionItemListViewManager_TypeInfo->static_fields);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve )
      goto LABEL_13;
    if ( MissionActionManager__checkScroll(missionToRecieve->fields.id, 5, 0LL) )
    {
      filterStatus = this->fields.filterStatus;
      if ( filterStatus )
      {
        this->fields.tempFilterStatus = filterStatus;
        this->fields.filterStatus = 0;
        EventMissionItemListViewManager__setList(this, v9);
      }
    }
    else
    {
      EventMissionItemListViewManager__RefrashListDisp(this, v9);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v11 = this->fields.missionToRecieve;
    if ( !v11 || !Instance )
LABEL_13:
      sub_1BDBAD4(Instance, v7);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v11->fields.id, 5, 0, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall EventMissionItemListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__50417328; // x19
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4B3F032 & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, parentTr);
    sub_1BDB878(&EventMissionItemListViewManager_TypeInfo, v5);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B3F032 = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__50417328 = AssetData__GetObject_object__50417328(
                              effectAssetData,
                              name,
                              (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__50417328,
                                     (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v11 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B3E911 )
  {
    effectAssetData = (AssetData_o *)sub_1BDB878(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4B3E911 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B3E916 )
  {
    effectAssetData = (AssetData_o *)sub_1BDB878(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4B3E916 = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1BDBAD4(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v10;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ClippingObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B3F01B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B3F01B = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BDBAD4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BDBAD4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BDBAD4(0LL, v18);
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                 (EventMissionItemListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BDBAD4(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_42750172((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1BDBAD4(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BDBAD4(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BDBAD4(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BDBAD4(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1BDB81C(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v11;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B3F01A & 1) == 0 )
  {
    sub_1BDB878(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___, method);
    byte_4B3F01A = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_30B9698 *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void __fastcall EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_4B3F030 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    sub_1BDB878(&Method_EventMissionItemListViewManager_endloadEffect__, v3);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_5892/*"Effect/EventMission"*/, v5);
    byte_4B3F030 = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5892/*"Effect/EventMission"*/, v6, 1, 0LL);
}


void __fastcall EventMissionItemListViewManager__missionRewardCallback(
        EventMissionItemListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  Il2CppObject *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  EventMissionItemListViewManager_o *v15; // x20
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  struct System_Collections_Generic_List_ListViewDropObject__o *v17; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20

  v4 = this;
  if ( (byte_4B3F029 & 1) == 0 )
  {
    sub_1BDB878(&Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___, result);
    sub_1BDB878(&JsonManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_11065/*"REQUEST_OK"*/, v6);
    sub_1BDB878(&StringLiteral_11063/*"REQUEST_NG"*/, v7);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v8);
    sub_1BDB878(&StringLiteral_15782/*"["*/, v9);
    this = (EventMissionItemListViewManager_o *)sub_1BDB878(&StringLiteral_16038/*"]"*/, v10);
    byte_4B3F029 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_62607564(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_62610508(
                            (System_String_o *)StringLiteral_15782/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16038/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (EventMissionItemListViewManager_o *)JsonManager__DeserializeArray_object_(
                                                  v12,
                                                  (const MethodInfo_30A04A4 *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    if ( this )
    {
      v15 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_22;
      dropObjectList = this->fields.dropObjectList;
      if ( !dropObjectList )
        goto LABEL_21;
      v4->fields.getSvtList = (struct GetSvts_array *)dropObjectList->fields._items;
      this = (EventMissionItemListViewManager_o *)sub_1BDB81C(&v4->fields.getSvtList);
      if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_22:
        sub_1BDBADC(this, result, v13, v14);
      v17 = v15->fields.dropObjectList;
      if ( v17 )
      {
        v4->fields.getCommandCodeList = *(struct GetCommandCodes_array **)&v17->fields._size;
        this = (EventMissionItemListViewManager_o *)sub_1BDB81C(&v4->fields.getCommandCodeList);
        missionToRecieve = v4->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_4B3F0D4 )
          {
            sub_1BDB878(&EventRewardSaveData_TypeInfo, result);
            byte_4B3F0D4 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          EventMissionItemListViewManager__SaveTerminalTransitionInfo(v4, (const MethodInfo *)result);
          this = (EventMissionItemListViewManager_o *)v4->fields.touchBlockObj;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
            if ( this )
            {
              v11 = &StringLiteral_11065/*"REQUEST_OK"*/;
              goto LABEL_20;
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BDBAD4(this, result);
  }
  this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
  if ( !this )
    goto LABEL_21;
  v11 = &StringLiteral_11063/*"REQUEST_NG"*/;
LABEL_20:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v11, 0LL);
}


void __fastcall EventMissionItemListViewManager__modifyOpenItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  __int64 v16; // x1
  int32_t MissionId; // w21
  MissionListViewItem_o *openTargetItem; // x0
  UnityEngine_Object_o *monitor; // x21
  __int64 v20; // x1
  EventMissionItemListViewObject_o *v21; // x0
  __int64 v22; // x9
  UnityEngine_Object_o *v23; // x21
  __int64 v24; // x1
  void *v25; // x0
  System_Action_o *v26; // x20
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B3F035 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1BDB878(&EventMissionItemListViewItem_TypeInfo, v6);
    sub_1BDB878(&Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__, v7);
    sub_1BDB878(&EventMissionItemListViewObject_TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B3F035 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1BDBAD4(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v28 = v27;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v12 )
        break;
      current = v28.fields._current;
      if ( !v28.fields._current
        || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventMissionItemListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1BDBAD4(v12, v13);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v28.fields._current, 0LL);
      openTargetItem = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !openTargetItem )
        sub_1BDBAD4(0LL, v16);
      if ( MissionId == MissionListViewItem__get_MissionId(openTargetItem, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v21 = (EventMissionItemListViewObject_o *)current[6].monitor;
          if ( !v21 )
            goto LABEL_30;
          v22 = LOBYTE(EventMissionItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)v22
            || (EventMissionItemListViewObject_c *)v21->klass->_2.typeHierarchy[v22 - 1] != EventMissionItemListViewObject_TypeInfo )
          {
            v21 = (EventMissionItemListViewObject_o *)sub_1BDBD94(v21);
LABEL_30:
            sub_1BDBAD4(v21, v20);
          }
          EventMissionItemListViewObject__ModifyBoardImage(
            v21,
            (const MethodInfo *)EventMissionItemListViewObject_TypeInfo);
        }
      }
      v23 = (UnityEngine_Object_o *)current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      {
        v25 = current[6].monitor;
        if ( !v25 )
          sub_1BDBAD4(0LL, v24);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v25 + 392LL))(
          v25,
          current,
          *(_QWORD *)(*(_QWORD *)v25 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v26 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v26, 0LL);
}


void __fastcall EventMissionItemListViewManager__recieveReward(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  PlayMakerFSM_o *targetFSM; // x0
  __int64 v11; // x1
  System_Action_int__o *v12; // x20
  const MethodInfo *v13; // x2
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_4B3F025 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, missionEntity);
    sub_1BDB878(&Method_EventMissionItemListViewManager_recieveReward__, v5);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__, v6);
    sub_1BDB878(&EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_8704/*"MISSION_REWARD"*/, v8);
    byte_4B3F025 = 1;
  }
  v9 = sub_1BDBAC4(EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_1BDB81C(v9 + 16);
  *(_QWORD *)(v9 + 24) = missionEntity;
  sub_1BDB81C(v9 + 24);
  if ( this->fields.isQpMaxAlert )
  {
    v12 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v12,
      (Il2CppObject *)v9,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__,
      0LL);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v12, v13);
    return;
  }
  v14 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BDB890(Method_EventMissionItemListViewManager_recieveReward__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0, 0LL);
  this->fields.missionToRecieve = *(struct EventMissionEntity_o **)(v9 + 24);
  sub_1BDB81C(&this->fields.missionToRecieve);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_1BDBAD4(targetFSM, v11);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8704/*"MISSION_REWARD"*/, 0LL);
}


void __fastcall EventMissionItemListViewManager__requestMissionReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4B3F028 & 1) == 0 )
  {
    sub_1BDB878(&Method_EventMissionItemListViewManager_missionRewardCallback__, method);
    sub_1BDB878(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v3);
    sub_1BDB878(&NetworkManager_TypeInfo, v4);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    byte_4B3F028 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v9,
               (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
LABEL_9:
    sub_1BDBAD4(Instance, v8);
  EventMissionClearRewardRequest__beginRequest(
    (EventMissionClearRewardRequest_o *)Instance,
    missionToRecieve->fields.id,
    0LL);
}


void __fastcall EventMissionItemListViewManager__setAfterAction(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B3F02F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EventMissionItemListViewManager__setAfterAction_b__60_0__, v3);
    byte_4B3F02F = 1;
  }
  v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventMissionItemListViewManager__setAfterAction_b__60_0__, 0LL);
  MissionListViewManager__DisplayAfterMissionAchieveTutorial((MissionListViewManager_o *)this, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__setFilterId(
        EventMissionItemListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  EventMissionItemListViewManager__setList(this, *(const MethodInfo **)&id);
}


void __fastcall EventMissionItemListViewManager__setFilterName(
        EventMissionItemListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UnityEngine_Object_o *filterBtnTxt; // x21
  __int64 v6; // x1
  UISprite_o *v7; // x0

  if ( (byte_4B3F03B & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, targetFile);
    byte_4B3F03B = 1;
  }
  filterBtnTxt = (UnityEngine_Object_o *)this->fields.filterBtnTxt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(filterBtnTxt, 0LL, 0LL) )
  {
    v7 = this->fields.filterBtnTxt;
    if ( !v7 || (UISprite__set_spriteName(v7, targetFile, 0LL), (v7 = this->fields.filterBtnTxt) == 0LL) )
      sub_1BDBAD4(v7, v6);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
      v7,
      v7->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventMissionItemListViewManager__setList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v9; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  ListViewSort_o *operationSortInfo; // x0
  bool v14; // w2
  bool v15; // w2
  bool v16; // w2
  bool v17; // w2
  __int64 v18; // x1
  int32_t filterStatus; // w19

  if ( (byte_4B3F03A & 1) == 0 )
  {
    sub_1BDB878(&ListViewSort_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17569/*"btn_txt_completed"*/, v3);
    sub_1BDB878(&StringLiteral_17602/*"btn_txt_receipt"*/, v4);
    sub_1BDB878(&StringLiteral_17601/*"btn_txt_progress"*/, v5);
    sub_1BDB878(&StringLiteral_17585/*"btn_txt_notopen"*/, v6);
    sub_1BDB878(&StringLiteral_17551/*"btn_txt_all"*/, v7);
    byte_4B3F03A = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v9 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42768220(v9, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v9;
  sub_1BDB81C(&this->fields.operationSortInfo);
  switch ( this->fields.filterStatus )
  {
    case 0:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17551/*"btn_txt_all"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 14, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 15, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 16, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v14 = 1;
      goto LABEL_31;
    case 1:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17602/*"btn_txt_receipt"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v15 = 0;
      goto LABEL_16;
    case 2:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17601/*"btn_txt_progress"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v15 = 1;
LABEL_16:
      ListViewSort__SetFilter(operationSortInfo, 14, v15, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v16 = 0;
LABEL_22:
      ListViewSort__SetFilter(operationSortInfo, 15, v16, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v17 = 0;
LABEL_29:
      ListViewSort__SetFilter(operationSortInfo, 16, v17, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v14 = 0;
LABEL_31:
      ListViewSort__SetFilter(operationSortInfo, 17, v14, 0LL);
LABEL_32:
      operationSortInfo = this->fields.baseSortInfo;
      if ( !operationSortInfo )
LABEL_36:
        sub_1BDBAD4(operationSortInfo, v11);
      ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_4B3F0D5 )
      {
        sub_1BDB878(&EventRewardSaveData_TypeInfo, v18);
        byte_4B3F0D5 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = filterStatus;
      return;
    case 3:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17585/*"btn_txt_notopen"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 14, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v16 = 1;
      goto LABEL_22;
    case 4:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17569/*"btn_txt_completed"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 14, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 15, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v17 = 1;
      goto LABEL_29;
    default:
      goto LABEL_32;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__setMissionListIdx(
        EventMissionItemListViewManager_o *this,
        bool isRaid,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  int size; // w22
  int32_t TodayFirstMissionId; // w20
  int32_t v13; // w21
  __int64 methodPtr_low; // x10

  v4 = this;
  if ( (byte_4B3F021 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, isRaid);
    sub_1BDB878(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    this = (EventMissionItemListViewManager_o *)sub_1BDB878(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v8);
    byte_4B3F021 = 1;
  }
  if ( !byte_4B3F0D2 )
  {
    this = (EventMissionItemListViewManager_o *)sub_1BDB878(&EventRewardSaveData_TypeInfo, isRaid);
    byte_4B3F0D2 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  size = itemList->fields._size;
  if ( byte_4B3F0D3 )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    sub_1BDB878(&EventRewardSaveData_TypeInfo, isRaid);
    byte_4B3F0D3 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_28;
      this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
      if ( !this )
        goto LABEL_28;
      TodayFirstMissionId = EventMissionConditionMaster__getTodayFirstMissionId(
                              (EventMissionConditionMaster_o *)this,
                              v4->fields.currentEventId,
                              0LL);
      goto LABEL_14;
    }
  }
  TodayFirstMissionId = static_fields->_MissionId_k__BackingField;
LABEL_14:
  if ( size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      this = (EventMissionItemListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (EventMissionItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v13,
                                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( this )
      {
        methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (EventMissionItemListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
            this = 0LL;
        }
        else
        {
          this = 0LL;
        }
      }
      if ( TodayFirstMissionId >= 1 )
      {
        if ( !this )
          break;
        if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)this, 0LL) == TodayFirstMissionId )
          goto LABEL_27;
      }
      if ( size == ++v13 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1BDBAD4(this, isRaid);
  }
LABEL_26:
  v13 = 0;
LABEL_27:
  ListViewManager__SetTopItem((ListViewManager_o *)v4, v13, 0LL);
}


void __fastcall EventMissionItemListViewManager__setNextMissionInfo(
        EventMissionItemListViewManager_o *this,
        EventMissionActionInfo_o *currentMissionActionInfo,
        EventMissionActionInfo_o *eventMissionActionInfo,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int v18; // w8
  int m_CancellationTokenSource; // w8
  int v20; // w23
  int32_t v21; // w21
  __int64 methodPtr_low; // x10
  EventRewardSceneEntity_array *EntityFromIdAndEventType; // x0
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x4
  System_Action_o *v26; // x20

  v10 = this;
  if ( (byte_4B3F01D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, currentMissionActionInfo);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v11);
    sub_1BDB878(&EventMissionItemListViewItem_TypeInfo, v12);
    sub_1BDB878(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__, v13);
    sub_1BDB878(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v16);
    this = (EventMissionItemListViewManager_o *)sub_1BDB878(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v17);
    byte_4B3F01D = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    this = (EventMissionItemListViewManager_o *)sub_1BDB81C(&v10->fields.actionCallback);
  }
  if ( eventMissionActionInfo )
  {
    if ( !currentMissionActionInfo )
      goto LABEL_30;
    if ( currentMissionActionInfo->fields.missionActionType == 3 )
    {
      if ( eventMissionActionInfo->fields.missionActionType == 3 )
        v18 = 1056964608;
      else
        v18 = 1069547520;
      LODWORD(v10->fields.endEffectTime) = v18;
    }
  }
  this = (EventMissionItemListViewManager_o *)v10->fields.itemList;
  if ( !this )
LABEL_30:
    sub_1BDBAD4(this, currentMissionActionInfo);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v20 = m_CancellationTokenSource - 1;
  if ( m_CancellationTokenSource >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      this = (EventMissionItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v21,
                                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_30;
      methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        goto LABEL_30;
      if ( (EventMissionItemListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
        goto LABEL_30;
      this = (EventMissionItemListViewManager_o *)MissionListViewItem__get_EventMissionEntity(
                                                    (MissionListViewItem_o *)this,
                                                    0LL);
      if ( !this )
        goto LABEL_30;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_24;
      if ( v20 == v21 )
        break;
      this = (EventMissionItemListViewManager_o *)v10->fields.itemList;
      ++v21;
      if ( !this )
        goto LABEL_30;
    }
  }
  v21 = 0;
LABEL_24:
  this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this )
    goto LABEL_30;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               (EventRewardSceneMaster_o *)this,
                               v10->fields.currentEventId,
                               4,
                               0LL);
  if ( EntityFromIdAndEventType && *(_QWORD *)&EntityFromIdAndEventType->max_length )
  {
    v24 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v10,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__,
      0LL);
    EventMissionItemListViewManager__MoveEaseScroll(v10, v21, v24, eventMissionActionInfo, v25);
  }
  else
  {
    v26 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v10,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__,
      0LL);
    v10->fields.callbackAfterScroll = v26;
    sub_1BDB81C(&v10->fields.callbackAfterScroll);
    ListViewManager__MoveTopItem((ListViewManager_o *)v10, v21, 1, 0.0, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__unAcceptableDlg(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4B3F027 & 1) == 0 )
  {
    this = (EventMissionItemListViewManager_o *)sub_1BDB878(&StringLiteral_5479/*"END_NOTICE"*/, method);
    byte_4B3F027 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (EventMissionItemListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1BDBAD4(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5479/*"END_NOTICE"*/, 0LL);
}


void __fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__42___ctor(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__MoveNext(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o **_4__this; // x20
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *v4; // x19
  float v5; // s1
  float v6; // s8
  float v7; // s1
  float v8; // s8
  float timer_5__5; // s8
  float duration_5__4; // s0
  float deltaTime; // s0
  float v12; // s1
  float v13; // s0
  float v14; // s2
  bool v15; // nf
  float v16; // s0
  float start_5__2; // s8
  float v18; // s0
  float v19; // s10
  float v20; // s0
  float v21; // s1
  bool result; // w0
  float v23; // s0
  float v24; // s0
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

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
    v4->fields._start_5__2 = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    this = _4__this[11];
    if ( !this )
      goto LABEL_30;
    UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0LL);
    this = _4__this[10];
    if ( !this )
      goto LABEL_30;
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
    if ( !this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    this = _4__this[11];
    if ( !this )
      goto LABEL_30;
    v6 = v5;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
    this = _4__this[10];
    if ( !this )
      goto LABEL_30;
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
    if ( !this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    this = _4__this[12];
    if ( !this )
      goto LABEL_30;
    v8 = v7 - v6;
    LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)this, v4->fields.index, 0LL);
    LocalPosition.fields.y = fabsf(LocalPosition.fields.y) / v8;
    LocalPosition.fields.x = (float)(v8 * (float)(LocalPosition.fields.y - v4->fields._start_5__2)) + -2000.0;
    timer_5__5 = 0.0;
    duration_5__4 = fminf(fmaxf(LocalPosition.fields.x / 2000.0, 0.0) + 1.0, 3.0);
    v4->fields._end_5__3 = LocalPosition.fields.y;
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
    UIProgressBar__set_value((UIProgressBar_o *)this, v4->fields._end_5__3, 0LL);
    ActionExtensions__Call(v4->fields.onFinished, 0LL);
    return 0;
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v12 = v4->fields._duration_5__4;
  v13 = timer_5__5 + deltaTime;
  if ( v13 <= v12 )
    v14 = v13;
  else
    v14 = v4->fields._duration_5__4;
  v15 = v13 < 0.0;
  v16 = 0.0;
  if ( !v15 )
    v16 = v14;
  v4->fields._timer_5__5 = v16;
  if ( !_4__this )
    goto LABEL_30;
  start_5__2 = v4->fields._start_5__2;
  v18 = v16 / (float)(v12 * 0.5);
  v19 = v4->fields._end_5__3 - start_5__2;
  if ( v18 >= 1.0 )
  {
    v23 = exp2f((float)(v18 + -1.0) * -10.0);
    v21 = v19 * 0.5;
    v20 = 2.0 - v23;
  }
  else
  {
    v20 = powf(v18, 5.0);
    v21 = v19 * 0.5;
  }
  this = _4__this[11];
  v24 = v20 * v21;
  if ( !this )
LABEL_30:
    sub_1BDBAD4(this, method);
  UIProgressBar__set_value((UIProgressBar_o *)this, start_5__2 + v24, 0LL);
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_1BDB81C(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_IDisposable_Dispose(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMissionItemListViewManager__SetPreviousFilter_d__41___ctor(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventMissionItemListViewManager__SetPreviousFilter_d__41__MoveNext(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventMissionItemListViewManager__SetPreviousFilter_d__41_o *v3; // x20
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v16; // x0
  Il2CppObject **v17; // x20
  int32_t v18; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  int size; // w22
  System_Collections_Generic_List_int__o *v21; // x20
  int32_t i; // w21
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  System_Func_int__int__int__o *v27; // x21
  int32_t v28; // w0
  int32_t v29; // w21
  int32_t v30; // w1
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v33; // x19
  Il2CppObject **p__2__current; // x20

  v3 = this;
  if ( (byte_4B3F052 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Aggregate_int___, method);
    sub_1BDB878(&EventMissionItemListViewItem_TypeInfo, v4);
    sub_1BDB878(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__, v5);
    sub_1BDB878(&System_Func_int__int__int__TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__IndexOf__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v12);
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)sub_1BDB878(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v13);
    byte_4B3F052 = 1;
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
        v33 = (UnityEngine_WaitForSeconds_o *)sub_1BDBAC4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v33, openItemTime + endEffectTime, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v33;
        p__2__current = &v3->fields.__2__current;
        sub_1BDB81C(p__2__current);
        *((_DWORD *)p__2__current - 2) = 2;
        LOBYTE(v18) = 1;
        return v18;
      }
      goto LABEL_32;
    }
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      if ( _4__this )
      {
        v16 = EventMissionItemListViewManager__MoveEaseScroll_IE(_4__this, v3->fields.index, v3->fields.onFinished, v2);
        v3->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_70269772(
                                                    (UnityEngine_MonoBehaviour_o *)_4__this,
                                                    v16,
                                                    0LL);
        v17 = &v3->fields.__2__current;
        sub_1BDB81C(v17);
        LOBYTE(v18) = 1;
        *((_DWORD *)v17 - 2) = 1;
        return v18;
      }
LABEL_32:
      sub_1BDBAD4(this, method);
    }
LABEL_30:
    LOBYTE(v18) = 0;
    return v18;
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
  v21 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0; i != size; ++i )
  {
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)_4__this->fields.itemSortList;
    if ( !this )
      goto LABEL_32;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           i,
                                                                           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !this )
      goto LABEL_32;
    methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
      goto LABEL_32;
    if ( (EventMissionItemListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      goto LABEL_32;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)MissionListViewItem__get_EventMissionEntity(
                                                                           (MissionListViewItem_o *)this,
                                                                           0LL);
    if ( !this )
      goto LABEL_32;
    if ( !v21 )
      goto LABEL_32;
    method = (const MethodInfo *)LODWORD(this->fields.__4__this);
    items = v21->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v21->fields._version;
    if ( !items )
      goto LABEL_32;
    v26 = v21->fields._size;
    if ( (unsigned int)v26 >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v21,
        (int32_t)method,
        *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v21->fields._size = v26 + 1;
      items->m_Items[v26 + 1] = (int)method;
    }
  }
  v27 = (System_Func_int__int__int__o *)sub_1BDBAC4(System_Func_int__int__int__TypeInfo);
  System_Func_int__int__int____ctor(
    v27,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__,
    0LL);
  v28 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (System_Func_TSource__TSource__TSource__o *)v27,
          (const MethodInfo_303B2D0 *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v29 = v28;
  v18 = System_Collections_Generic_List_int___IndexOf(
          v21,
          v28,
          (const MethodInfo_36B9A1C *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v18 )
  {
    v30 = v29 - 1;
    if ( v18 == size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v30, 0, 0, 0.0, 0LL);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v30, 0, 0.0, 0LL);
    goto LABEL_30;
  }
  return v18;
}


Il2CppObject *__fastcall EventMissionItemListViewManager__SetPreviousFilter_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventMissionItemListViewManager__SetPreviousFilter_d__41__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_EventMissionItemListViewManager__SetPreviousFilter_d__41_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall EventMissionItemListViewManager__SetPreviousFilter_d__41__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventMissionItemListViewManager__SetPreviousFilter_d__41__System_IDisposable_Dispose(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMissionItemListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B3F046 & 1) == 0 )
  {
    sub_1BDB878(&EventMissionItemListViewManager___c_TypeInfo, v1);
    byte_4B3F046 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventMissionItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionItemListViewManager___c_TypeInfo->static_fields->__9 = (struct EventMissionItemListViewManager___c_o *)v2;
  sub_1BDB81C(EventMissionItemListViewManager___c_TypeInfo->static_fields);
}


void __fastcall EventMissionItemListViewManager___c___ctor(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventMissionItemListViewManager___c___OpenCommandAssistLvUpDialog_b__78_0(
        EventMissionItemListViewManager___c_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  if ( !gift )
    sub_1BDBAD4(this, 0LL);
  return gift->fields.type == 14;
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_0(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  System_String_o *inited; // x0
  __int64 v10; // x1
  EventMissionItemListViewManager___c_c *v11; // x8
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  System_Action_o *_9__51_2; // x22
  Il2CppObject *v15; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4B3F047 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v2);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__, v4);
    sub_1BDB878(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_8666/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v6);
    sub_1BDB878(&StringLiteral_1/*""*/, v7);
    byte_4B3F047 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  inited = LocalizationManager__Get((System_String_o *)StringLiteral_8666/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v11 = EventMissionItemListViewManager___c_TypeInfo;
  v12 = inited;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    inited = (System_String_o *)j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v11 = EventMissionItemListViewManager___c_TypeInfo;
  }
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_2 = v11->static_fields->__9__51_2;
  if ( !_9__51_2 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v11->static_fields->__9;
    _9__51_2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(_9__51_2, v15, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__, 0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_2 = _9__51_2;
    inited = (System_String_o *)sub_1BDB81C(&static_fields->__9__51_2);
  }
  if ( !Instance )
    sub_1BDBAD4(inited, v10);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v13,
    v12,
    _9__51_2,
    150,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0LL,
    0.0,
    0,
    0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_1(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  System_String_o *inited; // x0
  __int64 v10; // x1
  EventMissionItemListViewManager___c_c *v11; // x8
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  System_Action_o *_9__51_3; // x22
  Il2CppObject *v15; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4B3F049 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v2);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__, v4);
    sub_1BDB878(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_8667/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, v6);
    sub_1BDB878(&StringLiteral_1/*""*/, v7);
    byte_4B3F049 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  inited = LocalizationManager__Get((System_String_o *)StringLiteral_8667/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0LL);
  v11 = EventMissionItemListViewManager___c_TypeInfo;
  v12 = inited;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    inited = (System_String_o *)j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v11 = EventMissionItemListViewManager___c_TypeInfo;
  }
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_3 = v11->static_fields->__9__51_3;
  if ( !_9__51_3 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v11->static_fields->__9;
    _9__51_3 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(_9__51_3, v15, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__, 0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_3 = _9__51_3;
    inited = (System_String_o *)sub_1BDB81C(&static_fields->__9__51_3);
  }
  if ( !Instance )
    sub_1BDBAD4(inited, v10);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v13,
    v12,
    _9__51_3,
    150,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0LL,
    0.0,
    0,
    0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3F048 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B3F048 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3F04A & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B3F04A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager___c___modifyOpenItem_b__66_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BDBAD4(this, a);
  return a->fields.id - b->fields.id;
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass47_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass47_0___OnClickListView_b__0(
        EventMissionItemListViewManager___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  MissionListViewItem_o *selectItem; // x0
  EventMissionItemListViewManager_o *_4__this; // x19
  const MethodInfo *v5; // x2

  selectItem = (MissionListViewItem_o *)this->fields.selectItem;
  if ( !selectItem
    || (_4__this = this->fields.__4__this,
        selectItem = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(selectItem, 0LL),
        !_4__this) )
  {
    sub_1BDBAD4(selectItem, method);
  }
  EventMissionItemListViewManager__recieveReward(_4__this, (EventMissionEntity_o *)selectItem, v5);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass49_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager___c__DisplayClass49_0___recieveReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass49_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  PlayMakerFSM_o *targetFSM; // x0
  __int64 v9; // x1
  struct EventMissionItemListViewManager_o *_4__this; // x8
  struct EventMissionItemListViewManager_o *v11; // x8

  if ( (byte_4B3F04B & 1) == 0 )
  {
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__, *(_QWORD *)&result);
    sub_1BDB878(&StringLiteral_8704/*"MISSION_REWARD"*/, v5);
    byte_4B3F04B = 1;
  }
  if ( result == 1 )
  {
    v6 = Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BDB890(Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (_4__this->fields.missionToRecieve = this->fields.missionEntity,
          targetFSM = (PlayMakerFSM_o *)sub_1BDB81C(&_4__this->fields.missionToRecieve),
          (v11 = this->fields.__4__this) == 0LL)
      || (targetFSM = v11->fields.targetFSM) == 0LL )
    {
      sub_1BDBAD4(targetFSM, v9);
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8704/*"MISSION_REWARD"*/, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__2(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4B3F04E & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B3F04E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BDBAD4(Instance, v4);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__3(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventRewardRootComponent_o *eventRootComponent; // x20
  System_Action_o *_9__4; // x22

  if ( (byte_4B3F04C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__, v5);
    byte_4B3F04C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventRootComponent = _4__this->fields.eventRootComponent;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    Instance = (Il2CppObject *)sub_1BDB81C(&this->fields.__9__4);
  }
  if ( !eventRootComponent )
LABEL_10:
    sub_1BDBAD4(Instance, v7);
  EventRewardRootComponent__StartSwitchFigure(eventRootComponent, _9__4, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__4(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventMissionItemListViewManager___c__DisplayClass58_0_o *v3; // x19
  EventMissionItemListViewManager_o *v4; // x19
  System_Collections_IEnumerator_o *v5; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (EventMissionItemListViewManager___c__DisplayClass58_0_o *)_4__this->fields.touchBlockObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL) )
  {
    sub_1BDBAD4(this, method);
  }
  v5 = EventMissionItemListViewManager__afterReward(v4, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)v4, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__6(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4B3F04D & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B3F04D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BDBAD4(Instance, v4);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___ctor(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v2; // x19
  __int64 v3; // x1
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v19; // x8
  struct EventMissionItemListViewManager_o *v20; // x8
  System_Text_StringBuilder_o *v21; // x20
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v22; // x8
  System_String_o *v23; // x21
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v26; // x1
  System_String_o *v27; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v28; // x8
  System_String_o *v29; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v30; // x8
  System_String_o *v31; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v32; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v33; // x21
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v34; // x8
  struct EventMissionItemListViewManager_o *v35; // x8
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v36; // x8
  struct EventMissionItemListViewManager_o *v37; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v38; // x21
  Il2CppObject *NumberFormatLong; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v40; // x8
  struct EventMissionItemListViewManager_o *v41; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x21
  _QWORD *v45; // x22
  __int64 v46; // x8
  __int64 v47; // x0
  __int64 v48; // x0
  CommonUI_o *v49; // x21
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v50; // x22
  Il2CppObject *v51; // x24
  MissionRewardGetDialog_ClickDelegate_o *klass; // x23
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v53; // x20

  v2 = this;
  if ( (byte_4B3F04F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_object___, method);
    sub_1BDB878(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, v9);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__, v10);
    sub_1BDB878(&StringLiteral_8708/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v11);
    sub_1BDB878(&StringLiteral_8665/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v12);
    sub_1BDB878(&StringLiteral_8668/*"MISSION_ACTION_SUCCESS"*/, v13);
    sub_1BDB878(&StringLiteral_8670/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/, v14);
    sub_1BDB878(&StringLiteral_50/*"\n \n"*/, v15);
    sub_1BDB878(&StringLiteral_51/*"\n \n "*/, v16);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1BDB878(&StringLiteral_8709/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v17);
    byte_4B3F04F = 1;
  }
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_68;
  if ( giftList->fields._size < 1 )
  {
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
      CS___8__locals1 = v2->fields.CS___8__locals1;
      if ( CS___8__locals1 )
      {
        _4__this = (UnityEngine_MonoBehaviour_o *)CS___8__locals1->fields.__4__this;
        if ( _4__this )
        {
          v26 = EventMissionItemListViewManager__afterReward(CS___8__locals1->fields.__4__this, method);
          UnityEngine_MonoBehaviour__StartCoroutine_70269772(_4__this, v26, 0LL);
          return;
        }
      }
    }
    goto LABEL_68;
  }
  v19 = v2->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_68;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v20->fields.touchBlockObj;
  if ( !this )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v21 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v21, 0LL);
  v22 = v2->fields.CS___8__locals1;
  if ( !v22 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v22->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_68;
  v23 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v23, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemDialogNum >= 2 )
    {
      if ( !v23 )
        goto LABEL_68;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__Substring_62618184(
                                                                          v23,
                                                                          0,
                                                                          v23->fields._stringLength - 2,
                                                                          0LL);
      if ( !v21 )
        goto LABEL_68;
      System_Text_StringBuilder__Append_62657444(v21, (System_String_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8665/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_62657444(
                                                                          v21,
                                                                          v27,
                                                                          0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8668/*"MISSION_ACTION_SUCCESS"*/,
                                                                          0LL);
      if ( !v21 )
        goto LABEL_68;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                          v21,
                                                                          (System_String_o *)this,
                                                                          (Il2CppObject *)v23,
                                                                          0LL);
    }
    v28 = v2->fields.CS___8__locals1;
    if ( !v28 )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v28->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_68;
    v29 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v29, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_62657444(
                                                                          v21,
                                                                          (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                          0LL);
  }
  v30 = v2->fields.CS___8__locals1;
  if ( !v30 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v30->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_68;
  v31 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v31, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8670/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/,
                                                                        0LL);
    v32 = v2->fields.CS___8__locals1;
    if ( !v32 )
      goto LABEL_68;
    v33 = this;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v32->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                        this,
                                                                        this->klass[1]._1.image);
    if ( !v21 )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                        v21,
                                                                        (System_String_o *)v33,
                                                                        (Il2CppObject *)this,
                                                                        0LL);
  }
  v34 = v2->fields.CS___8__locals1;
  if ( !v34 )
    goto LABEL_68;
  v35 = v34->fields.__4__this;
  if ( !v35 )
    goto LABEL_68;
  if ( v35->fields.isQpMaxAlert )
  {
    if ( !v21 )
      goto LABEL_68;
    if ( v2->fields.isGetNoReward )
    {
      System_Text_StringBuilder__set_Length(v21, 0, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8708/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                          0LL);
      v36 = v2->fields.CS___8__locals1;
      if ( v36 )
      {
        v37 = v36->fields.__4__this;
        if ( v37 )
        {
          v38 = this;
          NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v37->fields.overQpValue, 0LL);
          System_Text_StringBuilder__AppendFormat(v21, (System_String_o *)v38, NumberFormatLong, 0LL);
          goto LABEL_61;
        }
      }
LABEL_68:
      sub_1BDBAD4(this, method);
    }
    System_Text_StringBuilder__Append_62657444(v21, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8709/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                        0LL);
    v40 = v2->fields.CS___8__locals1;
    if ( !v40 )
      goto LABEL_68;
    v41 = v40->fields.__4__this;
    if ( !v41 )
      goto LABEL_68;
    v42 = this;
    v43 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v41->fields.overQpValue, 0LL);
    v44 = System_String__Format((System_String_o *)v42, v43, 0LL);
    v45 = Method_System_Array_Empty_object___;
    v46 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v46 )
    {
      sub_1C2BF64(Method_System_Array_Empty_object___);
      v46 = v45[7];
    }
    v47 = *(_QWORD *)(v46 + 16);
    if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
      v47 = sub_1C2BF08();
    if ( !*(_DWORD *)(v47 + 224) )
      j_il2cpp_runtime_class_init_0(v47);
    v48 = *(_QWORD *)(v45[7] + 16LL);
    if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
      v48 = sub_1C2BF08();
    System_Text_StringBuilder__AppendFormat_62663984(v21, v44, **(System_Object_array ***)(v48 + 184), 0LL);
  }
LABEL_61:
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v2->fields.giftList )
    goto LABEL_68;
  v49 = (CommonUI_o *)this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                      (System_Collections_Generic_List_object__o *)v2->fields.giftList,
                                                                      (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v21 )
    goto LABEL_68;
  v50 = this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v21->klass->vtable._3_ToString.method)(
                                                                      v21,
                                                                      v21->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v51 = (Il2CppObject *)v2->fields.CS___8__locals1;
  if ( !v51 )
    goto LABEL_68;
  klass = (MissionRewardGetDialog_ClickDelegate_o *)v51[3].klass;
  v53 = this;
  if ( !klass )
  {
    klass = (MissionRewardGetDialog_ClickDelegate_o *)sub_1BDBAC4(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      klass,
      v51,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__,
      0LL);
    v51[3].klass = (Il2CppClass *)klass;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1BDB81C(&v51[3]);
  }
  if ( !v49 )
    goto LABEL_68;
  CommonUI__OpenMissionRewardGetDialog(
    v49,
    (GiftEntity_array *)v50,
    (System_String_o *)v53,
    klass,
    v2->fields.isGetNoReward,
    0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  void *monitor; // x8
  MissionListViewManager_o *v5; // x20
  System_Action_o *klass; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4B3F050 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1BDB878(
                                                                        &Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__,
                                                                        v3);
    byte_4B3F050 = 1;
  }
  monitor = v2[2].monitor;
  if ( !monitor )
    goto LABEL_8;
  v5 = (MissionListViewManager_o *)*((_QWORD *)monitor + 2);
  klass = (System_Action_o *)v2[3].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__,
      0LL);
    v2[3].klass = (Il2CppClass *)klass;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1BDB81C(&v2[3]);
  }
  if ( !v5 )
LABEL_8:
    sub_1BDBAD4(this, method);
  MissionListViewManager__StartSvtListGetEffect(v5, 0, klass, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__5(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  SummonAssetManager_o *Instance; // x0
  __int64 v10; // x1
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct EventMissionItemListViewManager_o *_4__this; // x8
  Il2CppObject *v13; // x20
  System_String_o *v14; // x0
  Il2CppObject *v15; // x23
  System_Action_o *monitor; // x22
  System_String_o *v17; // x19
  System_String_o *v18; // x21

  if ( (byte_4B3F051 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v5);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__, v6);
    sub_1BDB878(&StringLiteral_8668/*"MISSION_ACTION_SUCCESS"*/, v7);
    sub_1BDB878(&StringLiteral_1/*""*/, v8);
    byte_4B3F051 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  SummonAssetManager__UnloadSummonAssets(Instance, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8668/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v14, (Il2CppObject *)this->fields.sendName, 0LL);
  v15 = (Il2CppObject *)this->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_14;
  monitor = (System_Action_o *)v15[3].monitor;
  v17 = (System_String_o *)Instance;
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      v15,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__,
      0LL);
    v15[3].monitor = monitor;
    Instance = (SummonAssetManager_o *)sub_1BDB81C(&v15[3].monitor);
  }
  if ( !v13 )
LABEL_14:
    sub_1BDBAD4(Instance, v10);
  CommonUI__OpenNotificationDialog((CommonUI_o *)v13, v18, v17, monitor, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass59_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass59_0___afterReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 1;
}


bool __fastcall EventMissionItemListViewManager___c__DisplayClass59_0___afterReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall EventMissionItemListViewManager__afterReward_d__59___ctor(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventMissionItemListViewManager__afterReward_d__59__MoveNext(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x20
  __int64 v12; // x21
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x2
  System_Func_bool__o *v17; // x20
  UnityEngine_WaitUntil_o *v18; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4B3F053 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&System_Func_bool__TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v4);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__, v5);
    sub_1BDB878(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__, v6);
    sub_1BDB878(&EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo, v7);
    sub_1BDB878(&UnityEngine_WaitUntil_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_5474/*"END_EFFECT"*/, v9);
    byte_4B3F053 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL);
    if ( !_4__this )
      goto LABEL_13;
    Instance = (Il2CppObject *)_4__this->fields.targetFSM;
    if ( !Instance )
      goto LABEL_13;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5474/*"END_EFFECT"*/, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v12 = sub_1BDBAC4(EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    if ( v12 )
    {
      *(_BYTE *)(v12 + 16) = 0;
      v15 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v15,
        (Il2CppObject *)v12,
        Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__,
        0LL);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v15, v16);
        v17 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v17,
          (Il2CppObject *)v12,
          Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__,
          0LL);
        v18 = (UnityEngine_WaitUntil_o *)sub_1BDBAC4(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v18, v17, 0LL);
        this->fields.__2__current = (Il2CppObject *)v18;
        p__2__current = &this->fields.__2__current;
        sub_1BDB81C(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_13:
    sub_1BDBAD4(Instance, v14);
  }
  return 0;
}


Il2CppObject *__fastcall EventMissionItemListViewManager__afterReward_d__59__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventMissionItemListViewManager__afterReward_d__59__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_EventMissionItemListViewManager__afterReward_d__59_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall EventMissionItemListViewManager__afterReward_d__59__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventMissionItemListViewManager__afterReward_d__59__System_IDisposable_Dispose(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMissionItemListViewManager_resData___ctor(
        EventMissionItemListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}