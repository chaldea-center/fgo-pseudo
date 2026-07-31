void EventMissionItemListViewManager___ctor(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2

  if ( (byte_5932634 & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932634 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dialogTitle, v9, v2, v3, v4, v5, v6, v7);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dialogMessage, v10, v11, v12, v13, v14, v15, v16);
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dialogGetable, v17, v18, v19, v20, v21, v22, v23);
  if ( !*(&MissionListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, v24, v25);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0);
}


void EventMissionItemListViewManager__AcceptReward(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x23
  GiftEntity_o *Instance; // x0
  Il2CppObject *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x20
  struct EventMissionEntity_o *v14; // x8
  const MethodInfo *v15; // x1
  System_Text_StringBuilder_o *v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Text_StringBuilder_o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  il2cpp_array_size_t max_length; // x24
  int v38; // w22
  const MethodInfo *v39; // x3
  ItemMaster_o *v40; // x23
  unsigned __int64 v41; // x25
  __int64 v42; // x24
  GiftEntity_o **m_Items; // x25
  GiftEntity_o *v44; // x8
  const MethodInfo *v45; // x3
  GiftEntity_o *v46; // x8
  ServantEntity_o *v47; // x26
  bool IsCombineMaterial; // w27
  System_String_o *v49; // x0
  System_Text_StringBuilder_o *v50; // x27
  GiftEntity_o *v51; // x8
  Il2CppObject *v52; // x26
  Il2CppObject *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  GiftEntity_o *v64; // x8
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  GiftEntity_o *v74; // x28
  Il2CppClass **v75; // x0
  char v76; // w29
  bool IsCountableWithPlus; // w0
  Il2CppObject **v78; // x9
  Il2CppObject *v79; // x27
  System_Text_StringBuilder_o *v80; // x26
  __int64 v81; // x1
  __int64 v82; // x2
  System_String_o *v83; // x28
  __int64 v84; // x0
  GiftEntity_o *v85; // x8
  Il2CppObject *v86; // x0
  __int64 v87; // x2
  __int64 v88; // x8
  System_Text_StringBuilder_o *v89; // x27
  System_Collections_Generic_List_object__o *v90; // x22
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_Action_o *v97; // x22
  EventRewardSetEntity_o *SetRewardData; // x23
  int32_t v99; // w1
  Il2CppObject **v100; // x20
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  Il2CppObject *name; // x1
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *v115; // x19
  System_Action_o *v116; // x20
  __int64 v117; // x1
  __int64 v118; // x2
  Il2CppObject *v119; // x19
  System_String_o *v120; // x0
  System_String_o *v121; // x20
  Il2CppObject *v122; // x22
  System_Action_o *v123; // x21
  System_Collections_Generic_List_object__o *v124; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_object__o *v125; // [xsp+48h] [xbp-78h]
  __int64 v126; // [xsp+50h] [xbp-70h]
  int64_t getQpValue; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_593261F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity___ctor___91425784);
    sub_21FFC50(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__);
    sub_21FFC50(&EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__);
    sub_21FFC50(&EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo);
    sub_21FFC50(&StringLiteral_9027/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_21FFC50(&StringLiteral_9026/*"MISSION_ACTION_SUCCESS"*/);
    sub_21FFC50(&StringLiteral_26563/*"{0}×{1:#,0}"*/);
    sub_21FFC50(&StringLiteral_26616/*"×"*/);
    sub_21FFC50(&StringLiteral_9022/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_49/*"\n "*/);
    sub_21FFC50(&StringLiteral_26924/*"＋"*/);
    byte_593261F = 1;
  }
  v3 = sub_21FFEBC(EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_108;
  *(_QWORD *)(v3 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  Instance = (GiftEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_108;
  Instance = (GiftEntity_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_108;
  if ( !Instance )
    goto LABEL_108;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0);
  Instance = (GiftEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v14 = this->fields.missionToRecieve;
  if ( !v14 )
    goto LABEL_108;
  if ( !Instance )
    goto LABEL_108;
  AutomatedAction__SetStatusMissionNotify((AutomatedAction_o *)Instance, v14->fields.id, 5, 0, 0);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v15);
  v16 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0);
  *(_QWORD *)(v3 + 32) = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v23, 0);
  *(_QWORD *)(v3 + 24) = v23;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = sub_21FFEBC(EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0);
  if ( !v30 )
    goto LABEL_108;
  *(_QWORD *)(v30 + 40) = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 40), v3, v31, v32, v33, v34, v35, v36);
  Instance = (GiftEntity_o *)this->fields.missionToRecieve;
  if ( !Instance )
    goto LABEL_108;
  if ( Instance[1].fields.objectId == 1 )
  {
    *(_DWORD *)(v30 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_108;
    max_length = GiftListById->max_length;
    Instance = (GiftEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_108;
    v126 = v30 + 40;
    v38 = max_length;
    Instance = (GiftEntity_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
    v40 = (ItemMaster_o *)Instance;
    if ( (int)max_length >= 1 )
    {
      v41 = 0;
      while ( v41 < LODWORD(GiftListById->max_length) )
      {
        Instance = (GiftEntity_o *)EventMissionItemListViewManager__IsDialogGift(
                                     this,
                                     GiftListById->m_Items[v41],
                                     v40,
                                     v39);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          ++*(_DWORD *)(v30 + 24);
        if ( (unsigned int)max_length == ++v41 )
          goto LABEL_20;
      }
LABEL_109:
      sub_21FFED4(Instance);
    }
LABEL_20:
    *(_BYTE *)(v30 + 28) = 1;
    v125 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v125,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v124 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v124,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)max_length >= 1 )
    {
      v42 = 0;
      m_Items = GiftListById->m_Items;
      while ( (unsigned int)v42 < LODWORD(GiftListById->max_length) )
      {
        v44 = m_Items[v42];
        if ( !v44 )
          goto LABEL_108;
        Instance = (GiftEntity_o *)Gift__IsServant_47357416(v44->fields.type, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (GiftEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_108;
          Instance = (GiftEntity_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( (unsigned int)v42 >= LODWORD(GiftListById->max_length) )
            goto LABEL_109;
          v46 = m_Items[v42];
          if ( !v46 )
            goto LABEL_108;
          if ( !Instance )
            goto LABEL_108;
          Instance = (GiftEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       v46->fields.objectId,
                                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_108;
          v47 = (ServantEntity_o *)Instance;
          IsCombineMaterial = SvtType__IsCombineMaterial(Instance[1].fields.num, 0);
          Instance = (GiftEntity_o *)SvtType__IsStatusUp(v47->fields.type, 0);
          if ( IsCombineMaterial || ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !*(_QWORD *)v126 )
              goto LABEL_108;
            Instance = *(GiftEntity_o **)(*(_QWORD *)v126 + 32LL);
            if ( !Instance )
              goto LABEL_108;
            v49 = (System_String_o *)((__int64 (__fastcall *)(GiftEntity_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                                       Instance,
                                       Instance->klass->vtable._3_ToString.method);
            Instance = (GiftEntity_o *)System_String__IsNullOrEmpty(v49, 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !*(_QWORD *)v126 )
                goto LABEL_108;
              Instance = *(GiftEntity_o **)(*(_QWORD *)v126 + 32LL);
              if ( !Instance )
                goto LABEL_108;
              Instance = (GiftEntity_o *)System_Text_StringBuilder__Append_75521760(
                                           (System_Text_StringBuilder_o *)Instance,
                                           (System_String_o *)StringLiteral_49/*"\n "*/,
                                           0);
            }
            if ( !*(_QWORD *)v126 )
              goto LABEL_108;
            v50 = *(System_Text_StringBuilder_o **)(*(_QWORD *)v126 + 32LL);
            Instance = (GiftEntity_o *)ServantEntity__getName(v47, 0, -1, 0, 0, 0);
            if ( (unsigned int)v42 >= LODWORD(GiftListById->max_length) )
              goto LABEL_109;
            v51 = m_Items[v42];
            if ( !v51 )
              goto LABEL_108;
            v52 = (Il2CppObject *)Instance;
            LODWORD(getQpValue) = v51->fields.num;
            v53 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &getQpValue);
            Instance = (GiftEntity_o *)System_String__Format_75484576(
                                         (System_String_o *)StringLiteral_26563/*"{0}×{1:#,0}"*/,
                                         v52,
                                         v53,
                                         0);
            if ( !v50 )
              goto LABEL_108;
            Instance = (GiftEntity_o *)System_Text_StringBuilder__Append_75521760(v50, (System_String_o *)Instance, 0);
            if ( (unsigned int)v42 >= LODWORD(GiftListById->max_length) )
              goto LABEL_109;
            if ( !v124 )
              goto LABEL_108;
            items = v124->fields._items;
            v5 = (Il2CppObject *)m_Items[v42];
            v61 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v124->fields._version;
            if ( !items )
              goto LABEL_108;
            size = v124->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v124,
                v5,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            }
            else
            {
              v63 = &items->obj.klass + size;
              v124->fields._size = size + 1;
              v63[4] = (Il2CppClass *)v5;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v63 + 4), (int32_t)v5, v54, v55, v56, v57, v58, v59);
            }
          }
        }
        else
        {
          if ( (unsigned int)v42 >= LODWORD(GiftListById->max_length) )
            goto LABEL_109;
          Instance = (GiftEntity_o *)EventMissionItemListViewManager__IsDialogGift(this, m_Items[v42], v40, v45);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( (unsigned int)v42 >= LODWORD(GiftListById->max_length) )
              goto LABEL_109;
            v64 = m_Items[v42];
            if ( !v64 || !v40 )
              goto LABEL_108;
            Instance = (GiftEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)v40,
                                         v64->fields.objectId,
                                         (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( (unsigned int)v42 >= LODWORD(GiftListById->max_length) )
              goto LABEL_109;
            if ( !v125 )
              goto LABEL_108;
            v71 = v125->fields._items;
            v5 = (Il2CppObject *)m_Items[v42];
            v72 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v125->fields._version;
            if ( !v71 )
              goto LABEL_108;
            v73 = v125->fields._size;
            v74 = Instance;
            if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v125,
                v5,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
            }
            else
            {
              v75 = &v71->obj.klass + v73;
              v125->fields._size = v73 + 1;
              v75[4] = (Il2CppClass *)v5;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v5, v65, v66, v67, v68, v69, v70);
            }
            if ( (unsigned int)v42 >= LODWORD(GiftListById->max_length) )
              goto LABEL_109;
            Instance = m_Items[v42];
            if ( !Instance )
              goto LABEL_108;
            Instance = (GiftEntity_o *)GiftEntity__isQp(Instance, 0);
            v76 = (char)Instance;
            if ( ((unsigned __int8)Instance & 1) == 0 || !this->fields.isQpAlreadyMax )
            {
              *(_BYTE *)(v30 + 28) = 0;
              if ( !v74 )
                goto LABEL_108;
              IsCountableWithPlus = ItemType__IsCountableWithPlus(v74->fields._PrioredNum_k__BackingField, 0);
              v78 = (Il2CppObject **)&StringLiteral_26924/*"＋"*/;
              if ( !IsCountableWithPlus )
                v78 = (Il2CppObject **)&StringLiteral_26616/*"×"*/;
              v79 = *v78;
              v80 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v80, 0);
              if ( !v80 )
                goto LABEL_108;
              System_Text_StringBuilder__Append_75521760(v80, *(System_String_o **)&v74->fields.objectId, 0);
              if ( (v76 & 1) != 0 && this->fields.isQpMaxAlert && this->fields.getQpValue )
              {
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v81, v82);
                v83 = LocalizationManager__Get((System_String_o *)StringLiteral_9027/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0);
                getQpValue = this->fields.getQpValue;
                v84 = qword_594C090;
              }
              else
              {
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v81, v82);
                Instance = (GiftEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9027/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0);
                if ( (unsigned int)v42 >= LODWORD(GiftListById->max_length) )
                  goto LABEL_109;
                v85 = m_Items[v42];
                if ( !v85 )
                  goto LABEL_108;
                v83 = (System_String_o *)Instance;
                LODWORD(getQpValue) = v85->fields.num;
                v84 = qword_594C070;
              }
              v86 = (Il2CppObject *)j_il2cpp_value_box_0(v84, &getQpValue);
              Instance = (GiftEntity_o *)System_Text_StringBuilder__AppendFormat_75527968(v80, v83, v79, v86, 0);
              v88 = *(_QWORD *)(v30 + 40);
              if ( *(int *)(v30 + 24) >= 2 )
              {
                if ( !v88 )
                  goto LABEL_108;
                v89 = *(System_Text_StringBuilder_o **)(v88 + 24);
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v87);
                Instance = (GiftEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9022/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
                if ( !v89 )
                  goto LABEL_108;
                Instance = (GiftEntity_o *)System_Text_StringBuilder__AppendFormat(
                                             v89,
                                             (System_String_o *)Instance,
                                             (Il2CppObject *)v80,
                                             0);
                if ( !*(_QWORD *)v126 )
                  goto LABEL_108;
                Instance = *(GiftEntity_o **)(*(_QWORD *)v126 + 24LL);
                if ( !Instance )
                  goto LABEL_108;
                Instance = (GiftEntity_o *)System_Text_StringBuilder__Append_75521760(
                                             (System_Text_StringBuilder_o *)Instance,
                                             (System_String_o *)StringLiteral_49/*"\n "*/,
                                             0);
              }
              else
              {
                if ( !v88 )
                  goto LABEL_108;
                Instance = *(GiftEntity_o **)(v88 + 24);
                if ( !Instance )
                  goto LABEL_108;
                Instance = (GiftEntity_o *)System_Text_StringBuilder__Append_75522392(
                                             (System_Text_StringBuilder_o *)Instance,
                                             v80,
                                             0);
              }
            }
          }
        }
        if ( v38 == (_DWORD)++v42 )
          goto LABEL_90;
      }
      goto LABEL_109;
    }
