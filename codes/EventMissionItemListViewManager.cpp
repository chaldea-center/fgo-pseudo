void __fastcall EventMissionItemListViewManager___ctor(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5EFDD & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EFDD = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogTitle, v5, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogMessage, v6, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogGetable, v9, v10, v11);
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager__AcceptReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x23
  DataManager_o *Instance; // x0
  Il2CppObject *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x20
  struct EventMissionEntity_o *v10; // x8
  const MethodInfo *v11; // x1
  System_Text_StringBuilder_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_Text_StringBuilder_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject **v21; // x22
  __int64 v22; // x29
  il2cpp_array_size_t v23; // w24
  Il2CppClass **v24; // x28
  Il2CppClass *v25; // x8
  char *v26; // x28
  Il2CppClass *v27; // t1
  EventRewardSetEntity_o *SetRewardData; // x23
  int32_t v29; // w1
  Il2CppObject **v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *name; // x1
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *v37; // x19
  System_Action_o *v38; // x20
  System_Collections_Generic_List_object__o *v39; // x23
  il2cpp_array_size_t v40; // w28
  Il2CppClass **v41; // x24
  Il2CppClass *v42; // x8
  Il2CppObject **v43; // x24
  Il2CppClass *v44; // t1
  ServantEntity_o *v45; // x25
  bool IsCombineMaterial; // w26
  System_String_o *v47; // x0
  System_Text_StringBuilder_o *klass; // x26
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x25
  Il2CppObject *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  char v66; // w27
  bool IsCountableWithPlus; // w0
  Il2CppObject **v68; // x8
  Il2CppObject *v69; // x26
  System_Text_StringBuilder_o *v70; // x25
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  int32_t getQpValue; // w8
  System_String_o *v75; // x27
  Il2CppObject *v76; // x0
  Il2CppObject *v77; // x8
  System_Text_StringBuilder_o *monitor; // x26
  System_Collections_Generic_List_object__o *v79; // x22
  int32_t v80; // w2
  int32_t v81; // w3
  System_Action_o *v82; // x22
  Il2CppObject *v83; // x19
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  Il2CppObject *v86; // x22
  System_String_o *v87; // x20
  System_Action_o *v88; // x21
  System_Collections_Generic_List_object__o *v89; // [xsp+30h] [xbp-80h]
  int32_t monitor_high; // [xsp+3Ch] [xbp-74h] BYREF
  Il2CppObject *v91; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A5EFC9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity___ctor___76035112);
    sub_1B885B0(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__);
    sub_1B885B0(&EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__);
    sub_1B885B0(&EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo);
    sub_1B885B0(&StringLiteral_8646/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_1B885B0(&StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/);
    sub_1B885B0(&StringLiteral_25115/*"{0}×{1:#,0}"*/);
    sub_1B885B0(&StringLiteral_25163/*"×"*/);
    sub_1B885B0(&StringLiteral_8641/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_49/*"\n "*/);
    sub_1B885B0(&StringLiteral_25458/*"＋"*/);
    byte_4A5EFC9 = 1;
  }
  v91 = 0LL;
  entity = 0LL;
  v3 = sub_1B887FC(EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_135;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_135;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_135;
  if ( !Instance )
    goto LABEL_135;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v10 = this->fields.missionToRecieve;
  if ( !v10 )
    goto LABEL_135;
  if ( !Instance )
    goto LABEL_135;
  AutomatedAction__SetStatusMissionNotify((AutomatedAction_o *)Instance, v10->fields.id, 5, 0, 0LL);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v11);
  v12 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v12, 0LL);
  *(_QWORD *)(v3 + 32) = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)v12, v13, v14);
  v15 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v15, 0LL);
  *(_QWORD *)(v3 + 24) = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)v15, v16, v17);
  v18 = sub_1B887FC(EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_135;
  *(_QWORD *)(v18 + 40) = v3;
  v21 = (Il2CppObject **)(v18 + 40);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 40), v3, v19, v20);
  Instance = (DataManager_o *)this->fields.missionToRecieve;
  if ( !Instance )
    goto LABEL_135;
  if ( LODWORD(Instance->fields.lastFrameTime) == 1 )
  {
    *(_DWORD *)(v18 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_135;
    v22 = *(_QWORD *)&GiftListById->max_length;
    if ( (int)v22 >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        v24 = &GiftListById->obj.klass + (int)v23;
        v27 = v24[4];
        v26 = (char *)(v24 + 4);
        v25 = v27;
        if ( !v27 )
          goto LABEL_135;
        Instance = (DataManager_o *)Gift__IsServant_37687840(HIDWORD(v25->_1.name), 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( v23 >= GiftListById->max_length )
            goto LABEL_37;
          if ( !*(_QWORD *)v26 )
            goto LABEL_135;
          Instance = (DataManager_o *)Gift__IsCommandCode_37688232(*(_DWORD *)(*(_QWORD *)v26 + 20LL), 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            if ( v23 >= GiftListById->max_length )
              goto LABEL_37;
            if ( !*(_QWORD *)v26 )
              goto LABEL_135;
            Instance = (DataManager_o *)Gift__IsCostumeRelease(*(_DWORD *)(*(_QWORD *)v26 + 20LL), 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_135;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
              if ( v23 >= GiftListById->max_length )
                goto LABEL_37;
              if ( !*(_QWORD *)v26 || !Instance )
                goto LABEL_135;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            &entity,
                                            *(_DWORD *)(*(_QWORD *)v26 + 24LL),
                                            (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !entity || !Instance )
                  goto LABEL_135;
                Instance = (DataManager_o *)CommonUI__IsGetItemEffect(
                                              (CommonUI_o *)Instance,
                                              (int32_t)entity[1].klass,
                                              0LL);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                {
                  if ( !this->fields.isTreasureEffect )
                    goto LABEL_34;
                  if ( !entity )
                    goto LABEL_135;
                  Instance = (DataManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                                (MissionListViewManager_o *)this,
                                                (int32_t)entity[1].klass,
                                                0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
LABEL_34:
                    ++*(_DWORD *)(v18 + 24);
                }
              }
            }
          }
        }
        if ( (_DWORD)v22 - 1 == v23 )
          break;
        if ( ++v23 >= GiftListById->max_length )
          goto LABEL_37;
      }
    }
    *(_BYTE *)(v18 + 28) = 1;
    v89 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v89,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v39 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v39,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)v22 >= 1 )
    {
      v40 = 0;
      while ( v40 < GiftListById->max_length )
      {
        v41 = &GiftListById->obj.klass + (int)v40;
        v44 = v41[4];
        v43 = (Il2CppObject **)(v41 + 4);
        v42 = v44;
        if ( !v44 )
          goto LABEL_135;
        Instance = (DataManager_o *)Gift__IsServant_37687840(HIDWORD(v42->_1.name), 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_135;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( v40 >= GiftListById->max_length )
            break;
          if ( !*v43 )
            goto LABEL_135;
          if ( !Instance )
            goto LABEL_135;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        (int32_t)(*v43)[1].monitor,
                                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_135;
          v45 = (ServantEntity_o *)Instance;
          IsCombineMaterial = SvtType__IsCombineMaterial(*((_DWORD *)&Instance->fields.lastFrameTime + 1), 0LL);
          Instance = (DataManager_o *)SvtType__IsStatusUp(v45->fields.type, 0LL);
          if ( IsCombineMaterial || ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !*v21 )
              goto LABEL_135;
            Instance = (DataManager_o *)(*v21)[2].klass;
            if ( !Instance )
              goto LABEL_135;
            v47 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                       Instance,
                                       Instance->klass[1]._1.image);
            Instance = (DataManager_o *)System_String__IsNullOrEmpty(v47, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !*v21 )
                goto LABEL_135;
              Instance = (DataManager_o *)(*v21)[2].klass;
              if ( !Instance )
                goto LABEL_135;
              Instance = (DataManager_o *)System_Text_StringBuilder__Append_60868928(
                                            (System_Text_StringBuilder_o *)Instance,
                                            (System_String_o *)StringLiteral_49/*"\n "*/,
                                            0LL);
            }
            if ( !*v21 )
              goto LABEL_135;
            klass = (System_Text_StringBuilder_o *)(*v21)[2].klass;
            Instance = (DataManager_o *)ServantEntity__getName(v45, 0, -1, 0LL);
            if ( v40 >= GiftListById->max_length )
              break;
            if ( !*v43 )
              goto LABEL_135;
            v52 = (Il2CppObject *)Instance;
            monitor_high = HIDWORD((*v43)[1].monitor);
            v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v49, v50, v51);
            Instance = (DataManager_o *)System_String__Format_61721404(
                                          (System_String_o *)StringLiteral_25115/*"{0}×{1:#,0}"*/,
                                          v52,
                                          v53,
                                          0LL);
            if ( !klass )
              goto LABEL_135;
            Instance = (DataManager_o *)System_Text_StringBuilder__Append_60868928(
                                          klass,
                                          (System_String_o *)Instance,
                                          0LL);
            if ( v40 >= GiftListById->max_length )
              break;
            if ( !v39 )
              goto LABEL_135;
            v5 = *v43;
            items = v39->fields._items;
            v57 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v39->fields._version;
            if ( !items )
              goto LABEL_135;
            size = v39->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v39,
                v5,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = &items->obj.klass + size;
              v39->fields._size = size + 1;
              v59[4] = (Il2CppClass *)v5;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v5, v54, v55);
            }
          }
        }
        else
        {
          if ( v40 >= GiftListById->max_length )
            break;
          if ( !*v43 )
            goto LABEL_135;
          Instance = (DataManager_o *)Gift__IsItem_37687788(HIDWORD((*v43)[1].klass), 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_135;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( v40 >= GiftListById->max_length )
              break;
            if ( !*v43 || !Instance )
              goto LABEL_135;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          &v91,
                                          (int32_t)(*v43)[1].monitor,
                                          (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !v91 || !Instance )
                goto LABEL_135;
              Instance = (DataManager_o *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v91[1].klass, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !this->fields.isTreasureEffect )
                  goto LABEL_85;
                if ( !v91 )
                  goto LABEL_135;
                Instance = (DataManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                              (MissionListViewManager_o *)this,
                                              (int32_t)v91[1].klass,
                                              0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
LABEL_85:
                  if ( v40 >= GiftListById->max_length )
                    break;
                  if ( !v89 )
                    goto LABEL_135;
                  v5 = *v43;
                  v62 = v89->fields._items;
                  v63 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                  ++v89->fields._version;
                  if ( !v62 )
                    goto LABEL_135;
                  v64 = v89->fields._size;
                  if ( (unsigned int)v64 >= v62->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v89,
                      v5,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v65 = &v62->obj.klass + v64;
                    v89->fields._size = v64 + 1;
                    v65[4] = (Il2CppClass *)v5;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v5, v60, v61);
                  }
                  if ( v40 >= GiftListById->max_length )
                    break;
                  Instance = (DataManager_o *)*v43;
                  if ( !*v43 )
                    goto LABEL_135;
                  Instance = (DataManager_o *)GiftEntity__isQp((GiftEntity_o *)Instance, 0LL);
                  v66 = (char)Instance;
                  if ( ((unsigned __int8)Instance & 1) == 0 || !this->fields.isQpAlreadyMax )
                  {
                    *(_BYTE *)(v18 + 28) = 0;
                    if ( !v91 )
                      goto LABEL_135;
                    IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)v91[3].klass, 0LL);
                    v68 = (Il2CppObject **)&StringLiteral_25458/*"＋"*/;
                    if ( !IsCountableWithPlus )
                      v68 = (Il2CppObject **)&StringLiteral_25163/*"×"*/;
                    v69 = *v68;
                    v70 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
                    System_Text_StringBuilder___ctor(v70, 0LL);
                    if ( !v91 || !v70 )
                      goto LABEL_135;
                    System_Text_StringBuilder__Append_60868928(v70, (System_String_o *)v91[1].monitor, 0LL);
                    if ( (v66 & 1) != 0 && this->fields.isQpMaxAlert && this->fields.getQpValue )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8646/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                      getQpValue = this->fields.getQpValue;
                    }
                    else
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8646/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                      if ( v40 >= GiftListById->max_length )
                        break;
                      if ( !*v43 )
                        goto LABEL_135;
                      getQpValue = HIDWORD((*v43)[1].monitor);
                    }
                    v75 = (System_String_o *)Instance;
                    monitor_high = getQpValue;
                    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v71, v72, v73);
                    Instance = (DataManager_o *)System_Text_StringBuilder__AppendFormat_60875280(
                                                  v70,
                                                  v75,
                                                  v69,
                                                  v76,
                                                  0LL);
                    v77 = *v21;
                    if ( !*v21 )
                      goto LABEL_135;
                    monitor = (System_Text_StringBuilder_o *)v77[1].monitor;
                    if ( *(int *)(v18 + 24) >= 2 )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8641/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                      if ( !monitor )
                        goto LABEL_135;
                      Instance = (DataManager_o *)System_Text_StringBuilder__AppendFormat(
                                                    monitor,
                                                    (System_String_o *)Instance,
                                                    (Il2CppObject *)v70,
                                                    0LL);
                      if ( !*v21 )
                        goto LABEL_135;
                      Instance = (DataManager_o *)(*v21)[1].monitor;
                      if ( !Instance )
                        goto LABEL_135;
                      Instance = (DataManager_o *)System_Text_StringBuilder__Append_60868928(
                                                    (System_Text_StringBuilder_o *)Instance,
                                                    (System_String_o *)StringLiteral_49/*"\n "*/,
                                                    0LL);
                    }
                    else
                    {
                      if ( !monitor )
                        goto LABEL_135;
                      Instance = (DataManager_o *)System_Text_StringBuilder__Append_60869556(
                                                    (System_Text_StringBuilder_o *)v77[1].monitor,
                                                    v70,
                                                    0LL);
                    }
                  }
                }
              }
            }
          }
        }
        if ( (_DWORD)v22 == ++v40 )
          goto LABEL_124;
      }
