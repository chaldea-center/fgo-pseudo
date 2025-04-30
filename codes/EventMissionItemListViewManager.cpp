void __fastcall EventMissionItemListViewManager___ctor(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A5276B & 1) == 0 )
  {
    sub_1B863B8(&MissionListViewManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A5276B = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dialogTitle, v6, v2, v3);
  v7 = (int)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dialogMessage, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dialogGetable, v10, v11, v12);
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
  __int64 v34; // x23
  DataManager_o *Instance; // x0
  GiftEntity_o *v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x20
  struct EventMissionEntity_o *v41; // x8
  const MethodInfo *v42; // x1
  System_Text_StringBuilder_o *v43; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Text_StringBuilder_o *v46; // x21
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x25
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x26
  const MethodInfo *v53; // x3
  ItemMaster_o *v54; // x23
  unsigned __int64 v55; // x21
  System_Collections_Generic_List_object__o *v56; // x25
  System_Collections_Generic_List_object__o *v57; // x24
  il2cpp_array_size_t v58; // w22
  Il2CppClass **v59; // x21
  Il2CppClass *v60; // x8
  GiftEntity_o **v61; // x21
  Il2CppClass *v62; // t1
  const MethodInfo *v63; // x3
  ServantEntity_o *v64; // x26
  bool IsCombineMaterial; // w27
  System_String_o *v66; // x0
  System_Text_StringBuilder_o *v67; // x27
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x26
  Il2CppObject *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  DataManager_o *v84; // x28
  Il2CppClass **v85; // x0
  char v86; // w29
  bool IsCountableWithPlus; // w0
  Il2CppObject **v88; // x8
  Il2CppObject *v89; // x27
  System_Text_StringBuilder_o *v90; // x26
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  System_String_o *v94; // x28
  int32_t *v95; // x1
  Il2CppObject *v96; // x0
  __int64 v97; // x8
  System_Text_StringBuilder_o *v98; // x27
  System_Collections_Generic_List_object__o *v99; // x22
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  System_Action_o *v102; // x22
  EventRewardSetEntity_o *SetRewardData; // x23
  int32_t v104; // w1
  Il2CppObject **v105; // x20
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  Il2CppObject *name; // x1
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *v112; // x19
  System_Action_o *v113; // x20
  Il2CppObject *v114; // x19
  System_String_o *v115; // x0
  System_String_o *v116; // x0
  Il2CppObject *v117; // x22
  System_String_o *v118; // x20
  System_Action_o *v119; // x21
  __int64 v120; // [xsp+38h] [xbp-88h]
  __int64 v121; // [xsp+40h] [xbp-80h]
  int v122; // [xsp+48h] [xbp-78h]
  int32_t v123; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t getQpValue; // [xsp+58h] [xbp-68h] BYREF
  int32_t num; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4A52756 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_GiftMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B863B8(&int_TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_GiftEntity__Add__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_GiftEntity___ctor___76035208, v12);
    sub_1B863B8(&System_Collections_Generic_List_GiftEntity__TypeInfo, v13);
    sub_1B863B8(&LocalizationManager_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v18);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v19);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v20);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__, v21);
    sub_1B863B8(&EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo, v22);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__, v23);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__, v24);
    sub_1B863B8(&EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo, v25);
    sub_1B863B8(&StringLiteral_8524/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v26);
    sub_1B863B8(&StringLiteral_8523/*"MISSION_ACTION_SUCCESS"*/, v27);
    sub_1B863B8(&StringLiteral_24945/*"{0}×{1:#,0}"*/, v28);
    sub_1B863B8(&StringLiteral_24996/*"×"*/, v29);
    sub_1B863B8(&StringLiteral_8519/*"MISSION_ACTION_ITEM_FORMAT"*/, v30);
    sub_1B863B8(&StringLiteral_1/*""*/, v31);
    sub_1B863B8(&StringLiteral_49/*"\n "*/, v32);
    sub_1B863B8(&StringLiteral_25300/*"＋"*/, v33);
    byte_4A52756 = 1;
  }
  v34 = sub_1B86604(EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_107;
  *(_QWORD *)(v34 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v34 + 16), (int32_t)this, v37, v38);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_107;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_107;
  if ( !Instance )
    goto LABEL_107;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v41 = this->fields.missionToRecieve;
  if ( !v41 )
    goto LABEL_107;
  if ( !Instance )
    goto LABEL_107;
  AutomatedAction__SetStatusMissionNotify((AutomatedAction_o *)Instance, v41->fields.id, 5, 0, 0LL);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v42);
  v43 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v43, 0LL);
  *(_QWORD *)(v34 + 32) = v43;
  sub_1B8635C((CGThumbnailListItem_o *)(v34 + 32), (int32_t)v43, v44, v45);
  v46 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v46, 0LL);
  *(_QWORD *)(v34 + 24) = v46;
  sub_1B8635C((CGThumbnailListItem_o *)(v34 + 24), (int32_t)v46, v47, v48);
  v49 = sub_1B86604(EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_107;
  *(_QWORD *)(v49 + 40) = v34;
  sub_1B8635C((CGThumbnailListItem_o *)(v49 + 40), v34, v50, v51);
  Instance = (DataManager_o *)this->fields.missionToRecieve;
  if ( !Instance )
    goto LABEL_107;
  if ( LODWORD(Instance->fields.lastFrameTime) == 1 )
  {
    *(_DWORD *)(v49 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_107;
    v52 = *(_QWORD *)&GiftListById->max_length;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_107;
    v121 = v49 + 40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
    v54 = (ItemMaster_o *)Instance;
    if ( (int)v52 >= 1 )
    {
      v55 = 0LL;
      while ( v55 < GiftListById->max_length )
      {
        Instance = (DataManager_o *)EventMissionItemListViewManager__IsDialogGift(
                                      this,
                                      GiftListById->m_Items[v55],
                                      v54,
                                      v53);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          ++*(_DWORD *)(v49 + 24);
        if ( (unsigned int)v52 == ++v55 )
          goto LABEL_20;
      }
LABEL_108:
      sub_1B8661C(Instance, v36);
    }
LABEL_20:
    v120 = v49;
    *(_BYTE *)(v49 + 28) = 1;
    v56 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v56,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v57 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v57,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)v52 >= 1 )
    {
      v58 = 0;
      v122 = v52;
      while ( v58 < GiftListById->max_length )
      {
        v59 = &GiftListById->obj.klass + (int)v58;
        v62 = v59[4];
        v61 = (GiftEntity_o **)(v59 + 4);
        v60 = v62;
        if ( !v62 )
          goto LABEL_107;
        Instance = (DataManager_o *)Gift__IsServant_38640088(HIDWORD(v60->_1.name), 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_107;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( v58 >= GiftListById->max_length )
            goto LABEL_108;
          if ( !*v61 )
            goto LABEL_107;
          if ( !Instance )
            goto LABEL_107;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        (*v61)->fields.objectId,
                                        (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_107;
          v64 = (ServantEntity_o *)Instance;
          IsCombineMaterial = SvtType__IsCombineMaterial(*((_DWORD *)&Instance->fields.lastFrameTime + 1), 0LL);
          Instance = (DataManager_o *)SvtType__IsStatusUp(v64->fields.type, 0LL);
          if ( IsCombineMaterial || ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !*(_QWORD *)v121 )
              goto LABEL_107;
            Instance = *(DataManager_o **)(*(_QWORD *)v121 + 32LL);
            if ( !Instance )
              goto LABEL_107;
            v66 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                       Instance,
                                       Instance->klass[1]._1.image);
            Instance = (DataManager_o *)System_String__IsNullOrEmpty(v66, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !*(_QWORD *)v121 )
                goto LABEL_107;
              Instance = *(DataManager_o **)(*(_QWORD *)v121 + 32LL);
              if ( !Instance )
                goto LABEL_107;
              Instance = (DataManager_o *)System_Text_StringBuilder__Append_61730360(
                                            (System_Text_StringBuilder_o *)Instance,
                                            (System_String_o *)StringLiteral_49/*"\n "*/,
                                            0LL);
            }
            if ( !*(_QWORD *)v121 )
              goto LABEL_107;
            v67 = *(System_Text_StringBuilder_o **)(*(_QWORD *)v121 + 32LL);
            Instance = (DataManager_o *)ServantEntity__getName(v64, 0, -1, 0, 0LL);
            if ( v58 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !*v61 )
              goto LABEL_107;
            v71 = (Il2CppObject *)Instance;
            num = (*v61)->fields.num;
            v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v68, v69, v70);
            Instance = (DataManager_o *)System_String__Format_61686468(
                                          (System_String_o *)StringLiteral_24945/*"{0}×{1:#,0}"*/,
                                          v71,
                                          v72,
                                          0LL);
            if ( !v67 )
              goto LABEL_107;
            Instance = (DataManager_o *)System_Text_StringBuilder__Append_61730360(
                                          v67,
                                          (System_String_o *)Instance,
                                          0LL);
            if ( v58 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !v57 )
              goto LABEL_107;
            v36 = *v61;
            items = v57->fields._items;
            v76 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v57->fields._version;
            if ( !items )
              goto LABEL_107;
            size = v57->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v57,
                (Il2CppObject *)v36,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
            }
            else
            {
              v78 = &items->obj.klass + size;
              v57->fields._size = size + 1;
              v78[4] = (Il2CppClass *)v36;
              sub_1B8635C((CGThumbnailListItem_o *)(v78 + 4), (int32_t)v36, v73, v74);
            }
          }
        }
        else
        {
          if ( v58 >= GiftListById->max_length )
            goto LABEL_108;
          Instance = (DataManager_o *)EventMissionItemListViewManager__IsDialogGift(this, *v61, v54, v63);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( v58 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !*v61 || !v54 )
              goto LABEL_107;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v54,
                                          (*v61)->fields.objectId,
                                          (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v58 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !v56 )
              goto LABEL_107;
            v36 = *v61;
            v81 = v56->fields._items;
            v82 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v56->fields._version;
            if ( !v81 )
              goto LABEL_107;
            v83 = v56->fields._size;
            v84 = Instance;
            if ( (unsigned int)v83 >= v81->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v56,
                (Il2CppObject *)v36,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
            }
            else
            {
              v85 = &v81->obj.klass + v83;
              v56->fields._size = v83 + 1;
              v85[4] = (Il2CppClass *)v36;
              sub_1B8635C((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v36, v79, v80);
            }
            if ( v58 >= GiftListById->max_length )
              goto LABEL_108;
            Instance = (DataManager_o *)*v61;
            if ( !*v61 )
              goto LABEL_107;
            Instance = (DataManager_o *)GiftEntity__isQp((GiftEntity_o *)Instance, 0LL);
            v86 = (char)Instance;
            if ( ((unsigned __int8)Instance & 1) == 0 || !this->fields.isQpAlreadyMax )
            {
              *(_BYTE *)(v120 + 28) = 0;
              if ( !v84 )
                goto LABEL_107;
              IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)v84->fields.lookup, 0LL);
              v88 = (Il2CppObject **)&StringLiteral_25300/*"＋"*/;
              if ( !IsCountableWithPlus )
                v88 = (Il2CppObject **)&StringLiteral_24996/*"×"*/;
              v89 = *v88;
              v90 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v90, 0LL);
              if ( !v90 )
                goto LABEL_107;
              System_Text_StringBuilder__Append_61730360(
                v90,
                (System_String_o *)v84->fields.m_CancellationTokenSource,
                0LL);
              if ( (v86 & 1) != 0 && this->fields.isQpMaxAlert && this->fields.getQpValue )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v94 = LocalizationManager__Get((System_String_o *)StringLiteral_8524/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                v95 = &getQpValue;
                getQpValue = this->fields.getQpValue;
              }
              else
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8524/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                if ( v58 >= GiftListById->max_length )
                  goto LABEL_108;
                if ( !*v61 )
                  goto LABEL_107;
                v94 = (System_String_o *)Instance;
                v95 = &v123;
                v123 = (*v61)->fields.num;
              }
              v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v95, v91, v92, v93);
              Instance = (DataManager_o *)System_Text_StringBuilder__AppendFormat_61736712(v90, v94, v89, v96, 0LL);
              v97 = *(_QWORD *)v121;
              if ( !*(_QWORD *)v121 )
                goto LABEL_107;
              v98 = *(System_Text_StringBuilder_o **)(v97 + 24);
              if ( *(int *)(v120 + 24) >= 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8519/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v98 )
                  goto LABEL_107;
                Instance = (DataManager_o *)System_Text_StringBuilder__AppendFormat(
                                              v98,
                                              (System_String_o *)Instance,
                                              (Il2CppObject *)v90,
                                              0LL);
                if ( !*(_QWORD *)v121 )
                  goto LABEL_107;
                Instance = *(DataManager_o **)(*(_QWORD *)v121 + 24LL);
                if ( !Instance )
                  goto LABEL_107;
                Instance = (DataManager_o *)System_Text_StringBuilder__Append_61730360(
                                              (System_Text_StringBuilder_o *)Instance,
                                              (System_String_o *)StringLiteral_49/*"\n "*/,
                                              0LL);
              }
              else
              {
                if ( !v98 )
                  goto LABEL_107;
                Instance = (DataManager_o *)System_Text_StringBuilder__Append_61730988(
                                              *(System_Text_StringBuilder_o **)(v97 + 24),
                                              v90,
                                              0LL);
              }
            }
          }
        }
        if ( v122 == ++v58 )
          goto LABEL_89;
      }
      goto LABEL_108;
    }
