void __fastcall EventMissionItemListViewManager___ctor(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A001F1 & 1) == 0 )
  {
    sub_1B640C8(&MissionListViewManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_4A001F1 = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dialogTitle, v6, v2, v3);
  v7 = (int)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dialogMessage, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dialogGetable, v10, v11, v12);
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager__AcceptReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v35; // x23
  DataManager_o *Instance; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x20
  struct EventMissionEntity_o *v41; // x8
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  __int64 v44; // x2
  System_Text_StringBuilder_o *v45; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x1
  __int64 v49; // x2
  System_Text_StringBuilder_o *v50; // x21
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x21
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject **v58; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x29
  il2cpp_array_size_t v62; // w24
  Il2CppClass **v63; // x28
  Il2CppClass *v64; // x8
  char *v65; // x28
  Il2CppClass *v66; // t1
  EventRewardSetEntity_o *SetRewardData; // x23
  int32_t v68; // w1
  Il2CppObject **v69; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t v72; // w2
  int32_t v73; // w3
  Il2CppObject *name; // x1
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *v76; // x19
  __int64 v77; // x1
  __int64 v78; // x2
  System_Action_o *v79; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  System_Collections_Generic_List_object__o *v82; // x23
  __int64 v83; // x2
  il2cpp_array_size_t v84; // w28
  Il2CppClass **v85; // x24
  Il2CppClass *v86; // x8
  Il2CppObject **v87; // x24
  Il2CppClass *v88; // t1
  ServantEntity_o *v89; // x25
  bool IsCombineMaterial; // w26
  System_String_o *v91; // x0
  System_Text_StringBuilder_o *klass; // x26
  Il2CppObject *v93; // x25
  Il2CppObject *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  Il2CppObject *v97; // x1
  struct System_Object_array *items; // x8
  _QWORD *v99; // x9
  __int64 size; // x10
  Il2CppClass **v101; // x0
  int32_t v102; // w3
  Il2CppObject *v103; // x1
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  char v108; // w27
  bool IsCountableWithPlus; // w0
  __int64 v110; // x1
  __int64 v111; // x2
  Il2CppObject **v112; // x8
  Il2CppObject *v113; // x26
  System_Text_StringBuilder_o *v114; // x25
  int32_t getQpValue; // w8
  System_String_o *v116; // x27
  Il2CppObject *v117; // x0
  Il2CppObject *v118; // x8
  System_Text_StringBuilder_o *monitor; // x26
  System_Collections_Generic_List_object__o *v120; // x22
  int32_t v121; // w2
  int32_t v122; // w3
  __int64 v123; // x1
  __int64 v124; // x2
  System_Action_o *v125; // x22
  Il2CppObject *v126; // x19
  System_String_o *v127; // x0
  System_String_o *v128; // x0
  Il2CppObject *v129; // x22
  System_String_o *v130; // x20
  __int64 v131; // x1
  __int64 v132; // x2
  System_Action_o *v133; // x21
  System_Collections_Generic_List_object__o *v134; // [xsp+30h] [xbp-80h]
  int32_t monitor_high; // [xsp+3Ch] [xbp-74h] BYREF
  Il2CppObject *v136; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A001DD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor___75655800, v13);
    sub_1B640C8(&System_Collections_Generic_List_GiftEntity__TypeInfo, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v19);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v20);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v21);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__, v22);
    sub_1B640C8(&EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo, v23);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__, v24);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__, v25);
    sub_1B640C8(&EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo, v26);
    sub_1B640C8(&StringLiteral_8606/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v27);
    sub_1B640C8(&StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, v28);
    sub_1B640C8(&StringLiteral_25014/*"{0}×{1:#,0}"*/, v29);
    sub_1B640C8(&StringLiteral_25061/*"×"*/, v30);
    sub_1B640C8(&StringLiteral_8601/*"MISSION_ACTION_ITEM_FORMAT"*/, v31);
    sub_1B640C8(&StringLiteral_1/*""*/, v32);
    sub_1B640C8(&StringLiteral_49/*"\n "*/, v33);
    sub_1B640C8(&StringLiteral_25356/*"＋"*/, v34);
    byte_4A001DD = 1;
  }
  v136 = 0LL;
  entity = 0LL;
  v35 = sub_1B64314(EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_135;
  *(_QWORD *)(v35 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 16), (int32_t)this, v37, v38);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_135;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_135;
  if ( !Instance )
    goto LABEL_135;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v41 = this->fields.missionToRecieve;
  if ( !v41 )
    goto LABEL_135;
  if ( !Instance )
    goto LABEL_135;
  AutomatedAction__SetStatusMissionNotify((AutomatedAction_o *)Instance, v41->fields.id, 5, 0, 0LL);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v42);
  v45 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v43, v44);
  System_Text_StringBuilder___ctor(v45, 0LL);
  *(_QWORD *)(v35 + 32) = v45;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 32), (int32_t)v45, v46, v47);
  v50 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v48, v49);
  System_Text_StringBuilder___ctor(v50, 0LL);
  *(_QWORD *)(v35 + 24) = v50;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 24), (int32_t)v50, v51, v52);
  v55 = sub_1B64314(EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo, v53, v54);
  System_Object___ctor((Il2CppObject *)v55, 0LL);
  if ( !v55 )
    goto LABEL_135;
  *(_QWORD *)(v55 + 40) = v35;
  v58 = (Il2CppObject **)(v55 + 40);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 40), v35, v56, v57);
  Instance = (DataManager_o *)this->fields.missionToRecieve;
  if ( !Instance )
    goto LABEL_135;
  if ( LODWORD(Instance->fields.lastFrameTime) == 1 )
  {
    *(_DWORD *)(v55 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_135;
    v61 = *(_QWORD *)&GiftListById->max_length;
    if ( (int)v61 >= 1 )
    {
      v62 = 0;
      while ( 1 )
      {
        v63 = &GiftListById->obj.klass + (int)v62;
        v66 = v63[4];
        v65 = (char *)(v63 + 4);
        v64 = v66;
        if ( !v66 )
          goto LABEL_135;
        Instance = (DataManager_o *)Gift__IsServant_37376332(HIDWORD(v64->_1.name), 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( v62 >= GiftListById->max_length )
            goto LABEL_37;
          if ( !*(_QWORD *)v65 )
            goto LABEL_135;
          Instance = (DataManager_o *)Gift__IsCommandCode_37376724(*(_DWORD *)(*(_QWORD *)v65 + 20LL), 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            if ( v62 >= GiftListById->max_length )
              goto LABEL_37;
            if ( !*(_QWORD *)v65 )
              goto LABEL_135;
            Instance = (DataManager_o *)Gift__IsCostumeRelease(*(_DWORD *)(*(_QWORD *)v65 + 20LL), 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_135;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
              if ( v62 >= GiftListById->max_length )
                goto LABEL_37;
              if ( !*(_QWORD *)v65 || !Instance )
                goto LABEL_135;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            &entity,
                                            *(_DWORD *)(*(_QWORD *)v65 + 24LL),
                                            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                    ++*(_DWORD *)(v55 + 24);
                }
              }
            }
          }
        }
        if ( (_DWORD)v61 - 1 == v62 )
          break;
        if ( ++v62 >= GiftListById->max_length )
          goto LABEL_37;
      }
    }
    *(_BYTE *)(v55 + 28) = 1;
    v134 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                          System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                          v59,
                                                          v60);
    System_Collections_Generic_List_object____ctor(
      v134,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v82 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                         v80,
                                                         v81);
    System_Collections_Generic_List_object____ctor(
      v82,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)v61 >= 1 )
    {
      v84 = 0;
      while ( v84 < GiftListById->max_length )
      {
        v85 = &GiftListById->obj.klass + (int)v84;
        v88 = v85[4];
        v87 = (Il2CppObject **)(v85 + 4);
        v86 = v88;
        if ( !v88 )
          goto LABEL_135;
        Instance = (DataManager_o *)Gift__IsServant_37376332(HIDWORD(v86->_1.name), 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_135;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( v84 >= GiftListById->max_length )
            break;
          if ( !*v87 )
            goto LABEL_135;
          if ( !Instance )
            goto LABEL_135;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        (int32_t)(*v87)[1].monitor,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_135;
          v89 = (ServantEntity_o *)Instance;
          IsCombineMaterial = SvtType__IsCombineMaterial(*((_DWORD *)&Instance->fields.lastFrameTime + 1), 0LL);
          Instance = (DataManager_o *)SvtType__IsStatusUp(v89->fields.type, 0LL);
          if ( IsCombineMaterial || ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !*v58 )
              goto LABEL_135;
            Instance = (DataManager_o *)(*v58)[2].klass;
            if ( !Instance )
              goto LABEL_135;
            v91 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                       Instance,
                                       Instance->klass[1]._1.image);
            Instance = (DataManager_o *)System_String__IsNullOrEmpty(v91, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !*v58 )
                goto LABEL_135;
              Instance = (DataManager_o *)(*v58)[2].klass;
              if ( !Instance )
                goto LABEL_135;
              Instance = (DataManager_o *)System_Text_StringBuilder__Append_60536548(
                                            (System_Text_StringBuilder_o *)Instance,
                                            (System_String_o *)StringLiteral_49/*"\n "*/,
                                            0LL);
            }
            if ( !*v58 )
              goto LABEL_135;
            klass = (System_Text_StringBuilder_o *)(*v58)[2].klass;
            Instance = (DataManager_o *)ServantEntity__getName(v89, 0, -1, 0LL);
            if ( v84 >= GiftListById->max_length )
              break;
            if ( !*v87 )
              goto LABEL_135;
            v93 = (Il2CppObject *)Instance;
            monitor_high = HIDWORD((*v87)[1].monitor);
            v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
            Instance = (DataManager_o *)System_String__Format_61389768(
                                          (System_String_o *)StringLiteral_25014/*"{0}×{1:#,0}"*/,
                                          v93,
                                          v94,
                                          0LL);
            if ( !klass )
              goto LABEL_135;
            Instance = (DataManager_o *)System_Text_StringBuilder__Append_60536548(
                                          klass,
                                          (System_String_o *)Instance,
                                          0LL);
            if ( v84 >= GiftListById->max_length )
              break;
            if ( !v82 )
              goto LABEL_135;
            v97 = *v87;
            items = v82->fields._items;
            v99 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v82->fields._version;
            if ( !items )
              goto LABEL_135;
            size = v82->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v82,
                v97,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
            }
            else
            {
              v101 = &items->obj.klass + size;
              v82->fields._size = size + 1;
              v101[4] = (Il2CppClass *)v97;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v101 + 4), (int32_t)v97, v95, v96);
            }
          }
        }
        else
        {
          if ( v84 >= GiftListById->max_length )
            break;
          if ( !*v87 )
            goto LABEL_135;
          Instance = (DataManager_o *)Gift__IsItem_37376280(HIDWORD((*v87)[1].klass), 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_135;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( v84 >= GiftListById->max_length )
              break;
            if ( !*v87 || !Instance )
              goto LABEL_135;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          &v136,
                                          (int32_t)(*v87)[1].monitor,
                                          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !v136 || !Instance )
                goto LABEL_135;
              Instance = (DataManager_o *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v136[1].klass, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !this->fields.isTreasureEffect )
                  goto LABEL_85;
                if ( !v136 )
                  goto LABEL_135;
                Instance = (DataManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                              (MissionListViewManager_o *)this,
                                              (int32_t)v136[1].klass,
                                              0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
LABEL_85:
                  if ( v84 >= GiftListById->max_length )
                    break;
                  if ( !v134 )
                    goto LABEL_135;
                  v103 = *v87;
                  v104 = v134->fields._items;
                  v105 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                  ++v134->fields._version;
                  if ( !v104 )
                    goto LABEL_135;
                  v106 = v134->fields._size;
                  if ( (unsigned int)v106 >= v104->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v134,
                      v103,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v107 = &v104->obj.klass + v106;
                    v134->fields._size = v106 + 1;
                    v107[4] = (Il2CppClass *)v103;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v107 + 4), (int32_t)v103, v83, v102);
                  }
                  if ( v84 >= GiftListById->max_length )
                    break;
                  Instance = (DataManager_o *)*v87;
                  if ( !*v87 )
                    goto LABEL_135;
                  Instance = (DataManager_o *)GiftEntity__isQp((GiftEntity_o *)Instance, 0LL);
                  v108 = (char)Instance;
                  if ( ((unsigned __int8)Instance & 1) == 0 || !this->fields.isQpAlreadyMax )
                  {
                    *(_BYTE *)(v55 + 28) = 0;
                    if ( !v136 )
                      goto LABEL_135;
                    IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)v136[3].klass, 0LL);
                    v112 = (Il2CppObject **)&StringLiteral_25356/*"＋"*/;
                    if ( !IsCountableWithPlus )
                      v112 = (Il2CppObject **)&StringLiteral_25061/*"×"*/;
                    v113 = *v112;
                    v114 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v110, v111);
                    System_Text_StringBuilder___ctor(v114, 0LL);
                    if ( !v136 || !v114 )
                      goto LABEL_135;
                    System_Text_StringBuilder__Append_60536548(v114, (System_String_o *)v136[1].monitor, 0LL);
                    if ( (v108 & 1) != 0 && this->fields.isQpMaxAlert && this->fields.getQpValue )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8606/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                      getQpValue = this->fields.getQpValue;
                    }
                    else
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8606/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                      if ( v84 >= GiftListById->max_length )
                        break;
                      if ( !*v87 )
                        goto LABEL_135;
                      getQpValue = HIDWORD((*v87)[1].monitor);
                    }
                    v116 = (System_String_o *)Instance;
                    monitor_high = getQpValue;
                    v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
                    Instance = (DataManager_o *)System_Text_StringBuilder__AppendFormat_60542900(
                                                  v114,
                                                  v116,
                                                  v113,
                                                  v117,
                                                  0LL);
                    v118 = *v58;
                    if ( !*v58 )
                      goto LABEL_135;
                    monitor = (System_Text_StringBuilder_o *)v118[1].monitor;
                    if ( *(int *)(v55 + 24) >= 2 )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8601/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                      if ( !monitor )
                        goto LABEL_135;
                      Instance = (DataManager_o *)System_Text_StringBuilder__AppendFormat(
                                                    monitor,
                                                    (System_String_o *)Instance,
                                                    (Il2CppObject *)v114,
                                                    0LL);
                      if ( !*v58 )
                        goto LABEL_135;
                      Instance = (DataManager_o *)(*v58)[1].monitor;
                      if ( !Instance )
                        goto LABEL_135;
                      Instance = (DataManager_o *)System_Text_StringBuilder__Append_60536548(
                                                    (System_Text_StringBuilder_o *)Instance,
                                                    (System_String_o *)StringLiteral_49/*"\n "*/,
                                                    0LL);
                    }
                    else
                    {
                      if ( !monitor )
                        goto LABEL_135;
                      Instance = (DataManager_o *)System_Text_StringBuilder__Append_60537176(
                                                    (System_Text_StringBuilder_o *)v118[1].monitor,
                                                    v114,
                                                    0LL);
                    }
                  }
                }
              }
            }
          }
        }
        if ( (_DWORD)v61 == ++v84 )
          goto LABEL_124;
      }