LABEL_37:
      sub_1B88814(Instance, v5);
    }
LABEL_124:
    v79 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v79,
      (System_Collections_Generic_IEnumerable_T__o *)v89,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_GiftEntity___ctor___76035112);
    *(_QWORD *)(v18 + 16) = v79;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v79, v80, v81);
    Instance = *(DataManager_o **)(v18 + 16);
    if ( !Instance )
LABEL_135:
      sub_1B8880C(Instance, v5);
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)Instance,
      (System_Collections_Generic_IEnumerable_T__o *)v39,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v82 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v82,
      (Il2CppObject *)v18,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__,
      0LL);
    if ( this->fields.isTreasureEffect )
    {
      Instance = (DataManager_o *)this->fields.eventRootComponent;
      if ( !Instance )
        goto LABEL_135;
      EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)Instance, 0LL);
      MissionListViewManager__StartEventMissionClearItemAction(
        (MissionListViewManager_o *)this,
        GiftListById,
        0,
        v82,
        0LL);
    }
    else
    {
      MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v82, 0LL);
    }
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Instance, 0LL);
    v29 = (int)StringLiteral_1/*""*/;
    *(_QWORD *)(v18 + 32) = StringLiteral_1/*""*/;
    v30 = (Il2CppObject **)(v18 + 32);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 32), v29, v31, v32);
    if ( !SetRewardData )
      goto LABEL_135;
    name = (Il2CppObject *)SetRewardData->fields.name;
    *v30 = name;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)name, v33, v34);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && *(_QWORD *)&getSvtList->max_length )
    {
      Instance = (DataManager_o *)this->fields.touchBlockObj;
      if ( !Instance )
        goto LABEL_135;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)v18,
        Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__,
        0LL);
      if ( !v37 )
        goto LABEL_135;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)v37, v38, 0LL);
    }
    else
    {
      v83 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v85 = System_String__Format(v84, *v30, 0LL);
      v86 = *v21;
      v87 = v85;
      v88 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v88,
        v86,
        Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__,
        0LL);
      if ( !v83 )
        goto LABEL_135;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v83,
        (System_String_o *)StringLiteral_1/*""*/,
        v87,
        v88,
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
        0LL);
    }
    Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_135;
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

  EventMissionItemListViewManager__CreateList_45684820(this, missionList, eventId, isDailyMission, 1, v5);
}


void __fastcall EventMissionItemListViewManager__CreateList_45684820(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_array *missionList,
        int32_t eventId,
        bool isDailyMission,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  bool v10; // w23
  int64_t Instance; // x0
  __int64 v12; // x1
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Entity; // x23
  bool v15; // w9
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  unsigned __int64 v19; // x26
  bool v20; // w22
  EventMissionEntity_o *v21; // x25
  System_Collections_Generic_List_object__o *itemList; // x23
  EventMissionItemListViewItem_o *v23; // x24
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  struct ListViewSort_o *sort; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x21
  UILabel_o *v33; // x21

  v10 = isTouchListEnabled;
  if ( (byte_4A5EFB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&EventMissionItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8649/*"MISSION_EMPTY_TXT"*/);
    byte_4A5EFB8 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v10;
  if ( !scrollView )
    goto LABEL_36;
  scrollView->fields.disableDragIfFits = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_36;
  v15 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  this->fields.isEndEvent = v15;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  Instance = UserMissionNewManager__ReadData(0LL);
  if ( !missionList )
    goto LABEL_36;
  v18 = *(_QWORD *)&missionList->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    v20 = isDailyMission;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v18 )
        sub_1B88814(Instance, v12);
      v21 = missionList->m_Items[v19];
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v23 = (EventMissionItemListViewItem_o *)sub_1B887FC(EventMissionItemListViewItem_TypeInfo);
      EventMissionItemListViewItem___ctor(v23, v21, v20, v24);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v23,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v23, v25, v26);
      }
      LODWORD(v18) = missionList->max_length;
      if ( (__int64)++v19 >= (int)v18 )
        goto LABEL_24;
    }
LABEL_36:
    sub_1B8880C(Instance, v12);
  }
LABEL_24:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v16, v17);
  }
  if ( !byte_4A5F058 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F058 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
  EventMissionItemListViewManager__setList(this, (const MethodInfo *)sort);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v33 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8649/*"MISSION_EMPTY_TXT"*/, 0LL);
    if ( !v33 )
      goto LABEL_36;
    UILabel__set_text(v33, (System_String_o *)Instance, 0LL);
  }
  this->fields.currentEventId = eventId;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


TerminalTransitionInfo_o *__fastcall EventMissionItemListViewManager__CreateTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v7; // x21
  EventMissionActionInfo_o *v8; // x20
  EventMissionActionEntity_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_String_array *vals; // x1
  EventMissionItemListViewManager_o *v13; // x0
  const MethodInfo *v14; // x2
  System_String_o *VoiceAssetName; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5EFC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1B885B0(&EventMissionActionInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalTransitionInfo_TypeInfo);
    byte_4A5EFC7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
    v7 = EntityFromIdProgressTypeAndActionType;
    v8 = (EventMissionActionInfo_o *)sub_1B887FC(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor_42169072(v8, v7, 0LL);
LABEL_11:
    v9 = (EventMissionActionEntity_o *)sub_1B887FC(TerminalTransitionInfo_TypeInfo);
    TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v9, 0LL);
    if ( v9 )
    {
      v9->fields.missionId = missionId;
      if ( v8 )
      {
        vals = v8->fields.vals;
        v9->fields.vals = vals;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->fields.vals, (int32_t)vals, v10, v11);
        VoiceAssetName = EventMissionItemListViewManager__GetVoiceAssetName(v13, v8->fields.vals, v14);
        *(_QWORD *)&v9->fields.optionId = VoiceAssetName;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->fields.optionId, (int32_t)VoiceAssetName, v16, v17);
        return (TerminalTransitionInfo_o *)v9;
      }
    }