LABEL_90:
    v90 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627776(
      v90,
      (System_Collections_Generic_IEnumerable_T__o *)v125,
      (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_GiftEntity___ctor___91425784);
    *(_QWORD *)(v30 + 16) = v90;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 16), (int32_t)v90, v91, v92, v93, v94, v95, v96);
    Instance = *(GiftEntity_o **)(v30 + 16);
    if ( !Instance )
      goto LABEL_108;
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)Instance,
      (System_Collections_Generic_IEnumerable_T__o *)v124,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v97 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v97,
      (Il2CppObject *)v30,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__,
      0);
    if ( this->fields.isTreasureEffect )
    {
      Instance = (GiftEntity_o *)this->fields.eventRootComponent;
      if ( Instance )
      {
        EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)Instance, 0);
        MissionListViewManager__StartEventMissionClearItemAction(
          (MissionListViewManager_o *)this,
          GiftListById,
          0,
          v97,
          0);
        return;
      }
LABEL_108:
      sub_21FFECC(Instance, v5);
    }
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v97, 0);
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Instance, 0);
    v99 = (int)StringLiteral_1/*""*/;
    *(_QWORD *)(v30 + 32) = StringLiteral_1/*""*/;
    v100 = (Il2CppObject **)(v30 + 32);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 32), v99, v101, v102, v103, v104, v105, v106);
    if ( !SetRewardData )
      goto LABEL_108;
    name = (Il2CppObject *)SetRewardData->fields.name;
    *v100 = name;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 32), (int32_t)name, v107, v108, v109, v110, v111, v112);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && getSvtList->max_length )
    {
      Instance = (GiftEntity_o *)this->fields.touchBlockObj;
      if ( !Instance )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      v115 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v116 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v116,
        (Il2CppObject *)v30,
        Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__,
        0);
      if ( !v115 )
        goto LABEL_108;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)v115, v116, 0);
    }
    else
    {
      v119 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v117, v118);
      v120 = LocalizationManager__Get((System_String_o *)StringLiteral_9026/*"MISSION_ACTION_SUCCESS"*/, 0);
      v121 = System_String__Format(v120, *v100, 0);
      v122 = *(Il2CppObject **)(v30 + 40);
      v123 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v123,
        v122,
        Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__,
        0);
      if ( !v119 )
        goto LABEL_108;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v119,
        (System_String_o *)StringLiteral_1/*""*/,
        v121,
        v123,
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
    Instance = (GiftEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_108;
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

  EventMissionItemListViewManager__CreateList_38310344(this, missionList, eventId, isDailyMission, 1, v5);
}


void EventMissionItemListViewManager__CreateList_38310344(
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
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Entity; // x23
  __int64 v17; // x2
  bool v18; // w9
  UserMissionNewManager_c *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v27; // x26
  EventMissionEntity_o *v28; // x25
  System_Collections_Generic_List_object__o *itemList; // x23
  EventMissionItemListViewItem_o *v30; // x24
  const MethodInfo *v31; // x3
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  struct ListViewSort_o *sort; // x1
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *emptyMessageLabel; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  UILabel_o *v48; // x21

  v10 = isTouchListEnabled;
  if ( (byte_593260E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_21FFC50(&EventMissionItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9030/*"MISSION_EMPTY_TXT"*/);
    byte_593260E = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v10;
  if ( !scrollView )
    goto LABEL_36;
  scrollView->fields.disableDragIfFits = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
  Instance = NetworkManager__getTime(0);
  if ( !Entity )
    goto LABEL_36;
  v18 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  v19 = UserMissionNewManager_TypeInfo;
  this->fields.isEndEvent = v18;
  if ( !*(&v19->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v19, v12, v17);
  Instance = UserMissionNewManager__ReadData(0);
  if ( !missionList )
    goto LABEL_36;
  max_length = missionList->max_length;
  if ( (int)max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)max_length )
        sub_21FFED4(Instance);
      v28 = missionList->m_Items[v27];
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v30 = (EventMissionItemListViewItem_o *)sub_21FFEBC(EventMissionItemListViewItem_TypeInfo);
      EventMissionItemListViewItem___ctor(v30, v28, isDailyMission, v31);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v39 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v30,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v30;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v30, v32, v33, v34, v35, v36, v37);
      }
      LODWORD(max_length) = missionList->max_length;
      if ( (__int64)++v27 >= (int)max_length )
        goto LABEL_24;
    }
LABEL_36:
    sub_21FFECC(Instance, v12);
  }
LABEL_24:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
      (int32_t)sort,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !byte_5932647 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932647 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
  EventMissionItemListViewManager__setList(this, (const MethodInfo *)sort);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0) )
  {
    v48 = this->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9030/*"MISSION_EMPTY_TXT"*/, 0);
    if ( !v48 )
      goto LABEL_36;
    UILabel__set_text(v48, (System_String_o *)Instance, 0);
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
  __int64 v5; // x1
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v7; // x21
  EventMissionActionInfo_o *v8; // x20
  EventMissionActionEntity_o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_String_array *vals; // x1
  EventMissionItemListViewManager_o *v17; // x0
  const MethodInfo *v18; // x2
  System_String_o *VoiceAssetName; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_593261D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_21FFC50(&EventMissionActionInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalTransitionInfo_TypeInfo);
    byte_593261D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
    v7 = EntityFromIdProgressTypeAndActionType;
    v8 = (EventMissionActionInfo_o *)sub_21FFEBC(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor_52580824(v8, v7, 0);
LABEL_11:
    v9 = (EventMissionActionEntity_o *)sub_21FFEBC(TerminalTransitionInfo_TypeInfo);
    TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v9, 0);
    if ( v9 )
    {
      v9->fields.missionId = missionId;
      if ( v8 )
      {
        vals = v8->fields.vals;
        v9->fields.vals = vals;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->fields.vals, (int32_t)vals, v10, v11, v12, v13, v14, v15);
        VoiceAssetName = EventMissionItemListViewManager__GetVoiceAssetName(v17, v8->fields.vals, v18);
        *(_QWORD *)&v9->fields.optionId = VoiceAssetName;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v9->fields.optionId,
          (int32_t)VoiceAssetName,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        return (TerminalTransitionInfo_o *)v9;
      }
    }
LABEL_15:
    sub_21FFECC(Instance, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_15;
  v9 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
         (EventMissionActionMaster_o *)Instance,
         missionId,
         5,
         4,
         0);
  if ( v9 )
  {
    v8 = (EventMissionActionInfo_o *)sub_21FFEBC(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v8, v9, 0);
    goto LABEL_11;
  }
  return (TerminalTransitionInfo_o *)v9;
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
  float v7; // s0
  float v8; // s0

  v7 = currentTime / (float)(duration * 0.5);
  if ( v7 >= 1.0 )
    v8 = (float)(changeValue * 0.5) * (float)(2.0 - exp2f((float)(v7 + -1.0) * -10.0));
  else
    v8 = (float)(changeValue * 0.5) * powf(v7, 5.0);
  return v8 + startValue;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w1
  int32_t v11; // w1
  MissionNaviTransitionBoardItem_o *p_dialogMessage; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int64_t *p_overQpValue; // x26
  System_String_o *SelfUserGame; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_String_o *v30; // x22
  int64_t klass; // x23
  int64_t QpMax; // x8
  System_String_c *v33; // x23
  __int64 v34; // x24
  System_String_o *v35; // x23
  Il2CppObject *v36; // x24
  System_String_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  BalanceConfig_c *v40; // x8
  Il2CppObject *v41; // x25
  Il2CppObject *v42; // x0
  struct System_String_o *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x10
  int64_t v51; // x8
  int64_t num; // x8
  System_String_o *v53; // x21
  System_String_o *NumberFormat; // x0
  int64_t v55; // x8
  Il2CppObject *v56; // x22
  System_String_o *NumberFormatLong; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  BalanceConfig_c *v60; // x8
  Il2CppObject *v61; // x23
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  bool result; // w0

  if ( (byte_5932630 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9065/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_9068/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932630 = 1;
  }
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dialogTitle,
    v10,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (int)StringLiteral_1/*""*/;
  p_dialogMessage = (MissionNaviTransitionBoardItem_o *)&this->fields.dialogMessage;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dialogMessage, v11, v13, v14, v15, v16, v17, v18);
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dialogGetable, v19, v20, v21, v22, v23, v24, v25);
  p_overQpValue = &this->fields.overQpValue;
  this->fields.isQpAlreadyMax = 0;
  *(_OWORD *)&this->fields.overQpValue = 0u;
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_24;
  v30 = SelfUserGame;
  klass = (int64_t)SelfUserGame[4].klass;
  SelfUserGame = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28, v29);
    SelfUserGame = (System_String_o *)BalanceConfig_TypeInfo;
  }
  QpMax = *(_QWORD *)(*(_QWORD *)&SelfUserGame[7].fields + 8LL);
  if ( klass >= QpMax )
  {
    this->fields.isQpAlreadyMax = 1;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_9065/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0);
    if ( giftEnt )
    {
      v53 = SelfUserGame;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0);
      v55 = (int64_t)v30[4].klass;
      v56 = (Il2CppObject *)NumberFormat;
      NumberFormatLong = LocalizationManager__GetNumberFormatLong(v55, 0);
      v60 = BalanceConfig_TypeInfo;
      v61 = (Il2CppObject *)NumberFormatLong;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v58, v59);
        v60 = BalanceConfig_TypeInfo;
      }
      v62 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v60->static_fields->QpMax, 0);
      v63 = System_String__Format_75484644(v53, v56, v61, v62, 0);
      p_dialogMessage->klass = (MissionNaviTransitionBoardItem_c *)v63;
      sub_21FFBF4(p_dialogMessage, (int32_t)v63, v64, v65, v66, v67, v68, v69);
      num = giftEnt->fields.num;
      goto LABEL_22;
    }