LABEL_89:
    v99 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_56607308(
      v99,
      (System_Collections_Generic_IEnumerable_T__o *)v56,
      (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_GiftEntity___ctor___76035208);
    *(_QWORD *)(v120 + 16) = v99;
    sub_1B8635C((CGThumbnailListItem_o *)(v120 + 16), (int32_t)v99, v100, v101);
    Instance = *(DataManager_o **)(v120 + 16);
    if ( !Instance )
      goto LABEL_107;
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)Instance,
      (System_Collections_Generic_IEnumerable_T__o *)v57,
      (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v102 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v102,
      (Il2CppObject *)v120,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__,
      0LL);
    if ( this->fields.isTreasureEffect )
    {
      Instance = (DataManager_o *)this->fields.eventRootComponent;
      if ( Instance )
      {
        EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)Instance, 0LL);
        MissionListViewManager__StartEventMissionClearItemAction(
          (MissionListViewManager_o *)this,
          GiftListById,
          0,
          v102,
          0LL);
        return;
      }
LABEL_107:
      sub_1B86614(Instance, v36);
    }
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v102, 0LL);
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Instance, 0LL);
    v104 = (int)StringLiteral_1/*""*/;
    *(_QWORD *)(v49 + 32) = StringLiteral_1/*""*/;
    v105 = (Il2CppObject **)(v49 + 32);
    sub_1B8635C((CGThumbnailListItem_o *)(v49 + 32), v104, v106, v107);
    if ( !SetRewardData )
      goto LABEL_107;
    name = (Il2CppObject *)SetRewardData->fields.name;
    *v105 = name;
    sub_1B8635C((CGThumbnailListItem_o *)(v49 + 32), (int32_t)name, v108, v109);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && *(_QWORD *)&getSvtList->max_length )
    {
      Instance = (DataManager_o *)this->fields.touchBlockObj;
      if ( !Instance )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v112 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v113 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v113,
        (Il2CppObject *)v49,
        Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__,
        0LL);
      if ( !v112 )
        goto LABEL_107;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)v112, v113, 0LL);
    }
    else
    {
      v114 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v115 = LocalizationManager__Get((System_String_o *)StringLiteral_8523/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v116 = System_String__Format(v115, *v105, 0LL);
      v117 = *(Il2CppObject **)(v49 + 40);
      v118 = v116;
      v119 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v119,
        v117,
        Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__,
        0LL);
      if ( !v114 )
        goto LABEL_107;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v114,
        (System_String_o *)StringLiteral_1/*""*/,
        v118,
        v119,
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
    Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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

  EventMissionItemListViewManager__CreateList_47077976(this, missionList, eventId, isDailyMission, 1, v5);
}