LABEL_15:
    sub_1B8880C(Instance, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_15;
  v9 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
         (EventMissionActionMaster_o *)Instance,
         missionId,
         5,
         4,
         0LL);
  if ( v9 )
  {
    v8 = (EventMissionActionInfo_o *)sub_1B887FC(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v8, v9, 0LL);
    goto LABEL_11;
  }
  return (TerminalTransitionInfo_o *)v9;
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
  int32_t v3; // w3
  int32_t v6; // w1
  int32_t v7; // w1
  ServantStatusBattleListViewItem_o *p_dialogMessage; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t *p_overQpValue; // x26
  _DWORD *SelfUserGame; // x0
  __int64 v16; // x1
  _DWORD *v17; // x22
  int32_t v18; // w23
  int32_t QpMax; // w8
  int v20; // w23
  int32_t v21; // w24
  System_String_o *v22; // x23
  Il2CppObject *v23; // x24
  System_String_o *v24; // x0
  BalanceConfig_c *v25; // x8
  Il2CppObject *v26; // x25
  Il2CppObject *v27; // x0
  struct System_String_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w8
  int32_t num; // w8
  System_String_o *v33; // x21
  System_String_o *NumberFormat; // x0
  int32_t v35; // w8
  Il2CppObject *v36; // x22
  System_String_o *v37; // x0
  BalanceConfig_c *v38; // x8
  Il2CppObject *v39; // x23
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  bool result; // w0

  if ( (byte_4A5EFDA & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8683/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_8686/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EFDA = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogTitle, v6, (int32_t)method, v3);
  v7 = (int)StringLiteral_1/*""*/;
  p_dialogMessage = (ServantStatusBattleListViewItem_o *)&this->fields.dialogMessage;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogMessage, v7, v9, v10);
  v11 = (int)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogGetable, v11, v12, v13);
  p_overQpValue = &this->fields.overQpValue;
  this->fields.isQpAlreadyMax = 0;
  *(_QWORD *)&this->fields.overQpValue = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_24;
  v17 = SelfUserGame;
  v18 = SelfUserGame[24];
  SelfUserGame = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)SelfUserGame + 23) + 4LL);
  if ( v18 >= QpMax )
  {
    this->fields.isQpAlreadyMax = 1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_8683/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    if ( giftEnt )
    {
      v33 = (System_String_o *)SelfUserGame;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
      v35 = v17[24];
      v36 = (Il2CppObject *)NumberFormat;
      v37 = LocalizationManager__GetNumberFormat(v35, 0LL);
      v38 = BalanceConfig_TypeInfo;
      v39 = (Il2CppObject *)v37;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v38 = BalanceConfig_TypeInfo;
      }
      v40 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v38->static_fields->QpMax, 0LL);
      v41 = System_String__Format_61721472(v33, v36, v39, v40, 0LL);
      p_dialogMessage->klass = (ServantStatusBattleListViewItem_c *)v41;
      sub_1B88554(p_dialogMessage, (int32_t)v41, v42, v43);
      num = giftEnt->fields.num;
      goto LABEL_22;
    }
LABEL_24:
    sub_1B8880C(SelfUserGame, v16);
  }
  if ( !giftEnt )
    goto LABEL_24;
  v20 = v17[24];
  v21 = giftEnt->fields.num;
  if ( !SelfUserGame[56] )
  {
    j_il2cpp_runtime_class_init_0(SelfUserGame);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( v21 + v20 > QpMax )
  {
    this->fields.isQpAlreadyMax = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8686/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    v23 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
    v24 = LocalizationManager__GetNumberFormat(v17[24], 0LL);
    v25 = BalanceConfig_TypeInfo;
    v26 = (Il2CppObject *)v24;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    v27 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v25->static_fields->QpMax, 0LL);
    v28 = System_String__Format_61721472(v22, v23, v26, v27, 0LL);
    this->fields.dialogMessage = v28;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogMessage, (int32_t)v28, v29, v30);
    v31 = BalanceConfig_TypeInfo->static_fields->QpMax - v17[24];
    this->fields.getQpValue = v31;
    num = giftEnt->fields.num - v31;
LABEL_22:
    result = 1;
    *p_overQpValue = num;
    return result;
  }
  return 0;
}


EventMissionItemListViewItem_o *__fastcall EventMissionItemListViewManager__GetItem(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventMissionItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5EFBE & 1) == 0 )
  {
    sub_1B885B0(&EventMissionItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EFBE = 1;
  }
  result = (EventMissionItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventMissionItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 index,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  ConstantStrMaster_o *Master_object; // x0
  __int64 v7; // x1
  ConstantStrMaster_o *v8; // x21
  System_String_o *Value; // x24
  System_String_o *v10; // x23
  System_String_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_Object_array *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x19
  __int64 v24; // x0

  if ( (byte_4A5EFC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&StringLiteral_5634/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/);
    sub_1B885B0(&StringLiteral_5635/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/);
    sub_1B885B0(&StringLiteral_5702/*"EVENT_REWARD_REPLACE_MSG"*/);
    byte_4A5EFC0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_24;
  v8 = Master_object;
  Value = ConstantStrMaster__GetValue(Master_object, (System_String_o *)StringLiteral_5635/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, 0LL);
  v10 = ConstantStrMaster__GetValue(v8, (System_String_o *)StringLiteral_5634/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5702/*"EVENT_REWARD_REPLACE_MSG"*/, 0LL);
  Master_object = (ConstantStrMaster_o *)sub_1B88658(object___TypeInfo, 4LL);
  if ( !Master_object )
    goto LABEL_24;
  v14 = (System_Object_array *)Master_object;
  if ( Value )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B886EC(Value, Master_object->klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( !v14->max_length )
    goto LABEL_25;
  v14->m_Items[0] = (Il2CppObject *)Value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v14->m_Items, (int32_t)Value, v12, v13);
  if ( v10 )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B886EC(v10, v14->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( v14->max_length <= 1 )
    goto LABEL_25;
  v14->m_Items[1] = (Il2CppObject *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[1], (int32_t)v10, v15, v16);
  if ( !beforeGiftEntity )
    goto LABEL_24;
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(beforeGiftEntity, 0LL);
  v19 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B886EC(Master_object, v14->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_26:
      v24 = sub_1B88830(Master_object);
      sub_1B886D8(v24, 0LL);
    }
  }
  if ( v14->max_length <= 2 )
    goto LABEL_25;
  v14->m_Items[2] = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[2], (int32_t)v19, v17, v18);
  if ( !AfterGiftEntity )
LABEL_24:
    sub_1B8880C(Master_object, v7);
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(AfterGiftEntity, 0LL);
  v22 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B886EC(Master_object, v14->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( v14->max_length <= 3 )
LABEL_25:
    sub_1B88814(Master_object, v7);
  v14->m_Items[3] = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[3], (int32_t)v22, v20, v21);
  return System_String__Format_61721540(v11, v14, 0LL);
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
  signed int max_length; // w8
  System_String_o **p_monitor; // x20
  signed int v6; // w21
  System_String_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 methodPtr_low; // x9
  EventMissionItemListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A5EFC8 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (EventMissionItemListViewManager_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EFC8 = 1;
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
      sub_1B88814(this, afterActionVals);
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v6], 0LL);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v6 += 2;
    if ( v6 >= max_length )
      return *p_monitor;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0LL )
    sub_1B8880C(Instance, v9);
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
    && (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardRootComponent_TypeInfo )
  {
    p_monitor = (System_String_o **)&Instance[96].monitor;
    return *p_monitor;
  }
  sub_1B88ACC(Instance);
  EventMissionItemListViewManager__AcceptReward(v11, v12);
  return result;
}


void __fastcall EventMissionItemListViewManager__ModifyItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8
  DataManager_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  MissionListViewItem_o *current; // x22
  __int64 methodPtr_low; // x10
  __int64 MissionId; // x0
  __int64 v13; // x1
  struct EventMissionEntity_o *v14; // x8
  int32_t v15; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v17; // x1
  struct ListViewObject_o *v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5EFCF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EventMissionItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EFCF = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.isEndEvent && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve
      || !MasterData_object
      || (Instance = (DataManager_o *)UserEventMissionMaster__GetEntity(
                                        (UserEventMissionMaster_o *)MasterData_object,
                                        (int64_t)Instance,
                                        missionToRecieve->fields.id,
                                        0LL),
          !this->fields.itemList) )
    {
LABEL_33:
      sub_1B8880C(Instance, v4);
    }
    v7 = Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)this->fields.itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v20,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      current = (MissionListViewItem_o *)v20.fields._current;
      if ( !v20.fields._current
        || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v20.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventMissionItemListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1B8880C(v8, v9);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v20.fields._current, 0LL);
      v14 = this->fields.missionToRecieve;
      if ( !v14 )
        sub_1B8880C(MissionId, v13);
      v15 = MissionId;
      if ( (_DWORD)MissionId == v14->fields.id )
      {
        if ( !byte_4A57FF7 )
        {
          MissionId = sub_1B885B0(&EventRewardSaveData_TypeInfo);
          byte_4A57FF7 = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v15;
        if ( !v7 )
          sub_1B8880C(MissionId, v13);
        MissionListViewItem__ModifyItem(current, *(_DWORD *)&v7->fields._DispLog == 5, 0LL);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v18 = current->fields.viewObject;
        if ( !v18 )
          sub_1B8880C(0LL, v17);
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v18->klass->vtable._5_SetItem.method)(
          v18,
          current,
          v18->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall EventMissionItemListViewManager__MoveEaseScroll(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinish,
        EventMissionActionInfo_o *eventMissionActionInfo,
        const MethodInfo *method)
{
  EventMissionItemListViewItem_o *Item; // x0
  __int64 v10; // x1
  ListViewItem_o *v11; // x22
  UnityEngine_Object_o *viewObject; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v14; // x3
  System_Collections_IEnumerator_o *v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5EFBA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EFBA = 1;
  }
  memset(&v16, 0, sizeof(v16));
  Item = EventMissionItemListViewManager__GetItem(this, index, (const MethodInfo *)onFinish);
  if ( !Item )
    goto LABEL_16;
  v11 = (ListViewItem_o *)Item;
  viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    itemSortList = this->fields.itemSortList;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v16,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( (ListViewItem_o *)v16.fields._current == v11 )
        {
          viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v11, 0LL);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
      v15 = EventMissionItemListViewManager__SetPreviousFilter(this, v11->fields.sortIndex, onFinish, v14);
    }
    else
    {
      v15 = EventMissionItemListViewManager__MoveEaseScroll_IE(this, v11->fields.sortIndex, onFinish, v14);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
  }
  else
  {
LABEL_16:
    if ( !onFinish )
      sub_1B8880C(Item, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onFinish->fields.m_target)(
      onFinish->fields.original_method_info,
      *(_QWORD *)&onFinish->fields.extra_arg);
  }
}