LABEL_24:
    sub_21FFECC(SelfUserGame, v28);
  }
  if ( !giftEnt )
    goto LABEL_24;
  v33 = v30[4].klass;
  v34 = giftEnt->fields.num;
  if ( !HIDWORD(SelfUserGame[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(SelfUserGame, v28, v29);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( (__int64)v33 + v34 > QpMax )
  {
    this->fields.isQpAlreadyMax = 0;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_9068/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0);
    v36 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0);
    v37 = LocalizationManager__GetNumberFormatLong((int64_t)v30[4].klass, 0);
    v40 = BalanceConfig_TypeInfo;
    v41 = (Il2CppObject *)v37;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v38, v39);
      v40 = BalanceConfig_TypeInfo;
    }
    v42 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v40->static_fields->QpMax, 0);
    v43 = System_String__Format_75484644(v35, v36, v41, v42, 0);
    this->fields.dialogMessage = v43;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.dialogMessage,
      (int32_t)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    v50 = giftEnt->fields.num;
    v51 = BalanceConfig_TypeInfo->static_fields->QpMax - (unsigned __int64)v30[4].klass;
    this->fields.getQpValue = v51;
    num = v50 - v51;
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

  if ( (byte_5932614 & 1) == 0 )
  {
    sub_21FFC50(&EventMissionItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5932614 = 1;
  }
  result = (EventMissionItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventMissionItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 index,
                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v7; // x1
  ConstantStrMaster_o *v8; // x21
  System_String_o *Value; // x24
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x23
  System_String_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Object_array *v20; // x22
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x20
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *v41; // x19
  __int64 v43; // x0

  if ( (byte_5932616 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_5830/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/);
    sub_21FFC50(&StringLiteral_5831/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/);
    sub_21FFC50(&StringLiteral_5926/*"EVENT_REWARD_REPLACE_MSG"*/);
    byte_5932616 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, beforeGiftEntity, AfterGiftEntity);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_24;
  v8 = Master_object;
  Value = ConstantStrMaster__GetValue(Master_object, (System_String_o *)StringLiteral_5831/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, 0);
  v12 = ConstantStrMaster__GetValue(v8, (System_String_o *)StringLiteral_5830/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5926/*"EVENT_REWARD_REPLACE_MSG"*/, 0);
  Master_object = (ConstantStrMaster_o *)sub_21FFD10(object___TypeInfo, 4);
  if ( !Master_object )
    goto LABEL_24;
  v20 = (System_Object_array *)Master_object;
  if ( Value )
  {
    Master_object = (ConstantStrMaster_o *)sub_21FFDA4(Value, Master_object->klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( !LODWORD(v20->max_length) )
    goto LABEL_25;
  v20->m_Items[0] = (Il2CppObject *)Value;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v20->m_Items, (int32_t)Value, v14, v15, v16, v17, v18, v19);
  if ( v12 )
  {
    Master_object = (ConstantStrMaster_o *)sub_21FFDA4(v12, v20->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( (v20->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_25;
  v20->m_Items[1] = (Il2CppObject *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->m_Items[1], (int32_t)v12, v22, v23, v24, v25, v26, v27);
  if ( !beforeGiftEntity )
    goto LABEL_24;
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(beforeGiftEntity, 0);
  v34 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_21FFDA4(Master_object, v20->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_26:
      v43 = sub_21FFEF0(Master_object, v21);
      sub_21FFD90(v43, 0);
    }
  }
  if ( LODWORD(v20->max_length) <= 2 )
    goto LABEL_25;
  v20->m_Items[2] = v34;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->m_Items[2], (int32_t)v34, v28, v29, v30, v31, v32, v33);
  if ( !AfterGiftEntity )
LABEL_24:
    sub_21FFECC(Master_object, v7);
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(AfterGiftEntity, 0);
  v41 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_21FFDA4(Master_object, v20->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( (v20->max_length & 0xFFFFFFFC) == 0 )
LABEL_25:
    sub_21FFED4(Master_object);
  v20->m_Items[3] = v41;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->m_Items[3], (int32_t)v41, v35, v36, v37, v38, v39, v40);
  return System_String__Format_75484712(v13, v20, 0);
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
  int v5; // w21
  System_String_o **p_monitor; // x20
  System_String_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 naturalAligment; // x9
  EventMissionItemListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_593261E & 1) == 0 )
  {
    sub_21FFC50(&EventRewardRootComponent_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (EventMissionItemListViewManager_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593261E = 1;
  }
  if ( !afterActionVals || (max_length = afterActionVals->max_length, max_length < 2) )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_monitor;
  }
  v5 = 0;
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)max_length )
      sub_21FFED4(this);
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v5], 0);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v5 += 2;
    if ( v5 >= max_length )
      return *p_monitor;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0 )
    sub_21FFECC(Instance, v9);
  naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] == EventRewardRootComponent_TypeInfo )
  {
    p_monitor = (System_String_o **)&Instance[98].monitor;
    return *p_monitor;
  }
  v13 = (EventMissionItemListViewManager_o *)sub_220024C(Instance, EventRewardRootComponent_TypeInfo, v10, v11);
  EventMissionItemListViewManager__AcceptReward(v13, v14);
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
  if ( (byte_5932633 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    this = (EventMissionItemListViewManager_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932633 = 1;
  }
  entity = 0;
  if ( !gift )
    goto LABEL_18;
  if ( Gift__IsServant_47357416(gift->fields.type, 0) )
    return 0;
  if ( Gift__IsCommandCode_47357784(gift->fields.type, 0) )
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
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_21FFECC(this, gift);
  }
  return 0;
}


void EventMissionItemListViewManager__ModifyItem(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  _BOOL4 isEndEvent; // w8
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8
  DataManager_o *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  MissionListViewItem_o *current; // x22
  __int64 naturalAligment; // x10
  __int64 MissionId; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct EventMissionEntity_o *v17; // x8
  int32_t v18; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v20; // x1
  struct ListViewObject_o *v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5932625 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&EventMissionItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932625 = 1;
  }
  isEndEvent = this->fields.isEndEvent;
  memset(&v23, 0, sizeof(v23));
  if ( isEndEvent && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
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
      sub_21FFECC(Instance, v5);
    }
    v9 = Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this->fields.itemList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v23 = v22;
    v22.fields._list = 0;
    *(_QWORD *)&v22.fields._index = &v23;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v10 )
        break;
      current = (MissionListViewItem_o *)v23.fields._current;
      if ( !v23.fields._current
        || (naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment,
            v23.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EventMissionItemListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_21FFECC(v10, v11);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v23.fields._current, 0);
      v17 = this->fields.missionToRecieve;
      if ( !v17 )
        sub_21FFECC(MissionId, v15);
      v18 = MissionId;
      if ( (_DWORD)MissionId == v17->fields.id )
      {
        if ( !byte_5932649 )
        {
          MissionId = sub_21FFC50(&EventRewardSaveData_TypeInfo);
          byte_5932649 = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v18;
        if ( !v9 )
          sub_21FFECC(MissionId, v15);
        MissionListViewItem__ModifyItem(current, *(_DWORD *)&v9->fields._DispLog == 5, 0);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
      if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
      {
        v21 = current->fields.viewObject;
        if ( !v21 )
          sub_21FFECC(0, v20);
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, const MethodInfo *))v21->klass->vtable._5_SetItem.methodPtr)(
          v21,
          current,
          v21->klass->vtable._5_SetItem.method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  ListViewItem_o *v12; // x22
  UnityEngine_Object_o *viewObject; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v17; // x3
  System_Collections_IEnumerator_o *v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5932610 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932610 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  Item = EventMissionItemListViewManager__GetItem(this, index, (const MethodInfo *)onFinish);
  if ( Item )
  {
    v12 = (ListViewItem_o *)Item;
    viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    if ( UnityEngine_Object__op_Equality(viewObject, 0, 0) )
    {
      itemSortList = this->fields.itemSortList;
      if ( itemSortList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v19,
          (System_Collections_Generic_List_object__o *)itemSortList,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v19.fields._current == v12 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v12, 0);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      }
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    Item = (EventMissionItemListViewItem_o *)UnityEngine_Object__op_Equality(viewObject, 0, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( onFinish )
      {
        ((void (__fastcall *)(intptr_t, intptr_t))onFinish->fields.invoke_impl)(
          onFinish->fields.method_code,
          onFinish->fields.method);
        return;
      }
LABEL_27:
      sub_21FFECC(Item, v10);
    }
    if ( this->fields.tempFilterStatus == 1
      && (!eventMissionActionInfo || eventMissionActionInfo->fields.missionActionType == 4) )
    {
      v18 = EventMissionItemListViewManager__SetPreviousFilter(this, v12->fields.sortIndex, onFinish, v17);
    }
    else
    {
      v18 = EventMissionItemListViewManager__MoveEaseScroll_IE(this, v12->fields.sortIndex, onFinish, v17);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v18, 0);
  }
  else
  {
    if ( !onFinish )
      goto LABEL_27;
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

  if ( (byte_5932612 & 1) == 0 )
  {
    sub_21FFC50(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo);
    byte_5932612 = 1;
  }
  v7 = sub_21FFEBC(EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)onFinished, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_5932628 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_5932628 = 1;
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
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim((EventMissionItemListViewObject_o *)ObjectList, 0);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_21FFECC(ObjectList, v4);
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

  if ( (byte_593262B & 1) == 0 )
  {
    sub_21FFC50(&Method_EventMissionItemListViewManager_OnClickFilterList__);
    byte_593262B = 1;
  }
  v3 = Method_EventMissionItemListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_EventMissionItemListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  filterStatus = (unsigned int)this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_ECFB24[filterStatus];
  EventMissionItemListViewManager__setList(this, v5);
}


void EventMissionItemListViewManager__OnClickListView(
        EventMissionItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  MissionListViewItem_o *EventMissionEntity; // x0
  EventMissionItemListViewItem_o *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 naturalAligment; // x10
  EventMissionItemListViewItem_o *Item; // x0
  EventMissionItemListViewItem_o **v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t selectNum; // w8
  __int64 v24; // x2
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v26; // x2
  GiftMaster_o *v27; // x23
  GiftEntity_o *DataById; // x0
  GiftEntity_o *v29; // x22
  EventMissionEntity_o *v30; // x1
  const MethodInfo *v31; // x2
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  GiftEntity_array *OriginalGiftData; // x20
  GiftEntity_o *IconGiftEntity; // x0
  GiftEntity_o *v38; // x21
  Il2CppObject *Instance; // x20
  const MethodInfo *v40; // x3
  System_String_o *ReplaceDialogMessage; // x21
  System_Action_o *v42; // x22

  if ( (byte_5932615 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager_OnClickListView__);
    sub_21FFC50(&EventMissionItemListViewObject_TypeInfo);
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__);
    sub_21FFC50(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932615 = 1;
  }
  v5 = sub_21FFEBC(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_47;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( this->fields.isClickListViewEnabled )
  {
    if ( !obj )
      goto LABEL_47;
    naturalAligment = EventMissionItemListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment )
      goto LABEL_47;
    if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewObject_TypeInfo )
      goto LABEL_47;
    Item = EventMissionItemListViewObject__GetItem((EventMissionItemListViewObject_o *)obj, 0);
    *(_QWORD *)(v5 + 24) = Item;
    v16 = (EventMissionItemListViewItem_o **)(v5 + 24);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Item, v17, v18, v19, v20, v21, v22);
    EventMissionEntity = *(MissionListViewItem_o **)(v5 + 24);
    if ( !EventMissionEntity )
      goto LABEL_47;
    EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0);
    if ( !EventMissionEntity )
      goto LABEL_47;
    selectNum = EventMissionEntity->fields.selectNum;
    *(_WORD *)&this->fields.isQpMaxAlert = 0;
    EventMissionEntity = (MissionListViewItem_o *)*v16;
    this->fields.selectEventMissionId = selectNum;
    if ( !EventMissionEntity )
      goto LABEL_47;
    EventMissionEntity = (MissionListViewItem_o *)((__int64 (__fastcall *)(MissionListViewItem_o *, const MethodInfo *))EventMissionEntity->klass->vtable._8_get_IsShowRewardInfo.methodPtr)(
                                                    EventMissionEntity,
                                                    EventMissionEntity->klass->vtable._8_get_IsShowRewardInfo.method);
    v7 = *v16;
    if ( ((unsigned __int8)EventMissionEntity & 1) == 0 )
      goto LABEL_14;
    if ( !v7 )
      goto LABEL_47;
    EventMissionEntity = (MissionListViewItem_o *)EventMissionItemListViewItem__get_IsHideReward(
                                                    *v16,
                                                    (const MethodInfo *)v7);
    v7 = *v16;
    if ( ((unsigned __int8)EventMissionEntity & 1) == 0 )
    {
      if ( !v7 )
        goto LABEL_47;
      if ( !v7->fields.isHideRewardDetail )
      {
        MissionListViewManager__ShowRewardDetailInfo(
          (MissionListViewManager_o *)this,
          (MissionListViewItem_o *)v7,
          1,
          0);
        return;
      }
    }
    else
    {
LABEL_14:
      if ( !v7 )
        goto LABEL_47;
    }
    if ( v7->fields.progStatus == 3 )
    {
      if ( this->fields.filterStatus == 1 )
      {
        EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                        (MissionListViewItem_o *)v7,
                                                        0);
        if ( !EventMissionEntity )
          goto LABEL_47;
        v7 = *v16;
        this->fields.tempSelectDispNo = EventMissionEntity->fields.sortValue0;
        if ( !v7 )
          goto LABEL_47;
      }
      if ( EventMissionItemListViewItem__GetIsRewardQp(v7, (const MethodInfo *)v7) )
      {
        EventMissionEntity = (MissionListViewItem_o *)*v16;
        if ( !*v16 )
          goto LABEL_47;
        IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp(
                       (EventMissionItemListViewItem_o *)EventMissionEntity,
                       (const MethodInfo *)v7);
        this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v26);
      }
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v24);
      EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !*v16
        || (v27 = (GiftMaster_o *)EventMissionEntity,
            (EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                             (MissionListViewItem_o *)*v16,
                                                             0)) == 0)
        || !v27 )
      {
LABEL_47:
        sub_21FFECC(EventMissionEntity, v7);
      }
      DataById = GiftMaster__getDataById(v27, HIDWORD(EventMissionEntity->fields.sortValue2B), 0);
      if ( !DataById
        || (v29 = DataById, !DataById->fields._IsReplacedData_k__BackingField)
        || this->fields.isTreasureEffect
        || this->fields.giftIconId != -1 )
      {
        EventMissionEntity = (MissionListViewItem_o *)*v16;
        if ( *v16 )
        {
          v30 = MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0);
          EventMissionItemListViewManager__recieveReward(this, v30, v31);
          return;
        }
        goto LABEL_47;
      }
      EventMissionEntity = (MissionListViewItem_o *)*v16;
      if ( !*v16 )
        goto LABEL_47;
      EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0);
      if ( !EventMissionEntity )
        goto LABEL_47;
      OriginalGiftData = GiftMaster__GetOriginalGiftData(v27, HIDWORD(EventMissionEntity->fields.sortValue2B), 0);
      if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v34, v35);
      IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(OriginalGiftData, 0);
      if ( IconGiftEntity )
      {
        v38 = IconGiftEntity;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                                 (EventMissionItemListViewManager_o *)Instance,
                                 v38,
                                 v29,
                                 v40);
        v42 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v42,
          (Il2CppObject *)v5,
          Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__,
          0);
        if ( !Instance )
          goto LABEL_47;
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          ReplaceDialogMessage,
          v42,
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
      v32 = Method_EventMissionItemListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_21FFC68(Method_EventMissionItemListViewManager_OnClickListView__);
      v33 = (System_Reflection_MethodBase_o *)sub_21FFC34(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0, 0);
    }
  }
}


void EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  GiftMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  EventMissionItemListViewManager___c_c *v11; // x8
  System_Object_array *v12; // x21
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__78_0; // x22
  Il2CppObject *v15; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct EventMissionEntity_o *v23; // x8

  if ( (byte_593262E & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_GiftEntity___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_GiftEntity__bool__TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__);
    sub_21FFC50(&EventMissionItemListViewManager___c_TypeInfo);
    byte_593262E = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, closeCallback, method);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Master_object )
    goto LABEL_19;
  GiftListById = GiftMaster__GetGiftListById(Master_object, missionToRecieve->fields.giftId, 0);
  v11 = EventMissionItemListViewManager___c_TypeInfo;
  v12 = (System_Object_array *)GiftListById;
  if ( !*(&EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v9, v10);
    v11 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__78_0 = (System_Func_object__bool__o *)static_fields->__9__78_0;
  if ( !_9__78_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v9, v10);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__78_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__78_0,
      v15,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__,
      0);
    v16 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v16->__9__78_0 = (struct System_Func_GiftEntity__bool__o *)_9__78_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->__9__78_0, (int32_t)_9__78_0, v17, v18, v19, v20, v21, v22);
  }
  if ( BasicHelper__Any_object__58575580(
         v12,
         (System_Func_T__bool__o *)_9__78_0,
         (const MethodInfo_37DCADC *)Method_BasicHelper_Any_GiftEntity___) )
  {
    Master_object = (GiftMaster_o *)this->fields.commandAssistLvUpDialog;
    if ( Master_object )
    {
      Master_object = (GiftMaster_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Master_object,
                                        (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
      v23 = this->fields.missionToRecieve;
      if ( v23 )
      {
        if ( Master_object )
        {
          CommandAssistLvUpDialogComponent__Open(
            (CommandAssistLvUpDialogComponent_o *)Master_object,
            this->fields.currentEventId,
            v23->fields.id,
            closeCallback,
            0);
          return;
        }
      }
    }
LABEL_19:
    sub_21FFECC(Master_object, v6);
  }
  ActionExtensions__Call(closeCallback, 0);
}


void EventMissionItemListViewManager__OpenQpMaxAlertDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x23
  System_String_o *v16; // x22
  System_String_o *dialogTitle; // x24
  System_String_o *dialogMessage; // x25
  System_String_o *dialogGetable; // x26
  System_Action_o *v20; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v22; // x29
  __int64 v23; // x0
  __int64 v24; // x1

  if ( (byte_5932631 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager_Decide__);
    sub_21FFC50(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__);
    sub_21FFC50(&Method_EventMissionItemListViewManager_TransitionToCombineScene__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12177/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_21FFC50(&StringLiteral_12176/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_21FFC50(&StringLiteral_12183/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_5932631 = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dialogCallBack,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12177/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12183/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12176/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  v16 = v14;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0);
  onTransition = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0);
  v22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0);
  if ( !qpMaxAlertDialog )
    sub_21FFECC(v23, v24);
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    v12,
    v13,
    v16,
    v20,
    onTransition,
    v22,
    1,
    0);
}


void EventMissionItemListViewManager__RedisplayEventUI(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t *p_m_Handle; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593262F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SceneList_TypeInfo);
    byte_593262F = 1;
  }
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  m_Handle = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(titleInfo, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_13;
    m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0).fields.m_Handle;
    p_m_Handle = &m_Handle;
    name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0);
    if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v8, v9);
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
      sub_21FFECC(gameObject, v6);
    }
  }
}


void EventMissionItemListViewManager__RefrashListDisp(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x10
  int32_t size; // w8
  int32_t v12; // w21
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5932629 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&EventMissionItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_5932629 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v5 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current
      || (klass = v13.fields._current->klass,
          naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment,
          v13.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EventMissionItemListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_21FFECC(v6, v7);
    }
    ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))klass->vtable[6].methodPtr)(
      v13.fields._current,
      klass->vtable[6].method);
    MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  if ( size > 0 )
  {
    v12 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v12,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( ++v12 >= v5->fields._size )
        return;
    }
LABEL_17:
    sub_21FFECC(ObjectList, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventMissionItemListViewManager__RefrashListDisp_38327836(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x10
  const MethodInfo *v10; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w22
  System_Collections_Generic_List_object__o *v14; // x23
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_593262A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&EventMissionItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_593262A = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  memset(&v16, 0, sizeof(v16));
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current
      || (naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment,
          v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (EventMissionItemListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_21FFECC(v6, v7);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v16.fields._current, 0) == missionId )
    {
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[6].methodPtr)(
        current,
        current->klass->vtable[6].method);
      MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !itemList )
        break;
      v14 = itemList;
      itemList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewObject__GetItem(
                                                                (EventMissionItemListViewObject_o *)itemList,
                                                                0);
      if ( !itemList )
        break;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0) == missionId )
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))v14->klass->vtable._9_unknown.methodPtr)(
          v14,
          this->fields.isInput,
          v14->klass->vtable._9_unknown.method);
      if ( ++v13 >= v12->fields._size )
        return;
    }
LABEL_21:
    sub_21FFECC(itemList, *(_QWORD *)&missionId);
  }
}


void EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_593261C & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593261C = 1;
  }
  if ( !byte_5932648 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932648 = 1;
  }
  TerminalTransitionInfo = EventMissionItemListViewManager__CreateTerminalTransitionInfo(
                             this,
                             EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField,
                             v2);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(TerminalTransitionInfo, 0);
}


void EventMissionItemListViewManager__SetOpenItem(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v10; // x1
  struct EventMissionItemListViewItem_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5932626 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_19673/*"ef_mission_extric01"*/);
    sub_21FFC50(&StringLiteral_22704/*"modifyOpenItem"*/);
    byte_5932626 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v22, 0, sizeof(v22));
  if ( itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_21FFECC(0, v5);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        ObjectList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v22 = v21;
      v21.fields._list = 0;
      *(_QWORD *)&v21.fields._index = &v22;
      while ( 1 )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v22,
               (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
        if ( !v6 )
          break;
        current = v22.fields._current;
        if ( !v22.fields._current )
          sub_21FFECC(v6, v7);
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v22.fields._current,
                                          0);
        v11 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_21FFECC(0, v10);
        MissionId = MissionListViewItem__get_MissionId(Item, 0);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_5932649 )
          {
            sub_21FFC50(&EventRewardSaveData_TypeInfo);
            byte_5932649 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v11;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.openTargetItem,
            (int32_t)v11,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v11, 0) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_19673/*"ef_mission_extric01"*/, transform, v20);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_22704/*"modifyOpenItem"*/,
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

  if ( (byte_5932611 & 1) == 0 )
  {
    sub_21FFC50(&EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo);
    byte_5932611 = 1;
  }
  v7 = sub_21FFEBC(EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo);
  EventMissionItemListViewManager__SetPreviousFilter_d__41___ctor(
    (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)v7,
    0,
    0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)onFinished, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void EventMissionItemListViewManager__SetScrollEnable(
        EventMissionItemListViewManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, enable, 0),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollBar) == 0) )
  {
    sub_21FFECC(scrollView, enable);
  }
  UnityEngine_Behaviour__set_enabled(scrollView, enable, 0);
}