LABEL_37:
      sub_1B6432C(Instance, v59);
    }
LABEL_124:
    v120 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                          System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                          v59,
                                                          v83);
    System_Collections_Generic_List_object____ctor_55234504(
      v120,
      (System_Collections_Generic_IEnumerable_T__o *)v134,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_GiftEntity___ctor___75655800);
    *(_QWORD *)(v55 + 16) = v120;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 16), (int32_t)v120, v121, v122);
    Instance = *(DataManager_o **)(v55 + 16);
    if ( !Instance )
LABEL_135:
      sub_1B64324(Instance);
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)Instance,
      (System_Collections_Generic_IEnumerable_T__o *)v82,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v125 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v123, v124);
    System_Action___ctor(
      v125,
      (Il2CppObject *)v55,
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
        v125,
        0LL);
    }
    else
    {
      MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v125, 0LL);
    }
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Instance, 0LL);
    v68 = (int)StringLiteral_1/*""*/;
    *(_QWORD *)(v55 + 32) = StringLiteral_1/*""*/;
    v69 = (Il2CppObject **)(v55 + 32);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 32), v68, v70, v71);
    if ( !SetRewardData )
      goto LABEL_135;
    name = (Il2CppObject *)SetRewardData->fields.name;
    *v69 = name;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 32), (int32_t)name, v72, v73);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && *(_QWORD *)&getSvtList->max_length )
    {
      Instance = (DataManager_o *)this->fields.touchBlockObj;
      if ( !Instance )
        goto LABEL_135;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v76 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v79 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v77, v78);
      System_Action___ctor(
        v79,
        (Il2CppObject *)v55,
        Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__,
        0LL);
      if ( !v76 )
        goto LABEL_135;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)v76, v79, 0LL);
    }
    else
    {
      v126 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v127 = LocalizationManager__Get((System_String_o *)StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v128 = System_String__Format(v127, *v69, 0LL);
      v129 = *v58;
      v130 = v128;
      v133 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v131, v132);
      System_Action___ctor(
        v133,
        v129,
        Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__,
        0LL);
      if ( !v126 )
        goto LABEL_135;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v126,
        (System_String_o *)StringLiteral_1/*""*/,
        v130,
        v133,
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
    Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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

  EventMissionItemListViewManager__CreateList_45309536(this, missionList, eventId, isDailyMission, 1, v5);
}


void __fastcall EventMissionItemListViewManager__CreateList_45309536(
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
  int64_t Instance; // x0
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Entity; // x23
  bool v23; // w9
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t v26; // w3
  __int64 v27; // x8
  unsigned __int64 v28; // x26
  bool v29; // w22
  EventMissionEntity_o *v30; // x25
  System_Collections_Generic_List_object__o *itemList; // x23
  EventMissionItemListViewItem_o *v32; // x24
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  struct ListViewSort_o *sort; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x21
  UILabel_o *v42; // x21

  v10 = isTouchListEnabled;
  if ( (byte_4A001CC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, missionList);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_1B640C8(&EventMissionItemListViewItem_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&UserMissionNewManager_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_8609/*"MISSION_EMPTY_TXT"*/, v19);
    byte_4A001CC = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v10;
  if ( !scrollView )
    goto LABEL_36;
  scrollView->fields.disableDragIfFits = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_36;
  v23 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  this->fields.isEndEvent = v23;
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
        sub_1B6432C(Instance, v24);
      v30 = missionList->m_Items[v28];
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v32 = (EventMissionItemListViewItem_o *)sub_1B64314(EventMissionItemListViewItem_TypeInfo, v24, v25);
      EventMissionItemListViewItem___ctor(v32, v30, v29, v33);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v32,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v32;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v32, v34, v35);
      }
      LODWORD(v27) = missionList->max_length;
      if ( (__int64)++v28 >= (int)v27 )
        goto LABEL_24;
    }
LABEL_36:
    sub_1B64324(Instance);
  }
LABEL_24:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v25, v26);
  }
  if ( !byte_4A002A4 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, sort);
    byte_4A002A4 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
  EventMissionItemListViewManager__setList(this, (const MethodInfo *)sort);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v42 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8609/*"MISSION_EMPTY_TXT"*/, 0LL);
    if ( !v42 )
      goto LABEL_36;
    UILabel__set_text(v42, (System_String_o *)Instance, 0LL);
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
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  EventMissionActionAddEntity_o *v12; // x21
  EventMissionActionInfo_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  EventMissionActionEntity_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_String_array *vals; // x1
  EventMissionItemListViewManager_o *v22; // x0
  const MethodInfo *v23; // x2
  System_String_o *VoiceAssetName; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A001DB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionId);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v4);
    sub_1B640C8(&EventMissionActionInfo_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&TerminalTransitionInfo_TypeInfo, v7);
    byte_4A001DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
    v12 = EntityFromIdProgressTypeAndActionType;
    v13 = (EventMissionActionInfo_o *)sub_1B64314(EventMissionActionInfo_TypeInfo, v10, v11);
    EventMissionActionInfo___ctor_41995308(v13, v12, 0LL);
LABEL_11:
    v18 = (EventMissionActionEntity_o *)sub_1B64314(TerminalTransitionInfo_TypeInfo, v14, v15);
    TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v18, 0LL);
    if ( v18 )
    {
      v18->fields.missionId = missionId;
      if ( v13 )
      {
        vals = v13->fields.vals;
        v18->fields.vals = vals;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.vals, (int32_t)vals, v19, v20);
        VoiceAssetName = EventMissionItemListViewManager__GetVoiceAssetName(v22, v13->fields.vals, v23);
        *(_QWORD *)&v18->fields.optionId = VoiceAssetName;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.optionId, (int32_t)VoiceAssetName, v25, v26);
        return (TerminalTransitionInfo_o *)v18;
      }
    }