System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__MoveEaseScroll_IE(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5EFBC & 1) == 0 )
  {
    sub_1B885B0(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo);
    byte_4A5EFBC = 1;
  }
  v7 = sub_1B887FC(EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)onFinished, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall EventMissionItemListViewManager__OnChangeAlphaAnim(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20

  if ( (byte_4A5EFD2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_4A5EFD2 = 1;
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim((EventMissionItemListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1B8880C(ObjectList, v4);
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

  if ( (byte_4A5EFD5 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventMissionItemListViewManager_OnClickFilterList__);
    byte_4A5EFD5 = 1;
  }
  v3 = Method_EventMissionItemListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventMissionItemListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_BECEB0[filterStatus];
  EventMissionItemListViewManager__setList(this, v5);
}


void __fastcall EventMissionItemListViewManager__OnClickListView(
        EventMissionItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x20
  MissionListViewItem_o *EventMissionEntity; // x0
  MissionListViewItem_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 methodPtr_low; // x10
  EventMissionItemListViewItem_o *Item; // x0
  MissionListViewItem_o **v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t selectNum; // w8
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v17; // x2
  GiftAddMaster_o *v18; // x22
  GiftAddEntity_o *ValidPriorDataById; // x0
  GiftAddEntity_o *v20; // x22
  int32_t giftId; // w25
  int32_t priorGiftId; // w25
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t z_low; // w8
  MissionListViewManager_c *v26; // x0
  struct System_String_o *TREASURE_GET_NORMAL; // x1
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  ScrTerminalListTop_c *v30; // x0
  int32_t targetId; // w24
  struct System_String_o *OverwriteTreasureEffectId; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  GiftMaster_o *v35; // x23
  GiftEntity_o *DataById; // x0
  GiftEntity_o *v37; // x22
  EventMissionEntity_o *v38; // x1
  const MethodInfo *v39; // x2
  GiftEntity_array *OriginalGiftData; // x19
  GiftEntity_o *IconGiftEntity; // x0
  GiftEntity_o *v42; // x21
  Il2CppObject *Instance; // x19
  const MethodInfo *v44; // x3
  System_String_o *ReplaceDialogMessage; // x21
  System_Action_o *v46; // x22

  if ( (byte_4A5EFBF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewManager_OnClickListView__);
    sub_1B885B0(&EventMissionItemListViewObject_TypeInfo);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&MissionListViewManager_TypeInfo);
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__);
    sub_1B885B0(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EFBF = 1;
  }
  v5 = sub_1B887FC(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_84;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( this->fields.isClickListViewEnabled )
  {
    if ( !obj )
      goto LABEL_84;
    methodPtr_low = LOBYTE(EventMissionItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
      goto LABEL_84;
    if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewObject_TypeInfo )
      goto LABEL_84;
    Item = EventMissionItemListViewObject__GetItem((EventMissionItemListViewObject_o *)obj, (const MethodInfo *)v7);
    *(_QWORD *)(v5 + 24) = Item;
    v12 = (MissionListViewItem_o **)(v5 + 24);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)Item, v13, v14);
    EventMissionEntity = *(MissionListViewItem_o **)(v5 + 24);
    if ( !EventMissionEntity )
      goto LABEL_84;
    EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0LL);
    if ( !EventMissionEntity )
      goto LABEL_84;
    selectNum = EventMissionEntity->fields.selectNum;
    *(_WORD *)&this->fields.isQpMaxAlert = 0;
    this->fields.selectEventMissionId = selectNum;
    EventMissionEntity = *v12;
    if ( !*v12 )
      goto LABEL_84;
    if ( (((__int64 (__fastcall *)(MissionListViewItem_o *, void *))EventMissionEntity->klass->vtable._8_get_IsShowRewardInfo.method)(
            EventMissionEntity,
            EventMissionEntity->klass[1]._1.image) & 1) == 0 )
      goto LABEL_16;
    EventMissionEntity = *v12;
    if ( !*v12 )
      goto LABEL_84;
    EventMissionEntity = (MissionListViewItem_o *)EventMissionItemListViewItem__get_IsHideReward(
                                                    (EventMissionItemListViewItem_o *)EventMissionEntity,
                                                    (const MethodInfo *)v7);
    if ( ((unsigned __int8)EventMissionEntity & 1) != 0 )
      goto LABEL_16;
    v7 = *v12;
    if ( !*v12 )
      goto LABEL_84;
    if ( LOBYTE(v7[1].monitor) )
    {
LABEL_16:
      EventMissionEntity = *v12;
      if ( !*v12 )
        goto LABEL_84;
      if ( EventMissionEntity->fields.progStatus == 3 )
      {
        if ( this->fields.filterStatus == 1 )
        {
          EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                          EventMissionEntity,
                                                          0LL);
          if ( !EventMissionEntity )
            goto LABEL_84;
          this->fields.tempSelectDispNo = EventMissionEntity->fields.sortValue0;
          EventMissionEntity = *v12;
          if ( !*v12 )
            goto LABEL_84;
        }
        if ( EventMissionItemListViewItem__GetIsRewardQp(
               (EventMissionItemListViewItem_o *)EventMissionEntity,
               (const MethodInfo *)v7) )
        {
          EventMissionEntity = *v12;
          if ( !*v12 )
            goto LABEL_84;
          IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp(
                         (EventMissionItemListViewItem_o *)EventMissionEntity,
                         (const MethodInfo *)v7);
          this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v17);
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftAddMaster___);
        if ( !*v12 )
          goto LABEL_84;
        v18 = (GiftAddMaster_o *)EventMissionEntity;
        EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v12, 0LL);
        if ( !EventMissionEntity || !v18 )
          goto LABEL_84;
        ValidPriorDataById = GiftAddMaster__GetValidPriorDataById(
                               v18,
                               HIDWORD(EventMissionEntity->fields.sortValue2B),
                               0LL);
        v20 = ValidPriorDataById;
        if ( ValidPriorDataById && ValidPriorDataById->fields.priority >= 2 )
        {
          EventMissionEntity = *v12;
          if ( !*v12 )
            goto LABEL_84;
          giftId = v20->fields.giftId;
          EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                          EventMissionEntity,
                                                          0LL);
          if ( !EventMissionEntity )
            goto LABEL_84;
          if ( giftId == HIDWORD(EventMissionEntity->fields.sortValue2B) )
          {
            EventMissionEntity = *v12;
            if ( !*v12 )
              goto LABEL_84;
            priorGiftId = v20->fields.priorGiftId;
            EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                            EventMissionEntity,
                                                            0LL);
            if ( !EventMissionEntity )
              goto LABEL_84;
            if ( priorGiftId != HIDWORD(EventMissionEntity->fields.sortValue2B) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftAddMaster___);
              if ( !EventMissionEntity )
                goto LABEL_84;
              v20 = GiftAddMaster__GetValidPriorDataById(
                      (GiftAddMaster_o *)EventMissionEntity,
                      v20->fields.priorGiftId,
                      0LL);
            }
          }
        }
        EventMissionEntity = *v12;
        if ( !*v12 )
          goto LABEL_84;
        EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                        EventMissionEntity,
                                                        0LL);
        if ( !EventMissionEntity )
          goto LABEL_84;
        z_low = LODWORD(EventMissionEntity->fields.basePosition.fields.z);
        this->fields.giftIconId = z_low;
        if ( z_low >= 1 )
        {
          if ( z_low <= 3 )
          {
            v30 = ScrTerminalListTop_TypeInfo;
            if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
              v30 = ScrTerminalListTop_TypeInfo;
            }
            TREASURE_GET_NORMAL = v30->static_fields->TREASURE_GET_NORMAL;
          }
          else
          {
            v26 = MissionListViewManager_TypeInfo;
            if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
              v26 = MissionListViewManager_TypeInfo;
            }
            TREASURE_GET_NORMAL = v26->static_fields->PRIZE_GET_NORMAL;
          }
          this->fields.useTreasureGetEffectName = TREASURE_GET_NORMAL;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.useTreasureGetEffectName,
            (int32_t)TREASURE_GET_NORMAL,
            v23,
            v24);
        }
        if ( v20 )
        {
          EventMissionEntity = *v12;
          if ( !*v12 )
            goto LABEL_84;
          targetId = v20->fields.targetId;
          EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                          EventMissionEntity,
                                                          0LL);
          if ( !EventMissionEntity )
            goto LABEL_84;
          if ( targetId == EventMissionEntity->fields.selectNum )
          {
            OverwriteTreasureEffectId = GiftAddEntity__GetOverwriteTreasureEffectId(v20, 0LL);
            if ( !OverwriteTreasureEffectId )
              OverwriteTreasureEffectId = this->fields.useTreasureGetEffectName;
            this->fields.useTreasureGetEffectName = OverwriteTreasureEffectId;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&this->fields.useTreasureGetEffectName,
              (int32_t)OverwriteTreasureEffectId,
              v33,
              v34);
          }
        }
        if ( this->fields.useTreasureGetEffectName )
          this->fields.isTreasureEffect = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
        if ( !*v12
          || (v35 = (GiftMaster_o *)EventMissionEntity,
              (EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v12, 0LL)) == 0LL)
          || !v35 )
        {
LABEL_84:
          sub_1B8880C(EventMissionEntity, v7);
        }
        DataById = GiftMaster__getDataById(v35, HIDWORD(EventMissionEntity->fields.sortValue2B), 0LL);
        if ( !DataById
          || (v37 = DataById, !DataById->fields._IsReplacedData_k__BackingField)
          || this->fields.isTreasureEffect
          || this->fields.giftIconId != -1 )
        {
          EventMissionEntity = *v12;
          if ( *v12 )
          {
            v38 = MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0LL);
            EventMissionItemListViewManager__recieveReward(this, v38, v39);
            return;
          }
          goto LABEL_84;
        }
        EventMissionEntity = *v12;
        if ( !*v12 )
          goto LABEL_84;
        EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                        EventMissionEntity,
                                                        0LL);
        if ( !EventMissionEntity )
          goto LABEL_84;
        OriginalGiftData = GiftMaster__GetOriginalGiftData(v35, HIDWORD(EventMissionEntity->fields.sortValue2B), 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(OriginalGiftData, 0LL);
        if ( IconGiftEntity )
        {
          v42 = IconGiftEntity;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                                   (EventMissionItemListViewManager_o *)Instance,
                                   v42,
                                   v37,
                                   v44);
          v46 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v46,
            (Il2CppObject *)v5,
            Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__,
            0LL);
          if ( !Instance )
            goto LABEL_84;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            ReplaceDialogMessage,
            v46,
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
            0LL);
        }
      }
      else
      {
        v28 = Method_EventMissionItemListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v28 = (_QWORD *)sub_1B885C8(Method_EventMissionItemListViewManager_OnClickListView__);
        v29 = (System_Reflection_MethodBase_o *)sub_1B88594(v28, v28[4]);
        OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
      }
    }
    else
    {
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, v7, 1, 0LL);
    }
  }
}