void EventMissionItemListViewManager__TransitionToCombineScene(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_5932632 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5932632 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0, 0);
  EventMissionItemListViewManager__dialogCallback(this, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventMissionItemListViewManager___SetPreviousFilter_b__41_0(
        EventMissionItemListViewManager_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  int32_t tempSelectDispNo; // w22
  int32_t v8; // w8
  int v9; // w9
  int v10; // w8

  if ( (byte_5932635 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5932635 = 1;
  }
  tempSelectDispNo = this->fields.tempSelectDispNo;
  v8 = tempSelectDispNo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&x, *(_QWORD *)&y);
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
  __int64 v5; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  System_Collections_Generic_List_object__o *EntityListFromIdProgressTypeAndActionType; // x0
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o *v22; // x0
  const MethodInfo_40C7F48 *v23; // x1
  struct EventMissionEntity_o *v24; // x8
  Il2CppObject *v25; // x22
  EventMissionActionInfo_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x2
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__66_1; // x21
  Il2CppObject *v42; // x22
  struct EventMissionItemListViewManager___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  const MethodInfo *targetMissionId; // x1
  int v51; // w8
  __int64 v52; // x8
  int32_t v53; // w0
  const MethodInfo *v54; // x2
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_5932637 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventMissionActionInfo__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_21FFC50(&EventMissionActionInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__);
    sub_21FFC50(&EventMissionItemListViewManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_17296/*"actionAfterCallback"*/);
    byte_5932637 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  memset(&v56, 0, sizeof(v56));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_45;
  EntityListFromIdProgressTypeAndActionType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType(
                                                                                             (EventMissionActionAddMaster_o *)Instance,
                                                                                             missionToRecieve->fields.id,
                                                                                             5,
                                                                                             3,
                                                                                             0);
  if ( EntityListFromIdProgressTypeAndActionType && EntityListFromIdProgressTypeAndActionType->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v57 = v55;
    v55.fields._list = 0;
    *(_QWORD *)&v55.fields._index = &v57;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v57.fields._current;
      v9 = (EventMissionActionInfo_o *)sub_21FFEBC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_52580824(v9, (EventMissionActionAddEntity_o *)current, 0);
      if ( !v3
        || (items = v3->fields._items,
            v19 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(v10, v11);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v9,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v9;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
      }
    }
    v22 = &v57;
    v23 = (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v24 = this->fields.missionToRecieve;
    if ( !v24 )
      goto LABEL_45;
    if ( !Instance )
      goto LABEL_45;
    Instance = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
                 (EventMissionActionMaster_o *)Instance,
                 v24->fields.id,
                 5,
                 3,
                 0);
    if ( !Instance )
      goto LABEL_45;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v56 = v55;
    v55.fields._list = 0;
    *(_QWORD *)&v55.fields._index = &v56;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v25 = v56.fields._current;
      v26 = (EventMissionActionInfo_o *)sub_21FFEBC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v26, (EventMissionActionEntity_o *)v25, 0);
      if ( !v3
        || (v35 = v3->fields._items,
            v36 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__,
            ++v3->fields._version,
            !v35) )
      {
        sub_21FFECC(v27, v28);
      }
      v37 = v3->fields._size;
      if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v26,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &v35->obj.klass + v37;
        v3->fields._size = v37 + 1;
        v38[4] = (Il2CppClass *)v26;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v26, v29, v30, v31, v32, v33, v34);
      }
    }
    v23 = (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    v22 = &v56;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(v22, v23);
  Instance = EventMissionItemListViewManager___c_TypeInfo;
  if ( !*(&EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v5, v39);
    Instance = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = (struct EventMissionItemListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__66_1 = (System_Comparison_T__o *)static_fields->__9__66_1;
  if ( !_9__66_1 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v5, v39);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__66_1 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventMissionActionInfo__TypeInfo);
    System_Comparison_object____ctor(
      _9__66_1,
      v42,
      Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__,
      0);
    v43 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v43->__9__66_1 = (struct System_Comparison_EventMissionActionInfo__o *)_9__66_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43->__9__66_1, (int32_t)_9__66_1, v44, v45, v46, v47, v48, v49);
  }
  if ( !v3 )
    goto LABEL_45;
  System_Collections_Generic_List_object___Sort_71636404(
    v3,
    _9__66_1,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  v51 = v3->fields._size;
  if ( v51 <= 0 )
    goto LABEL_41;
  Instance = System_Collections_Generic_List_object___get_Item(
               v3,
               v51 - 1,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
  if ( !Instance || (v52 = *((_QWORD *)Instance + 4)) == 0 )
LABEL_45:
    sub_21FFECC(Instance, v5);
  if ( !*(_DWORD *)(v52 + 24) )
    sub_21FFED4(Instance);
  v53 = System_Int32__Parse(*(System_String_o **)(v52 + 32), 0);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v53 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_38327836(this, (int32_t)targetMissionId, v54);
    goto LABEL_43;
  }
LABEL_41:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_43:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_17296/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0);
}


void EventMissionItemListViewManager___setAfterAction_b__60_0(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_5932636 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_5932636 = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_21FFECC(Instance, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *actionCallback; // x19
  MissionNaviTransitionBoardItem_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0;
    sub_21FFBF4(p_actionCallback, 0, v2, v3, v4, v5, v6, v7);
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
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5932620 & 1) == 0 )
  {
    sub_21FFC50(&EventMissionItemListViewManager__afterReward_d__59_TypeInfo);
    byte_5932620 = 1;
  }
  v3 = sub_21FFEBC(EventMissionItemListViewManager__afterReward_d__59_TypeInfo);
  EventMissionItemListViewManager__afterReward_d__59___ctor(
    (EventMissionItemListViewManager__afterReward_d__59_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void EventMissionItemListViewManager__checkAcceptable(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v6; // x8
  _DWORD *v7; // x20
  _DWORD *v8; // x21
  __int64 v9; // x2
  Il2CppObject *MasterData_object; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w21
  BalanceConfig_c *v18; // x0
  int32_t PresentBoxMax; // w8
  int v20; // w20
  EventMissionItemListViewManager___c_c *v21; // x0
  struct EventMissionItemListViewManager___c_StaticFields *v22; // x8
  System_Action_o *_9__51_0; // x20
  Il2CppObject *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct EventMissionItemListViewManager___c_StaticFields *v31; // x0
  MissionNaviTransitionBoardItem_o *p__9__51_0; // x0
  __int64 *v33; // x8
  EventMissionItemListViewManager___c_c *v34; // x0
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x8
  Il2CppObject *v36; // x21
  struct EventMissionItemListViewManager___c_StaticFields *v37; // x0

  if ( (byte_5932618 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__);
    sub_21FFC50(&EventMissionItemListViewManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_12706/*"SHOW_MSG"*/);
    sub_21FFC50(&StringLiteral_11619/*"REWARD_ACCEPTABLE"*/);
    byte_5932618 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_48;
  if ( !Instance )
    goto LABEL_48;
  Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0);
  v6 = this->fields.missionToRecieve;
  if ( !v6 )
    goto LABEL_48;
  if ( v6->fields.rewardType == 1 )
  {
    v7 = Instance;
    if ( !Instance )
      goto LABEL_48;
    if ( Gift__IsServant_47357416(*((_DWORD *)Instance + 5), 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_48;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_48;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v7[6],
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_48;
      v8 = Instance;
      if ( SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0) || SvtType__IsStatusUp(v8[21], 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v9);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v9);
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
        v17 = *((_DWORD *)Instance + 6);
        v18 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v11);
          v18 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v18->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v17 )
        {
          v34 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !*(&EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v4, v11);
            v34 = EventMissionItemListViewManager___c_TypeInfo;
          }
          static_fields = v34->static_fields;
          _9__51_0 = static_fields->__9__51_0;
          if ( !_9__51_0 )
          {
            if ( !*(&v34->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v34, v4, v11);
              static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            }
            v36 = (Il2CppObject *)static_fields->__9;
            _9__51_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_0,
              v36,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__,
              0);
            v37 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v37->__9__51_0 = _9__51_0;
            p__9__51_0 = (MissionNaviTransitionBoardItem_o *)&v37->__9__51_0;
            goto LABEL_45;
          }
LABEL_46:
          this->fields.ShowMSG = _9__51_0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.ShowMSG,
            (int32_t)_9__51_0,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          Instance = this->fields.targetFSM;
          if ( Instance )
          {
            v33 = &StringLiteral_12706/*"SHOW_MSG"*/;
            goto LABEL_38;
          }
LABEL_48:
          sub_21FFECC(Instance, v4);
        }
        v20 = v7[7];
        if ( !*(&v18->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v18, v4, v11);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v20 + v17 > PresentBoxMax )
        {
          v21 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !*(&EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v4, v11);
            v21 = EventMissionItemListViewManager___c_TypeInfo;
          }
          v22 = v21->static_fields;
          _9__51_0 = v22->__9__51_1;
          if ( !_9__51_0 )
          {
            if ( !*(&v21->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v21, v4, v11);
              v22 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            }
            v24 = (Il2CppObject *)v22->__9;
            _9__51_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_0,
              v24,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__,
              0);
            v31 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v31->__9__51_1 = _9__51_0;
            p__9__51_0 = (MissionNaviTransitionBoardItem_o *)&v31->__9__51_1;
LABEL_45:
            sub_21FFBF4(p__9__51_0, (int32_t)_9__51_0, v25, v26, v27, v28, v29, v30);
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
  v33 = &StringLiteral_11619/*"REWARD_ACCEPTABLE"*/;
LABEL_38:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v33, 0);
}


void EventMissionItemListViewManager__dialogCallback(
        EventMissionItemListViewManager_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__o *dialogCallBack; // x20
  MissionNaviTransitionBoardItem_o *p_dialogCallBack; // x0

  dialogCallBack = this->fields.dialogCallBack;
  if ( dialogCallBack )
  {
    p_dialogCallBack = (MissionNaviTransitionBoardItem_o *)&this->fields.dialogCallBack;
    p_dialogCallBack->klass = 0;
    sub_21FFBF4(p_dialogCallBack, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v13; // x1
  int32_t filterStatus; // w8
  struct EventMissionEntity_o *v15; // x8

  if ( (byte_5932623 & 1) == 0 )
  {
    sub_21FFC50(&EventMissionItemListViewManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_5932623 = 1;
  }
  if ( data )
  {
    EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)EventMissionItemListViewManager_TypeInfo->static_fields,
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
        EventMissionItemListViewManager__setList(this, v13);
      }
    }
    else
    {
      EventMissionItemListViewManager__RefrashListDisp(this, v13);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v15 = this->fields.missionToRecieve;
    if ( !v15 || !Instance )
LABEL_13:
      sub_21FFECC(Instance, v11);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v15->fields.id, 5, 0, 0);
  }
}


UnityEngine_GameObject_o *EventMissionItemListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Object_object__58323140; // x19
  UnityEngine_GameObject_o *v9; // x19
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x20

  if ( (byte_5932624 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&EventMissionItemListViewManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932624 = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              effectAssetData,
                              name,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__58323140,
                                     (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v9 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v10 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5931940 )
  {
    effectAssetData = (AssetData_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v10 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v11 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5931945 )
  {
    effectAssetData = (AssetData_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v11 )
LABEL_15:
    sub_21FFECC(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v9;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *EventMissionItemListViewManager__get_ClippingObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_593260D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593260D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                 (EventMissionItemListViewObject_o *)Component_object,
                                 0);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v3;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_593260C & 1) == 0 )
  {
    sub_21FFC50(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
    byte_593260C = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_38BB334 *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_5932622 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager_endloadEffect__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&StringLiteral_6120/*"Effect/EventMission"*/);
    byte_5932622 = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v5);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6120/*"Effect/EventMission"*/, v3, 1, 0, 0);
}