void __fastcall EventMissionItemListViewManager__CreateList_47077976(
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
  __int64 v21; // x1
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Entity; // x23
  bool v24; // w9
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  unsigned __int64 v28; // x26
  bool v29; // w22
  EventMissionEntity_o *v30; // x25
  System_Collections_Generic_List_object__o *itemList; // x23
  EventMissionItemListViewItem_o *v32; // x24
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  struct ListViewSort_o *sort; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x21
  UILabel_o *v42; // x21

  v10 = isTouchListEnabled;
  if ( (byte_4A52745 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, missionList);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_1B863B8(&EventMissionItemListViewItem_TypeInfo, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1B863B8(&LocalizationManager_TypeInfo, v14);
    sub_1B863B8(&NetworkManager_TypeInfo, v15);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B863B8(&UserMissionNewManager_TypeInfo, v18);
    sub_1B863B8(&StringLiteral_8527/*"MISSION_EMPTY_TXT"*/, v19);
    byte_4A52745 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v10;
  if ( !scrollView )
    goto LABEL_36;
  scrollView->fields.disableDragIfFits = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
        sub_1B8661C(Instance, v21);
      v30 = missionList->m_Items[v28];
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v32 = (EventMissionItemListViewItem_o *)sub_1B86604(EventMissionItemListViewItem_TypeInfo);
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
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v32;
        sub_1B8635C((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v32, v34, v35);
      }
      LODWORD(v27) = missionList->max_length;
      if ( (__int64)++v28 >= (int)v27 )
        goto LABEL_24;
    }
LABEL_36:
    sub_1B86614(Instance, v21);
  }
LABEL_24:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v25, v26);
  }
  if ( !byte_4A527FB )
  {
    sub_1B863B8(&EventRewardSaveData_TypeInfo, sort);
    byte_4A527FB = 1;
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
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8527/*"MISSION_EMPTY_TXT"*/, 0LL);
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
  __int64 v9; // x1
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v11; // x21
  EventMissionActionInfo_o *v12; // x20
  EventMissionActionEntity_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_String_array *vals; // x1
  EventMissionItemListViewManager_o *v17; // x0
  const MethodInfo *v18; // x2
  System_String_o *VoiceAssetName; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4A52754 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionId);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v4);
    sub_1B863B8(&EventMissionActionInfo_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B863B8(&TerminalTransitionInfo_TypeInfo, v7);
    byte_4A52754 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
    v12 = (EventMissionActionInfo_o *)sub_1B86604(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor_43015152(v12, v11, 0LL);
LABEL_11:
    v13 = (EventMissionActionEntity_o *)sub_1B86604(TerminalTransitionInfo_TypeInfo);
    TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v13, 0LL);
    if ( v13 )
    {
      v13->fields.missionId = missionId;
      if ( v12 )
      {
        vals = v12->fields.vals;
        v13->fields.vals = vals;
        sub_1B8635C((CGThumbnailListItem_o *)&v13->fields.vals, (int32_t)vals, v14, v15);
        VoiceAssetName = EventMissionItemListViewManager__GetVoiceAssetName(v17, v12->fields.vals, v18);
        *(_QWORD *)&v13->fields.optionId = VoiceAssetName;
        sub_1B8635C((CGThumbnailListItem_o *)&v13->fields.optionId, (int32_t)VoiceAssetName, v20, v21);
        return (TerminalTransitionInfo_o *)v13;
      }
    }
LABEL_15:
    sub_1B86614(Instance, v9);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_15;
  v13 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
          (EventMissionActionMaster_o *)Instance,
          missionId,
          5,
          4,
          0LL);
  if ( v13 )
  {
    v12 = (EventMissionActionInfo_o *)sub_1B86604(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v12, v13, 0LL);
    goto LABEL_11;
  }
  return (TerminalTransitionInfo_o *)v13;
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  int32_t v11; // w1
  CGThumbnailListItem_o *p_dialogMessage; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t *p_overQpValue; // x26
  _DWORD *SelfUserGame; // x0
  __int64 v20; // x1
  _DWORD *v21; // x22
  int32_t v22; // w23
  int32_t QpMax; // w8
  int v24; // w23
  int32_t v25; // w24
  System_String_o *v26; // x23
  Il2CppObject *v27; // x24
  System_String_o *v28; // x0
  BalanceConfig_c *v29; // x8
  Il2CppObject *v30; // x25
  Il2CppObject *v31; // x0
  struct System_String_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w8
  int32_t num; // w8
  System_String_o *v37; // x21
  System_String_o *NumberFormat; // x0
  int32_t v39; // w8
  Il2CppObject *v40; // x22
  System_String_o *v41; // x0
  BalanceConfig_c *v42; // x8
  Il2CppObject *v43; // x23
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  bool result; // w0

  if ( (byte_4A52767 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, giftEnt);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_8562/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v7);
    sub_1B863B8(&StringLiteral_8565/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v8);
    sub_1B863B8(&StringLiteral_1/*""*/, v9);
    byte_4A52767 = 1;
  }
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dialogTitle, v10, (int32_t)method, v3);
  v11 = (int)StringLiteral_1/*""*/;
  p_dialogMessage = (CGThumbnailListItem_o *)&this->fields.dialogMessage;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dialogMessage, v11, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dialogGetable, v15, v16, v17);
  p_overQpValue = &this->fields.overQpValue;
  this->fields.isQpAlreadyMax = 0;
  *(_QWORD *)&this->fields.overQpValue = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_24;
  v21 = SelfUserGame;
  v22 = SelfUserGame[24];
  SelfUserGame = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)SelfUserGame + 23) + 4LL);
  if ( v22 >= QpMax )
  {
    this->fields.isQpAlreadyMax = 1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_8562/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    if ( giftEnt )
    {
      v37 = (System_String_o *)SelfUserGame;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
      v39 = v21[24];
      v40 = (Il2CppObject *)NumberFormat;
      v41 = LocalizationManager__GetNumberFormat(v39, 0LL);
      v42 = BalanceConfig_TypeInfo;
      v43 = (Il2CppObject *)v41;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v42 = BalanceConfig_TypeInfo;
      }
      v44 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v42->static_fields->QpMax, 0LL);
      v45 = System_String__Format_61686536(v37, v40, v43, v44, 0LL);
      p_dialogMessage->klass = (CGThumbnailListItem_c *)v45;
      sub_1B8635C(p_dialogMessage, (int32_t)v45, v46, v47);
      num = giftEnt->fields.num;
      goto LABEL_22;
    }