void __fastcall EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  GiftMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x0
  EventMissionItemListViewManager___c_c *v9; // x8
  System_Object_array *v10; // x21
  System_Func_object__bool__o *_9__78_0; // x22
  Il2CppObject *v12; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct EventMissionEntity_o *v16; // x8

  if ( (byte_4A5EFD8 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_GiftEntity___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__);
    sub_1B885B0(&EventMissionItemListViewManager___c_TypeInfo);
    byte_4A5EFD8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Master_object )
    goto LABEL_19;
  GiftListById = GiftMaster__GetGiftListById(Master_object, missionToRecieve->fields.giftId, 0LL);
  v9 = EventMissionItemListViewManager___c_TypeInfo;
  v10 = (System_Object_array *)GiftListById;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v9 = EventMissionItemListViewManager___c_TypeInfo;
  }
  _9__78_0 = (System_Func_object__bool__o *)v9->static_fields->__9__78_0;
  if ( !_9__78_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__78_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__78_0,
      v12,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__,
      0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__78_0 = (struct System_Func_GiftEntity__bool__o *)_9__78_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__78_0, (int32_t)_9__78_0, v14, v15);
  }
  if ( BasicHelper__Any_object__48672124(
         v10,
         (System_Func_T__bool__o *)_9__78_0,
         (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_GiftEntity___) )
  {
    Master_object = (GiftMaster_o *)this->fields.commandAssistLvUpDialog;
    if ( Master_object )
    {
      Master_object = (GiftMaster_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Master_object,
                                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
      v16 = this->fields.missionToRecieve;
      if ( v16 )
      {
        if ( Master_object )
        {
          CommandAssistLvUpDialogComponent__Open(
            (CommandAssistLvUpDialogComponent_o *)Master_object,
            this->fields.currentEventId,
            v16->fields.id,
            closeCallback,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1B8880C(Master_object, v6);
  }
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall EventMissionItemListViewManager__OpenQpMaxAlertDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v6; // x20
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x23
  System_String_o *dialogTitle; // x24
  System_String_o *dialogMessage; // x25
  System_String_o *dialogGetable; // x26
  System_String_o *v13; // x22
  System_Action_o *v14; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v16; // x29
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4A5EFDB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewManager_Decide__);
    sub_1B885B0(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__);
    sub_1B885B0(&Method_EventMissionItemListViewManager_TransitionToCombineScene__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11659/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11658/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_1B885B0(&StringLiteral_11665/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_4A5EFDB = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogCallBack, (int32_t)callback, (int32_t)method, v3);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11659/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11665/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11658/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v13 = v8;
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0LL);
  onTransition = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0LL);
  v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0LL);
  if ( !qpMaxAlertDialog )
    sub_1B8880C(v17, v18);
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    v6,
    v7,
    v13,
    v14,
    onTransition,
    v16,
    1,
    0LL);
}


void __fastcall EventMissionItemListViewManager__RedisplayEventUI(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5EFD9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SceneList_TypeInfo);
    byte_4A5EFD9 = 1;
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
      sub_1B8880C(gameObject, v5);
    }
  }
}


void __fastcall EventMissionItemListViewManager__RefrashListDisp(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v10; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5EFD3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EventMissionItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_4A5EFD3 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v5 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v11;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
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
    sub_1B8880C(v6, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v10,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v10 >= v5->fields._size )
        return;
    }
LABEL_17:
    sub_1B8880C(ObjectList, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__RefrashListDisp_45703016(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v10; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w22
  System_Collections_Generic_List_object__o *v14; // x23
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5EFD4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EventMissionItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_4A5EFD4 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current
      || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v16.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventMissionItemListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_1B8880C(v6, v7);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v16.fields._current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(this, v10);
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  v12 = itemList;
  if ( size > 0 )
  {
    v13 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v12,
                                                                v13,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !itemList )
        break;
      v14 = itemList;
      itemList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewObject__GetItem(
                                                                (EventMissionItemListViewObject_o *)itemList,
                                                                *(const MethodInfo **)&missionId);
      if ( !itemList )
        break;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0LL) == missionId )
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))v14->klass->vtable._9_unknown.method)(
          v14,
          this->fields.isInput,
          v14->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v13 >= v12->fields._size )
        return;
    }
LABEL_21:
    sub_1B8880C(itemList, *(_QWORD *)&missionId);
  }
}


void __fastcall EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_4A5EFC6 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5EFC6 = 1;
  }
  if ( !byte_4A5F059 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F059 = 1;
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v9; // x1
  struct EventMissionItemListViewItem_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5EFD0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_18843/*"ef_mission_extric01"*/);
    sub_1B885B0(&StringLiteral_21503/*"modifyOpenItem"*/);
    byte_4A5EFD0 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1B8880C(0LL, v4);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v16,
        ObjectList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v17 = v16;
      while ( 1 )
      {
        v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v17,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
        if ( !v5 )
          break;
        current = v17.fields._current;
        if ( !v17.fields._current )
          sub_1B8880C(v5, v6);
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v17.fields._current,
                                          v6);
        v10 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_1B8880C(0LL, v9);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4A57FF7 )
          {
            sub_1B885B0(&EventRewardSaveData_TypeInfo);
            byte_4A57FF7 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openTargetItem, (int32_t)v10, v11, v12);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v10, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_18843/*"ef_mission_extric01"*/, transform, v15);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21503/*"modifyOpenItem"*/,
      this->fields.openItemTime,
      0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__SetPreviousFilter(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5EFBB & 1) == 0 )
  {
    sub_1B885B0(&EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo);
    byte_4A5EFBB = 1;
  }
  v7 = sub_1B887FC(EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)onFinished, v10, v11);
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
    sub_1B8880C(scrollView, enable);
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

  if ( (byte_4A5EFDC & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5EFDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
  EventMissionItemListViewManager__dialogCallback(this, 0, v5);
}


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

  if ( (byte_4A5EFDE & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5EFDE = 1;
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
  System_Collections_Generic_List_object__o *v3; // x20
  void *Instance; // x0
  __int64 v5; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  System_Collections_Generic_List_object__o *EntityListFromIdProgressTypeAndActionType; // x0
  __int64 *v8; // x24
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_Enumerator_object__o *v19; // x0
  struct EventMissionEntity_o *v20; // x8
  Il2CppObject *v21; // x22
  EventMissionActionInfo_o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x21
  Il2CppObject *v32; // x22
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *targetMissionId; // x1
  int v37; // w8
  __int64 v38; // x8
  int32_t v39; // w0
  const MethodInfo *v40; // x2
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4A5EFDF & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventMissionActionInfo__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_1B885B0(&EventMissionActionInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__);
    sub_1B885B0(&EventMissionItemListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_16646/*"actionAfterCallback"*/);
    byte_4A5EFDF = 1;
  }
  memset(&v43, 0, sizeof(v43));
  memset(&v42, 0, sizeof(v42));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v43 = v41;
    v8 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v43.fields._current;
      v10 = (EventMissionActionInfo_o *)sub_1B887FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_42169072(v10, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v3 )
        sub_1B8880C(v11, v12);
      items = v3->fields._items;
      v16 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(v11, v12);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v10,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v10, v13, v14);
      }
    }
    v19 = &v43;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v20 = this->fields.missionToRecieve;
    if ( !v20 )
      goto LABEL_47;
    if ( !Instance )
      goto LABEL_47;
    Instance = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
                 (EventMissionActionMaster_o *)Instance,
                 v20->fields.id,
                 5,
                 3,
                 0LL);
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v42 = v41;
    v8 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v21 = v42.fields._current;
      v22 = (EventMissionActionInfo_o *)sub_1B887FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v22, (EventMissionActionEntity_o *)v21, 0LL);
      if ( !v3 )
        sub_1B8880C(v23, v24);
      v27 = v3->fields._items;
      v28 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v3->fields._version;
      if ( !v27 )
        sub_1B8880C(v23, v24);
      v29 = v3->fields._size;
      if ( (unsigned int)v29 >= v27->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v22,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &v27->obj.klass + v29;
        v3->fields._size = v29 + 1;
        v30[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v22, v25, v26);
      }
    }
    v19 = &v42;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(v19, (const MethodInfo_3278300 *)*v8);
  Instance = EventMissionItemListViewManager___c_TypeInfo;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    Instance = EventMissionItemListViewManager___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionItemListViewManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v31 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionActionInfo__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__,
      0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__66_1 = (struct System_Comparison_EventMissionActionInfo__o *)v31;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__66_1, (int32_t)v31, v34, v35);
  }
  if ( !v3 )
    goto LABEL_47;
  System_Collections_Generic_List_object___Sort_55571192(
    v3,
    v31,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  v37 = v3->fields._size;
  if ( v37 <= 0 )
    goto LABEL_42;
  Instance = System_Collections_Generic_List_object___get_Item(
               v3,
               v37 - 1,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
  if ( !Instance || (v38 = *((_QWORD *)Instance + 4)) == 0 )
LABEL_47:
    sub_1B8880C(Instance, v5);
  if ( !*(_DWORD *)(v38 + 24) )
    sub_1B88814(Instance, v5);
  v39 = System_Int32__Parse(*(System_String_o **)(v38 + 32), 0LL);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v39 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_45703016(this, (int32_t)targetMissionId, v40);
    goto LABEL_44;
  }
LABEL_42:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_44:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16646/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0LL);
}