void EventMissionItemListViewManager__missionRewardCallback(
        EventMissionItemListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v4; // x19
  __int64 *v5; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  EventMissionItemListViewManager_o *v15; // x20
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  struct GetSvts_array *items; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Collections_Generic_List_ListViewDropObject__o *v24; // x8
  struct GetCommandCodes_array *v25; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20

  v4 = this;
  if ( (byte_593261B & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    this = (EventMissionItemListViewManager_o *)sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_593261B = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    v8 = (Il2CppObject *)System_String__Concat_75481624(
                           (System_String_o *)StringLiteral_16395/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16659/*"]"*/,
                           0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6, v7);
    this = (EventMissionItemListViewManager_o *)JsonManager__DeserializeArray_object_(
                                                  v8,
                                                  (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    if ( this )
    {
      v15 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_22;
      dropObjectList = this->fields.dropObjectList;
      if ( !dropObjectList )
        goto LABEL_21;
      items = (struct GetSvts_array *)dropObjectList->fields._items;
      v4->fields.getSvtList = items;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v4->fields.getSvtList,
        (int32_t)items,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_22:
        sub_21FFED4(this);
      v24 = v15->fields.dropObjectList;
      if ( v24 )
      {
        v25 = *(struct GetCommandCodes_array **)&v24->fields._size;
        v4->fields.getCommandCodeList = v25;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v4->fields.getCommandCodeList,
          (int32_t)v25,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        missionToRecieve = v4->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_5932649 )
          {
            sub_21FFC50(&EventRewardSaveData_TypeInfo);
            byte_5932649 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          EventMissionItemListViewManager__SaveTerminalTransitionInfo(v4, (const MethodInfo *)result);
          this = (EventMissionItemListViewManager_o *)v4->fields.touchBlockObj;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
            if ( this )
            {
              v5 = &StringLiteral_11545/*"REQUEST_OK"*/;
              goto LABEL_20;
            }
          }
        }
      }
    }
LABEL_21:
    sub_21FFECC(this, result);
  }
  this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
  if ( !this )
    goto LABEL_21;
  v5 = &StringLiteral_11543/*"REQUEST_NG"*/;
LABEL_20:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void EventMissionItemListViewManager__modifyOpenItem(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  struct EventMissionItemListViewItem_o *openTargetItem; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  __int64 v9; // x1
  int32_t MissionId; // w21
  MissionListViewItem_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *klass; // x21
  __int64 v15; // x3
  EventMissionItemListViewObject_o *v16; // x0
  __int64 v17; // x9
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x1
  Il2CppClass *v20; // x0
  System_Action_o *v21; // x20
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5932627 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&EventMissionItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__);
    sub_21FFC50(&EventMissionItemListViewObject_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932627 = 1;
  }
  openTargetItem = this->fields.openTargetItem;
  memset(&v23, 0, sizeof(v23));
  if ( openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_21FFECC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v23 = v22;
    v22.fields._list = 0;
    *(_QWORD *)&v22.fields._index = &v23;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v23,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v5 )
        break;
      current = v23.fields._current;
      if ( !v23.fields._current
        || (naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment,
            v23.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (EventMissionItemListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_21FFECC(v5, v6);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v23.fields._current, 0);
      v11 = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !v11 )
        sub_21FFECC(0, v9);
      if ( MissionId == MissionListViewItem__get_MissionId(v11, 0) )
      {
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
        {
          v16 = (EventMissionItemListViewObject_o *)current[7].klass;
          if ( !v16 )
            goto LABEL_30;
          v17 = EventMissionItemListViewObject_TypeInfo->_2.naturalAligment;
          if ( v16->klass->_2.naturalAligment < (unsigned int)v17
            || (EventMissionItemListViewObject_c *)v16->klass->_2.typeHierarchy[v17 - 1] != EventMissionItemListViewObject_TypeInfo )
          {
            v16 = (EventMissionItemListViewObject_o *)sub_220024C(
                                                        v16,
                                                        EventMissionItemListViewObject_TypeInfo,
                                                        v13,
                                                        v15);
LABEL_30:
            sub_21FFECC(v16, v12);
          }
          EventMissionItemListViewObject__ModifyBoardImage(v16, 0);
        }
      }
      v18 = (UnityEngine_Object_o *)current[7].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
      {
        v20 = current[7].klass;
        if ( !v20 )
          sub_21FFECC(0, v19);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v20->_1.image + 49))(
          v20,
          current,
          *((_QWORD *)v20->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__, 0);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v21, 0);
}


void EventMissionItemListViewManager__recieveReward(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x22
  PlayMakerFSM_o *targetFSM; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct EventMissionEntity_o **v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Action_int__o *v21; // x20
  const MethodInfo *v22; // x2
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  struct EventMissionEntity_o *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5932617 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager_recieveReward__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    sub_21FFC50(&EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_21FFC50(&StringLiteral_9062/*"MISSION_REWARD"*/);
    byte_5932617 = 1;
  }
  v5 = sub_21FFEBC(EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = missionEntity;
  v14 = (struct EventMissionEntity_o **)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)missionEntity, v15, v16, v17, v18, v19, v20);
  MissionListViewManager__SetupGetEffectOptions(
    (MissionListViewManager_o *)this,
    *(EventMissionEntity_o **)(v5 + 24),
    0);
  if ( this->fields.isQpMaxAlert )
  {
    v21 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v21,
      (Il2CppObject *)v5,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__,
      0);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v21, v22);
    return;
  }
  v23 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_21FFC68(Method_EventMissionItemListViewManager_recieveReward__);
  v24 = (System_Reflection_MethodBase_o *)sub_21FFC34(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 8, 0, 0);
  v25 = *v14;
  this->fields.missionToRecieve = *v14;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.missionToRecieve,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_21FFECC(targetFSM, v7);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_9062/*"MISSION_REWARD"*/, 0);
}


void EventMissionItemListViewManager__requestMissionReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_593261A & 1) == 0 )
  {
    sub_21FFC50(&Method_EventMissionItemListViewManager_missionRewardCallback__);
    sub_21FFC50(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_593261A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  Instance = NetworkManager__getRequest_object_(
               v5,
               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
LABEL_9:
    sub_21FFECC(Instance, v4);
  EventMissionClearRewardRequest__beginRequest(
    (EventMissionClearRewardRequest_o *)Instance,
    missionToRecieve->fields.id,
    0);
}


void EventMissionItemListViewManager__setAfterAction(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_5932621 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager__setAfterAction_b__60_0__);
    byte_5932621 = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  __int64 v6; // x1
  UISprite_o *v7; // x0

  if ( (byte_593262D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593262D = 1;
  }
  filterBtnTxt = (UnityEngine_Object_o *)this->fields.filterBtnTxt;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetFile, method);
  if ( UnityEngine_Object__op_Inequality(filterBtnTxt, 0, 0) )
  {
    v7 = this->fields.filterBtnTxt;
    if ( !v7 || (UISprite__set_spriteName(v7, targetFile, 0), (v7 = this->fields.filterBtnTxt) == 0) )
      sub_21FFECC(v7, v6);
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v7,
      v7->klass->vtable._33_MakePixelPerfect.method);
  }
}


void EventMissionItemListViewManager__setList(EventMissionItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t filterStatus; // w8
  ListViewSort_o *operationSortInfo; // x0
  bool v16; // w2
  bool v17; // w2
  bool v18; // w2
  bool v19; // w2
  int32_t v20; // w19

  if ( (byte_593262C & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&StringLiteral_18291/*"btn_txt_completed"*/);
    sub_21FFC50(&StringLiteral_18325/*"btn_txt_receipt"*/);
    sub_21FFC50(&StringLiteral_18324/*"btn_txt_progress"*/);
    sub_21FFC50(&StringLiteral_18308/*"btn_txt_notopen"*/);
    sub_21FFC50(&StringLiteral_18273/*"btn_txt_all"*/);
    byte_593262C = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50785372(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.operationSortInfo,
    (int32_t)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus > 1 )
  {
    if ( filterStatus != 2 )
    {
      if ( filterStatus != 3 )
      {
        if ( filterStatus != 4 )
          goto LABEL_31;
        EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18291/*"btn_txt_completed"*/, v13);
        operationSortInfo = this->fields.operationSortInfo;
        if ( operationSortInfo )
        {
          ListViewSort__SetFilter(operationSortInfo, 13, 0, 0);
          operationSortInfo = *p_operationSortInfo;
          if ( *p_operationSortInfo )
          {
            ListViewSort__SetFilter(operationSortInfo, 14, 0, 0);
            operationSortInfo = *p_operationSortInfo;
            if ( *p_operationSortInfo )
            {
              ListViewSort__SetFilter(operationSortInfo, 15, 0, 0);
              operationSortInfo = *p_operationSortInfo;
              if ( *p_operationSortInfo )
              {
                v16 = 1;
LABEL_28:
                ListViewSort__SetFilter(operationSortInfo, 16, v16, 0);
                operationSortInfo = *p_operationSortInfo;
                if ( !*p_operationSortInfo )
                  goto LABEL_41;
                v19 = 0;
                goto LABEL_30;
              }
            }
          }
        }
LABEL_41:
        sub_21FFECC(operationSortInfo, v12);
      }
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18308/*"btn_txt_notopen"*/, v13);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_41;
      ListViewSort__SetFilter(operationSortInfo, 13, 0, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_41;
      ListViewSort__SetFilter(operationSortInfo, 14, 0, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_41;
      v18 = 1;
LABEL_26:
      ListViewSort__SetFilter(operationSortInfo, 15, v18, 0);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_41;
      v16 = 0;
      goto LABEL_28;
    }
    EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18324/*"btn_txt_progress"*/, v13);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_41;
    ListViewSort__SetFilter(operationSortInfo, 13, 1, 0);
    operationSortInfo = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_41;
    v17 = 1;
LABEL_20:
    ListViewSort__SetFilter(operationSortInfo, 14, v17, 0);
    operationSortInfo = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_41;
    v18 = 0;
    goto LABEL_26;
  }
  if ( filterStatus )
  {
    if ( filterStatus != 1 )
      goto LABEL_31;
    EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18325/*"btn_txt_receipt"*/, v13);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_41;
    ListViewSort__SetFilter(operationSortInfo, 13, 1, 0);
    operationSortInfo = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_41;
    v17 = 0;
    goto LABEL_20;
  }
  EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18273/*"btn_txt_all"*/, v13);
  operationSortInfo = this->fields.operationSortInfo;
  if ( !operationSortInfo )
    goto LABEL_41;
  ListViewSort__SetFilter(operationSortInfo, 13, 1, 0);
  operationSortInfo = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_41;
  ListViewSort__SetFilter(operationSortInfo, 14, 1, 0);
  operationSortInfo = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_41;
  ListViewSort__SetFilter(operationSortInfo, 15, 1, 0);
  operationSortInfo = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_41;
  ListViewSort__SetFilter(operationSortInfo, 16, 1, 0);
  operationSortInfo = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_41;
  v19 = 1;
LABEL_30:
  ListViewSort__SetFilter(operationSortInfo, 17, v19, 0);
LABEL_31:
  operationSortInfo = this->fields.baseSortInfo;
  if ( !operationSortInfo )
    goto LABEL_41;
  ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  v20 = this->fields.filterStatus;
  if ( !byte_5931FBC )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5931FBC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v20;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_5932613 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_21FFC50(&EventMissionItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventMissionItemListViewManager_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932613 = 1;
  }
  if ( !byte_5932647 )
  {
    this = (EventMissionItemListViewManager_o *)sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932647 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  size = itemList->fields._size;
  if ( byte_5932648 )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932648 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_28;
      this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_21FFECC(this, isRaid);
  }
LABEL_26:
  v9 = 0;