LABEL_15:
    sub_1B64324(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_15;
  v18 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
          (EventMissionActionMaster_o *)Instance,
          missionId,
          5,
          4,
          0LL);
  if ( v18 )
  {
    v13 = (EventMissionActionInfo_o *)sub_1B64314(EventMissionActionInfo_TypeInfo, v16, v17);
    EventMissionActionInfo___ctor(v13, v18, 0LL);
    goto LABEL_11;
  }
  return (TerminalTransitionInfo_o *)v18;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  int32_t v11; // w1
  ServantStatusBattleListViewItem_o *p_dialogMessage; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t *p_overQpValue; // x26
  _DWORD *SelfUserGame; // x0
  _DWORD *v20; // x22
  int32_t v21; // w23
  int32_t QpMax; // w8
  int v23; // w23
  int32_t v24; // w24
  System_String_o *v25; // x23
  Il2CppObject *v26; // x24
  System_String_o *v27; // x0
  BalanceConfig_c *v28; // x8
  Il2CppObject *v29; // x25
  Il2CppObject *v30; // x0
  struct System_String_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w8
  int32_t num; // w8
  System_String_o *v36; // x21
  System_String_o *NumberFormat; // x0
  int32_t v38; // w8
  Il2CppObject *v39; // x22
  System_String_o *v40; // x0
  BalanceConfig_c *v41; // x8
  Il2CppObject *v42; // x23
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  bool result; // w0

  if ( (byte_4A001EE & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, giftEnt);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_8643/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v7);
    sub_1B640C8(&StringLiteral_8646/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_4A001EE = 1;
  }
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dialogTitle, v10, (int32_t)method, v3);
  v11 = (int)StringLiteral_1/*""*/;
  p_dialogMessage = (ServantStatusBattleListViewItem_o *)&this->fields.dialogMessage;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dialogMessage, v11, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dialogGetable, v15, v16, v17);
  p_overQpValue = &this->fields.overQpValue;
  this->fields.isQpAlreadyMax = 0;
  *(_QWORD *)&this->fields.overQpValue = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_24;
  v20 = SelfUserGame;
  v21 = SelfUserGame[24];
  SelfUserGame = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)SelfUserGame + 23) + 4LL);
  if ( v21 >= QpMax )
  {
    this->fields.isQpAlreadyMax = 1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_8643/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    if ( giftEnt )
    {
      v36 = (System_String_o *)SelfUserGame;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
      v38 = v20[24];
      v39 = (Il2CppObject *)NumberFormat;
      v40 = LocalizationManager__GetNumberFormat(v38, 0LL);
      v41 = BalanceConfig_TypeInfo;
      v42 = (Il2CppObject *)v40;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v41 = BalanceConfig_TypeInfo;
      }
      v43 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v41->static_fields->QpMax, 0LL);
      v44 = System_String__Format_61389836(v36, v39, v42, v43, 0LL);
      p_dialogMessage->klass = (ServantStatusBattleListViewItem_c *)v44;
      sub_1B6406C(p_dialogMessage, (int32_t)v44, v45, v46);
      num = giftEnt->fields.num;
      goto LABEL_22;
    }