void __fastcall EventMissionItemListViewManager__actionAfterCallback(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *actionCallback; // x19
  ServantStatusBattleListViewItem_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (ServantStatusBattleListViewItem_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0LL;
    sub_1B88554(p_actionCallback, 0, v2, v3);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5EFCA & 1) == 0 )
  {
    sub_1B885B0(&EventMissionItemListViewManager__afterReward_d__59_TypeInfo);
    byte_4A5EFCA = 1;
  }
  v3 = sub_1B887FC(EventMissionItemListViewManager__afterReward_d__59_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall EventMissionItemListViewManager__checkAcceptable(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v6; // x8
  int64_t v7; // x20
  int64_t v8; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w21
  BalanceConfig_c *v13; // x0
  int32_t PresentBoxMax; // w8
  int v15; // w20
  EventMissionItemListViewManager___c_c *v16; // x0
  System_Action_o *_9__51_0; // x20
  Il2CppObject *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct EventMissionItemListViewManager___c_StaticFields *v21; // x0
  ServantStatusBattleListViewItem_o *p__9__51_0; // x0
  __int64 *v23; // x8
  EventMissionItemListViewManager___c_c *v24; // x0
  Il2CppObject *v25; // x21
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4A5EFC2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__);
    sub_1B885B0(&EventMissionItemListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_12136/*"SHOW_MSG"*/);
    sub_1B885B0(&StringLiteral_11118/*"REWARD_ACCEPTABLE"*/);
    byte_4A5EFC2 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_44;
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v6 = this->fields.missionToRecieve;
  if ( !v6 )
    goto LABEL_44;
  if ( v6->fields.rewardType == 1 )
  {
    v7 = Instance;
    if ( !Instance )
      goto LABEL_44;
    if ( Gift__IsServant_37687840(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_44;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            *(_DWORD *)(v7 + 24),
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_44;
      v8 = Instance;
      if ( SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL) || SvtType__IsStatusUp(*(_DWORD *)(v8 + 84), 0LL) )
      {
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_44;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !MasterData_object )
          goto LABEL_44;
        Instance = (int64_t)UserPresentBoxMaster__getVaildList(
                              (UserPresentBoxMaster_o *)MasterData_object,
                              Instance,
                              0LL);
        if ( !Instance )
          goto LABEL_44;
        v12 = *(_DWORD *)(Instance + 24);
        v13 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v13 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v13->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v12 )
        {
          v24 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v24 = EventMissionItemListViewManager___c_TypeInfo;
          }
          _9__51_0 = v24->static_fields->__9__51_0;
          if ( !_9__51_0 )
          {
            if ( !v24->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v24);
              v24 = EventMissionItemListViewManager___c_TypeInfo;
            }
            v25 = (Il2CppObject *)v24->static_fields->__9;
            _9__51_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_0,
              v25,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__,
              0LL);
            static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__51_0 = _9__51_0;
            p__9__51_0 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0;
            goto LABEL_41;
          }
LABEL_42:
          this->fields.ShowMSG = _9__51_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ShowMSG, (int32_t)_9__51_0, v10, v11);
          Instance = (int64_t)this->fields.targetFSM;
          if ( Instance )
          {
            v23 = &StringLiteral_12136/*"SHOW_MSG"*/;
            goto LABEL_34;
          }
LABEL_44:
          sub_1B8880C(Instance, v4);
        }
        v15 = *(_DWORD *)(v7 + 28);
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v15 + v12 > PresentBoxMax )
        {
          v16 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v16 = EventMissionItemListViewManager___c_TypeInfo;
          }
          _9__51_0 = v16->static_fields->__9__51_1;
          if ( !_9__51_0 )
          {
            if ( !v16->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v16);
              v16 = EventMissionItemListViewManager___c_TypeInfo;
            }
            v18 = (Il2CppObject *)v16->static_fields->__9;
            _9__51_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_0,
              v18,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__,
              0LL);
            v21 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v21->__9__51_1 = _9__51_0;
            p__9__51_0 = (ServantStatusBattleListViewItem_o *)&v21->__9__51_1;
LABEL_41:
            sub_1B88554(p__9__51_0, (int32_t)_9__51_0, v19, v20);
            goto LABEL_42;
          }
          goto LABEL_42;
        }
      }
    }
  }
  Instance = (int64_t)this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_44;
  v23 = &StringLiteral_11118/*"REWARD_ACCEPTABLE"*/;
LABEL_34:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v23, 0LL);
}


void __fastcall EventMissionItemListViewManager__dialogCallback(
        EventMissionItemListViewManager_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Action_int__o *dialogCallBack; // x20
  ServantStatusBattleListViewItem_o *p_dialogCallBack; // x0

  dialogCallBack = this->fields.dialogCallBack;
  if ( dialogCallBack )
  {
    p_dialogCallBack = (ServantStatusBattleListViewItem_o *)&this->fields.dialogCallBack;
    p_dialogCallBack->klass = 0LL;
    sub_1B88554(p_dialogCallBack, 0, (int32_t)method, v3);
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
  int32_t v3; // w3
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v9; // x1
  int32_t filterStatus; // w8
  struct EventMissionEntity_o *v11; // x8

  if ( (byte_4A5EFCD & 1) == 0 )
  {
    sub_1B885B0(&EventMissionItemListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4A5EFCD = 1;
  }
  if ( data )
  {
    EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)EventMissionItemListViewManager_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v11 = this->fields.missionToRecieve;
    if ( !v11 || !Instance )
LABEL_13:
      sub_1B8880C(Instance, v7);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v11->fields.id, 5, 0, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall EventMissionItemListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__48635516; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4A5EFCE & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&EventMissionItemListViewManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EFCE = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48635516,
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A55CE1 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A55CE6 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1B8880C(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v7;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ClippingObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5EFB7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EFB7 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                 (EventMissionItemListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v3;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5EFB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
    byte_4A5EFB6 = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_2EFE89C *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void __fastcall EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4A5EFCC & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewManager_endloadEffect__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&StringLiteral_5843/*"Effect/EventMission"*/);
    byte_4A5EFCC = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5843/*"Effect/EventMission"*/, v3, 1, 0LL);
}


void __fastcall EventMissionItemListViewManager__missionRewardCallback(
        EventMissionItemListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v4; // x19
  __int64 *v5; // x8
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  EventMissionItemListViewManager_o *v9; // x20
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  struct GetSvts_array *items; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Collections_Generic_List_ListViewDropObject__o *v14; // x8
  struct GetCommandCodes_array *v15; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20

  v4 = this;
  if ( (byte_4A5EFC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    this = (EventMissionItemListViewManager_o *)sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5EFC5 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    v6 = (Il2CppObject *)System_String__Concat_61718292(
                           (System_String_o *)StringLiteral_15812/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16069/*"]"*/,
                           0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (EventMissionItemListViewManager_o *)JsonManager__DeserializeArray_object_(
                                                  v6,
                                                  (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    if ( this )
    {
      v9 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_22;
      dropObjectList = this->fields.dropObjectList;
      if ( !dropObjectList )
        goto LABEL_21;
      items = (struct GetSvts_array *)dropObjectList->fields._items;
      v4->fields.getSvtList = items;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.getSvtList, (int32_t)items, v7, v8);
      if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
LABEL_22:
        sub_1B88814(this, result);
      v14 = v9->fields.dropObjectList;
      if ( v14 )
      {
        v15 = *(struct GetCommandCodes_array **)&v14->fields._size;
        v4->fields.getCommandCodeList = v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.getCommandCodeList, (int32_t)v15, v12, v13);
        missionToRecieve = v4->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_4A57FF7 )
          {
            sub_1B885B0(&EventRewardSaveData_TypeInfo);
            byte_4A57FF7 = 1;
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
              v5 = &StringLiteral_11060/*"REQUEST_OK"*/;
              goto LABEL_20;
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B8880C(this, result);
  }
  this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
  if ( !this )
    goto LABEL_21;
  v5 = &StringLiteral_11058/*"REQUEST_NG"*/;
LABEL_20:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall EventMissionItemListViewManager__modifyOpenItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  __int64 v8; // x1
  int32_t MissionId; // w21
  MissionListViewItem_o *openTargetItem; // x0
  UnityEngine_Object_o *monitor; // x21
  __int64 v12; // x1
  EventMissionItemListViewObject_o *v13; // x0
  __int64 v14; // x9
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x1
  void *v17; // x0
  System_Action_o *v18; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5EFD1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&EventMissionItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__);
    sub_1B885B0(&EventMissionItemListViewObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EFD1 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1B8880C(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v20,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v20.fields._current;
      if ( !v20.fields._current
        || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v20.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventMissionItemListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1B8880C(v4, v5);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v20.fields._current, 0LL);
      openTargetItem = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !openTargetItem )
        sub_1B8880C(0LL, v8);
      if ( MissionId == MissionListViewItem__get_MissionId(openTargetItem, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v13 = (EventMissionItemListViewObject_o *)current[6].monitor;
          if ( !v13 )
            goto LABEL_30;
          v14 = LOBYTE(EventMissionItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v13->klass->vtable._0_Equals.methodPtr) < (unsigned int)v14
            || (EventMissionItemListViewObject_c *)v13->klass->_2.typeHierarchy[v14 - 1] != EventMissionItemListViewObject_TypeInfo )
          {
            sub_1B88ACC(v13);
LABEL_30:
            sub_1B8880C(v13, v12);
          }
          EventMissionItemListViewObject__ModifyBoardImage(
            v13,
            (const MethodInfo *)EventMissionItemListViewObject_TypeInfo);
        }
      }
      v15 = (UnityEngine_Object_o *)current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
      {
        v17 = current[6].monitor;
        if ( !v17 )
          sub_1B8880C(0LL, v16);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v18, 0LL);
}


void __fastcall EventMissionItemListViewManager__recieveReward(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x22
  PlayMakerFSM_o *targetFSM; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct EventMissionEntity_o **v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_Action_int__o *v13; // x20
  const MethodInfo *v14; // x2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  struct EventMissionEntity_o *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5EFC1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewManager_recieveReward__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    sub_1B885B0(&EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_1B885B0(&StringLiteral_8680/*"MISSION_REWARD"*/);
    byte_4A5EFC1 = 1;
  }
  v5 = sub_1B887FC(EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = missionEntity;
  v10 = (struct EventMissionEntity_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)missionEntity, v11, v12);
  if ( this->fields.isQpMaxAlert )
  {
    v13 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v13,
      (Il2CppObject *)v5,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__,
      0LL);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v13, v14);
    return;
  }
  v15 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B885C8(Method_EventMissionItemListViewManager_recieveReward__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 8, 0LL);
  v17 = *v10;
  this->fields.missionToRecieve = *v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.missionToRecieve, (int32_t)v17, v18, v19);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_1B8880C(targetFSM, v7);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8680/*"MISSION_REWARD"*/, 0LL);
}


void __fastcall EventMissionItemListViewManager__requestMissionReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4A5EFC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventMissionItemListViewManager_missionRewardCallback__);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5EFC4 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v5,
               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