LABEL_24:
    sub_1B86614(SelfUserGame, v20);
  }
  if ( !giftEnt )
    goto LABEL_24;
  v24 = v21[24];
  v25 = giftEnt->fields.num;
  if ( !SelfUserGame[56] )
  {
    j_il2cpp_runtime_class_init_0(SelfUserGame);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( v25 + v24 > QpMax )
  {
    this->fields.isQpAlreadyMax = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8565/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    v27 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
    v28 = LocalizationManager__GetNumberFormat(v21[24], 0LL);
    v29 = BalanceConfig_TypeInfo;
    v30 = (Il2CppObject *)v28;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v29 = BalanceConfig_TypeInfo;
    }
    v31 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v29->static_fields->QpMax, 0LL);
    v32 = System_String__Format_61686536(v26, v27, v30, v31, 0LL);
    this->fields.dialogMessage = v32;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dialogMessage, (int32_t)v32, v33, v34);
    v35 = BalanceConfig_TypeInfo->static_fields->QpMax - v21[24];
    this->fields.getQpValue = v35;
    num = giftEnt->fields.num - v35;
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

  if ( (byte_4A5274B & 1) == 0 )
  {
    sub_1B863B8(&EventMissionItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4A5274B = 1;
  }
  result = (EventMissionItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventMissionItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 index,
                                                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Object_array *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x19
  __int64 v30; // x0

  if ( (byte_4A5274D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ConstantStrMaster___, beforeGiftEntity);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&LocalizationManager_TypeInfo, v7);
    sub_1B863B8(&object___TypeInfo, v8);
    sub_1B863B8(&StringLiteral_5576/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, v9);
    sub_1B863B8(&StringLiteral_5577/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, v10);
    sub_1B863B8(&StringLiteral_5644/*"EVENT_REWARD_REPLACE_MSG"*/, v11);
    byte_4A5274D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_24;
  v14 = Master_object;
  Value = ConstantStrMaster__GetValue(Master_object, (System_String_o *)StringLiteral_5577/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, 0LL);
  v16 = ConstantStrMaster__GetValue(v14, (System_String_o *)StringLiteral_5576/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_REWARD_REPLACE_MSG"*/, 0LL);
  Master_object = (ConstantStrMaster_o *)sub_1B86460(object___TypeInfo, 4LL);
  if ( !Master_object )
    goto LABEL_24;
  v20 = (System_Object_array *)Master_object;
  if ( Value )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B864F4(Value, Master_object->klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( !v20->max_length )
    goto LABEL_25;
  v20->m_Items[0] = (Il2CppObject *)Value;
  sub_1B8635C((CGThumbnailListItem_o *)v20->m_Items, (int32_t)Value, v18, v19);
  if ( v16 )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B864F4(v16, v20->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_25;
  v20->m_Items[1] = (Il2CppObject *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)&v20->m_Items[1], (int32_t)v16, v21, v22);
  if ( !beforeGiftEntity )
    goto LABEL_24;
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(beforeGiftEntity, 0LL);
  v25 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B864F4(Master_object, v20->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_26:
      v30 = sub_1B86638(Master_object);
      sub_1B864E0(v30, 0LL);
    }
  }
  if ( v20->max_length <= 2 )
    goto LABEL_25;
  v20->m_Items[2] = v25;
  sub_1B8635C((CGThumbnailListItem_o *)&v20->m_Items[2], (int32_t)v25, v23, v24);
  if ( !AfterGiftEntity )
LABEL_24:
    sub_1B86614(Master_object, v13);
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(AfterGiftEntity, 0LL);
  v28 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1B864F4(Master_object, v20->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( v20->max_length <= 3 )
LABEL_25:
    sub_1B8661C(Master_object, v13);
  v20->m_Items[3] = v28;
  sub_1B8635C((CGThumbnailListItem_o *)&v20->m_Items[3], (int32_t)v28, v26, v27);
  return System_String__Format_61686604(v17, v20, 0LL);
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
  System_String_o **v7; // x20
  signed int v8; // w21
  System_String_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 methodPtr_low; // x9
  EventMissionItemListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4A52755 & 1) == 0 )
  {
    sub_1B863B8(&EventRewardRootComponent_TypeInfo, afterActionVals);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    this = (EventMissionItemListViewManager_o *)sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A52755 = 1;
  }
  if ( !afterActionVals || (max_length = afterActionVals->max_length, max_length < 2) )
  {
    v7 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v7;
  }
  v7 = (System_String_o **)&StringLiteral_1/*""*/;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1B8661C(this, afterActionVals);
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v8], 0LL);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v8 += 2;
    if ( v8 >= max_length )
      return *v7;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0LL )
    sub_1B86614(Instance, v11);
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
    && (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardRootComponent_TypeInfo )
  {
    v7 = (System_String_o **)&Instance[98];
    return *v7;
  }
  sub_1B868D4(Instance);
  EventMissionItemListViewManager__AcceptReward(v13, v14);
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
  if ( (byte_4A5276A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, gift);
    this = (EventMissionItemListViewManager_o *)sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4A5276A = 1;
  }
  entity = 0LL;
  if ( !gift )
    goto LABEL_18;
  if ( Gift__IsServant_38640088(gift->fields.type, 0LL) )
    return 0;
  if ( Gift__IsCommandCode_38640480(gift->fields.type, 0LL) )
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
         (const MethodInfo_32142CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B86614(this, gift);
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

  if ( (byte_4A5275C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1B863B8(&EventMissionItemListViewItem_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A5275C = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.isEndEvent && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, v12);
      byte_4A48C25 = 1;
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
      sub_1B86614(Instance, v12);
    }
    v15 = Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)this->fields.itemList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v28 = v27;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v16 )
        break;
      current = (MissionListViewItem_o *)v28.fields._current;
      if ( !v28.fields._current
        || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventMissionItemListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1B86614(v16, v17);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v28.fields._current, 0LL);
      v22 = this->fields.missionToRecieve;
      if ( !v22 )
        sub_1B86614(MissionId, v21);
      v23 = MissionId;
      if ( (_DWORD)MissionId == v22->fields.id )
      {
        if ( !byte_4A4B11A )
        {
          MissionId = sub_1B863B8(&EventRewardSaveData_TypeInfo, v21);
          byte_4A4B11A = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v23;
        if ( !v15 )
          sub_1B86614(MissionId, v21);
        MissionListViewItem__ModifyItem(current, *(_DWORD *)&v15->fields._DispLog == 5, 0LL);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v26 = current->fields.viewObject;
        if ( !v26 )
          sub_1B86614(0LL, v25);
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v26->klass->vtable._5_SetItem.method)(
          v26,
          current,
          v26->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4A52747 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v12);
    byte_4A52747 = 1;
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
        (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( (ListViewItem_o *)v20.fields._current == v15 )
        {
          viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v15, 0LL);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
  }
  else
  {
LABEL_16:
    if ( !onFinish )
      sub_1B86614(Item, v14);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A52749 & 1) == 0 )
  {
    sub_1B863B8(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo, *(_QWORD *)&index);
    byte_4A52749 = 1;
  }
  v7 = sub_1B86604(EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)onFinished, v10, v11);
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

  if ( (byte_4A5275F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v3);
    byte_4A5275F = 1;
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
                                                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim((EventMissionItemListViewObject_o *)ObjectList, v5);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1B86614(ObjectList, v5);
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

  if ( (byte_4A52762 & 1) == 0 )
  {
    sub_1B863B8(&Method_EventMissionItemListViewManager_OnClickFilterList__, method);
    byte_4A52762 = 1;
  }
  v3 = Method_EventMissionItemListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_EventMissionItemListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_BFAB58[filterStatus];
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
  __int64 v16; // x20
  MissionListViewItem_o *EventMissionEntity; // x0
  MissionListViewItem_o *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 methodPtr_low; // x10
  EventMissionItemListViewItem_o *Item; // x0
  MissionListViewItem_o **v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t selectNum; // w8
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v28; // x2
  GiftAddMaster_o *v29; // x22
  GiftAddEntity_o *ValidPriorDataById; // x0
  GiftAddEntity_o *v31; // x22
  int32_t giftId; // w25
  int32_t priorGiftId; // w25
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t z_low; // w24
  ScrTerminalListTop_c *v37; // x0
  struct ScrTerminalListTop_StaticFields *static_fields; // x8
  struct System_String_o *TREASURE_GET_NORMAL; // x1
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  int32_t targetId; // w24
  struct System_String_o *OverwriteTreasureEffectId; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_String_o *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
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
  System_Action_o *v60; // x22

  if ( (byte_4A5274C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, obj);
    sub_1B863B8(&Method_DataManager_GetMaster_GiftAddMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&Method_EventMissionItemListViewManager_OnClickListView__, v8);
    sub_1B863B8(&EventMissionItemListViewObject_TypeInfo, v9);
    sub_1B863B8(&MissionInfoMaker_TypeInfo, v10);
    sub_1B863B8(&ScrTerminalListTop_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__, v13);
    sub_1B863B8(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, v14);
    sub_1B863B8(&StringLiteral_1/*""*/, v15);
    byte_4A5274C = 1;
  }
  v16 = sub_1B86604(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_84;
  *(_QWORD *)(v16 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)this, v19, v20);
  if ( this->fields.isClickListViewEnabled )
  {
    if ( !obj )
      goto LABEL_84;
    methodPtr_low = LOBYTE(EventMissionItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
      goto LABEL_84;
    if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewObject_TypeInfo )
      goto LABEL_84;
    Item = EventMissionItemListViewObject__GetItem((EventMissionItemListViewObject_o *)obj, (const MethodInfo *)v18);
    *(_QWORD *)(v16 + 24) = Item;
    v23 = (MissionListViewItem_o **)(v16 + 24);
    sub_1B8635C((CGThumbnailListItem_o *)(v16 + 24), (int32_t)Item, v24, v25);
    EventMissionEntity = *(MissionListViewItem_o **)(v16 + 24);
    if ( !EventMissionEntity )
      goto LABEL_84;
    EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0LL);
    if ( !EventMissionEntity )
      goto LABEL_84;
    selectNum = EventMissionEntity->fields.selectNum;
    *(_WORD *)&this->fields.isQpMaxAlert = 0;
    this->fields.selectEventMissionId = selectNum;
    EventMissionEntity = *v23;
    if ( !*v23 )
      goto LABEL_84;
    if ( (((__int64 (__fastcall *)(MissionListViewItem_o *, void *))EventMissionEntity->klass->vtable._8_get_IsShowRewardInfo.method)(
            EventMissionEntity,
            EventMissionEntity->klass[1]._1.image) & 1) == 0 )
      goto LABEL_16;
    EventMissionEntity = *v23;
    if ( !*v23 )
      goto LABEL_84;
    EventMissionEntity = (MissionListViewItem_o *)EventMissionItemListViewItem__get_IsHideReward(
                                                    (EventMissionItemListViewItem_o *)EventMissionEntity,
                                                    (const MethodInfo *)v18);
    if ( ((unsigned __int8)EventMissionEntity & 1) != 0 )
      goto LABEL_16;
    v18 = *v23;
    if ( !*v23 )
      goto LABEL_84;
    if ( LOBYTE(v18[1].monitor) )
    {
LABEL_16:
      EventMissionEntity = *v23;
      if ( !*v23 )
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
          EventMissionEntity = *v23;
          if ( !*v23 )
            goto LABEL_84;
        }
        if ( EventMissionItemListViewItem__GetIsRewardQp(
               (EventMissionItemListViewItem_o *)EventMissionEntity,
               (const MethodInfo *)v18) )
        {
          EventMissionEntity = *v23;
          if ( !*v23 )
            goto LABEL_84;
          IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp(
                         (EventMissionItemListViewItem_o *)EventMissionEntity,
                         (const MethodInfo *)v18);
          this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v28);
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_GiftAddMaster___);
        if ( !*v23 )
          goto LABEL_84;
        v29 = (GiftAddMaster_o *)EventMissionEntity;
        EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v23, 0LL);
        if ( !EventMissionEntity || !v29 )
          goto LABEL_84;
        ValidPriorDataById = GiftAddMaster__GetValidPriorDataById(
                               v29,
                               HIDWORD(EventMissionEntity->fields.sortValue2B),
                               0LL);
        v31 = ValidPriorDataById;
        if ( ValidPriorDataById && ValidPriorDataById->fields.priority >= 2 )
        {
          EventMissionEntity = *v23;
          if ( !*v23 )
            goto LABEL_84;
          giftId = v31->fields.giftId;
          EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                          EventMissionEntity,
                                                          0LL);
          if ( !EventMissionEntity )
            goto LABEL_84;
          if ( giftId == HIDWORD(EventMissionEntity->fields.sortValue2B) )
          {
            EventMissionEntity = *v23;
            if ( !*v23 )
              goto LABEL_84;
            priorGiftId = v31->fields.priorGiftId;
            EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                            EventMissionEntity,
                                                            0LL);
            if ( !EventMissionEntity )
              goto LABEL_84;
            if ( priorGiftId != HIDWORD(EventMissionEntity->fields.sortValue2B) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_GiftAddMaster___);
              if ( !EventMissionEntity )
                goto LABEL_84;
              v31 = GiftAddMaster__GetValidPriorDataById(
                      (GiftAddMaster_o *)EventMissionEntity,
                      v31->fields.priorGiftId,
                      0LL);
            }
          }
        }
        EventMissionEntity = *v23;
        if ( !*v23 )
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
          v37 = ScrTerminalListTop_TypeInfo;
          if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
            v37 = ScrTerminalListTop_TypeInfo;
          }
          static_fields = v37->static_fields;
          if ( z_low <= 3 )
            TREASURE_GET_NORMAL = static_fields->TREASURE_GET_NORMAL;
          else
            TREASURE_GET_NORMAL = static_fields->PRIZE_GET_NORMAL;
          this->fields.useTreasureGetEffectName = TREASURE_GET_NORMAL;
          sub_1B8635C(
            (CGThumbnailListItem_o *)&this->fields.useTreasureGetEffectName,
            (int32_t)TREASURE_GET_NORMAL,
            v34,
            v35);
        }
        if ( v31 )
        {
          EventMissionEntity = *v23;
          if ( !*v23 )
            goto LABEL_84;
          targetId = v31->fields.targetId;
          EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                          EventMissionEntity,
                                                          0LL);
          if ( !EventMissionEntity )
            goto LABEL_84;
          if ( targetId == EventMissionEntity->fields.selectNum )
          {
            OverwriteTreasureEffectId = GiftAddEntity__GetOverwriteTreasureEffectId(v31, 0LL);
            if ( !OverwriteTreasureEffectId )
              OverwriteTreasureEffectId = this->fields.useTreasureGetEffectName;
            this->fields.useTreasureGetEffectName = OverwriteTreasureEffectId;
            sub_1B8635C(
              (CGThumbnailListItem_o *)&this->fields.useTreasureGetEffectName,
              (int32_t)OverwriteTreasureEffectId,
              v44,
              v45);
            v46 = GiftAddEntity__GetOverWriteTitleSprite(v31, 0LL);
            this->fields.overWriteTitleSpriteName = v46;
            sub_1B8635C((CGThumbnailListItem_o *)&this->fields.overWriteTitleSpriteName, (int32_t)v46, v47, v48);
          }
        }
        if ( this->fields.useTreasureGetEffectName )
          this->fields.isTreasureEffect = 1;
        if ( this->fields.overWriteTitleSpriteName )
          this->fields.isChangeTitleSprite = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_GiftMaster___);
        if ( !*v23
          || (v49 = (GiftMaster_o *)EventMissionEntity,
              (EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v23, 0LL)) == 0LL)
          || !v49 )
        {
LABEL_84:
          sub_1B86614(EventMissionEntity, v18);
        }
        DataById = GiftMaster__getDataById(v49, HIDWORD(EventMissionEntity->fields.sortValue2B), 0LL);
        if ( !DataById
          || (v51 = DataById, !DataById->fields._IsReplacedData_k__BackingField)
          || this->fields.isTreasureEffect
          || this->fields.giftIconId != -1 )
        {
          EventMissionEntity = *v23;
          if ( *v23 )
          {
            v52 = MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0LL);
            EventMissionItemListViewManager__recieveReward(this, v52, v53);
            return;
          }
          goto LABEL_84;
        }
        EventMissionEntity = *v23;
        if ( !*v23 )
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                                   (EventMissionItemListViewManager_o *)Instance,
                                   v56,
                                   v51,
                                   v58);
          v60 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v60,
            (Il2CppObject *)v16,
            Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__,
            0LL);
          if ( !Instance )
            goto LABEL_84;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            ReplaceDialogMessage,
            v60,
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
        v40 = Method_EventMissionItemListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v40 = (_QWORD *)sub_1B863D0(Method_EventMissionItemListViewManager_OnClickListView__);
        v41 = (System_Reflection_MethodBase_o *)sub_1B8639C(v40, v40[4]);
        OverwriteAssetSoundName__PlaySystemSe(v41, 2, 0, 0LL);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct EventMissionEntity_o *v22; // x8

  if ( (byte_4A52765 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_GiftEntity___, closeCallback);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&System_Func_GiftEntity__bool__TypeInfo, v8);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__, v9);
    sub_1B863B8(&EventMissionItemListViewManager___c_TypeInfo, v10);
    byte_4A52765 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_GiftMaster___);
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
    _9__78_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__78_0,
      v18,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__,
      0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__78_0 = (struct System_Func_GiftEntity__bool__o *)_9__78_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__78_0, (int32_t)_9__78_0, v20, v21);
  }
  if ( BasicHelper__Any_object__49642848(
         v16,
         (System_Func_T__bool__o *)_9__78_0,
         (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    Master_object = (GiftMaster_o *)this->fields.commandAssistLvUpDialog;
    if ( Master_object )
    {
      Master_object = (GiftMaster_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Master_object,
                                        (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
      v22 = this->fields.missionToRecieve;
      if ( v22 )
      {
        if ( Master_object )
        {
          CommandAssistLvUpDialogComponent__Open(
            (CommandAssistLvUpDialogComponent_o *)Master_object,
            this->fields.currentEventId,
            v22->fields.id,
            closeCallback,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1B86614(Master_object, v12);
  }
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall EventMissionItemListViewManager__OpenQpMaxAlertDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  System_Action_o *v21; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v23; // x29
  __int64 v24; // x0
  __int64 v25; // x1

  if ( (byte_4A52768 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_EventMissionItemListViewManager_Decide__, v6);
    sub_1B863B8(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__, v7);
    sub_1B863B8(&Method_EventMissionItemListViewManager_TransitionToCombineScene__, v8);
    sub_1B863B8(&LocalizationManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_11487/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v10);
    sub_1B863B8(&StringLiteral_11486/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v11);
    sub_1B863B8(&StringLiteral_11493/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v12);
    byte_4A52768 = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dialogCallBack, (int32_t)callback, (int32_t)method, v3);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11487/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11493/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11486/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v20 = v15;
  v21 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0LL);
  onTransition = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0LL);
  v23 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0LL);
  if ( !qpMaxAlertDialog )
    sub_1B86614(v24, v25);
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    v13,
    v14,
    v20,
    v21,
    onTransition,
    v23,
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

  if ( (byte_4A52766 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&SceneList_TypeInfo, v3);
    byte_4A52766 = 1;
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
      sub_1B86614(gameObject, v6);
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

  if ( (byte_4A52760 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B863B8(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v8);
    byte_4A52760 = 1;
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
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v17;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
    sub_1B86614(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
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
    sub_1B86614(ObjectList, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__RefrashListDisp_47096304(
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

  if ( (byte_4A52761 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&missionId);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B863B8(&EventMissionItemListViewItem_TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v10);
    byte_4A52761 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    itemList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current
      || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventMissionItemListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_1B86614(v12, v13);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v22.fields._current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
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
    sub_1B86614(itemList, *(_QWORD *)&missionId);
  }
}


void __fastcall EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_4A52753 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A52753 = 1;
  }
  if ( !byte_4A527FC )
  {
    sub_1B863B8(&EventRewardSaveData_TypeInfo, method);
    byte_4A527FC = 1;
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5275D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v6);
    sub_1B863B8(&StringLiteral_18613/*"ef_mission_extric01"*/, v7);
    sub_1B863B8(&StringLiteral_21327/*"modifyOpenItem"*/, v8);
    byte_4A5275D = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1B86614(0LL, v10);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v23,
        ObjectList,
        (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v24 = v23;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
        if ( !v11 )
          break;
        current = v24.fields._current;
        if ( !v24.fields._current )
          sub_1B86614(v11, v12);
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v24.fields._current,
                                          v12);
        v16 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_1B86614(0LL, v15);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4A4B11A )
          {
            sub_1B863B8(&EventRewardSaveData_TypeInfo, v17);
            byte_4A4B11A = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v16;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.openTargetItem, (int32_t)v16, v18, v19);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v16, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_18613/*"ef_mission_extric01"*/, transform, v22);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21327/*"modifyOpenItem"*/,
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A52748 & 1) == 0 )
  {
    sub_1B863B8(&EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo, *(_QWORD *)&index);
    byte_4A52748 = 1;
  }
  v7 = sub_1B86604(EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)onFinished, v10, v11);
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
    sub_1B86614(scrollView, enable);
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

  if ( (byte_4A52769 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4A52769 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
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

  if ( (byte_4A5276C & 1) == 0 )
  {
    sub_1B863B8(&System_Math_TypeInfo, *(_QWORD *)&x);
    byte_4A5276C = 1;
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
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_Enumerator_object__o *v41; // x0
  struct EventMissionEntity_o *v42; // x8
  Il2CppObject *v43; // x22
  EventMissionActionInfo_o *v44; // x21
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  System_Comparison_T__o *v53; // x21
  Il2CppObject *v54; // x22
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  const MethodInfo *targetMissionId; // x1
  int v59; // w8
  __int64 v60; // x8
  int32_t v61; // w0
  const MethodInfo *v62; // x2
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4A5276E & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_EventMissionActionInfo__TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v10);
    sub_1B863B8(&EventMissionActionInfo_TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v19);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v20);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__, v22);
    sub_1B863B8(&EventMissionItemListViewManager___c_TypeInfo, v23);
    sub_1B863B8(&StringLiteral_16414/*"actionAfterCallback"*/, v24);
    byte_4A5276E = 1;
  }
  memset(&v65, 0, sizeof(v65));
  memset(&v64, 0, sizeof(v64));
  v25 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v65 = v63;
    v30 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v65.fields._current;
      v32 = (EventMissionActionInfo_o *)sub_1B86604(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_43015152(v32, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v25 )
        sub_1B86614(v33, v34);
      items = v25->fields._items;
      v38 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v25->fields._version;
      if ( !items )
        sub_1B86614(v33, v34);
      size = v25->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)v32,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v32;
        sub_1B8635C((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v32, v35, v36);
      }
    }
    v41 = &v65;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v42 = this->fields.missionToRecieve;
    if ( !v42 )
      goto LABEL_47;
    if ( !Instance )
      goto LABEL_47;
    Instance = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
                 (EventMissionActionMaster_o *)Instance,
                 v42->fields.id,
                 5,
                 3,
                 0LL);
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v64 = v63;
    v30 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v64,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v43 = v64.fields._current;
      v44 = (EventMissionActionInfo_o *)sub_1B86604(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v44, (EventMissionActionEntity_o *)v43, 0LL);
      if ( !v25 )
        sub_1B86614(v45, v46);
      v49 = v25->fields._items;
      v50 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v25->fields._version;
      if ( !v49 )
        sub_1B86614(v45, v46);
      v51 = v25->fields._size;
      if ( (unsigned int)v51 >= v49->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)v44,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &v49->obj.klass + v51;
        v25->fields._size = v51 + 1;
        v52[4] = (Il2CppClass *)v44;
        sub_1B8635C((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v44, v47, v48);
      }
    }
    v41 = &v64;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(v41, (const MethodInfo_3398630 *)*v30);
  Instance = EventMissionItemListViewManager___c_TypeInfo;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    Instance = EventMissionItemListViewManager___c_TypeInfo;
  }
  v53 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v53 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionItemListViewManager___c_TypeInfo;
    }
    v54 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v53 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventMissionActionInfo__TypeInfo);
    System_Comparison_object____ctor(
      v53,
      v54,
      Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__,
      0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__66_1 = (struct System_Comparison_EventMissionActionInfo__o *)v53;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__66_1, (int32_t)v53, v56, v57);
  }
  if ( !v25 )
    goto LABEL_47;
  System_Collections_Generic_List_object___Sort_56615964(
    v25,
    v53,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  v59 = v25->fields._size;
  if ( v59 <= 0 )
    goto LABEL_42;
  Instance = System_Collections_Generic_List_object___get_Item(
               v25,
               v59 - 1,
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
  if ( !Instance || (v60 = *((_QWORD *)Instance + 4)) == 0 )
LABEL_47:
    sub_1B86614(Instance, v27);
  if ( !*(_DWORD *)(v60 + 24) )
    sub_1B8661C(Instance, v27);
  v61 = System_Int32__Parse(*(System_String_o **)(v60 + 32), 0LL);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v61 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_47096304(this, (int32_t)targetMissionId, v62);
    goto LABEL_44;
  }
LABEL_42:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_44:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16414/*"actionAfterCallback"*/,
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

  if ( (byte_4A5276D & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4A5276D = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_1B86614(Instance, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *actionCallback; // x19
  CGThumbnailListItem_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (CGThumbnailListItem_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0LL;
    sub_1B8635C(p_actionCallback, 0, v2, v3);
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
  const MethodInfo *v5; // x3

  if ( (byte_4A52757 & 1) == 0 )
  {
    sub_1B863B8(&EventMissionItemListViewManager__afterReward_d__59_TypeInfo, method);
    byte_4A52757 = 1;
  }
  v3 = sub_1B86604(EventMissionItemListViewManager__afterReward_d__59_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w21
  BalanceConfig_c *v25; // x0
  int32_t PresentBoxMax; // w8
  int v27; // w20
  EventMissionItemListViewManager___c_c *v28; // x0
  System_Action_o *_9__51_0; // x20
  Il2CppObject *v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct EventMissionItemListViewManager___c_StaticFields *v33; // x0
  CGThumbnailListItem_o *p__9__51_0; // x0
  __int64 *v35; // x8
  EventMissionItemListViewManager___c_c *v36; // x0
  Il2CppObject *v37; // x21
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4A5274F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&BalanceConfig_TypeInfo, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v6);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__, v10);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__, v11);
    sub_1B863B8(&EventMissionItemListViewManager___c_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_12006/*"SHOW_MSG"*/, v13);
    sub_1B863B8(&StringLiteral_10966/*"REWARD_ACCEPTABLE"*/, v14);
    byte_4A5274F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_GiftMaster___);
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
    if ( Gift__IsServant_38640088(*((_DWORD *)Instance + 5), 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_48;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_48;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v19[6],
                   (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_48;
      v20 = Instance;
      if ( SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0LL) || SvtType__IsStatusUp(v20[21], 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4A48C25 )
        {
          sub_1B863B8(&NetworkManager_TypeInfo, v16);
          byte_4A48C25 = 1;
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
        v24 = *((_DWORD *)Instance + 6);
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
            _9__51_0 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_0,
              v37,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__,
              0LL);
            static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__51_0 = _9__51_0;
            p__9__51_0 = (CGThumbnailListItem_o *)&static_fields->__9__51_0;
            goto LABEL_45;
          }
LABEL_46:
          this->fields.ShowMSG = _9__51_0;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.ShowMSG, (int32_t)_9__51_0, v22, v23);
          Instance = this->fields.targetFSM;
          if ( Instance )
          {
            v35 = &StringLiteral_12006/*"SHOW_MSG"*/;
            goto LABEL_38;
          }
LABEL_48:
          sub_1B86614(Instance, v16);
        }
        v27 = v19[7];
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
            _9__51_0 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_0,
              v30,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__,
              0LL);
            v33 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v33->__9__51_1 = _9__51_0;
            p__9__51_0 = (CGThumbnailListItem_o *)&v33->__9__51_1;
LABEL_45:
            sub_1B8635C(p__9__51_0, (int32_t)_9__51_0, v31, v32);
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
  v35 = &StringLiteral_10966/*"REWARD_ACCEPTABLE"*/;
LABEL_38:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v35, 0LL);
}