LABEL_24:
    sub_1B64324(SelfUserGame);
  }
  if ( !giftEnt )
    goto LABEL_24;
  v23 = v20[24];
  v24 = giftEnt->fields.num;
  if ( !SelfUserGame[56] )
  {
    j_il2cpp_runtime_class_init_0(SelfUserGame);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( v24 + v23 > QpMax )
  {
    this->fields.isQpAlreadyMax = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8646/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    v26 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
    v27 = LocalizationManager__GetNumberFormat(v20[24], 0LL);
    v28 = BalanceConfig_TypeInfo;
    v29 = (Il2CppObject *)v27;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    v30 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v28->static_fields->QpMax, 0LL);
    v31 = System_String__Format_61389836(v25, v26, v29, v30, 0LL);
    this->fields.dialogMessage = v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dialogMessage, (int32_t)v31, v32, v33);
    v34 = BalanceConfig_TypeInfo->static_fields->QpMax - v20[24];
    this->fields.getQpValue = v34;
    num = giftEnt->fields.num - v34;
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

  if ( (byte_4A001D2 & 1) == 0 )
  {
    sub_1B640C8(&EventMissionItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4A001D2 = 1;
  }
  result = (EventMissionItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventMissionItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 index,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  ConstantStrMaster_o *v13; // x21
  System_String_o *Value; // x24
  System_String_o *v15; // x23
  System_String_o *v16; // x21
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_Object_array *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x19
  __int64 v30; // x0

  if ( (byte_4A001D4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ConstantStrMaster___, beforeGiftEntity);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&object___TypeInfo, v8);
    sub_1B640C8(&StringLiteral_5608/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, v9);
    sub_1B640C8(&StringLiteral_5609/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, v10);
    sub_1B640C8(&StringLiteral_5676/*"EVENT_REWARD_REPLACE_MSG"*/, v11);
    byte_4A001D4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_24;
  v13 = Master_object;
  Value = ConstantStrMaster__GetValue(Master_object, (System_String_o *)StringLiteral_5609/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, 0LL);
  v15 = ConstantStrMaster__GetValue(v13, (System_String_o *)StringLiteral_5608/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5676/*"EVENT_REWARD_REPLACE_MSG"*/, 0LL);
  Master_object = (ConstantStrMaster_o *)sub_1B64170(object___TypeInfo, 4LL);
  if ( !Master_object )
    goto LABEL_24;
  v20 = (System_Object_array *)Master_object;
  if ( Value )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B64204(Value, Master_object->klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( !v20->max_length )
    goto LABEL_25;
  v20->m_Items[0] = (Il2CppObject *)Value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v20->m_Items, (int32_t)Value, v18, v19);
  if ( v15 )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B64204(v15, v20->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_25;
  v20->m_Items[1] = (Il2CppObject *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[1], (int32_t)v15, v21, v22);
  if ( !beforeGiftEntity )
    goto LABEL_24;
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(beforeGiftEntity, 0LL);
  v25 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B64204(Master_object, v20->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_26:
      v30 = sub_1B64348(Master_object);
      sub_1B641F0(v30, 0LL);
    }
  }
  if ( v20->max_length <= 2 )
    goto LABEL_25;
  v20->m_Items[2] = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[2], (int32_t)v25, v23, v24);
  if ( !AfterGiftEntity )
LABEL_24:
    sub_1B64324(Master_object);
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(AfterGiftEntity, 0LL);
  v28 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B64204(Master_object, v20->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( v20->max_length <= 3 )
LABEL_25:
    sub_1B6432C(Master_object, v17);
  v20->m_Items[3] = v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[3], (int32_t)v28, v26, v27);
  return System_String__Format_61389904(v16, v20, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  signed int max_length; // w8
  System_String_o **p_monitor; // x20
  signed int v8; // w21
  System_String_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 methodPtr_low; // x9
  EventMissionItemListViewManager_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4A001DC & 1) == 0 )
  {
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, afterActionVals);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    this = (EventMissionItemListViewManager_o *)sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_4A001DC = 1;
  }
  if ( !afterActionVals || (max_length = afterActionVals->max_length, max_length < 2) )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_monitor;
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1B6432C(this, afterActionVals);
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v8], 0LL);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v8 += 2;
    if ( v8 >= max_length )
      return *p_monitor;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0LL )
    sub_1B64324(Instance);
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
    && (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardRootComponent_TypeInfo )
  {
    p_monitor = (System_String_o **)&Instance[96].monitor;
    return *p_monitor;
  }
  sub_1B645E4(Instance);
  EventMissionItemListViewManager__AcceptReward(v12, v13);
  return result;
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
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8
  DataManager_o *v14; // x20
  _BOOL8 v15; // x0
  MissionListViewItem_o *current; // x22
  __int64 methodPtr_low; // x10
  __int64 MissionId; // x0
  __int64 v19; // x1
  struct EventMissionEntity_o *v20; // x8
  int32_t v21; // w23
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A001E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1B640C8(&EventMissionItemListViewItem_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A001E3 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( this->fields.isEndEvent && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
      sub_1B64324(Instance);
    }
    v14 = Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)this->fields.itemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v25 = v24;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v15 )
        break;
      current = (MissionListViewItem_o *)v25.fields._current;
      if ( !v25.fields._current
        || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v25.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventMissionItemListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1B64324(v15);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v25.fields._current, 0LL);
      v20 = this->fields.missionToRecieve;
      if ( !v20 )
        sub_1B64324(MissionId);
      v21 = MissionId;
      if ( (_DWORD)MissionId == v20->fields.id )
      {
        if ( !byte_49F934E )
        {
          MissionId = sub_1B640C8(&EventRewardSaveData_TypeInfo, v19);
          byte_49F934E = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v21;
        if ( !v14 )
          sub_1B64324(MissionId);
        MissionListViewItem__ModifyItem(current, *(_DWORD *)&v14->fields._DispLog == 5, 0LL);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v23 = current->fields.viewObject;
        if ( !v23 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v23->klass->vtable._5_SetItem.method)(
          v23,
          current,
          v23->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  ListViewItem_o *v14; // x22
  UnityEngine_Object_o *viewObject; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v17; // x3
  System_Collections_IEnumerator_o *v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A001CE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_4A001CE = 1;
  }
  memset(&v19, 0, sizeof(v19));
  Item = EventMissionItemListViewManager__GetItem(this, index, (const MethodInfo *)onFinish);
  if ( !Item )
    goto LABEL_16;
  v14 = (ListViewItem_o *)Item;
  viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    itemSortList = this->fields.itemSortList;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v19,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( (ListViewItem_o *)v19.fields._current == v14 )
        {
          viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v14, 0LL);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
      v18 = EventMissionItemListViewManager__SetPreviousFilter(this, v14->fields.sortIndex, onFinish, v17);
    }
    else
    {
      v18 = EventMissionItemListViewManager__MoveEaseScroll_IE(this, v14->fields.sortIndex, onFinish, v17);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
  }
  else
  {
LABEL_16:
    if ( !onFinish )
      sub_1B64324(Item);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A001D0 & 1) == 0 )
  {
    sub_1B640C8(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo, *(_QWORD *)&index);
    byte_4A001D0 = 1;
  }
  v7 = sub_1B64314(EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo, *(_QWORD *)&index, onFinished);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)onFinished, v10, v11);
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
  const MethodInfo *v8; // x1

  if ( (byte_4A001E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v3);
    byte_4A001E6 = 1;
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
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim((EventMissionItemListViewObject_o *)ObjectList, v8);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1B64324(ObjectList);
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

  if ( (byte_4A001E9 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventMissionItemListViewManager_OnClickFilterList__, method);
    byte_4A001E9 = 1;
  }
  v3 = Method_EventMissionItemListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_EventMissionItemListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_BDB518[filterStatus];
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
  __int64 v16; // x1
  __int64 v17; // x20
  MissionListViewItem_o *EventMissionEntity; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1
  __int64 methodPtr_low; // x10
  EventMissionItemListViewItem_o *Item; // x0
  MissionListViewItem_o **v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t selectNum; // w8
  MissionListViewItem_o *v28; // x1
  const MethodInfo *v29; // x1
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v31; // x2
  GiftAddMaster_o *v32; // x22
  GiftAddEntity_o *ValidPriorDataById; // x0
  GiftAddEntity_o *v34; // x22
  int32_t giftId; // w25
  int32_t priorGiftId; // w25
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t z_low; // w8
  MissionListViewManager_c *v40; // x0
  struct System_String_o *TREASURE_GET_NORMAL; // x1
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  ScrTerminalListTop_c *v44; // x0
  int32_t targetId; // w24
  struct System_String_o *OverwriteTreasureEffectId; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  GiftMaster_o *v49; // x23
  GiftEntity_o *DataById; // x0
  GiftEntity_o *v51; // x22
  EventMissionEntity_o *v52; // x1
  const MethodInfo *v53; // x2
  GiftEntity_array *OriginalGiftData; // x19
  GiftEntity_o *IconGiftEntity; // x0
  GiftEntity_o *v56; // x21
  Il2CppObject *Instance; // x19
  const MethodInfo *v58; // x3
  System_String_o *ReplaceDialogMessage; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  System_Action_o *v62; // x22

  if ( (byte_4A001D3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftAddMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_EventMissionItemListViewManager_OnClickListView__, v8);
    sub_1B640C8(&EventMissionItemListViewObject_TypeInfo, v9);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v10);
    sub_1B640C8(&MissionListViewManager_TypeInfo, v11);
    sub_1B640C8(&ScrTerminalListTop_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__, v14);
    sub_1B640C8(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    byte_4A001D3 = 1;
  }
  v17 = sub_1B64314(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, obj, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_84;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v19, v20);
  if ( this->fields.isClickListViewEnabled )
  {
    if ( !obj )
      goto LABEL_84;
    methodPtr_low = LOBYTE(EventMissionItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
      goto LABEL_84;
    if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewObject_TypeInfo )
      goto LABEL_84;
    Item = EventMissionItemListViewObject__GetItem((EventMissionItemListViewObject_o *)obj, v21);
    *(_QWORD *)(v17 + 24) = Item;
    v24 = (MissionListViewItem_o **)(v17 + 24);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)Item, v25, v26);
    EventMissionEntity = *(MissionListViewItem_o **)(v17 + 24);
    if ( !EventMissionEntity )
      goto LABEL_84;
    EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0LL);
    if ( !EventMissionEntity )
      goto LABEL_84;
    selectNum = EventMissionEntity->fields.selectNum;
    *(_WORD *)&this->fields.isQpMaxAlert = 0;
    this->fields.selectEventMissionId = selectNum;
    EventMissionEntity = *v24;
    if ( !*v24 )
      goto LABEL_84;
    if ( (((__int64 (__fastcall *)(MissionListViewItem_o *, void *))EventMissionEntity->klass->vtable._8_get_IsShowRewardInfo.method)(
            EventMissionEntity,
            EventMissionEntity->klass[1]._1.image) & 1) == 0 )
      goto LABEL_16;
    EventMissionEntity = *v24;
    if ( !*v24 )
      goto LABEL_84;
    EventMissionEntity = (MissionListViewItem_o *)EventMissionItemListViewItem__get_IsHideReward(
                                                    (EventMissionItemListViewItem_o *)EventMissionEntity,
                                                    (const MethodInfo *)v28);
    if ( ((unsigned __int8)EventMissionEntity & 1) != 0 )
      goto LABEL_16;
    v28 = *v24;
    if ( !*v24 )
      goto LABEL_84;
    if ( LOBYTE(v28[1].monitor) )
    {
LABEL_16:
      EventMissionEntity = *v24;
      if ( !*v24 )
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
          EventMissionEntity = *v24;
          if ( !*v24 )
            goto LABEL_84;
        }
        if ( EventMissionItemListViewItem__GetIsRewardQp(
               (EventMissionItemListViewItem_o *)EventMissionEntity,
               (const MethodInfo *)v28) )
        {
          EventMissionEntity = *v24;
          if ( !*v24 )
            goto LABEL_84;
          IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp(
                         (EventMissionItemListViewItem_o *)EventMissionEntity,
                         v29);
          this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v31);
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftAddMaster___);
        if ( !*v24 )
          goto LABEL_84;
        v32 = (GiftAddMaster_o *)EventMissionEntity;
        EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v24, 0LL);
        if ( !EventMissionEntity || !v32 )
          goto LABEL_84;
        ValidPriorDataById = GiftAddMaster__GetValidPriorDataById(
                               v32,
                               HIDWORD(EventMissionEntity->fields.sortValue2B),
                               0LL);
        v34 = ValidPriorDataById;
        if ( ValidPriorDataById && ValidPriorDataById->fields.priority >= 2 )
        {
          EventMissionEntity = *v24;
          if ( !*v24 )
            goto LABEL_84;
          giftId = v34->fields.giftId;
          EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                          EventMissionEntity,
                                                          0LL);
          if ( !EventMissionEntity )
            goto LABEL_84;
          if ( giftId == HIDWORD(EventMissionEntity->fields.sortValue2B) )
          {
            EventMissionEntity = *v24;
            if ( !*v24 )
              goto LABEL_84;
            priorGiftId = v34->fields.priorGiftId;
            EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                            EventMissionEntity,
                                                            0LL);
            if ( !EventMissionEntity )
              goto LABEL_84;
            if ( priorGiftId != HIDWORD(EventMissionEntity->fields.sortValue2B) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftAddMaster___);
              if ( !EventMissionEntity )
                goto LABEL_84;
              v34 = GiftAddMaster__GetValidPriorDataById(
                      (GiftAddMaster_o *)EventMissionEntity,
                      v34->fields.priorGiftId,
                      0LL);
            }
          }
        }
        EventMissionEntity = *v24;
        if ( !*v24 )
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
            v44 = ScrTerminalListTop_TypeInfo;
            if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
              v44 = ScrTerminalListTop_TypeInfo;
            }
            TREASURE_GET_NORMAL = v44->static_fields->TREASURE_GET_NORMAL;
          }
          else
          {
            v40 = MissionListViewManager_TypeInfo;
            if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
              v40 = MissionListViewManager_TypeInfo;
            }
            TREASURE_GET_NORMAL = v40->static_fields->PRIZE_GET_NORMAL;
          }
          this->fields.useTreasureGetEffectName = TREASURE_GET_NORMAL;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.useTreasureGetEffectName,
            (int32_t)TREASURE_GET_NORMAL,
            v37,
            v38);
        }
        if ( v34 )
        {
          EventMissionEntity = *v24;
          if ( !*v24 )
            goto LABEL_84;
          targetId = v34->fields.targetId;
          EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                          EventMissionEntity,
                                                          0LL);
          if ( !EventMissionEntity )
            goto LABEL_84;
          if ( targetId == EventMissionEntity->fields.selectNum )
          {
            OverwriteTreasureEffectId = GiftAddEntity__GetOverwriteTreasureEffectId(v34, 0LL);
            if ( !OverwriteTreasureEffectId )
              OverwriteTreasureEffectId = this->fields.useTreasureGetEffectName;
            this->fields.useTreasureGetEffectName = OverwriteTreasureEffectId;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&this->fields.useTreasureGetEffectName,
              (int32_t)OverwriteTreasureEffectId,
              v47,
              v48);
          }
        }
        if ( this->fields.useTreasureGetEffectName )
          this->fields.isTreasureEffect = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
        if ( !*v24
          || (v49 = (GiftMaster_o *)EventMissionEntity,
              (EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v24, 0LL)) == 0LL)
          || !v49 )
        {
LABEL_84:
          sub_1B64324(EventMissionEntity);
        }
        DataById = GiftMaster__getDataById(v49, HIDWORD(EventMissionEntity->fields.sortValue2B), 0LL);
        if ( !DataById
          || (v51 = DataById, !DataById->fields._IsReplacedData_k__BackingField)
          || this->fields.isTreasureEffect
          || this->fields.giftIconId != -1 )
        {
          EventMissionEntity = *v24;
          if ( *v24 )
          {
            v52 = MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0LL);
            EventMissionItemListViewManager__recieveReward(this, v52, v53);
            return;
          }
          goto LABEL_84;
        }
        EventMissionEntity = *v24;
        if ( !*v24 )
          goto LABEL_84;
        EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                        EventMissionEntity,
                                                        0LL);
        if ( !EventMissionEntity )
          goto LABEL_84;
        OriginalGiftData = GiftMaster__GetOriginalGiftData(v49, HIDWORD(EventMissionEntity->fields.sortValue2B), 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(OriginalGiftData, 0LL);
        if ( IconGiftEntity )
        {
          v56 = IconGiftEntity;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                                   (EventMissionItemListViewManager_o *)Instance,
                                   v56,
                                   v51,
                                   v58);
          v62 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v60, v61);
          System_Action___ctor(
            v62,
            (Il2CppObject *)v17,
            Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__,
            0LL);
          if ( !Instance )
            goto LABEL_84;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            ReplaceDialogMessage,
            v62,
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
        v42 = Method_EventMissionItemListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v42 = (_QWORD *)sub_1B640E0(Method_EventMissionItemListViewManager_OnClickListView__);
        v43 = (System_Reflection_MethodBase_o *)sub_1B640AC(v42, v42[4]);
        OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0LL);
      }
    }
    else
    {
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, v28, 1, 0LL);
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
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  EventMissionItemListViewManager___c_c *v16; // x8
  System_Object_array *v17; // x21
  System_Func_object__bool__o *_9__78_0; // x22
  Il2CppObject *v19; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct EventMissionEntity_o *v23; // x8

  if ( (byte_4A001EC & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_GiftEntity___, closeCallback);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&System_Func_GiftEntity__bool__TypeInfo, v8);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__, v9);
    sub_1B640C8(&EventMissionItemListViewManager___c_TypeInfo, v10);
    byte_4A001EC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Master_object )
    goto LABEL_19;
  GiftListById = GiftMaster__GetGiftListById(Master_object, missionToRecieve->fields.giftId, 0LL);
  v16 = EventMissionItemListViewManager___c_TypeInfo;
  v17 = (System_Object_array *)GiftListById;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v16 = EventMissionItemListViewManager___c_TypeInfo;
  }
  _9__78_0 = (System_Func_object__bool__o *)v16->static_fields->__9__78_0;
  if ( !_9__78_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__78_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GiftEntity__bool__TypeInfo, v14, v15);
    System_Func_object__bool____ctor(
      _9__78_0,
      v19,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__,
      0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__78_0 = (struct System_Func_GiftEntity__bool__o *)_9__78_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__78_0, (int32_t)_9__78_0, v21, v22);
  }
  if ( BasicHelper__Any_object__48384284(
         v17,
         (System_Func_T__bool__o *)_9__78_0,
         (const MethodInfo_2E2491C *)Method_BasicHelper_Any_GiftEntity___) )
  {
    Master_object = (GiftMaster_o *)this->fields.commandAssistLvUpDialog;
    if ( Master_object )
    {
      Master_object = (GiftMaster_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Master_object,
                                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
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
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1B64324(Master_object);
  }
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall EventMissionItemListViewManager__OpenQpMaxAlertDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x23
  System_String_o *dialogTitle; // x24
  System_String_o *dialogMessage; // x25
  System_String_o *dialogGetable; // x26
  System_String_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x27
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *onTransition; // x28
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x29
  __int64 v30; // x0

  if ( (byte_4A001EF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_EventMissionItemListViewManager_Decide__, v6);
    sub_1B640C8(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__, v7);
    sub_1B640C8(&Method_EventMissionItemListViewManager_TransitionToCombineScene__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_11604/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v10);
    sub_1B640C8(&StringLiteral_11603/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v11);
    sub_1B640C8(&StringLiteral_11610/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v12);
    byte_4A001EF = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dialogCallBack, (int32_t)callback, (int32_t)method, v3);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11604/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11610/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11603/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v20 = v15;
  v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0LL);
  onTransition = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0LL);
  v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0LL);
  if ( !qpMaxAlertDialog )
    sub_1B64324(v30);
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    v13,
    v14,
    v20,
    v23,
    onTransition,
    v29,
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
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A001ED & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&SceneList_TypeInfo, v3);
    byte_4A001ED = 1;
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
      sub_1B64324(gameObject);
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
  System_Collections_Generic_List_object__o *v10; // x20
  _BOOL8 v11; // x0
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v14; // w21
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A001E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v8);
    byte_4A001E7 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v10 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v15;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
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
    sub_1B64324(v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v10 )
    goto LABEL_17;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    v14 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v10,
                                                                  v14,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v14 >= v10->fields._size )
        return;
    }