LABEL_27:
  ListViewManager__SetTopItem((ListViewManager_o *)v4, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventMissionItemListViewManager__setNextMissionInfo(
        EventMissionItemListViewManager_o *this,
        EventMissionActionInfo_o *currentMissionActionInfo,
        EventMissionActionInfo_o *eventMissionActionInfo,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  EventMissionItemListViewManager_o *v12; // x19
  float v13; // s0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int32_t v16; // w21
  __int64 naturalAligment; // x10
  EventRewardSceneEntity_array *EntityFromIdAndEventType; // x0
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x4
  System_Action_o *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  v12 = this;
  if ( (byte_593260F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_21FFC50(&EventMissionItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__);
    sub_21FFC50(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventMissionItemListViewManager_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593260F = 1;
  }
  v12->fields.targetMissionId = missionID;
  if ( callback )
  {
    v12->fields.actionCallback = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.actionCallback,
      (int32_t)callback,
      (System_String_o *)eventMissionActionInfo,
      *(System_String_o **)&missionID,
      (int32_t)callback,
      (int32_t)method,
      v6,
      v7);
  }
  if ( eventMissionActionInfo )
  {
    if ( !currentMissionActionInfo )
      goto LABEL_28;
    if ( currentMissionActionInfo->fields.missionActionType == 3 )
    {
      v13 = 1.5;
      if ( eventMissionActionInfo->fields.missionActionType == 3 )
        v13 = 0.5;
      v12->fields.endEffectTime = v13;
    }
  }
  itemList = v12->fields.itemList;
  if ( !itemList )
LABEL_28:
    sub_21FFECC(this, currentMissionActionInfo);
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v16 = 0;
    do
    {
      this = (EventMissionItemListViewManager_o *)v12->fields.itemList;
      if ( !this )
        goto LABEL_28;
      this = (EventMissionItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v16,
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_28;
      naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        goto LABEL_28;
      if ( (EventMissionItemListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
        goto LABEL_28;
      this = (EventMissionItemListViewManager_o *)MissionListViewItem__get_EventMissionEntity(
                                                    (MissionListViewItem_o *)this,
                                                    0);
      if ( !this )
        goto LABEL_28;
      if ( LODWORD(this->fields.m_CachedPtr) == missionID )
        goto LABEL_22;
    }
    while ( size != ++v16 );
  }
  v16 = 0;
LABEL_22:
  this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this )
    goto LABEL_28;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               (EventRewardSceneMaster_o *)this,
                               v12->fields.currentEventId,
                               4,
                               0);
  if ( EntityFromIdAndEventType && EntityFromIdAndEventType->max_length )
  {
    v19 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__,
      0);
    EventMissionItemListViewManager__MoveEaseScroll(v12, v16, v19, eventMissionActionInfo, v20);
  }
  else
  {
    v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__,
      0);
    v12->fields.callbackAfterScroll = v21;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.callbackAfterScroll,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    ListViewManager__MoveTopItem((ListViewManager_o *)v12, v16, 1, 0.0, 0);
  }
}


void EventMissionItemListViewManager__unAcceptableDlg(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_5932619 & 1) == 0 )
  {
    this = (EventMissionItemListViewManager_o *)sub_21FFC50(&StringLiteral_5635/*"END_NOTICE"*/);
    byte_5932619 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(intptr_t, intptr_t))ShowMSG->fields.invoke_impl)(
          ShowMSG->fields.method_code,
          ShowMSG->fields.method),
        (this = (EventMissionItemListViewManager_o *)v2->fields.targetFSM) == 0) )
  {
    sub_21FFECC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5635/*"END_NOTICE"*/, 0);
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
  float value; // s0
  float y; // s8
  float v7; // s8
  float v8; // s1
  float timer_5__5; // s8
  float v10; // s0
  float duration_5__4; // s0
  float v12; // s1
  float v13; // s0
  float v14; // s2
  float v15; // s1
  float start_5__2; // s8
  float v17; // s10
  float v18; // s0
  float v19; // s0
  bool result; // w0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

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
      goto LABEL_35;
    this = _4__this[11];
    if ( !this )
      goto LABEL_35;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    this = _4__this[11];
    v4->fields._start_5__2 = value;
    if ( !this )
      goto LABEL_35;
    UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0);
    this = _4__this[10];
    if ( !this )
      goto LABEL_35;
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
    if ( !this )
      goto LABEL_35;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = _4__this[11];
    if ( !this )
      goto LABEL_35;
    y = localPosition.fields.y;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0);
    this = _4__this[10];
    if ( !this )
      goto LABEL_35;
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
    if ( !this )
      goto LABEL_35;
    v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = _4__this[12];
    if ( !this )
      goto LABEL_35;
    v7 = v29.fields.y - y;
    v30 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)this, v4->fields.index, 0);
    v30.fields.x = fabsf(v30.fields.y);
    v4->fields._timer_5__5 = 0.0;
    v8 = v30.fields.x / v7;
    v30.fields.x = v7 * (float)((float)(v30.fields.x / v7) - v4->fields._start_5__2);
    timer_5__5 = 0.0;
    v10 = (float)(v30.fields.x + -2000.0) / 2000.0;
    if ( v10 < 0.0 )
      v10 = 0.0;
    duration_5__4 = v10 + 1.0;
    if ( duration_5__4 > 3.0 )
      duration_5__4 = 3.0;
    v4->fields._end_5__3 = v8;
    v4->fields._duration_5__4 = duration_5__4;
  }
  if ( timer_5__5 >= duration_5__4 )
  {
    if ( !_4__this )
      goto LABEL_35;
    this = _4__this[11];
    if ( !this )
      goto LABEL_35;
    UIProgressBar__set_value((UIProgressBar_o *)this, v4->fields._end_5__3, 0);
    ActionExtensions__Call(v4->fields.onFinished, 0);
    return 0;
  }
  v12 = timer_5__5 + UnityEngine_Time__get_deltaTime(0);
  v13 = v4->fields._duration_5__4;
  if ( v12 <= v13 )
    v14 = v12;
  else
    v14 = v4->fields._duration_5__4;
  if ( v12 >= 0.0 )
    v15 = v14;
  else
    v15 = 0.0;
  v4->fields._timer_5__5 = v15;
  if ( !_4__this
    || ((start_5__2 = v4->fields._start_5__2,
         v17 = v4->fields._end_5__3 - start_5__2,
         v18 = v15 / (float)(v13 * 0.5),
         v18 >= 1.0)
      ? (v19 = (float)(2.0 - exp2f((float)(v18 + -1.0) * -10.0)) * (float)(v17 * 0.5))
      : (v19 = powf(v18, 5.0) * (float)(v17 * 0.5)),
        (this = _4__this[11]) == 0) )
  {
LABEL_35:
    sub_21FFECC(this, method);
  }
  UIProgressBar__set_value((UIProgressBar_o *)this, start_5__2 + v19, 0);
  v4->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v4->fields.__2__current;
  sub_21FFBF4(p__2__current, 0, v22, v23, v24, v25, v26, v27);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  EventMissionItemListViewManager__SetPreviousFilter_d__41_o *v2; // x20
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v5; // x0
  UnityEngine_Coroutine_o *started; // x0
  MissionNaviTransitionBoardItem_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w0
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v17; // x19
  MissionNaviTransitionBoardItem_o *p__2__current; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  int size; // w22
  System_Collections_Generic_List_int__o *v27; // x20
  int32_t i; // w21
  __int64 naturalAligment; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  System_Func_int__int__int__o *v33; // x21
  int32_t v34; // w21
  int32_t v35; // w1

  v2 = this;
  if ( (byte_5932723 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Aggregate_int___);
    sub_21FFC50(&EventMissionItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__);
    sub_21FFC50(&System_Func_int__int__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5932723 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        openItemTime = _4__this->fields.openItemTime;
        endEffectTime = _4__this->fields.endEffectTime;
        v17 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v17, openItemTime + endEffectTime, 0);
        v2->fields.__2__current = (Il2CppObject *)v17;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_21FFBF4(p__2__current, (int32_t)v17, v19, v20, v21, v22, v23, v24);
        LOBYTE(v14) = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 2;
        return v14;
      }
      goto LABEL_32;
    }
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        v5 = EventMissionItemListViewManager__MoveEaseScroll_IE(_4__this, v2->fields.index, v2->fields.onFinished, 0);
        started = UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)_4__this, v5, 0);
        v2->fields.__2__current = (Il2CppObject *)started;
        v7 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_21FFBF4(v7, (int32_t)started, v8, v9, v10, v11, v12, v13);
        LOBYTE(v14) = 1;
        v7[-1].fields._BoardType_k__BackingField = 1;
        return v14;
      }
LABEL_32:
      sub_21FFECC(this, method);
    }
LABEL_30:
    LOBYTE(v14) = 0;
    return v14;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_32;
  *(_QWORD *)&_4__this->fields.filterStatus = (unsigned int)_4__this->fields.tempFilterStatus;
  EventMissionItemListViewManager__setList(_4__this, 0);
  itemSortList = _4__this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_30;
  size = itemSortList->fields._size;
  if ( size < 3 || !_4__this->fields.tempSelectDispNo )
    goto LABEL_30;
  v27 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0; i != size; ++i )
  {
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)_4__this->fields.itemSortList;
    if ( !this )
      goto LABEL_32;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           i,
                                                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    if ( !v27 )
      goto LABEL_32;
    items = v27->fields._items;
    method = (const MethodInfo *)LODWORD(this->fields.__4__this);
    v31 = Method_System_Collections_Generic_List_int__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_32;
    v32 = v27->fields._size;
    if ( (unsigned int)v32 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v27,
        (int32_t)method,
        *(const MethodInfo_4433138 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v27->fields._size = v32 + 1;
      items->m_Items[v32] = (int)method;
    }
  }
  v33 = (System_Func_int__int__int__o *)sub_21FFEBC(System_Func_int__int__int__TypeInfo);
  System_Func_int__int__int____ctor(
    v33,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__,
    0);
  v34 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (System_Func_TSource__TSource__TSource__o *)v33,
          (const MethodInfo_382E9F4 *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v14 = System_Collections_Generic_List_int___IndexOf(
          v27,
          v34,
          (const MethodInfo_4433D94 *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v14 )
  {
    v35 = v34 - 1;
    if ( v14 == size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v35, 0, 0, 0.0, 0, 0);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v35, 0, 0.0, 0);
    goto LABEL_30;
  }
  return v14;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventMissionItemListViewManager__SetPreviousFilter_d__41_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932638 & 1) == 0 )
  {
    sub_21FFC50(&EventMissionItemListViewManager___c_TypeInfo);
    byte_5932638 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventMissionItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionItemListViewManager___c_TypeInfo->static_fields->__9 = (struct EventMissionItemListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventMissionItemListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
  return gift->fields.type == 14;
}


void EventMissionItemListViewManager___c___checkAcceptable_b__51_0(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  EventMissionItemListViewManager___c_c *v8; // x8
  System_String_o *v9; // x20
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_String_o *v11; // x21
  System_Action_o *_9__51_2; // x22
  Il2CppObject *v13; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5932639 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__);
    sub_21FFC50(&EventMissionItemListViewManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_9024/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932639 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v2, v3);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_9024/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0);
  v8 = EventMissionItemListViewManager___c_TypeInfo;
  v9 = v5;
  if ( !*(&EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v6, v7);
    v8 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_2 = static_fields->__9__51_2;
  if ( !_9__51_2 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__51_2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__51_2, v13, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__, 0);
    v14 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v14->__9__51_2 = _9__51_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__51_2, (int32_t)_9__51_2, v15, v16, v17, v18, v19, v20);
  }
  if ( !Instance )
    sub_21FFECC(v5, v6);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v11, v9, _9__51_2, 150, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void EventMissionItemListViewManager___c___checkAcceptable_b__51_1(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  EventMissionItemListViewManager___c_c *v8; // x8
  System_String_o *v9; // x20
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_String_o *v11; // x21
  System_Action_o *_9__51_3; // x22
  Il2CppObject *v13; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_593263B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__);
    sub_21FFC50(&EventMissionItemListViewManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_9025/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593263B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v2, v3);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_9025/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0);
  v8 = EventMissionItemListViewManager___c_TypeInfo;
  v9 = v5;
  if ( !*(&EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v6, v7);
    v8 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_3 = static_fields->__9__51_3;
  if ( !_9__51_3 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__51_3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__51_3, v13, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__, 0);
    v14 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v14->__9__51_3 = _9__51_3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__51_3, (int32_t)_9__51_3, v15, v16, v17, v18, v19, v20);
  }
  if ( !Instance )
    sub_21FFECC(v5, v6);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v11, v9, _9__51_3, 150, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void EventMissionItemListViewManager___c___checkAcceptable_b__51_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_593263A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593263A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void EventMissionItemListViewManager___c___checkAcceptable_b__51_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_593263C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593263C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