LABEL_9:
    sub_1B8880C(Instance, v4);
  EventMissionClearRewardRequest__beginRequest(
    (EventMissionClearRewardRequest_o *)Instance,
    missionToRecieve->fields.id,
    0LL);
}


void __fastcall EventMissionItemListViewManager__setAfterAction(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4A5EFCB & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4A5EFCB = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_1B8880C(Instance, v4);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, missionToRecieve->fields.id, 5, 1, 0LL);
  }
  else
  {
    EventMissionItemListViewManager__loadOpenMissionEffect(this, method);
  }
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

  if ( (byte_4A5EFD7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EFD7 = 1;
  }
  filterBtnTxt = (UnityEngine_Object_o *)this->fields.filterBtnTxt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(filterBtnTxt, 0LL, 0LL) )
  {
    v7 = this->fields.filterBtnTxt;
    if ( !v7 || (UISprite__set_spriteName(v7, targetFile, 0LL), (v7 = this->fields.filterBtnTxt) == 0LL) )
      sub_1B8880C(v7, v6);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
      v7,
      v7->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventMissionItemListViewManager__setList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  ListViewSort_o *operationSortInfo; // x0
  bool v11; // w2
  bool v12; // w2
  bool v13; // w2
  bool v14; // w2
  int32_t filterStatus; // w19

  if ( (byte_4A5EFD6 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&StringLiteral_17569/*"btn_txt_completed"*/);
    sub_1B885B0(&StringLiteral_17602/*"btn_txt_receipt"*/);
    sub_1B885B0(&StringLiteral_17601/*"btn_txt_progress"*/);
    sub_1B885B0(&StringLiteral_17585/*"btn_txt_notopen"*/);
    sub_1B885B0(&StringLiteral_17551/*"btn_txt_all"*/);
    byte_4A5EFD6 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759792(v4, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7);
  switch ( this->fields.filterStatus )
  {
    case 0:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17551/*"btn_txt_all"*/, v9);
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
      v11 = 1;
      goto LABEL_31;
    case 1:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17602/*"btn_txt_receipt"*/, v9);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v12 = 0;
      goto LABEL_16;
    case 2:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17601/*"btn_txt_progress"*/, v9);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v12 = 1;
LABEL_16:
      ListViewSort__SetFilter(operationSortInfo, 14, v12, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v13 = 0;
LABEL_22:
      ListViewSort__SetFilter(operationSortInfo, 15, v13, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v14 = 0;
LABEL_29:
      ListViewSort__SetFilter(operationSortInfo, 16, v14, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v11 = 0;
LABEL_31:
      ListViewSort__SetFilter(operationSortInfo, 17, v11, 0LL);
LABEL_32:
      operationSortInfo = this->fields.baseSortInfo;
      if ( !operationSortInfo )
LABEL_36:
        sub_1B8880C(operationSortInfo, v8);
      ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_4A57FF6 )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A57FF6 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = filterStatus;
      return;
    case 3:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17585/*"btn_txt_notopen"*/, v9);
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
      v13 = 1;
      goto LABEL_22;
    case 4:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17569/*"btn_txt_completed"*/, v9);
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
      v14 = 1;
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
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  int size; // w22
  int32_t TodayFirstMissionId; // w20
  int32_t v9; // w21
  __int64 methodPtr_low; // x10

  v4 = this;
  if ( (byte_4A5EFBD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1B885B0(&EventMissionItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventMissionItemListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EFBD = 1;
  }
  if ( !byte_4A5F058 )
  {
    this = (EventMissionItemListViewManager_o *)sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F058 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  size = itemList->fields._size;
  if ( byte_4A5F059 )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F059 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_28;
      this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
    v9 = 0;
    while ( 1 )
    {
      this = (EventMissionItemListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (EventMissionItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v9,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( size == ++v9 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1B8880C(this, isRaid);
  }
LABEL_26:
  v9 = 0;
LABEL_27:
  ListViewManager__SetTopItem((ListViewManager_o *)v4, v9, 0LL);
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
  int v11; // w8
  int m_CancellationTokenSource; // w8
  int v13; // w23
  int32_t v14; // w21
  __int64 methodPtr_low; // x10
  EventRewardSceneEntity_array *EntityFromIdAndEventType; // x0
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x4
  System_Action_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3

  v10 = this;
  if ( (byte_4A5EFB9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1B885B0(&EventMissionItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__);
    sub_1B885B0(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventMissionItemListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EFB9 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v10->fields.actionCallback,
      (int32_t)callback,
      (int32_t)eventMissionActionInfo,
      missionID);
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
    sub_1B8880C(this, currentMissionActionInfo);
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
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this )
    goto LABEL_30;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               (EventRewardSceneMaster_o *)this,
                               v10->fields.currentEventId,
                               4,
                               0LL);
  if ( EntityFromIdAndEventType && *(_QWORD *)&EntityFromIdAndEventType->max_length )
  {
    v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v10,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__,
      0LL);
    EventMissionItemListViewManager__MoveEaseScroll(v10, v14, v17, eventMissionActionInfo, v18);
  }
  else
  {
    v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v10,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__,
      0LL);
    v10->fields.callbackAfterScroll = v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.callbackAfterScroll, (int32_t)v19, v20, v21);
    ListViewManager__MoveTopItem((ListViewManager_o *)v10, v14, 1, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__unAcceptableDlg(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4A5EFC3 & 1) == 0 )
  {
    this = (EventMissionItemListViewManager_o *)sub_1B885B0(&StringLiteral_5479/*"END_NOTICE"*/);
    byte_4A5EFC3 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (EventMissionItemListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1B8880C(this, method);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v26; // w2
  int32_t v27; // w3
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
    sub_1B8880C(this, method);
  UIProgressBar__set_value((UIProgressBar_o *)this, start_5__2 + v24, 0LL);
  v4->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(p__2__current, 0, v26, v27);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x0
  UnityEngine_Coroutine_o *started; // x0
  ServantStatusBattleListViewItem_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  int size; // w22
  System_Collections_Generic_List_int__o *v14; // x20
  int32_t i; // w21
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  System_Func_int__int__int__o *v20; // x21
  int32_t v21; // w0
  int32_t v22; // w21
  int32_t v23; // w1
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v26; // x19
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v28; // w2
  int32_t v29; // w3

  v3 = this;
  if ( (byte_4A5EFEC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Aggregate_int___);
    sub_1B885B0(&EventMissionItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__);
    sub_1B885B0(&System_Func_int__int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5EFEC = 1;
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
        v26 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v26, openItemTime + endEffectTime, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v26;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
        sub_1B88554(p__2__current, (int32_t)v26, v28, v29);
        *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
        LOBYTE(v11) = 1;
        return v11;
      }
      goto LABEL_32;
    }
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      if ( _4__this )
      {
        v6 = EventMissionItemListViewManager__MoveEaseScroll_IE(_4__this, v3->fields.index, v3->fields.onFinished, v2);
        started = UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
        v3->fields.__2__current = (Il2CppObject *)started;
        v8 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
        sub_1B88554(v8, (int32_t)started, v9, v10);
        LOBYTE(v11) = 1;
        *(_DWORD *)&v8[-1].fields.isMine = 1;
        return v11;
      }
LABEL_32:
      sub_1B8880C(this, method);
    }
LABEL_30:
    LOBYTE(v11) = 0;
    return v11;
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
  v14 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0; i != size; ++i )
  {
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)_4__this->fields.itemSortList;
    if ( !this )
      goto LABEL_32;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           i,
                                                                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    if ( !v14 )
      goto LABEL_32;
    method = (const MethodInfo *)LODWORD(this->fields.__4__this);
    items = v14->fields._items;
    v18 = Method_System_Collections_Generic_List_int__Add__;
    ++v14->fields._version;
    if ( !items )
      goto LABEL_32;
    v19 = v14->fields._size;
    if ( (unsigned int)v19 >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v14,
        (int32_t)method,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v14->fields._size = v19 + 1;
      items->m_Items[v19 + 1] = (int)method;
    }
  }
  v20 = (System_Func_int__int__int__o *)sub_1B887FC(System_Func_int__int__int__TypeInfo);
  System_Func_int__int__int____ctor(
    v20,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__,
    0LL);
  v21 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (System_Func_TSource__TSource__TSource__o *)v20,
          (const MethodInfo_2E89254 *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v22 = v21;
  v11 = System_Collections_Generic_List_int___IndexOf(
          v14,
          v21,
          (const MethodInfo_34E148C *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v11 )
  {
    v23 = v22 - 1;
    if ( v11 == size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v23, 0, 0, 0.0, 0LL);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v23, 0, 0LL);
    goto LABEL_30;
  }
  return v11;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_EventMissionItemListViewManager__SetPreviousFilter_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EFE0 & 1) == 0 )
  {
    sub_1B885B0(&EventMissionItemListViewManager___c_TypeInfo);
    byte_4A5EFE0 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventMissionItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventMissionItemListViewManager___c_TypeInfo->static_fields->__9 = (struct EventMissionItemListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventMissionItemListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return gift->fields.type == 14;
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_0(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x0
  __int64 v4; // x1
  EventMissionItemListViewManager___c_c *v5; // x8
  System_String_o *v6; // x20
  System_String_o *v7; // x21
  System_Action_o *_9__51_2; // x22
  Il2CppObject *v9; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5EFE1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__);
    sub_1B885B0(&EventMissionItemListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_8643/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EFE1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8643/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v5 = EventMissionItemListViewManager___c_TypeInfo;
  v6 = v3;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v5 = EventMissionItemListViewManager___c_TypeInfo;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_2 = v5->static_fields->__9__51_2;
  if ( !_9__51_2 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v5->static_fields->__9;
    _9__51_2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__51_2, v9, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__, 0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_2 = _9__51_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_2, (int32_t)_9__51_2, v11, v12);
  }
  if ( !Instance )
    sub_1B8880C(v3, v4);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v7, v6, _9__51_2, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_1(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x0
  __int64 v4; // x1
  EventMissionItemListViewManager___c_c *v5; // x8
  System_String_o *v6; // x20
  System_String_o *v7; // x21
  System_Action_o *_9__51_3; // x22
  Il2CppObject *v9; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5EFE3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__);
    sub_1B885B0(&EventMissionItemListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_8644/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EFE3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8644/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0LL);
  v5 = EventMissionItemListViewManager___c_TypeInfo;
  v6 = v3;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v5 = EventMissionItemListViewManager___c_TypeInfo;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_3 = v5->static_fields->__9__51_3;
  if ( !_9__51_3 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v5->static_fields->__9;
    _9__51_3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__51_3, v9, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__, 0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_3 = _9__51_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_3, (int32_t)_9__51_3, v11, v12);
  }
  if ( !Instance )
    sub_1B8880C(v3, v4);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v7, v6, _9__51_3, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5EFE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EFE2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5EFE4 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EFE4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager___c___modifyOpenItem_b__66_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
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
    sub_1B8880C(selectItem, method);
  }
  EventMissionItemListViewManager__recieveReward(_4__this, (EventMissionEntity_o *)selectItem, v5);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass49_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass49_0___recieveReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass49_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PlayMakerFSM_o *targetFSM; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct EventMissionItemListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct EventMissionItemListViewManager_o *v13; // x8

  if ( (byte_4A5EFE5 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    sub_1B885B0(&StringLiteral_8680/*"MISSION_REWARD"*/);
    byte_4A5EFE5 = 1;
  }
  if ( result == 1 )
  {
    v5 = Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (missionEntity = this->fields.missionEntity,
          _4__this->fields.missionToRecieve = missionEntity,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields.missionToRecieve,
            (int32_t)missionEntity,
            v9,
            v10),
          (v13 = this->fields.__4__this) == 0LL)
      || (targetFSM = v13->fields.targetFSM) == 0LL )
    {
      sub_1B8880C(targetFSM, v8);
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8680/*"MISSION_REWARD"*/, 0LL);
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

  if ( (byte_4A5EFE8 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EFE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__3(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventRewardRootComponent_o *eventRootComponent; // x20
  System_Action_o *_9__4; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5EFE6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__);
    byte_4A5EFE6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    _9__4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v8, v9);
  }
  if ( !eventRootComponent )
LABEL_10:
    sub_1B8880C(Instance, v4);
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
    sub_1B8880C(this, method);
  }
  v5 = EventMissionItemListViewManager__afterReward(v4, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)v4, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__6(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4A5EFE7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EFE7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
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
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v4; // x8
  struct EventMissionItemListViewManager_o *v5; // x8
  System_Text_StringBuilder_o *v6; // x20
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v7; // x8
  System_String_o *v8; // x21
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v11; // x1
  System_String_o *v12; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v13; // x8
  System_String_o *v14; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v15; // x8
  System_String_o *v16; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v17; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v18; // x21
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v19; // x8
  struct EventMissionItemListViewManager_o *v20; // x8
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v21; // x8
  struct EventMissionItemListViewManager_o *v22; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v23; // x21
  Il2CppObject *NumberFormat; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v25; // x8
  struct EventMissionItemListViewManager_o *v26; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v27; // x21
  Il2CppObject *v28; // x0
  System_String_o *v29; // x21
  _QWORD *v30; // x22
  __int64 v31; // x8
  __int64 v32; // x0
  __int64 v33; // x0
  CommonUI_o *v34; // x21
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v35; // x22
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v36; // x24
  MissionRewardGetDialog_ClickDelegate_o *_9__3; // x23
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3

  v2 = this;
  if ( (byte_4A5EFE9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_object___);
    sub_1B885B0(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__);
    sub_1B885B0(&StringLiteral_8684/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_8642/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/);
    sub_1B885B0(&StringLiteral_8647/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/);
    sub_1B885B0(&StringLiteral_50/*"\n \n"*/);
    sub_1B885B0(&StringLiteral_51/*"\n \n "*/);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1B885B0(&StringLiteral_8685/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/);
    byte_4A5EFE9 = 1;
  }
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_68;
  if ( giftList->fields._size < 1 )
  {
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
      CS___8__locals1 = v2->fields.CS___8__locals1;
      if ( CS___8__locals1 )
      {
        _4__this = (UnityEngine_MonoBehaviour_o *)CS___8__locals1->fields.__4__this;
        if ( _4__this )
        {
          v11 = EventMissionItemListViewManager__afterReward(CS___8__locals1->fields.__4__this, method);
          UnityEngine_MonoBehaviour__StartCoroutine_69444652(_4__this, v11, 0LL);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v6 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0LL);
  v7 = v2->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v7->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_68;
  v8 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                            this,
                            this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v8, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemDialogNum >= 2 )
    {
      if ( !v8 )
        goto LABEL_68;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__Substring_61726036(
                                                                          v8,
                                                                          0,
                                                                          v8->fields._stringLength - 2,
                                                                          0LL);
      if ( !v6 )
        goto LABEL_68;
      System_Text_StringBuilder__Append_60868928(v6, (System_String_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8642/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_60868928(
                                                                          v6,
                                                                          v12,
                                                                          0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/,
                                                                          0LL);
      if ( !v6 )
        goto LABEL_68;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                          v6,
                                                                          (System_String_o *)this,
                                                                          (Il2CppObject *)v8,
                                                                          0LL);
    }
    v13 = v2->fields.CS___8__locals1;
    if ( !v13 )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v13->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_68;
    v14 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v14, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_60868928(
                                                                          v6,
                                                                          (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                          0LL);
  }
  v15 = v2->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v15->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_68;
  v16 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v16, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8647/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/,
                                                                        0LL);
    v17 = v2->fields.CS___8__locals1;
    if ( !v17 )
      goto LABEL_68;
    v18 = this;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v17->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                        this,
                                                                        this->klass[1]._1.image);
    if ( !v6 )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                        v6,
                                                                        (System_String_o *)v18,
                                                                        (Il2CppObject *)this,
                                                                        0LL);
  }
  v19 = v2->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_68;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_68;
  if ( v20->fields.isQpMaxAlert )
  {
    if ( !v6 )
      goto LABEL_68;
    if ( v2->fields.isGetNoReward )
    {
      System_Text_StringBuilder__set_Length(v6, 0, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8684/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                          0LL);
      v21 = v2->fields.CS___8__locals1;
      if ( v21 )
      {
        v22 = v21->fields.__4__this;
        if ( v22 )
        {
          v23 = this;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v22->fields.overQpValue, 0LL);
          System_Text_StringBuilder__AppendFormat(v6, (System_String_o *)v23, NumberFormat, 0LL);
          goto LABEL_61;
        }
      }
LABEL_68:
      sub_1B8880C(this, method);
    }
    System_Text_StringBuilder__Append_60868928(v6, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8685/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                        0LL);
    v25 = v2->fields.CS___8__locals1;
    if ( !v25 )
      goto LABEL_68;
    v26 = v25->fields.__4__this;
    if ( !v26 )
      goto LABEL_68;
    v27 = this;
    v28 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v26->fields.overQpValue, 0LL);
    v29 = System_String__Format((System_String_o *)v27, v28, 0LL);
    v30 = Method_System_Array_Empty_object___;
    v31 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v31 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_object___);
      v31 = v30[7];
    }
    v32 = *(_QWORD *)(v31 + 16);
    if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
      v32 = sub_1BDA48C(v32);
    if ( !*(_DWORD *)(v32 + 224) )
      j_il2cpp_runtime_class_init_0(v32);
    v33 = *(_QWORD *)(v30[7] + 16LL);
    if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
      v33 = sub_1BDA48C(v33);
    System_Text_StringBuilder__AppendFormat_60875468(v6, v29, **(System_Object_array ***)(v33 + 184), 0LL);
  }