LABEL_17:
    sub_1B64324(ObjectList);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__RefrashListDisp_45327732(
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
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v15; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t v18; // w22
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_object__o *v20; // x23
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A001E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&missionId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&EventMissionItemListViewItem_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v10);
    byte_4A001E8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current
      || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventMissionItemListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_1B64324(v12);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v22.fields._current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(this, v15);
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  v17 = itemList;
  if ( size > 0 )
  {
    v18 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v17,
                                                                v18,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !itemList )
        break;
      v20 = itemList;
      itemList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewObject__GetItem(
                                                                (EventMissionItemListViewObject_o *)itemList,
                                                                v19);
      if ( !itemList )
        break;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0LL) == missionId )
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))v20->klass->vtable._9_unknown.method)(
          v20,
          this->fields.isInput,
          v20->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v18 >= v17->fields._size )
        return;
    }
LABEL_21:
    sub_1B64324(itemList);
  }
}


void __fastcall EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_4A001DA & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_4A001DA = 1;
  }
  if ( !byte_4A002A5 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A002A5 = 1;
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
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  struct EventMissionItemListViewItem_o *v14; // x21
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A001E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v6);
    sub_1B640C8(&StringLiteral_18770/*"ef_mission_extric01"*/, v7);
    sub_1B640C8(&StringLiteral_21421/*"modifyOpenItem"*/, v8);
    byte_4A001E4 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1B64324(0LL);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        ObjectList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v22 = v21;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
        if ( !v10 )
          break;
        current = v22.fields._current;
        if ( !v22.fields._current )
          sub_1B64324(v10);
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v22.fields._current,
                                          v11);
        v14 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_1B64324(0LL);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_49F934E )
          {
            sub_1B640C8(&EventRewardSaveData_TypeInfo, v15);
            byte_49F934E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v14;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openTargetItem, (int32_t)v14, v16, v17);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v14, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_18770/*"ef_mission_extric01"*/, transform, v20);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21421/*"modifyOpenItem"*/,
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A001CF & 1) == 0 )
  {
    sub_1B640C8(&EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo, *(_QWORD *)&index);
    byte_4A001CF = 1;
  }
  v7 = sub_1B64314(EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo, *(_QWORD *)&index, onFinished);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)onFinished, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


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
    sub_1B64324(scrollView);
  }
  UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager__TransitionToCombineScene(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4A001F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4A001F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
  EventMissionItemListViewManager__dialogCallback(this, 0, v4);
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

  if ( (byte_4A001F2 & 1) == 0 )
  {
    sub_1B640C8(&System_Math_TypeInfo, *(_QWORD *)&x);
    byte_4A001F2 = 1;
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
  __int64 v2; // x2
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
  System_Collections_Generic_List_object__o *v26; // x20
  void *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  System_Collections_Generic_List_object__o *EntityListFromIdProgressTypeAndActionType; // x0
  __int64 *v30; // x24
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v34; // x21
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_List_Enumerator_object__o *v42; // x0
  struct EventMissionEntity_o *v43; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  Il2CppObject *v46; // x22
  EventMissionActionInfo_o *v47; // x21
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  System_Comparison_T__o *v57; // x21
  Il2CppObject *v58; // x22
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  const MethodInfo *targetMissionId; // x1
  int v63; // w8
  __int64 v64; // x1
  __int64 v65; // x8
  int32_t v66; // w0
  const MethodInfo *v67; // x2
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4A001F3 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventMissionActionInfo__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v11);
    sub_1B640C8(&EventMissionActionInfo_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v20);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__, v23);
    sub_1B640C8(&EventMissionItemListViewManager___c_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_16577/*"actionAfterCallback"*/, v25);
    byte_4A001F3 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  memset(&v69, 0, sizeof(v69));
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v68,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v70 = v68;
    v30 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v70,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v70.fields._current;
      v34 = (EventMissionActionInfo_o *)sub_1B64314(EventMissionActionInfo_TypeInfo, v31, v32);
      EventMissionActionInfo___ctor_41995308(v34, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v26 )
        sub_1B64324(v35);
      items = v26->fields._items;
      v39 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v26->fields._version;
      if ( !items )
        sub_1B64324(v35);
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)v34,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v26->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v34, v36, v37);
      }
    }
    v42 = &v70;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v43 = this->fields.missionToRecieve;
    if ( !v43 )
      goto LABEL_47;
    if ( !Instance )
      goto LABEL_47;
    Instance = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
                 (EventMissionActionMaster_o *)Instance,
                 v43->fields.id,
                 5,
                 3,
                 0LL);
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v68,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v69 = v68;
    v30 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v69,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v46 = v69.fields._current;
      v47 = (EventMissionActionInfo_o *)sub_1B64314(EventMissionActionInfo_TypeInfo, v44, v45);
      EventMissionActionInfo___ctor(v47, (EventMissionActionEntity_o *)v46, 0LL);
      if ( !v26 )
        sub_1B64324(v48);
      v51 = v26->fields._items;
      v52 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v26->fields._version;
      if ( !v51 )
        sub_1B64324(v48);
      v53 = v26->fields._size;
      if ( (unsigned int)v53 >= v51->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)v47,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &v51->obj.klass + v53;
        v26->fields._size = v53 + 1;
        v54[4] = (Il2CppClass *)v47;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v47, v49, v50);
      }
    }
    v42 = &v69;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(v42, (const MethodInfo_322A0AC *)*v30);
  Instance = EventMissionItemListViewManager___c_TypeInfo;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    Instance = EventMissionItemListViewManager___c_TypeInfo;
  }
  v57 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v57 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionItemListViewManager___c_TypeInfo;
    }
    v58 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v57 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventMissionActionInfo__TypeInfo, v55, v56);
    System_Comparison_object____ctor(
      v57,
      v58,
      Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__,
      0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__66_1 = (struct System_Comparison_EventMissionActionInfo__o *)v57;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__66_1, (int32_t)v57, v60, v61);
  }
  if ( !v26 )
    goto LABEL_47;
  System_Collections_Generic_List_object___Sort_55243320(
    v26,
    v57,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  v63 = v26->fields._size;
  if ( v63 <= 0 )
    goto LABEL_42;
  Instance = System_Collections_Generic_List_object___get_Item(
               v26,
               v63 - 1,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
  if ( !Instance || (v65 = *((_QWORD *)Instance + 4)) == 0 )
LABEL_47:
    sub_1B64324(Instance);
  if ( !*(_DWORD *)(v65 + 24) )
    sub_1B6432C(Instance, v64);
  v66 = System_Int32__Parse(*(System_String_o **)(v65 + 32), 0LL);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v66 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_45327732(this, (int32_t)targetMissionId, v67);
    goto LABEL_44;
  }
LABEL_42:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_44:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16577/*"actionAfterCallback"*/,
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
    sub_1B6406C(p_actionCallback, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))actionCallback->fields.m_target)(
      actionCallback->fields.original_method_info,
      *(_QWORD *)&actionCallback->fields.extra_arg);
  }
}