void __fastcall EventMissionItemListViewManager__dialogCallback(
        EventMissionItemListViewManager_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_int__o *dialogCallBack; // x20
  CGThumbnailListItem_o *p_dialogCallBack; // x0

  dialogCallBack = this->fields.dialogCallBack;
  if ( dialogCallBack )
  {
    p_dialogCallBack = (CGThumbnailListItem_o *)&this->fields.dialogCallBack;
    p_dialogCallBack->klass = 0LL;
    sub_1B8635C(p_dialogCallBack, 0, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v10; // x1
  int32_t filterStatus; // w8
  struct EventMissionEntity_o *v12; // x8

  if ( (byte_4A5275A & 1) == 0 )
  {
    sub_1B863B8(&EventMissionItemListViewManager_TypeInfo, data);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v6);
    byte_4A5275A = 1;
  }
  if ( data )
  {
    EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_1B8635C(
      (CGThumbnailListItem_o *)EventMissionItemListViewManager_TypeInfo->static_fields,
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
        EventMissionItemListViewManager__setList(this, v10);
      }
    }
    else
    {
      EventMissionItemListViewManager__RefrashListDisp(this, v10);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v12 = this->fields.missionToRecieve;
    if ( !v12 || !Instance )
LABEL_13:
      sub_1B86614(Instance, v8);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v12->fields.id, 5, 0, 0LL);
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
  Il2CppObject *Object_object__49610244; // x19
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4A5275B & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, parentTr);
    sub_1B863B8(&EventMissionItemListViewManager_TypeInfo, v5);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A5275B = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              effectAssetData,
                              name,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49610244,
                                     (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4A487E1 )
  {
    effectAssetData = (AssetData_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4A487E1 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A487E6 )
  {
    effectAssetData = (AssetData_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4A487E6 = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1B86614(effectAssetData, parentTr);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A52744 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A52744 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B86614(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B86614(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B86614(0LL, v18);
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                 (EventMissionItemListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B86614(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_41791656((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B86614(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B86614(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B86614(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B86614(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B8635C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v11;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A52743 & 1) == 0 )
  {
    sub_1B863B8(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___, method);
    byte_4A52743 = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_2FF1394 *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void __fastcall EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_4A52759 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&Method_EventMissionItemListViewManager_endloadEffect__, v3);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_5815/*"Effect/EventMission"*/, v5);
    byte_4A52759 = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5815/*"Effect/EventMission"*/, v6, 1, 0LL);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  EventMissionItemListViewManager_o *v15; // x20
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  struct GetSvts_array *items; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v20; // x8
  struct GetCommandCodes_array *v21; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20

  v4 = this;
  if ( (byte_4A52752 & 1) == 0 )
  {
    sub_1B863B8(&Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___, result);
    sub_1B863B8(&JsonManager_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_10905/*"REQUEST_OK"*/, v6);
    sub_1B863B8(&StringLiteral_10903/*"REQUEST_NG"*/, v7);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v8);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v9);
    this = (EventMissionItemListViewManager_o *)sub_1B863B8(&StringLiteral_15836/*"]"*/, v10);
    byte_4A52752 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_61680480(result, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_61683424(
                            (System_String_o *)StringLiteral_15580/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15836/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (EventMissionItemListViewManager_o *)JsonManager__DeserializeArray_object_(
                                                  v12,
                                                  (const MethodInfo_2FD883C *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
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
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.getSvtList, (int32_t)items, v13, v14);
      if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_22:
        sub_1B8661C(this, result);
      v20 = v15->fields.dropObjectList;
      if ( v20 )
      {
        v21 = *(struct GetCommandCodes_array **)&v20->fields._size;
        v4->fields.getCommandCodeList = v21;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.getCommandCodeList, (int32_t)v21, v18, v19);
        missionToRecieve = v4->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_4A4B11A )
          {
            sub_1B863B8(&EventRewardSaveData_TypeInfo, result);
            byte_4A4B11A = 1;
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
              v11 = &StringLiteral_10905/*"REQUEST_OK"*/;
              goto LABEL_20;
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B86614(this, result);
  }
  this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
  if ( !this )
    goto LABEL_21;
  v11 = &StringLiteral_10903/*"REQUEST_NG"*/;
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

  if ( (byte_4A5275E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1B863B8(&EventMissionItemListViewItem_TypeInfo, v6);
    sub_1B863B8(&Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__, v7);
    sub_1B863B8(&EventMissionItemListViewObject_TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A5275E = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1B86614(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v28 = v27;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v12 )
        break;
      current = v28.fields._current;
      if ( !v28.fields._current
        || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventMissionItemListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1B86614(v12, v13);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v28.fields._current, 0LL);
      openTargetItem = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !openTargetItem )
        sub_1B86614(0LL, v16);
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
            sub_1B868D4(v21);
LABEL_30:
            sub_1B86614(v21, v20);
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
          sub_1B86614(0LL, v24);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v25 + 392LL))(
          v25,
          current,
          *(_QWORD *)(*(_QWORD *)v25 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v26 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct EventMissionEntity_o **v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Action_int__o *v17; // x20
  const MethodInfo *v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  struct EventMissionEntity_o *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4A5274E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, missionEntity);
    sub_1B863B8(&Method_EventMissionItemListViewManager_recieveReward__, v5);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__, v6);
    sub_1B863B8(&EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_8559/*"MISSION_REWARD"*/, v8);
    byte_4A5274E = 1;
  }
  v9 = sub_1B86604(EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = missionEntity;
  v14 = (struct EventMissionEntity_o **)(v9 + 24);
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)missionEntity, v15, v16);
  if ( this->fields.isQpMaxAlert )
  {
    v17 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v17,
      (Il2CppObject *)v9,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__,
      0LL);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v17, v18);
    return;
  }
  v19 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1B863D0(Method_EventMissionItemListViewManager_recieveReward__);
  v20 = (System_Reflection_MethodBase_o *)sub_1B8639C(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 8, 0, 0LL);
  v21 = *v14;
  this->fields.missionToRecieve = *v14;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.missionToRecieve, (int32_t)v21, v22, v23);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_1B86614(targetFSM, v11);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8559/*"MISSION_REWARD"*/, 0LL);
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

  if ( (byte_4A52751 & 1) == 0 )
  {
    sub_1B863B8(&Method_EventMissionItemListViewManager_missionRewardCallback__, method);
    sub_1B863B8(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    byte_4A52751 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v9,
               (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
LABEL_9:
    sub_1B86614(Instance, v8);
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

  if ( (byte_4A52758 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_EventMissionItemListViewManager__setAfterAction_b__60_0__, v3);
    byte_4A52758 = 1;
  }
  v4 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A52764 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, targetFile);
    byte_4A52764 = 1;
  }
  filterBtnTxt = (UnityEngine_Object_o *)this->fields.filterBtnTxt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(filterBtnTxt, 0LL, 0LL) )
  {
    v7 = this->fields.filterBtnTxt;
    if ( !v7 || (UISprite__set_spriteName(v7, targetFile, 0LL), (v7 = this->fields.filterBtnTxt) == 0LL) )
      sub_1B86614(v7, v6);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  ListViewSort_o *operationSortInfo; // x0
  bool v16; // w2
  bool v17; // w2
  bool v18; // w2
  bool v19; // w2
  __int64 v20; // x1
  int32_t filterStatus; // w19

  if ( (byte_4A52763 & 1) == 0 )
  {
    sub_1B863B8(&ListViewSort_TypeInfo, method);
    sub_1B863B8(&StringLiteral_17332/*"btn_txt_completed"*/, v3);
    sub_1B863B8(&StringLiteral_17365/*"btn_txt_receipt"*/, v4);
    sub_1B863B8(&StringLiteral_17364/*"btn_txt_progress"*/, v5);
    sub_1B863B8(&StringLiteral_17348/*"btn_txt_notopen"*/, v6);
    sub_1B863B8(&StringLiteral_17314/*"btn_txt_all"*/, v7);
    byte_4A52763 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v9 = (ListViewSort_o *)sub_1B86604(ListViewSort_TypeInfo);
  ListViewSort___ctor_41809704(v9, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v9;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v9, v11, v12);
  switch ( this->fields.filterStatus )
  {
    case 0:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17314/*"btn_txt_all"*/, v14);
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
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17365/*"btn_txt_receipt"*/, v14);
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
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17364/*"btn_txt_progress"*/, v14);
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
        sub_1B86614(operationSortInfo, v13);
      ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_4A4B119 )
      {
        sub_1B863B8(&EventRewardSaveData_TypeInfo, v20);
        byte_4A4B119 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = filterStatus;
      return;
    case 3:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17348/*"btn_txt_notopen"*/, v14);
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
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17332/*"btn_txt_completed"*/, v14);
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
  if ( (byte_4A5274A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, isRaid);
    sub_1B863B8(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    this = (EventMissionItemListViewManager_o *)sub_1B863B8(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v8);
    byte_4A5274A = 1;
  }
  if ( !byte_4A527FB )
  {
    this = (EventMissionItemListViewManager_o *)sub_1B863B8(&EventRewardSaveData_TypeInfo, isRaid);
    byte_4A527FB = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  size = itemList->fields._size;
  if ( byte_4A527FC )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    sub_1B863B8(&EventRewardSaveData_TypeInfo, isRaid);
    byte_4A527FC = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_28;
      this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
                                                    (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B86614(this, isRaid);
  }
LABEL_26:
  v13 = 0;
LABEL_27:
  ListViewManager__SetTopItem((ListViewManager_o *)v4, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  v10 = this;
  if ( (byte_4A52746 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, currentMissionActionInfo);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v11);
    sub_1B863B8(&EventMissionItemListViewItem_TypeInfo, v12);
    sub_1B863B8(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__, v13);
    sub_1B863B8(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v16);
    this = (EventMissionItemListViewManager_o *)sub_1B863B8(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v17);
    byte_4A52746 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&v10->fields.actionCallback,
      (int32_t)callback,
      (int32_t)eventMissionActionInfo,
      *(const MethodInfo **)&missionID);
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
    sub_1B86614(this, currentMissionActionInfo);
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
                                                    (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this )
    goto LABEL_30;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               (EventRewardSceneMaster_o *)this,
                               v10->fields.currentEventId,
                               4,
                               0LL);
  if ( EntityFromIdAndEventType && *(_QWORD *)&EntityFromIdAndEventType->max_length )
  {
    v24 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v10,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__,
      0LL);
    EventMissionItemListViewManager__MoveEaseScroll(v10, v21, v24, eventMissionActionInfo, v25);
  }
  else
  {
    v26 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v10,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__,
      0LL);
    v10->fields.callbackAfterScroll = v26;
    sub_1B8635C((CGThumbnailListItem_o *)&v10->fields.callbackAfterScroll, (int32_t)v26, v27, v28);
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
  if ( (byte_4A52750 & 1) == 0 )
  {
    this = (EventMissionItemListViewManager_o *)sub_1B863B8(&StringLiteral_5409/*"END_NOTICE"*/, method);
    byte_4A52750 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (EventMissionItemListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1B86614(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5409/*"END_NOTICE"*/, 0LL);
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
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
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
    sub_1B86614(this, method);
  UIProgressBar__set_value((UIProgressBar_o *)this, start_5__2 + v24, 0LL);
  v4->fields.__2__current = 0LL;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1B8635C(p__2__current, 0, v26, v27);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  UnityEngine_Coroutine_o *started; // x0
  CGThumbnailListItem_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  int size; // w22
  System_Collections_Generic_List_int__o *v24; // x20
  int32_t i; // w21
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  System_Func_int__int__int__o *v30; // x21
  int32_t v31; // w0
  int32_t v32; // w21
  int32_t v33; // w1
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v36; // x19
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  v3 = this;
  if ( (byte_4A5277B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Aggregate_int___, method);
    sub_1B863B8(&EventMissionItemListViewItem_TypeInfo, v4);
    sub_1B863B8(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__, v5);
    sub_1B863B8(&System_Func_int__int__int__TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__IndexOf__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v12);
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)sub_1B863B8(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v13);
    byte_4A5277B = 1;
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
        v36 = (UnityEngine_WaitForSeconds_o *)sub_1B86604(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v36, openItemTime + endEffectTime, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v36;
        p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
        sub_1B8635C(p__2__current, (int32_t)v36, v38, v39);
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
        LOBYTE(v21) = 1;
        return v21;
      }
      goto LABEL_32;
    }
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      if ( _4__this )
      {
        v16 = EventMissionItemListViewManager__MoveEaseScroll_IE(_4__this, v3->fields.index, v3->fields.onFinished, v2);
        started = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v16, 0LL);
        v3->fields.__2__current = (Il2CppObject *)started;
        v18 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
        sub_1B8635C(v18, (int32_t)started, v19, v20);
        LOBYTE(v21) = 1;
        LODWORD(v18[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return v21;
      }
LABEL_32:
      sub_1B86614(this, method);
    }
LABEL_30:
    LOBYTE(v21) = 0;
    return v21;
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
  v24 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0; i != size; ++i )
  {
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)_4__this->fields.itemSortList;
    if ( !this )
      goto LABEL_32;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           i,
                                                                           (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    if ( !v24 )
      goto LABEL_32;
    method = (const MethodInfo *)LODWORD(this->fields.__4__this);
    items = v24->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v24->fields._version;
    if ( !items )
      goto LABEL_32;
    v29 = v24->fields._size;
    if ( (unsigned int)v29 >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v24,
        (int32_t)method,
        *(const MethodInfo_35DF934 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v24->fields._size = v29 + 1;
      items->m_Items[v29 + 1] = (int)method;
    }
  }
  v30 = (System_Func_int__int__int__o *)sub_1B86604(System_Func_int__int__int__TypeInfo);
  System_Func_int__int__int____ctor(
    v30,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__,
    0LL);
  v31 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v24,
          (System_Func_TSource__TSource__TSource__o *)v30,
          (const MethodInfo_2F775BC *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v32 = v31;
  v21 = System_Collections_Generic_List_int___IndexOf(
          v24,
          v31,
          (const MethodInfo_35E05B0 *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v21 )
  {
    v33 = v32 - 1;
    if ( v21 == size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v33, 0, 0, 0.0, 0LL);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v33, 0, 0.0, 0LL);
    goto LABEL_30;
  }
  return v21;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_EventMissionItemListViewManager__SetPreviousFilter_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A5276F & 1) == 0 )
  {
    sub_1B863B8(&EventMissionItemListViewManager___c_TypeInfo, v1);
    byte_4A5276F = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(EventMissionItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionItemListViewManager___c_TypeInfo->static_fields->__9 = (struct EventMissionItemListViewManager___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)EventMissionItemListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, 0LL);
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
  EventMissionItemListViewManager___c_c *v11; // x8
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  System_Action_o *_9__51_2; // x22
  Il2CppObject *v15; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4A52770 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&LocalizationManager_TypeInfo, v2);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__, v4);
    sub_1B863B8(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_8521/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v6);
    sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A52770 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8521/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v11 = EventMissionItemListViewManager___c_TypeInfo;
  v12 = v9;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
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
    _9__51_2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(_9__51_2, v15, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__, 0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_2 = _9__51_2;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__51_2, (int32_t)_9__51_2, v17, v18);
  }
  if ( !Instance )
    sub_1B86614(v9, v10);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v13, v12, _9__51_2, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  EventMissionItemListViewManager___c_c *v11; // x8
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  System_Action_o *_9__51_3; // x22
  Il2CppObject *v15; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4A52772 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&LocalizationManager_TypeInfo, v2);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__, v4);
    sub_1B863B8(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_8522/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, v6);
    sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A52772 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8522/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0LL);
  v11 = EventMissionItemListViewManager___c_TypeInfo;
  v12 = v9;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
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
    _9__51_3 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(_9__51_3, v15, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__, 0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_3 = _9__51_3;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__51_3, (int32_t)_9__51_3, v17, v18);
  }
  if ( !Instance )
    sub_1B86614(v9, v10);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v13, v12, _9__51_3, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A52771 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A52771 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A52773 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A52773 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager___c___modifyOpenItem_b__66_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
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
    sub_1B86614(selectItem, method);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct EventMissionItemListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct EventMissionItemListViewManager_o *v14; // x8

  if ( (byte_4A52774 & 1) == 0 )
  {
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__, *(_QWORD *)&result);
    sub_1B863B8(&StringLiteral_8559/*"MISSION_REWARD"*/, v5);
    byte_4A52774 = 1;
  }
  if ( result == 1 )
  {
    v6 = Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B863D0(Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B8639C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (missionEntity = this->fields.missionEntity,
          _4__this->fields.missionToRecieve = missionEntity,
          sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.missionToRecieve, (int32_t)missionEntity, v10, v11),
          (v14 = this->fields.__4__this) == 0LL)
      || (targetFSM = v14->fields.targetFSM) == 0LL )
    {
      sub_1B86614(targetFSM, v9);
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8559/*"MISSION_REWARD"*/, 0LL);
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

  if ( (byte_4A52777 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A52777 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B86614(Instance, v4);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A52775 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__, v5);
    byte_4A52775 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    _9__4 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__4, (int32_t)_9__4, v11, v12);
  }
  if ( !eventRootComponent )