LABEL_61:
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v2->fields.giftList )
    goto LABEL_68;
  v34 = (CommonUI_o *)this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                      (System_Collections_Generic_List_object__o *)v2->fields.giftList,
                                                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v6 )
    goto LABEL_68;
  v35 = this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                                                                      v6,
                                                                      v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v36 = v2->fields.CS___8__locals1;
  if ( !v36 )
    goto LABEL_68;
  _9__3 = v36->fields.__9__3;
  v38 = this;
  if ( !_9__3 )
  {
    _9__3 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B887FC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__3,
      (Il2CppObject *)v36,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__,
      0LL);
    v36->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v36->fields.__9__3, (int32_t)_9__3, v39, v40);
  }
  if ( !v34 )
    goto LABEL_68;
  CommonUI__OpenMissionRewardGetDialog(
    v34,
    (GiftEntity_array *)v35,
    (System_String_o *)v38,
    _9__3,
    v2->fields.isGetNoReward,
    0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v2; // x19
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  v2 = this;
  if ( (byte_4A5EFEA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__);
    byte_4A5EFEA = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__5 = v2->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v2,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__,
      0LL);
    v2->fields.__9__5 = _9__5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__5, (int32_t)_9__5, v6, v7);
  }
  if ( !_4__this )
LABEL_8:
    sub_1B8880C(this, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__5, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__5(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct EventMissionItemListViewManager_o *_4__this; // x8
  Il2CppObject *v7; // x20
  System_String_o *v8; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v9; // x23
  System_Action_o *_9__6; // x22
  System_String_o *v11; // x19
  System_String_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5EFEB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__);
    sub_1B885B0(&StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EFEB = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v8, (Il2CppObject *)this->fields.sendName, 0LL);
  v9 = this->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_14;
  _9__6 = v9->fields.__9__6;
  v11 = (System_String_o *)Instance;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v9,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__,
      0LL);
    v9->fields.__9__6 = _9__6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->fields.__9__6, (int32_t)_9__6, v13, v14);
  }
  if ( !v7 )
LABEL_14:
    sub_1B8880C(Instance, v4);
  CommonUI__OpenNotificationDialog((CommonUI_o *)v7, v12, v11, _9__6, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x20
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x2
  System_Func_bool__o *v10; // x20
  UnityEngine_WaitUntil_o *v11; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  bool result; // w0

  if ( (byte_4A5EFED & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__);
    sub_1B885B0(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__);
    sub_1B885B0(&EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    sub_1B885B0(&StringLiteral_5474/*"END_EFFECT"*/);
    byte_4A5EFED = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
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
    v5 = sub_1B887FC(EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    if ( v5 )
    {
      *(_BYTE *)(v5 + 16) = 0;
      v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v8,
        (Il2CppObject *)v5,
        Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__,
        0LL);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v8, v9);
        v10 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__,
          0LL);
        v11 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v11, v10, 0LL);
        this->fields.__2__current = (Il2CppObject *)v11;
        p__2__current = &this->fields.__2__current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v11, v13, v14);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_13:
    sub_1B8880C(Instance, v7);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_EventMissionItemListViewManager__afterReward_d__59_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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