System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__afterReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A001DE & 1) == 0 )
  {
    sub_1B640C8(&EventMissionItemListViewManager__afterReward_d__59_TypeInfo, method);
    byte_4A001DE = 1;
  }
  v4 = sub_1B64314(EventMissionItemListViewManager__afterReward_d__59_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  int64_t Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v17; // x8
  int64_t v18; // x20
  int64_t v19; // x21
  Il2CppObject *MasterData_object; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // w3
  int32_t v24; // w21
  BalanceConfig_c *v25; // x0
  int32_t PresentBoxMax; // w8
  int v27; // w20
  EventMissionItemListViewManager___c_c *v28; // x0
  System_Action_o *_9__51_0; // x20
  Il2CppObject *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  struct EventMissionItemListViewManager___c_StaticFields *v33; // x0
  ServantStatusBattleListViewItem_o *p__9__51_0; // x0
  __int64 *v35; // x8
  EventMissionItemListViewManager___c_c *v36; // x0
  Il2CppObject *v37; // x21
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4A001D6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BalanceConfig_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__, v10);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__, v11);
    sub_1B640C8(&EventMissionItemListViewManager___c_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_12081/*"SHOW_MSG"*/, v13);
    sub_1B640C8(&StringLiteral_11064/*"REWARD_ACCEPTABLE"*/, v14);
    byte_4A001D6 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_44;
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v17 = this->fields.missionToRecieve;
  if ( !v17 )
    goto LABEL_44;
  if ( v17->fields.rewardType == 1 )
  {
    v18 = Instance;
    if ( !Instance )
      goto LABEL_44;
    if ( Gift__IsServant_37376332(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_44;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            *(_DWORD *)(v18 + 24),
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_44;
      v19 = Instance;
      if ( SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL)
        || SvtType__IsStatusUp(*(_DWORD *)(v19 + 84), 0LL) )
      {
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_44;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
        v24 = *(_DWORD *)(Instance + 24);
        v25 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v25 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v25->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v24 )
        {
          v36 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v36 = EventMissionItemListViewManager___c_TypeInfo;
          }
          _9__51_0 = v36->static_fields->__9__51_0;
          if ( !_9__51_0 )
          {
            if ( !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v36 = EventMissionItemListViewManager___c_TypeInfo;
            }
            v37 = (Il2CppObject *)v36->static_fields->__9;
            _9__51_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
            System_Action___ctor(
              _9__51_0,
              v37,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__,
              0LL);
            static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__51_0 = _9__51_0;
            p__9__51_0 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0;
            goto LABEL_41;
          }
LABEL_42:
          this->fields.ShowMSG = _9__51_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ShowMSG, (int32_t)_9__51_0, v22, v23);
          Instance = (int64_t)this->fields.targetFSM;
          if ( Instance )
          {
            v35 = &StringLiteral_12081/*"SHOW_MSG"*/;
            goto LABEL_34;
          }
LABEL_44:
          sub_1B64324(Instance);
        }
        v27 = *(_DWORD *)(v18 + 28);
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v27 + v24 > PresentBoxMax )
        {
          v28 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v28 = EventMissionItemListViewManager___c_TypeInfo;
          }
          _9__51_0 = v28->static_fields->__9__51_1;
          if ( !_9__51_0 )
          {
            if ( !v28->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v28);
              v28 = EventMissionItemListViewManager___c_TypeInfo;
            }
            v30 = (Il2CppObject *)v28->static_fields->__9;
            _9__51_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
            System_Action___ctor(
              _9__51_0,
              v30,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__,
              0LL);
            v33 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v33->__9__51_1 = _9__51_0;
            p__9__51_0 = (ServantStatusBattleListViewItem_o *)&v33->__9__51_1;
LABEL_41:
            sub_1B6406C(p__9__51_0, (int32_t)_9__51_0, v31, v32);
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
  v35 = &StringLiteral_11064/*"REWARD_ACCEPTABLE"*/;
LABEL_34:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v35, 0LL);
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
    sub_1B6406C(p_dialogCallBack, 0, (int32_t)method, v3);
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
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v9; // x1
  int32_t filterStatus; // w8
  struct EventMissionEntity_o *v11; // x8

  if ( (byte_4A001E1 & 1) == 0 )
  {
    sub_1B640C8(&EventMissionItemListViewManager_TypeInfo, data);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v6);
    byte_4A001E1 = 1;
  }
  if ( data )
  {
    EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_1B6406C(
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v11 = this->fields.missionToRecieve;
    if ( !v11 || !Instance )
LABEL_13:
      sub_1B64324(Instance);
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
  Il2CppObject *Object_object__48347676; // x19
  UnityEngine_GameObject_o *v10; // x19
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x20
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x20

  if ( (byte_4A001E2 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, parentTr);
    sub_1B640C8(&EventMissionItemListViewManager_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A001E2 = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48347676,
                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F7111 )
  {
    effectAssetData = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_49F7111 = 1;
  }
  if ( !v12 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v14 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F7116 )
  {
    effectAssetData = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
    byte_49F7116 = 1;
  }
  if ( !v14 )
LABEL_15:
    sub_1B64324(effectAssetData);
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v10;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ClippingObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A001CB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_4A001CB = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                 (EventMissionItemListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v12;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A001CA & 1) == 0 )
  {
    sub_1B640C8(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___, method);
    byte_4A001CA = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_2EB7894 *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void __fastcall EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetLoader_LoadEndDataHandler_o *v7; // x20

  if ( (byte_4A001E0 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_EventMissionItemListViewManager_endloadEffect__, v4);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_5817/*"Effect/EventMission"*/, v6);
    byte_4A001E0 = 1;
  }
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5817/*"Effect/EventMission"*/, v7, 1, 0LL);
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
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  EventMissionItemListViewManager_o *v16; // x20
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  struct GetSvts_array *items; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Collections_Generic_List_ListViewDropObject__o *v21; // x8
  struct GetCommandCodes_array *v22; // x1
  const MethodInfo *v23; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20

  v4 = this;
  if ( (byte_4A001D9 & 1) == 0 )
  {
    sub_1B640C8(&Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___, result);
    sub_1B640C8(&JsonManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v6);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v7);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v8);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v9);
    this = (EventMissionItemListViewManager_o *)sub_1B640C8(&StringLiteral_16000/*"]"*/, v10);
    byte_4A001D9 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_61383712(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_61386656(
                            (System_String_o *)StringLiteral_15744/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16000/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (EventMissionItemListViewManager_o *)JsonManager__DeserializeArray_object_(
                                                  v12,
                                                  (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    if ( this )
    {
      v16 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_22;
      dropObjectList = this->fields.dropObjectList;
      if ( !dropObjectList )
        goto LABEL_21;
      items = (struct GetSvts_array *)dropObjectList->fields._items;
      v4->fields.getSvtList = items;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.getSvtList, (int32_t)items, v14, v15);
      if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
LABEL_22:
        sub_1B6432C(this, v13);
      v21 = v16->fields.dropObjectList;
      if ( v21 )
      {
        v22 = *(struct GetCommandCodes_array **)&v21->fields._size;
        v4->fields.getCommandCodeList = v22;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.getCommandCodeList, (int32_t)v22, v19, v20);
        missionToRecieve = v4->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_49F934E )
          {
            sub_1B640C8(&EventRewardSaveData_TypeInfo, v23);
            byte_49F934E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          EventMissionItemListViewManager__SaveTerminalTransitionInfo(v4, v23);
          this = (EventMissionItemListViewManager_o *)v4->fields.touchBlockObj;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
            if ( this )
            {
              v11 = &StringLiteral_11006/*"REQUEST_OK"*/;
              goto LABEL_20;
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B64324(this);
  }
  this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
  if ( !this )
    goto LABEL_21;
  v11 = &StringLiteral_11004/*"REQUEST_NG"*/;
LABEL_20:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v11, 0LL);
}


void __fastcall EventMissionItemListViewManager__modifyOpenItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v13; // x0
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  int32_t MissionId; // w21
  MissionListViewItem_o *openTargetItem; // x0
  UnityEngine_Object_o *monitor; // x21
  EventMissionItemListViewObject_o *v19; // x0
  __int64 v20; // x9
  UnityEngine_Object_o *v21; // x21
  void *v22; // x0
  System_Action_o *v23; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A001E5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&EventMissionItemListViewItem_TypeInfo, v7);
    sub_1B640C8(&Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__, v8);
    sub_1B640C8(&EventMissionItemListViewObject_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_4A001E5 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v25 = v24;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v13 )
        break;
      current = v25.fields._current;
      if ( !v25.fields._current
        || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v25.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventMissionItemListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1B64324(v13);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v25.fields._current, 0LL);
      openTargetItem = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !openTargetItem )
        sub_1B64324(0LL);
      if ( MissionId == MissionListViewItem__get_MissionId(openTargetItem, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v19 = (EventMissionItemListViewObject_o *)current[6].monitor;
          if ( !v19 )
            goto LABEL_30;
          v20 = LOBYTE(EventMissionItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)v20
            || (EventMissionItemListViewObject_c *)v19->klass->_2.typeHierarchy[v20 - 1] != EventMissionItemListViewObject_TypeInfo )
          {
            sub_1B645E4(v19);
LABEL_30:
            sub_1B64324(v19);
          }
          EventMissionItemListViewObject__ModifyBoardImage(
            v19,
            (const MethodInfo *)EventMissionItemListViewObject_TypeInfo);
        }
      }
      v21 = (UnityEngine_Object_o *)current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
      {
        v22 = current[6].monitor;
        if ( !v22 )
          sub_1B64324(0LL);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v22 + 392LL))(
          v22,
          current,
          *(_QWORD *)(*(_QWORD *)v22 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v23, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct EventMissionEntity_o **v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_int__o *v18; // x20
  const MethodInfo *v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  struct EventMissionEntity_o *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A001D5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, missionEntity);
    sub_1B640C8(&Method_EventMissionItemListViewManager_recieveReward__, v5);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__, v6);
    sub_1B640C8(&EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_8640/*"MISSION_REWARD"*/, v8);
    byte_4A001D5 = 1;
  }
  v9 = sub_1B64314(EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo, missionEntity, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = missionEntity;
  v13 = (struct EventMissionEntity_o **)(v9 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)missionEntity, v14, v15);
  if ( this->fields.isQpMaxAlert )
  {
    v18 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v16, v17);
    System_Action_int____ctor(
      v18,
      (Il2CppObject *)v9,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__,
      0LL);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v18, v19);
    return;
  }
  v20 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1B640E0(Method_EventMissionItemListViewManager_recieveReward__);
  v21 = (System_Reflection_MethodBase_o *)sub_1B640AC(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 8, 0LL);
  v22 = *v13;
  this->fields.missionToRecieve = *v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.missionToRecieve, (int32_t)v22, v23, v24);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_1B64324(targetFSM);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8640/*"MISSION_REWARD"*/, 0LL);
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
  __int64 v9; // x2
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4A001D8 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventMissionItemListViewManager_missionRewardCallback__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    byte_4A001D8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v10,
               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