LABEL_10:
    sub_1B86614(Instance, v7);
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
    sub_1B86614(this, method);
  }
  v5 = EventMissionItemListViewManager__afterReward(v4, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)v4, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__6(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4A52776 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A52776 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B86614(Instance, v4);
  }
  v6 = EventMissionItemListViewManager__afterReward(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
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
  Il2CppObject *NumberFormat; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v40; // x8
  struct EventMissionItemListViewManager_o *v41; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x21
  long double inited; // q0
  _QWORD *v46; // x22
  __int64 v47; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  CommonUI_o *v50; // x21
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v51; // x22
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v52; // x24
  MissionRewardGetDialog_ClickDelegate_o *_9__3; // x23
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v54; // x20
  int32_t v55; // w2
  const MethodInfo *v56; // x3

  v2 = this;
  if ( (byte_4A52778 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_object___, method);
    sub_1B863B8(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v9);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__, v10);
    sub_1B863B8(&StringLiteral_8563/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v11);
    sub_1B863B8(&StringLiteral_8520/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v12);
    sub_1B863B8(&StringLiteral_8523/*"MISSION_ACTION_SUCCESS"*/, v13);
    sub_1B863B8(&StringLiteral_8525/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/, v14);
    sub_1B863B8(&StringLiteral_50/*"\n \n"*/, v15);
    sub_1B863B8(&StringLiteral_51/*"\n \n "*/, v16);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1B863B8(&StringLiteral_8564/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v17);
    byte_4A52778 = 1;
  }
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_68;
  if ( giftList->fields._size < 1 )
  {
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
          UnityEngine_MonoBehaviour__StartCoroutine_69341456(_4__this, v26, 0LL);
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
  v21 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
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
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__Substring_61691100(
                                                                          v23,
                                                                          0,
                                                                          v23->fields._stringLength - 2,
                                                                          0LL);
      if ( !v21 )
        goto LABEL_68;
      System_Text_StringBuilder__Append_61730360(v21, (System_String_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8520/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_61730360(
                                                                          v21,
                                                                          v27,
                                                                          0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8523/*"MISSION_ACTION_SUCCESS"*/,
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
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_61730360(
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
                                                                        (System_String_o *)StringLiteral_8525/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/,
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
                                                                          (System_String_o *)StringLiteral_8563/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                          0LL);
      v36 = v2->fields.CS___8__locals1;
      if ( v36 )
      {
        v37 = v36->fields.__4__this;
        if ( v37 )
        {
          v38 = this;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v37->fields.overQpValue, 0LL);
          System_Text_StringBuilder__AppendFormat(v21, (System_String_o *)v38, NumberFormat, 0LL);
          goto LABEL_61;
        }
      }
LABEL_68:
      sub_1B86614(this, method);
    }
    System_Text_StringBuilder__Append_61730360(v21, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8564/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                        0LL);
    v40 = v2->fields.CS___8__locals1;
    if ( !v40 )
      goto LABEL_68;
    v41 = v40->fields.__4__this;
    if ( !v41 )
      goto LABEL_68;
    v42 = this;
    v43 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v41->fields.overQpValue, 0LL);
    v44 = System_String__Format((System_String_o *)v42, v43, 0LL);
    v46 = Method_System_Array_Empty_object___;
    v47 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v47 )
    {
      sub_1BD6AA4(Method_System_Array_Empty_object___);
      v47 = v46[7];
    }
    v48 = *(_QWORD *)(v47 + 16);
    if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
      v48 = sub_1BD6A48(inited);
    if ( !*(_DWORD *)(v48 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v48);
    v49 = *(_QWORD *)(v46[7] + 16LL);
    if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
      v49 = sub_1BD6A48(inited);
    System_Text_StringBuilder__AppendFormat_61736900(v21, v44, **(System_Object_array ***)(v49 + 184), 0LL);
  }