int32_t EventMissionItemListViewManager___c___modifyOpenItem_b__66_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
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
    sub_21FFECC(selectItem, method);
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
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct EventMissionItemListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct EventMissionItemListViewManager_o *v17; // x8

  if ( (byte_593263D & 1) == 0 )
  {
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    sub_21FFC50(&StringLiteral_9062/*"MISSION_REWARD"*/);
    byte_593263D = 1;
  }
  if ( result == 1 )
  {
    v5 = Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (missionEntity = this->fields.missionEntity,
          _4__this->fields.missionToRecieve = missionEntity,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&_4__this->fields.missionToRecieve,
            (int32_t)missionEntity,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14),
          (v17 = this->fields.__4__this) == 0)
      || (targetFSM = v17->fields.targetFSM) == 0 )
    {
      sub_21FFECC(targetFSM, v8);
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_9062/*"MISSION_REWARD"*/, 0);
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

  if ( (byte_5932640 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932640 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), (_4__this = this->fields.__4__this) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0);
}


void EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__3(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventRewardRootComponent_o *eventRootComponent; // x20
  System_Action_o *_9__4; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593263E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__);
    byte_593263E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    _9__4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__4, (int32_t)_9__4, v8, v9, v10, v11, v12, v13);
  }
  if ( !eventRootComponent )
LABEL_10:
    sub_21FFECC(Instance, v4);
  EventRewardRootComponent__StartSwitchFigure(eventRootComponent, _9__4, 0);
}


void EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__4(
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
        (this = (EventMissionItemListViewManager___c__DisplayClass58_0_o *)_4__this->fields.touchBlockObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0), (v4 = v3->fields.__4__this) == 0) )
  {
    sub_21FFECC(this, method);
  }
  v5 = EventMissionItemListViewManager__afterReward(v4, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)v4, v5, 0);
}


void EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__6(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_593263F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593263F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), (_4__this = this->fields.__4__this) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0);
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
  __int64 v9; // x2
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v16; // x8
  System_String_o *v17; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v18; // x8
  System_String_o *v19; // x0
  __int64 v20; // x2
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v21; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v22; // x21
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v23; // x8
  struct EventMissionItemListViewManager_o *v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v27; // x8
  struct EventMissionItemListViewManager_o *v28; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v29; // x21
  Il2CppObject *NumberFormatLong; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v33; // x8
  struct EventMissionItemListViewManager_o *v34; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v35; // x21
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_String_o *v39; // x21
  long double v40; // q0
  _QWORD *v41; // x22
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  CommonUI_o *v45; // x21
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v46; // x22
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v47; // x23
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v48; // x20
  MissionRewardGetDialog_ClickDelegate_o *_9__3; // x24
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7

  v2 = this;
  if ( (byte_5932641 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__);
    sub_21FFC50(&StringLiteral_9066/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_9023/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_9026/*"MISSION_ACTION_SUCCESS"*/);
    sub_21FFC50(&StringLiteral_9028/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/);
    sub_21FFC50(&StringLiteral_50/*"\n \n"*/);
    sub_21FFC50(&StringLiteral_51/*"\n \n "*/);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_21FFC50(&StringLiteral_9067/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/);
    byte_5932641 = 1;
  }
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_69;
  if ( giftList->fields._size < 1 )
  {
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
      CS___8__locals1 = v2->fields.CS___8__locals1;
      if ( CS___8__locals1 )
      {
        _4__this = (UnityEngine_MonoBehaviour_o *)CS___8__locals1->fields.__4__this;
        if ( _4__this )
        {
          v12 = EventMissionItemListViewManager__afterReward(CS___8__locals1->fields.__4__this, method);
          UnityEngine_MonoBehaviour__StartCoroutine_83231452(_4__this, v12, 0);
          return;
        }
      }
    }
    goto LABEL_69;
  }
  v4 = v2->fields.CS___8__locals1;
  if ( !v4 )
    goto LABEL_69;
  v5 = v4->fields.__4__this;
  if ( !v5 )
    goto LABEL_69;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v5->fields.touchBlockObj;
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v6 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0);
  v7 = v2->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_69;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v7->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_69;
  v8 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                            this,
                            this->klass->vtable._3_ToString.method);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v8, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemDialogNum >= 2 )
    {
      if ( !v8 )
        goto LABEL_69;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__Substring_75489544(
                                                                          v8,
                                                                          0,
                                                                          v8->fields._stringLength - 2,
                                                                          0);
      if ( !v6 )
        goto LABEL_69;
      System_Text_StringBuilder__Append_75521760(v6, (System_String_o *)this, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9023/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_75521760(
                                                                          v6,
                                                                          v15,
                                                                          0);
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v9);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_9026/*"MISSION_ACTION_SUCCESS"*/,
                                                                          0);
      if ( !v6 )
        goto LABEL_69;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                          v6,
                                                                          (System_String_o *)this,
                                                                          (Il2CppObject *)v8,
                                                                          0);
    }
    v16 = v2->fields.CS___8__locals1;
    if ( !v16 )
      goto LABEL_69;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v16->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_69;
    v17 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                               this,
                               this->klass->vtable._3_ToString.method);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v17, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_75521760(
                                                                          v6,
                                                                          (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                          0);
  }
  v18 = v2->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_69;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v18->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_69;
  v19 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                             this,
                             this->klass->vtable._3_ToString.method);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v19, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v20);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_9028/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/,
                                                                        0);
    v21 = v2->fields.CS___8__locals1;
    if ( !v21 )
      goto LABEL_69;
    v22 = this;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v21->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_69;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                                                                        this,
                                                                        this->klass->vtable._3_ToString.method);
    if ( !v6 )
      goto LABEL_69;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                        v6,
                                                                        (System_String_o *)v22,
                                                                        (Il2CppObject *)this,
                                                                        0);
  }
  v23 = v2->fields.CS___8__locals1;
  if ( !v23 )
    goto LABEL_69;
  v24 = v23->fields.__4__this;
  if ( !v24 )
    goto LABEL_69;
  if ( v24->fields.isQpMaxAlert )
  {
    if ( v2->fields.isGetNoReward )
    {
      if ( v6 )
      {
        System_Text_StringBuilder__set_Length(v6, 0, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
        this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_9066/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                            0);
        v27 = v2->fields.CS___8__locals1;
        if ( v27 )
        {
          v28 = v27->fields.__4__this;
          if ( v28 )
          {
            v29 = this;
            NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v28->fields.overQpValue, 0);
            System_Text_StringBuilder__AppendFormat(v6, (System_String_o *)v29, NumberFormatLong, 0);
            goto LABEL_62;
          }
        }
      }
LABEL_69:
      sub_21FFECC(this, method);
    }
    if ( !v6 )
      goto LABEL_69;
    System_Text_StringBuilder__Append_75521760(v6, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_9067/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                        0);
    v33 = v2->fields.CS___8__locals1;
    if ( !v33 )
      goto LABEL_69;
    v34 = v33->fields.__4__this;
    if ( !v34 )
      goto LABEL_69;
    v35 = this;
    v36 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v34->fields.overQpValue, 0);
    v39 = System_String__Format((System_String_o *)v35, v36, 0);
    v41 = Method_System_Array_Empty_object___;
    v42 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v42 )
    {
      sub_2237B54(Method_System_Array_Empty_object___);
      v42 = v41[7];
    }
    v43 = *(_QWORD *)(v42 + 16);
    if ( (*(_WORD *)(v43 + 309) & 1) == 0 )
      v43 = sub_2237AF8(v40);
    if ( !*(_DWORD *)(v43 + 228) )
      *(__n128 *)&v40 = j_il2cpp_runtime_class_init_0(v43, v37, v38);
    v44 = *(_QWORD *)(v41[7] + 16LL);
    if ( (*(_WORD *)(v44 + 309) & 1) == 0 )
      v44 = sub_2237AF8(v40);
    System_Text_StringBuilder__AppendFormat_75528156(v6, v39, **(System_Object_array ***)(v44 + 184), 0);
  }
LABEL_62:
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v2->fields.giftList )
    goto LABEL_69;
  v45 = (CommonUI_o *)this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                      (System_Collections_Generic_List_object__o *)v2->fields.giftList,
                                                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v6 )
    goto LABEL_69;
  v46 = this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
                                                                      v6,
                                                                      v6->klass->vtable._3_ToString.method);
  v47 = v2->fields.CS___8__locals1;
  if ( !v47 )
    goto LABEL_69;
  v48 = this;
  _9__3 = v47->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (MissionRewardGetDialog_ClickDelegate_o *)sub_21FFEBC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__3,
      (Il2CppObject *)v47,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__,
      0);
    v47->fields.__9__3 = _9__3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v47->fields.__9__3, (int32_t)_9__3, v50, v51, v52, v53, v54, v55);
  }
  if ( !v45 )
    goto LABEL_69;
  CommonUI__OpenMissionRewardGetDialog(
    v45,
    (GiftEntity_array *)v46,
    (System_String_o *)v48,
    _9__3,
    v2->fields.isGetNoReward,
    0);
}


void EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v2; // x19
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v2 = this;
  if ( (byte_5932642 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__);
    byte_5932642 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__5 = v2->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v2,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__,
      0);
    v2->fields.__9__5 = _9__5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__5, (int32_t)_9__5, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
LABEL_8:
    sub_21FFECC(this, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__5, 0);
}


void EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__5(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct EventMissionItemListViewManager_o *_4__this; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x20
  System_String_o *v10; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v11; // x23
  System_String_o *v12; // x19
  System_Action_o *_9__6; // x22
  System_String_o *v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5932643 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__);
    sub_21FFC50(&StringLiteral_9026/*"MISSION_ACTION_SUCCESS"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932643 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_9026/*"MISSION_ACTION_SUCCESS"*/, 0);
  Instance = (SummonAssetManager_o *)System_String__Format(v10, (Il2CppObject *)this->fields.sendName, 0);
  v11 = this->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_14;
  v12 = (System_String_o *)Instance;
  _9__6 = v11->fields.__9__6;
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v11,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__,
      0);
    v11->fields.__9__6 = _9__6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->fields.__9__6, (int32_t)_9__6, v15, v16, v17, v18, v19, v20);
  }
  if ( !v9 )
LABEL_14:
    sub_21FFECC(Instance, v4);
  CommonUI__OpenNotificationDialog((CommonUI_o *)v9, v14, v12, _9__6, 150, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
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
  int32_t _1__state; // w23
  struct EventMissionItemListViewManager_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  EventMissionItemListViewManager___c__DisplayClass59_0_o *v7; // x21
  System_Action_o *v8; // x22
  System_Func_bool__o *v9; // x20
  UnityEngine_WaitUntil_o *v10; // x21
  Il2CppObject **p__2__current; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5932724 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__);
    sub_21FFC50(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__);
    sub_21FFC50(&EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    sub_21FFC50(&StringLiteral_5630/*"END_EFFECT"*/);
    byte_5932724 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v7 = (EventMissionItemListViewManager___c__DisplayClass59_0_o *)sub_21FFEBC(EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo);
    EventMissionItemListViewManager___c__DisplayClass59_0___ctor(v7, 0);
    if ( v7 )
    {
      v7->fields.flag = 0;
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v8,
        (Il2CppObject *)v7,
        Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__,
        0);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v8, 0);
        v9 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v9,
          (Il2CppObject *)v7,
          Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__,
          0);
        v10 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v10, v9, 0);
        this->fields.__2__current = (Il2CppObject *)v10;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v10, v12, v13, v14, v15, v16, v17);
        *((_DWORD *)p__2__current - 2) = 1;
        return _1__state == 0;
      }
    }
    goto LABEL_13;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0);
      if ( _4__this )
      {
        Instance = (Il2CppObject *)_4__this->fields.targetFSM;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5630/*"END_EFFECT"*/, 0);
          return _1__state == 0;
        }
      }
    }
LABEL_13:
    sub_21FFECC(Instance, v6);
  }
  return _1__state == 0;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventMissionItemListViewManager__afterReward_d__59_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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