LABEL_9:
    sub_1B64324(Instance);
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
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4A001DF & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4A001DF = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_1B64324(Instance);
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
  UISprite_o *v6; // x0

  if ( (byte_4A001EB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, targetFile);
    byte_4A001EB = 1;
  }
  filterBtnTxt = (UnityEngine_Object_o *)this->fields.filterBtnTxt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(filterBtnTxt, 0LL, 0LL) )
  {
    v6 = this->fields.filterBtnTxt;
    if ( !v6 || (UISprite__set_spriteName(v6, targetFile, 0LL), (v6 = this->fields.filterBtnTxt) == 0LL) )
      sub_1B64324(v6);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
      v6,
      v6->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventMissionItemListViewManager__setList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v10; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2
  ListViewSort_o *operationSortInfo; // x0
  bool v16; // w2
  bool v17; // w2
  bool v18; // w2
  bool v19; // w2
  __int64 v20; // x1
  int32_t filterStatus; // w19

  if ( (byte_4A001EA & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17499/*"btn_txt_completed"*/, v4);
    sub_1B640C8(&StringLiteral_17532/*"btn_txt_receipt"*/, v5);
    sub_1B640C8(&StringLiteral_17531/*"btn_txt_progress"*/, v6);
    sub_1B640C8(&StringLiteral_17515/*"btn_txt_notopen"*/, v7);
    sub_1B640C8(&StringLiteral_17481/*"btn_txt_all"*/, v8);
    byte_4A001EA = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v10 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, method, v2);
  ListViewSort___ctor_40426860(v10, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v10, v12, v13);
  switch ( this->fields.filterStatus )
  {
    case 0:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17481/*"btn_txt_all"*/, v14);
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
      v16 = 1;
      goto LABEL_31;
    case 1:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17532/*"btn_txt_receipt"*/, v14);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v17 = 0;
      goto LABEL_16;
    case 2:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17531/*"btn_txt_progress"*/, v14);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v17 = 1;
LABEL_16:
      ListViewSort__SetFilter(operationSortInfo, 14, v17, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v18 = 0;
LABEL_22:
      ListViewSort__SetFilter(operationSortInfo, 15, v18, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v19 = 0;
LABEL_29:
      ListViewSort__SetFilter(operationSortInfo, 16, v19, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v16 = 0;
LABEL_31:
      ListViewSort__SetFilter(operationSortInfo, 17, v16, 0LL);
LABEL_32:
      operationSortInfo = this->fields.baseSortInfo;
      if ( !operationSortInfo )
LABEL_36:
        sub_1B64324(operationSortInfo);
      ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_49F934D )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, v20);
        byte_49F934D = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = filterStatus;
      return;
    case 3:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17515/*"btn_txt_notopen"*/, v14);
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
      v18 = 1;
      goto LABEL_22;
    case 4:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17499/*"btn_txt_completed"*/, v14);
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
      v19 = 1;
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
  if ( (byte_4A001D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, isRaid);
    sub_1B640C8(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    this = (EventMissionItemListViewManager_o *)sub_1B640C8(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v8);
    byte_4A001D1 = 1;
  }
  if ( !byte_4A002A4 )
  {
    this = (EventMissionItemListViewManager_o *)sub_1B640C8(&EventRewardSaveData_TypeInfo, isRaid);
    byte_4A002A4 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  size = itemList->fields._size;
  if ( byte_4A002A5 )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, isRaid);
    byte_4A002A5 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_28;
      this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B64324(this);
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
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x4
  System_Action_o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3

  v10 = this;
  if ( (byte_4A001CD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, currentMissionActionInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v11);
    sub_1B640C8(&EventMissionItemListViewItem_TypeInfo, v12);
    sub_1B640C8(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__, v13);
    sub_1B640C8(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v16);
    this = (EventMissionItemListViewManager_o *)sub_1B640C8(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v17);
    byte_4A001CD = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_1B6406C(
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
        v18 = 1056964608;
      else
        v18 = 1069547520;
      LODWORD(v10->fields.endEffectTime) = v18;
    }
  }
  this = (EventMissionItemListViewManager_o *)v10->fields.itemList;
  if ( !this )
LABEL_30:
    sub_1B64324(this);
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
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this )
    goto LABEL_30;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               (EventRewardSceneMaster_o *)this,
                               v10->fields.currentEventId,
                               4,
                               0LL);
  if ( EntityFromIdAndEventType && *(_QWORD *)&EntityFromIdAndEventType->max_length )
  {
    v26 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v10,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__,
      0LL);
    EventMissionItemListViewManager__MoveEaseScroll(v10, v21, v26, eventMissionActionInfo, v27);
  }
  else
  {
    v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v10,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__,
      0LL);
    v10->fields.callbackAfterScroll = v28;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.callbackAfterScroll, (int32_t)v28, v29, v30);
    ListViewManager__MoveTopItem((ListViewManager_o *)v10, v21, 1, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__unAcceptableDlg(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4A001D7 & 1) == 0 )
  {
    this = (EventMissionItemListViewManager_o *)sub_1B640C8(&StringLiteral_5453/*"END_NOTICE"*/, method);
    byte_4A001D7 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (EventMissionItemListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1B64324(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5453/*"END_NOTICE"*/, 0LL);
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
    sub_1B64324(this);
  UIProgressBar__set_value((UIProgressBar_o *)this, start_5__2 + v24, 0LL);
  v4->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B6406C(p__2__current, 0, v26, v27);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventMissionItemListViewManager__SetPreviousFilter_d__41_o *v4; // x20
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v17; // x0
  UnityEngine_Coroutine_o *started; // x0
  ServantStatusBattleListViewItem_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w0
  __int64 v23; // x1
  __int64 v24; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  int size; // w22
  System_Collections_Generic_List_int__o *v27; // x20
  int32_t i; // w21
  __int64 methodPtr_low; // x10
  __int64 v30; // x2
  __int64 _4__this_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  System_Func_int__int__int__o *v35; // x21
  int32_t v36; // w0
  int32_t v37; // w21
  int32_t v38; // w1
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v41; // x19
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v43; // w2
  int32_t v44; // w3

  v4 = this;
  if ( (byte_4A00200 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Aggregate_int___, method);
    sub_1B640C8(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_1B640C8(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__, v6);
    sub_1B640C8(&System_Func_int__int__int__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__IndexOf__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)sub_1B640C8(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v14);
    byte_4A00200 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        openItemTime = _4__this->fields.openItemTime;
        endEffectTime = _4__this->fields.endEffectTime;
        v41 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
        UnityEngine_WaitForSeconds___ctor(v41, openItemTime + endEffectTime, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v41;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)v41, v43, v44);
        *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
        LOBYTE(v22) = 1;
        return v22;
      }
      goto LABEL_32;
    }
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        v17 = EventMissionItemListViewManager__MoveEaseScroll_IE(_4__this, v4->fields.index, v4->fields.onFinished, v3);
        started = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, v17, 0LL);
        v4->fields.__2__current = (Il2CppObject *)started;
        v19 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v19, (int32_t)started, v20, v21);
        LOBYTE(v22) = 1;
        *(_DWORD *)&v19[-1].fields.isMine = 1;
        return v22;
      }
LABEL_32:
      sub_1B64324(this);
    }
LABEL_30:
    LOBYTE(v22) = 0;
    return v22;
  }
  v4->fields.__1__state = -1;
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
  v27 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v23, v24);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0; i != size; ++i )
  {
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)_4__this->fields.itemSortList;
    if ( !this )
      goto LABEL_32;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           i,
                                                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    if ( !v27 )
      goto LABEL_32;
    _4__this_low = LODWORD(this->fields.__4__this);
    items = v27->fields._items;
    v33 = Method_System_Collections_Generic_List_int__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_32;
    v34 = v27->fields._size;
    if ( (unsigned int)v34 >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v27,
        _4__this_low,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v27->fields._size = v34 + 1;
      items->m_Items[v34 + 1] = _4__this_low;
    }
  }
  v35 = (System_Func_int__int__int__o *)sub_1B64314(System_Func_int__int__int__TypeInfo, _4__this_low, v30);
  System_Func_int__int__int____ctor(
    v35,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__,
    0LL);
  v36 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (System_Func_TSource__TSource__TSource__o *)v35,
          (const MethodInfo_2E42D38 *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v37 = v36;
  v22 = System_Collections_Generic_List_int___IndexOf(
          v27,
          v36,
          (const MethodInfo_3490BF8 *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v22 )
  {
    v38 = v37 - 1;
    if ( v22 == size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v38, 0, 0, 0.0, 0LL);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v38, 0, 0LL);
    goto LABEL_30;
  }
  return v22;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_EventMissionItemListViewManager__SetPreviousFilter_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A001F4 & 1) == 0 )
  {
    sub_1B640C8(&EventMissionItemListViewManager___c_TypeInfo, v1);
    byte_4A001F4 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventMissionItemListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventMissionItemListViewManager___c_TypeInfo->static_fields->__9 = (struct EventMissionItemListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventMissionItemListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  EventMissionItemListViewManager___c_c *v12; // x8
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  System_Action_o *_9__51_2; // x22
  Il2CppObject *v16; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A001F5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__, v4);
    sub_1B640C8(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_8603/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_4A001F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8603/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v12 = EventMissionItemListViewManager___c_TypeInfo;
  v13 = v9;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v12 = EventMissionItemListViewManager___c_TypeInfo;
  }
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_2 = v12->static_fields->__9__51_2;
  if ( !_9__51_2 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v12->static_fields->__9;
    _9__51_2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(_9__51_2, v16, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__, 0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_2 = _9__51_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_2, (int32_t)_9__51_2, v18, v19);
  }
  if ( !Instance )
    sub_1B64324(v9);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v14, v13, _9__51_2, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  EventMissionItemListViewManager___c_c *v12; // x8
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  System_Action_o *_9__51_3; // x22
  Il2CppObject *v16; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A001F7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__, v4);
    sub_1B640C8(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_8604/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_4A001F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8604/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0LL);
  v12 = EventMissionItemListViewManager___c_TypeInfo;
  v13 = v9;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v12 = EventMissionItemListViewManager___c_TypeInfo;
  }
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_3 = v12->static_fields->__9__51_3;
  if ( !_9__51_3 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v12->static_fields->__9;
    _9__51_3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(_9__51_3, v16, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__, 0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_3 = _9__51_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_3, (int32_t)_9__51_3, v18, v19);
  }
  if ( !Instance )
    sub_1B64324(v9);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v14, v13, _9__51_3, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4A001F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A001F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4A001F8 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A001F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager___c___modifyOpenItem_b__66_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
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
    sub_1B64324(selectItem);
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct EventMissionItemListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct EventMissionItemListViewManager_o *v13; // x8

  if ( (byte_4A001F9 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__, *(_QWORD *)&result);
    sub_1B640C8(&StringLiteral_8640/*"MISSION_REWARD"*/, v5);
    byte_4A001F9 = 1;
  }
  if ( result == 1 )
  {
    v6 = Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (missionEntity = this->fields.missionEntity,
          _4__this->fields.missionToRecieve = missionEntity,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields.missionToRecieve,
            (int32_t)missionEntity,
            v9,
            v10),
          (v13 = this->fields.__4__this) == 0LL)
      || (targetFSM = v13->fields.targetFSM) == 0LL )
    {
      sub_1B64324(targetFSM);
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8640/*"MISSION_REWARD"*/, 0LL);
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

  if ( (byte_4A001FC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A001FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
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
  __int64 v8; // x2
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventRewardRootComponent_o *eventRootComponent; // x20
  System_Action_o *_9__4; // x22
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A001FA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__, v5);
    byte_4A001FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    _9__4 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v12, v13);
  }
  if ( !eventRootComponent )