LABEL_61:
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v2->fields.giftList )
    goto LABEL_68;
  v50 = (CommonUI_o *)this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                      (System_Collections_Generic_List_object__o *)v2->fields.giftList,
                                                                      (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v21 )
    goto LABEL_68;
  v51 = this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v21->klass->vtable._3_ToString.method)(
                                                                      v21,
                                                                      v21->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v52 = v2->fields.CS___8__locals1;
  if ( !v52 )
    goto LABEL_68;
  _9__3 = v52->fields.__9__3;
  v54 = this;
  if ( !_9__3 )
  {
    _9__3 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B86604(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__3,
      (Il2CppObject *)v52,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__,
      0LL);
    v52->fields.__9__3 = _9__3;
    sub_1B8635C((CGThumbnailListItem_o *)&v52->fields.__9__3, (int32_t)_9__3, v55, v56);
  }
  if ( !v50 )
    goto LABEL_68;
  CommonUI__OpenMissionRewardGetDialog(
    v50,
    (GiftEntity_array *)v51,
    (System_String_o *)v54,
    _9__3,
    v2->fields.isGetNoReward,
    0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v2; // x19
  __int64 v3; // x1
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__5; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4A52779 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1B863B8(
                                                                        &Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__,
                                                                        v3);
    byte_4A52779 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__5 = v2->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v2,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__,
      0LL);
    v2->fields.__9__5 = _9__5;
    sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.__9__5, (int32_t)_9__5, v7, v8);
  }
  if ( !_4__this )
LABEL_8:
    sub_1B86614(this, method);
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
  __int64 v10; // x1
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct EventMissionItemListViewManager_o *_4__this; // x8
  Il2CppObject *v13; // x20
  System_String_o *v14; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v15; // x23
  System_Action_o *_9__6; // x22
  System_String_o *v17; // x19
  System_String_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4A5277A & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&LocalizationManager_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v5);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__, v6);
    sub_1B863B8(&StringLiteral_8523/*"MISSION_ACTION_SUCCESS"*/, v7);
    sub_1B863B8(&StringLiteral_1/*""*/, v8);
    byte_4A5277A = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8523/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v14, (Il2CppObject *)this->fields.sendName, 0LL);
  v15 = this->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_14;
  _9__6 = v15->fields.__9__6;
  v17 = (System_String_o *)Instance;
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v15,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__,
      0LL);
    v15->fields.__9__6 = _9__6;
    sub_1B8635C((CGThumbnailListItem_o *)&v15->fields.__9__6, (int32_t)_9__6, v19, v20);
  }
  if ( !v13 )
LABEL_14:
    sub_1B86614(Instance, v10);
  CommonUI__OpenNotificationDialog((CommonUI_o *)v13, v18, v17, _9__6, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool result; // w0

  if ( (byte_4A5277C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&System_Func_bool__TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v4);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__, v5);
    sub_1B863B8(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__, v6);
    sub_1B863B8(&EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo, v7);
    sub_1B863B8(&UnityEngine_WaitUntil_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_5404/*"END_EFFECT"*/, v9);
    byte_4A5277C = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL);
    if ( !_4__this )
      goto LABEL_13;
    Instance = (Il2CppObject *)_4__this->fields.targetFSM;
    if ( !Instance )
      goto LABEL_13;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5404/*"END_EFFECT"*/, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v12 = sub_1B86604(EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    if ( v12 )
    {
      *(_BYTE *)(v12 + 16) = 0;
      v15 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v15,
        (Il2CppObject *)v12,
        Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__,
        0LL);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v15, v16);
        v17 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v17,
          (Il2CppObject *)v12,
          Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__,
          0LL);
        v18 = (UnityEngine_WaitUntil_o *)sub_1B86604(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v18, v17, 0LL);
        this->fields.__2__current = (Il2CppObject *)v18;
        p__2__current = &this->fields.__2__current;
        sub_1B8635C((CGThumbnailListItem_o *)p__2__current, (int32_t)v18, v20, v21);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_13:
    sub_1B86614(Instance, v14);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_EventMissionItemListViewManager__afterReward_d__59_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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