LABEL_10:
    sub_1B64324(Instance);
  EventRewardRootComponent__StartSwitchFigure(eventRootComponent, _9__4, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__4(
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
        (this = (EventMissionItemListViewManager___c__DisplayClass58_0_o *)_4__this->fields.touchBlockObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL), (v5 = v3->fields.__4__this) == 0LL) )
  {
    sub_1B64324(this);
  }
  v6 = EventMissionItemListViewManager__afterReward(v5, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v5, v6, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__6(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4A001FB & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A001FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
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
  __int64 v21; // x1
  __int64 v22; // x2
  System_Text_StringBuilder_o *v23; // x20
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v24; // x8
  System_String_o *v25; // x21
  const MethodInfo *v26; // x1
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v29; // x1
  System_String_o *v30; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v31; // x8
  System_String_o *v32; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v33; // x8
  System_String_o *v34; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v35; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v36; // x21
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v37; // x8
  struct EventMissionItemListViewManager_o *v38; // x8
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v39; // x8
  struct EventMissionItemListViewManager_o *v40; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v41; // x21
  Il2CppObject *NumberFormat; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v43; // x8
  struct EventMissionItemListViewManager_o *v44; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v45; // x21
  Il2CppObject *v46; // x0
  System_String_o *v47; // x21
  _QWORD *v48; // x22
  __int64 v49; // x8
  __int64 v50; // x0
  __int64 v51; // x0
  CommonUI_o *v52; // x21
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v53; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v56; // x24
  MissionRewardGetDialog_ClickDelegate_o *_9__3; // x23
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v58; // x20
  int32_t v59; // w2
  int32_t v60; // w3

  v2 = this;
  if ( (byte_4A001FD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_object___, method);
    sub_1B640C8(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v9);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__, v10);
    sub_1B640C8(&StringLiteral_8644/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v11);
    sub_1B640C8(&StringLiteral_8602/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v12);
    sub_1B640C8(&StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, v13);
    sub_1B640C8(&StringLiteral_8607/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/, v14);
    sub_1B640C8(&StringLiteral_50/*"\n \n"*/, v15);
    sub_1B640C8(&StringLiteral_51/*"\n \n "*/, v16);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1B640C8(&StringLiteral_8645/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v17);
    byte_4A001FD = 1;
  }
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_68;
  if ( giftList->fields._size < 1 )
  {
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
      CS___8__locals1 = v2->fields.CS___8__locals1;
      if ( CS___8__locals1 )
      {
        _4__this = (UnityEngine_MonoBehaviour_o *)CS___8__locals1->fields.__4__this;
        if ( _4__this )
        {
          v29 = EventMissionItemListViewManager__afterReward(CS___8__locals1->fields.__4__this, v26);
          UnityEngine_MonoBehaviour__StartCoroutine_69113008(_4__this, v29, 0LL);
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
  v23 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v21, v22);
  System_Text_StringBuilder___ctor(v23, 0LL);
  v24 = v2->fields.CS___8__locals1;
  if ( !v24 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v24->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_68;
  v25 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v25, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemDialogNum >= 2 )
    {
      if ( !v25 )
        goto LABEL_68;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__Substring_61394392(
                                                                          v25,
                                                                          0,
                                                                          v25->fields._stringLength - 2,
                                                                          0LL);
      if ( !v23 )
        goto LABEL_68;
      System_Text_StringBuilder__Append_60536548(v23, (System_String_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8602/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_60536548(
                                                                          v23,
                                                                          v30,
                                                                          0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/,
                                                                          0LL);
      if ( !v23 )
        goto LABEL_68;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                          v23,
                                                                          (System_String_o *)this,
                                                                          (Il2CppObject *)v25,
                                                                          0LL);
    }
    v31 = v2->fields.CS___8__locals1;
    if ( !v31 )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v31->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_68;
    v32 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v32, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_60536548(
                                                                          v23,
                                                                          (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                          0LL);
  }
  v33 = v2->fields.CS___8__locals1;
  if ( !v33 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v33->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_68;
  v34 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v34, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8607/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/,
                                                                        0LL);
    v35 = v2->fields.CS___8__locals1;
    if ( !v35 )
      goto LABEL_68;
    v36 = this;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v35->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                        this,
                                                                        this->klass[1]._1.image);
    if ( !v23 )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                        v23,
                                                                        (System_String_o *)v36,
                                                                        (Il2CppObject *)this,
                                                                        0LL);
  }
  v37 = v2->fields.CS___8__locals1;
  if ( !v37 )
    goto LABEL_68;
  v38 = v37->fields.__4__this;
  if ( !v38 )
    goto LABEL_68;
  if ( v38->fields.isQpMaxAlert )
  {
    if ( !v23 )
      goto LABEL_68;
    if ( v2->fields.isGetNoReward )
    {
      System_Text_StringBuilder__set_Length(v23, 0, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8644/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                          0LL);
      v39 = v2->fields.CS___8__locals1;
      if ( v39 )
      {
        v40 = v39->fields.__4__this;
        if ( v40 )
        {
          v41 = this;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v40->fields.overQpValue, 0LL);
          System_Text_StringBuilder__AppendFormat(v23, (System_String_o *)v41, NumberFormat, 0LL);
          goto LABEL_61;
        }
      }
LABEL_68:
      sub_1B64324(this);
    }
    System_Text_StringBuilder__Append_60536548(v23, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8645/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                        0LL);
    v43 = v2->fields.CS___8__locals1;
    if ( !v43 )
      goto LABEL_68;
    v44 = v43->fields.__4__this;
    if ( !v44 )
      goto LABEL_68;
    v45 = this;
    v46 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v44->fields.overQpValue, 0LL);
    v47 = System_String__Format((System_String_o *)v45, v46, 0LL);
    v48 = Method_System_Array_Empty_object___;
    v49 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v49 )
    {
      sub_1BB6000(Method_System_Array_Empty_object___);
      v49 = v48[7];
    }
    v50 = *(_QWORD *)(v49 + 16);
    if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
      v50 = sub_1BB5FA4(v50);
    if ( !*(_DWORD *)(v50 + 224) )
      j_il2cpp_runtime_class_init_0(v50);
    v51 = *(_QWORD *)(v48[7] + 16LL);
    if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
      v51 = sub_1BB5FA4(v51);
    System_Text_StringBuilder__AppendFormat_60543088(v23, v47, **(System_Object_array ***)(v51 + 184), 0LL);
  }
LABEL_61:
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v2->fields.giftList )
    goto LABEL_68;
  v52 = (CommonUI_o *)this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                      (System_Collections_Generic_List_object__o *)v2->fields.giftList,
                                                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v23 )
    goto LABEL_68;
  v53 = this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v23->klass->vtable._3_ToString.method)(
                                                                      v23,
                                                                      v23->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v56 = v2->fields.CS___8__locals1;
  if ( !v56 )
    goto LABEL_68;
  _9__3 = v56->fields.__9__3;
  v58 = this;
  if ( !_9__3 )
  {
    _9__3 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B64314(
                                                        MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                        v54,
                                                        v55);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__3,
      (Il2CppObject *)v56,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__,
      0LL);
    v56->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v56->fields.__9__3, (int32_t)_9__3, v59, v60);
  }
  if ( !v52 )
    goto LABEL_68;
  CommonUI__OpenMissionRewardGetDialog(
    v52,
    (GiftEntity_array *)v53,
    (System_String_o *)v58,
    _9__3,
    v2->fields.isGetNoReward,
    0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v3; // x19
  __int64 v4; // x1
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__5; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  v3 = this;
  if ( (byte_4A001FE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1B640C8(
                                                                        &Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__,
                                                                        v4);
    byte_4A001FE = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__5 = v3->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__,
      0LL);
    v3->fields.__9__5 = _9__5;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__5, (int32_t)_9__5, v8, v9);
  }
  if ( !_4__this )
LABEL_8:
    sub_1B64324(this);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__5, 0LL);
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
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct EventMissionItemListViewManager_o *_4__this; // x8
  Il2CppObject *v12; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v16; // x23
  System_Action_o *_9__6; // x22
  System_String_o *v18; // x19
  System_String_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A001FF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v5);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__, v6);
    sub_1B640C8(&StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_4A001FF = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v13, (Il2CppObject *)this->fields.sendName, 0LL);
  v16 = this->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_14;
  _9__6 = v16->fields.__9__6;
  v18 = (System_String_o *)Instance;
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v16,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__,
      0LL);
    v16->fields.__9__6 = _9__6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->fields.__9__6, (int32_t)_9__6, v20, v21);
  }
  if ( !v12 )
LABEL_14:
    sub_1B64324(Instance);
  CommonUI__OpenNotificationDialog((CommonUI_o *)v12, v19, v18, _9__6, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x20
  __int64 v13; // x21
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_bool__o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_WaitUntil_o *v24; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  bool result; // w0

  if ( (byte_4A00201 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&System_Func_bool__TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__, v6);
    sub_1B640C8(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__, v7);
    sub_1B640C8(&EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_5448/*"END_EFFECT"*/, v10);
    byte_4A00201 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL);
    if ( !_4__this )
      goto LABEL_13;
    Instance = (Il2CppObject *)_4__this->fields.targetFSM;
    if ( !Instance )
      goto LABEL_13;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5448/*"END_EFFECT"*/, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v13 = sub_1B64314(EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 16) = 0;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
      System_Action___ctor(
        v17,
        (Il2CppObject *)v13,
        Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__,
        0LL);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v17, v18);
        v21 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v19, v20);
        System_Func_bool____ctor(
          v21,
          (Il2CppObject *)v13,
          Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__,
          0LL);
        v24 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v22, v23);
        UnityEngine_WaitUntil___ctor(v24, v21, 0LL);
        this->fields.__2__current = (Il2CppObject *)v24;
        p__2__current = &this->fields.__2__current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v24, v26, v27);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_13:
    sub_1B64324(Instance);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_EventMissionItemListViewManager__afterReward_d__59_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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