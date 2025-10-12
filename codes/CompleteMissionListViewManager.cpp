void CompleteMissionListViewManager___ctor(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C364E6 & 1) == 0 )
  {
    sub_1C32C20(&MissionListViewManager_TypeInfo);
    byte_4C364E6 = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0);
}


void CompleteMissionListViewManager__AcceptReward(
        CompleteMissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 Master_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftMaster_o *v12; // x20
  struct EventMissionEntity_o *v13; // x8
  __int64 v14; // x8
  __int64 v15; // x20
  unsigned __int64 v16; // x23
  __int64 v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Object_array *v20; // x27
  il2cpp_array_size_t max_length; // x8
  char *v22; // x0
  System_Text_StringBuilder_o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Text_StringBuilder_o *v26; // x0
  System_Text_StringBuilder_o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject **v33; // x21
  System_Object_array *v34; // x8
  int v35; // w28
  unsigned int v36; // w9
  __int64 v37; // x27
  Il2CppObject *v38; // x8
  Il2CppObject *v39; // x8
  Il2CppObject *v40; // x8
  Il2CppObject *v41; // x8
  EventRewardSetEntity_o *SetRewardData; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  Il2CppObject **v48; // x22
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *Instance; // x21
  System_Action_o *v51; // x22
  System_Collections_Generic_List_object__o *v52; // x26
  System_Collections_Generic_List_object__o *v53; // x22
  const MethodInfo_39E2904 **v54; // x23
  unsigned int v55; // w29
  Il2CppObject *v56; // x8
  Il2CppObject *v57; // x8
  ServantEntity_o *v58; // x24
  bool IsCombineMaterial; // w25
  Il2CppObject *v60; // x8
  System_String_o *v61; // x0
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  __int64 v65; // x5
  __int64 v66; // x6
  __int64 v67; // x7
  Il2CppObject *v68; // x8
  Il2CppObject *v69; // x24
  Il2CppObject *v70; // x0
  Il2CppObject *v71; // x24
  System_Text_StringBuilder_o *monitor; // x25
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  Il2CppObject *v75; // x1
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  Il2CppObject *v80; // x8
  Il2CppObject *v81; // x8
  bool IsCountableWithPlus; // w0
  Il2CppObject **v83; // x8
  Il2CppObject *v84; // x25
  System_Text_StringBuilder_o *v85; // x24
  const MethodInfo_39E2904 **v86; // x20
  int64_t monitor_high; // x23
  Il2CppObject *v88; // x8
  System_Collections_Generic_List_object__o *v89; // x19
  System_String_o *v90; // x26
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  __int64 v94; // x5
  __int64 v95; // x6
  __int64 v96; // x7
  Il2CppObject *v97; // x0
  __int64 v98; // x8
  System_Text_StringBuilder_o *v99; // x25
  __int64 v100; // x8
  System_Collections_Generic_List_object__o *v101; // x0
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  System_Collections_Generic_List_object__o *v105; // x21
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  System_Action_o *v108; // x21
  Il2CppObject *v109; // x0
  EventRewardSetEntity_o *v110; // x20
  CommonUI_o *v111; // x23
  System_String_o *v112; // x0
  System_String_o *v113; // x0
  Il2CppObject *v114; // x24
  System_String_o *v115; // x21
  MissionRewardGetDialog_ClickDelegate_o *v116; // x22
  __int64 v117; // x0
  CompleteMissionListViewManager_o *v118; // [xsp+8h] [xbp-98h]
  __int64 v119; // [xsp+10h] [xbp-90h]
  int64_t v120; // [xsp+18h] [xbp-88h] BYREF
  Il2CppObject *v121; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v122; // [xsp+28h] [xbp-78h] BYREF
  CompleteMissionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Object_array *array; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C364D5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Array_Resize_GiftEntity___);
    sub_1C32C20(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity___ctor___78008696);
    sub_1C32C20(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__);
    sub_1C32C20(&CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__);
    sub_1C32C20(&CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
    sub_1C32C20(&StringLiteral_8676/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_1C32C20(&StringLiteral_8675/*"MISSION_ACTION_SUCCESS"*/);
    sub_1C32C20(&StringLiteral_25209/*"{0}×{1:#,0}"*/);
    sub_1C32C20(&StringLiteral_25262/*"×"*/);
    sub_1C32C20(&StringLiteral_8671/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_1C32C20(&StringLiteral_49/*"\n "*/);
    sub_1C32C20(&StringLiteral_25571/*"＋"*/);
    byte_4C364D5 = 1;
  }
  v122 = 0;
  entity = 0;
  v121 = 0;
  v5 = sub_1C32E6C(CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_52;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_52;
  v12 = (GiftMaster_o *)Master_object;
  if ( !Master_object )
    goto LABEL_52;
  array = (System_Object_array *)GiftMaster__GetGiftListById(
                                   (GiftMaster_o *)Master_object,
                                   missionToRecieve->fields.giftId,
                                   0);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  v13 = this->fields.missionToRecieve;
  if ( !v13 || !Master_object )
    goto LABEL_52;
  Master_object = CompleteMissionMaster__TryGetEntityFromObjectId(
                    (CompleteMissionMaster_o *)Master_object,
                    &entity,
                    v13->fields.id,
                    0);
  *(_BYTE *)(v5 + 48) = Master_object & 1;
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_52;
    Master_object = (__int64)GiftMaster__GetGiftListById(v12, entity->fields.giftId, 0);
    if ( !Master_object )
      goto LABEL_52;
    v14 = *(_QWORD *)(Master_object + 24);
    v15 = Master_object;
    if ( (int)v14 >= 1 )
    {
      v16 = 0;
      while ( v16 < (unsigned int)v14 )
      {
        if ( !array )
          goto LABEL_52;
        v17 = *(_QWORD *)(v15 + 32 + 8 * v16);
        System_Array__Resize_object_(
          &array,
          LODWORD(array->max_length) + 1,
          (const MethodInfo_309B254 *)Method_System_Array_Resize_GiftEntity___);
        v20 = array;
        if ( !array )
          goto LABEL_52;
        if ( v17 )
        {
          Master_object = sub_1C32D5C(v17, array->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v117 = sub_1C32EA0(0);
            sub_1C32D48(v117, 0);
          }
        }
        max_length = v20->max_length;
        if ( !(_DWORD)max_length )
          break;
        v22 = (char *)v20 + ((__int64)((max_length << 32) - 0x100000000LL) >> 29);
        *((_QWORD *)v22 + 4) = v17;
        sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 32), v17, v18, v19);
        LODWORD(v14) = *(_DWORD *)(v15 + 24);
        if ( (__int64)++v16 >= (int)v14 )
          goto LABEL_22;
      }
LABEL_158:
      sub_1C32E84(Master_object);
    }
  }
LABEL_22:
  v23 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v23, 0);
  *(_QWORD *)(v5 + 40) = v23;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)v23, v24, v25);
  v26 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v26, 0);
  v27 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v27, 0);
  *(_QWORD *)(v5 + 32) = v27;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v27, v28, v29);
  v30 = sub_1C32E6C(CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0);
  if ( !v30 )
    goto LABEL_52;
  *(_QWORD *)(v30 + 48) = v5;
  v33 = (Il2CppObject **)(v30 + 48);
  sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 48), v5, v31, v32);
  Master_object = (__int64)this->fields.missionToRecieve;
  if ( !Master_object )
    goto LABEL_52;
  if ( *(_DWORD *)(Master_object + 80) != 1 )
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Master_object, 0);
    *(_QWORD *)(v30 + 32) = SetRewardData;
    sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 32), (int32_t)SetRewardData, v43, v44);
    if ( *(_QWORD *)(v30 + 32) )
    {
      v47 = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 32LL);
      *(_QWORD *)(v30 + 40) = v47;
      v48 = (Il2CppObject **)(v30 + 40);
      sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 40), v47, v45, v46);
      getSvtList = this->fields.getSvtList;
      if ( getSvtList && getSvtList->max_length )
      {
        Master_object = (__int64)this->fields.touchBlockObj;
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
          v51 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v51,
            (Il2CppObject *)v30,
            Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__,
            0);
          if ( Instance )
          {
            SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v51, 0);
            goto LABEL_157;
          }
        }
      }
      else if ( *v33 )
      {
        ActionExtensions__Call((System_Action_o *)(*v33)[1].monitor, 0);
        v109 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v110 = *(EventRewardSetEntity_o **)(v30 + 32);
        v111 = (CommonUI_o *)v109;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v112 = LocalizationManager__Get((System_String_o *)StringLiteral_8675/*"MISSION_ACTION_SUCCESS"*/, 0);
        v113 = System_String__Format(v112, *v48, 0);
        v114 = *v33;
        v115 = v113;
        v116 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1C32E6C(MissionRewardGetDialog_ClickDelegate_TypeInfo);
        MissionRewardGetDialog_ClickDelegate___ctor(
          v116,
          v114,
          Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__,
          0);
        if ( v111 )
        {
          CommonUI__OpenMissionRewardGetDialog_31273884(v111, v110, v115, v116, 0);
          goto LABEL_157;
        }
      }
    }
LABEL_52:
    sub_1C32E7C(Master_object);
  }
  Master_object = (__int64)this->fields.touchBlockObj;
  if ( !Master_object )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  *(_DWORD *)(v30 + 24) = 0;
  v34 = array;
  v119 = v30;
  if ( !array )
    goto LABEL_52;
  v35 = array->max_length;
  if ( v35 >= 1 )
  {
    v36 = 0;
    while ( v36 < LODWORD(v34->max_length) )
    {
      v37 = (int)v36;
      v38 = v34->m_Items[v36];
      if ( !v38 )
        goto LABEL_52;
      Master_object = Gift__IsServant_40327796(HIDWORD(v38[1].klass), 0);
      if ( (Master_object & 1) == 0 )
      {
        if ( !array )
          goto LABEL_52;
        if ( (unsigned int)v37 >= LODWORD(array->max_length) )
          goto LABEL_158;
        v39 = array->m_Items[v37];
        if ( !v39 )
          goto LABEL_52;
        Master_object = Gift__IsCommandCode_40328188(HIDWORD(v39[1].klass), 0);
        if ( (Master_object & 1) == 0 )
        {
          if ( !array )
            goto LABEL_52;
          if ( (unsigned int)v37 >= LODWORD(array->max_length) )
            goto LABEL_158;
          v40 = array->m_Items[v37];
          if ( !v40 )
            goto LABEL_52;
          Master_object = Gift__IsCostumeRelease(HIDWORD(v40[1].klass), 0);
          if ( (Master_object & 1) == 0 )
          {
            Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Master_object )
              goto LABEL_52;
            Master_object = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Master_object,
                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( !array )
              goto LABEL_52;
            if ( (unsigned int)v37 >= LODWORD(array->max_length) )
              goto LABEL_158;
            v41 = array->m_Items[v37];
            if ( !v41 || !Master_object )
              goto LABEL_52;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &v122,
                              (int32_t)v41[1].monitor,
                              (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !v122 || !Master_object )
                goto LABEL_52;
              Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v122[1].klass, 0);
              if ( (Master_object & 1) == 0 )
                ++*(_DWORD *)(v30 + 24);
            }
          }
        }
      }
      if ( v35 - 1 == (_DWORD)v37 )
        goto LABEL_59;
      v34 = array;
      v36 = v37 + 1;
      if ( !array )
        goto LABEL_52;
    }
    goto LABEL_158;
  }
LABEL_59:
  v52 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v53 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( v35 >= 1 )
  {
    v54 = (const MethodInfo_39E2904 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    v55 = 0;
    v118 = this;
    do
    {
      if ( !array )
        goto LABEL_52;
      if ( v55 >= LODWORD(array->max_length) )
        goto LABEL_158;
      v56 = array->m_Items[v55];
      if ( !v56 )
        goto LABEL_52;
      Master_object = Gift__IsServant_40327796(HIDWORD(v56[1].klass), 0);
      if ( (Master_object & 1) != 0 )
      {
        Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v54);
        if ( !Master_object )
          goto LABEL_52;
        Master_object = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Master_object,
                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !array )
          goto LABEL_52;
        if ( v55 >= LODWORD(array->max_length) )
          goto LABEL_158;
        v57 = array->m_Items[v55];
        if ( !v57 )
          goto LABEL_52;
        if ( !Master_object )
          goto LABEL_52;
        Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   (int32_t)v57[1].monitor,
                                   (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Master_object )
          goto LABEL_52;
        v58 = (ServantEntity_o *)Master_object;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Master_object + 84), 0);
        Master_object = SvtType__IsStatusUp(v58->fields.type, 0);
        v60 = *v33;
        if ( !*v33 )
          goto LABEL_52;
        if ( LOBYTE(v60[3].klass) | (IsCombineMaterial | (unsigned __int8)Master_object) & 1 )
        {
          Master_object = (__int64)v60[2].monitor;
          if ( !Master_object )
            goto LABEL_52;
          v61 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 360LL))(
                                     Master_object,
                                     *(_QWORD *)(*(_QWORD *)Master_object + 368LL));
          Master_object = System_String__IsNullOrEmpty(v61, 0);
          if ( (Master_object & 1) == 0 )
          {
            if ( !*v33 )
              goto LABEL_52;
            Master_object = (__int64)(*v33)[2].monitor;
            if ( !Master_object )
              goto LABEL_52;
            System_Text_StringBuilder__Append_63603608(
              (System_Text_StringBuilder_o *)Master_object,
              (System_String_o *)StringLiteral_49/*"\n "*/,
              0);
          }
          Master_object = (__int64)ServantEntity__getName(v58, -1, -1, 0, 0);
          if ( !array )
            goto LABEL_52;
          if ( v55 >= LODWORD(array->max_length) )
            goto LABEL_158;
          v68 = array->m_Items[v55];
          if ( !v68 )
            goto LABEL_52;
          v69 = (Il2CppObject *)Master_object;
          LODWORD(v120) = HIDWORD(v68[1].monitor);
          v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v120, v62, v63, v64, v65, v66, v67);
          Master_object = (__int64)System_String__Format_63559836((System_String_o *)StringLiteral_25209/*"{0}×{1:#,0}"*/, v69, v70, 0);
          if ( !*v33 )
            goto LABEL_52;
          v71 = (Il2CppObject *)Master_object;
          monitor = (System_Text_StringBuilder_o *)(*v33)[2].monitor;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8671/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
          if ( !monitor )
            goto LABEL_52;
          Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                     monitor,
                                     (System_String_o *)Master_object,
                                     v71,
                                     0);
          if ( !array )
            goto LABEL_52;
          if ( v55 >= LODWORD(array->max_length) )
            goto LABEL_158;
          if ( !v53 )
            goto LABEL_52;
          v75 = array->m_Items[v55];
          items = v53->fields._items;
          v77 = Method_System_Collections_Generic_List_GiftEntity__Add__;
          ++v53->fields._version;
          if ( !items )
            goto LABEL_52;
          size = v53->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v100 = v77[4];
            v101 = v53;
LABEL_132:
            System_Collections_Generic_List_object___AddWithResize(
              v101,
              v75,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v100 + 192) + 112LL));
            continue;
          }
          v79 = &items->obj.klass + size;
          v53->fields._size = size + 1;
LABEL_91:
          v79[4] = (Il2CppClass *)v75;
          sub_1C32BC4((CGThumbnailListItem_o *)(v79 + 4), (int32_t)v75, v73, v74);
        }
      }
      else
      {
        if ( !array )
          goto LABEL_52;
        if ( v55 >= LODWORD(array->max_length) )
          goto LABEL_158;
        v80 = array->m_Items[v55];
        if ( !v80 )
          goto LABEL_52;
        Master_object = Gift__IsItem_40327744(HIDWORD(v80[1].klass), 0);
        if ( (Master_object & 1) != 0 )
        {
          Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v54);
          if ( !Master_object )
            goto LABEL_52;
          Master_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Master_object,
                                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !array )
            goto LABEL_52;
          if ( v55 >= LODWORD(array->max_length) )
            goto LABEL_158;
          v81 = array->m_Items[v55];
          if ( !v81 || !Master_object )
            goto LABEL_52;
          Master_object = DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &v121,
                            (int32_t)v81[1].monitor,
                            (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Master_object & 1) != 0 )
          {
            Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !v121 || !Master_object )
              goto LABEL_52;
            Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v121[1].klass, 0);
            if ( (Master_object & 1) == 0 )
            {
              if ( !array )
                goto LABEL_52;
              if ( v55 >= LODWORD(array->max_length) )
                goto LABEL_158;
              Master_object = (__int64)array->m_Items[v55];
              if ( !Master_object )
                goto LABEL_52;
              Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0);
              if ( (Master_object & 1) == 0 || !this->fields.isQpAlreadyMax )
              {
                if ( !v121 )
                  goto LABEL_52;
                IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)v121[3].klass, 0);
                v83 = (Il2CppObject **)&StringLiteral_25571/*"＋"*/;
                if ( !IsCountableWithPlus )
                  v83 = (Il2CppObject **)&StringLiteral_25262/*"×"*/;
                v84 = *v83;
                v85 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
                System_Text_StringBuilder___ctor(v85, 0);
                if ( !v121 )
                  goto LABEL_52;
                if ( !v85 )
                  goto LABEL_52;
                Master_object = (__int64)System_Text_StringBuilder__Append_63603608(
                                           v85,
                                           (System_String_o *)v121[1].monitor,
                                           0);
                if ( !array )
                  goto LABEL_52;
                if ( v55 >= LODWORD(array->max_length) )
                  goto LABEL_158;
                Master_object = (__int64)array->m_Items[v55];
                if ( !Master_object )
                  goto LABEL_52;
                v86 = v54;
                Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0);
                if ( (Master_object & 1) == 0
                  || !this->fields.isQpMaxAlert
                  || (monitor_high = this->fields.getQpValue) == 0 )
                {
                  if ( !array )
                    goto LABEL_52;
                  if ( v55 >= LODWORD(array->max_length) )
                    goto LABEL_158;
                  v88 = array->m_Items[v55];
                  if ( !v88 )
                    goto LABEL_52;
                  monitor_high = SHIDWORD(v88[1].monitor);
                }
                v89 = v52;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v90 = LocalizationManager__Get((System_String_o *)StringLiteral_8676/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0);
                v120 = monitor_high;
                v97 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v120, v91, v92, v93, v94, v95, v96);
                Master_object = (__int64)System_Text_StringBuilder__AppendFormat_63609960(v85, v90, v84, v97, 0);
                v98 = *(_QWORD *)(v119 + 48);
                if ( !v98 )
                  goto LABEL_52;
                v99 = *(System_Text_StringBuilder_o **)(v98 + 32);
                v52 = v89;
                v54 = v86;
                if ( *(int *)(v119 + 24) >= 2 )
                {
                  this = v118;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8671/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
                  if ( !v99 )
                    goto LABEL_52;
                  Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                             v99,
                                             (System_String_o *)Master_object,
                                             (Il2CppObject *)v85,
                                             0);
                  if ( !*v33 )
                    goto LABEL_52;
                  Master_object = (__int64)(*v33)[2].klass;
                  if ( !Master_object )
                    goto LABEL_52;
                  Master_object = (__int64)System_Text_StringBuilder__Append_63603608(
                                             (System_Text_StringBuilder_o *)Master_object,
                                             (System_String_o *)StringLiteral_49/*"\n "*/,
                                             0);
                }
                else
                {
                  Master_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v85->klass->vtable._3_ToString.methodPtr)(
                                    v85,
                                    v85->klass->vtable._3_ToString.method);
                  this = v118;
                  if ( !v99 )
                    goto LABEL_52;
                  Master_object = (__int64)System_Text_StringBuilder__Append_63603608(
                                             v99,
                                             (System_String_o *)Master_object,
                                             0);
                }
                if ( !array )
                  goto LABEL_52;
                if ( v55 >= LODWORD(array->max_length) )
                  goto LABEL_158;
                if ( !v52 )
                  goto LABEL_52;
                v75 = array->m_Items[v55];
                v102 = v52->fields._items;
                v103 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                ++v52->fields._version;
                if ( !v102 )
                  goto LABEL_52;
                v104 = v52->fields._size;
                if ( (unsigned int)v104 >= LODWORD(v102->max_length) )
                {
                  v100 = v103[4];
                  v101 = v52;
                  goto LABEL_132;
                }
                v79 = &v102->obj.klass + v104;
                v52->fields._size = v104 + 1;
                goto LABEL_91;
              }
            }
          }
        }
      }
    }
    while ( v35 != ++v55 );
  }
  v105 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58294448(
    v105,
    (System_Collections_Generic_IEnumerable_T__o *)v52,
    (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_GiftEntity___ctor___78008696);
  *(_QWORD *)(v119 + 16) = v105;
  sub_1C32BC4((CGThumbnailListItem_o *)(v119 + 16), (int32_t)v105, v106, v107);
  Master_object = *(_QWORD *)(v119 + 16);
  if ( !Master_object )
    goto LABEL_52;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)v53,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  v108 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v108,
    (Il2CppObject *)v119,
    Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__,
    0);
  if ( this->fields.isTreasureEffect )
    MissionListViewManager__StartEventMissionClearItemAction(
      (MissionListViewManager_o *)this,
      (GiftEntity_array *)array,
      0,
      v108,
      0);
  else
    MissionListViewManager__StartItemGetEffectAction(
      (MissionListViewManager_o *)this,
      (GiftEntity_array *)array,
      0,
      v108,
      0);
LABEL_157:
  ActionExtensions__Call(this->fields.reDispAct, 0);
}


void CompleteMissionListViewManager__Awake(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void CompleteMissionListViewManager__CehckQpMaxAlert(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        System_Action_o *decideCallback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  int *QpGiftEntity; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x24
  int *v12; // x22
  System_String_o *Empty; // x20
  _QWORD *v14; // x23
  int64_t v15; // x25
  int64_t QpMax; // x8
  __int64 v17; // x25
  __int64 v18; // x26
  System_String_o *v19; // x24
  Il2CppObject *NumberFormatLong; // x25
  System_String_o *v21; // x0
  BalanceConfig_c *v22; // x8
  Il2CppObject *v23; // x26
  Il2CppObject *v24; // x0
  System_String_o *v25; // x24
  int64_t v26; // x8
  int64_t v27; // x8
  System_String_o *v28; // x24
  System_String_o *v29; // x0
  int64_t v30; // x8
  Il2CppObject *v31; // x23
  System_String_o *v32; // x0
  BalanceConfig_c *v33; // x8
  Il2CppObject *v34; // x25
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x22
  System_String_o *v38; // x23
  System_String_o *v39; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x25
  System_String_o *v41; // x19
  System_Action_o *v42; // x26
  System_Action_o *onTransition; // x21
  Il2CppObject *v44; // x27
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3

  if ( (byte_4C364E5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__);
    sub_1C32C20(&CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
    sub_1C32C20(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1C32C20(&StringLiteral_8714/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_8717/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_11691/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_1C32C20(&StringLiteral_11690/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_1C32C20(&StringLiteral_11697/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_4C364E5 = 1;
  }
  v7 = sub_1C32E6C(CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_35;
  *(_QWORD *)(v7 + 16) = decideCallback;
  v11 = v7 + 16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)decideCallback, v9, v10);
  if ( !missionEntity )
    goto LABEL_35;
  QpGiftEntity = (int *)EventMissionEntity__GetQpGiftEntity(missionEntity, 0);
  if ( !QpGiftEntity )
  {
LABEL_18:
    if ( *(_QWORD *)v11 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v11 + 64LL),
        *(_QWORD *)(*(_QWORD *)v11 + 40LL));
      return;
    }
LABEL_35:
    sub_1C32E7C(QpGiftEntity);
  }
  v12 = QpGiftEntity;
  Empty = string_TypeInfo->static_fields->Empty;
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  *(_OWORD *)&this->fields.overQpValue = 0u;
  QpGiftEntity = (int *)UserGameMaster__getSelfUserGame(0);
  if ( !QpGiftEntity )
    goto LABEL_35;
  v14 = QpGiftEntity;
  v15 = *((_QWORD *)QpGiftEntity + 12);
  QpGiftEntity = (int *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    QpGiftEntity = (int *)BalanceConfig_TypeInfo;
  }
  QpMax = *(_QWORD *)(*((_QWORD *)QpGiftEntity + 23) + 8LL);
  if ( v15 < QpMax )
  {
    v17 = v14[12];
    v18 = v12[7];
    if ( !QpGiftEntity[56] )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity);
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v17 + v18 > QpMax )
    {
      *(_WORD *)&this->fields.isQpMaxAlert = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8717/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0);
      NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v12[7], 0);
      v21 = LocalizationManager__GetNumberFormatLong(v14[12], 0);
      v22 = BalanceConfig_TypeInfo;
      v23 = (Il2CppObject *)v21;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v22 = BalanceConfig_TypeInfo;
      }
      v24 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v22->static_fields->QpMax, 0);
      v25 = System_String__Format_63559904(v19, NumberFormatLong, v23, v24, 0);
      v26 = BalanceConfig_TypeInfo->static_fields->QpMax - v14[12];
      this->fields.getQpValue = v26;
      v27 = v12[7] - v26;
      goto LABEL_25;
    }
    goto LABEL_18;
  }
  *(_WORD *)&this->fields.isQpMaxAlert = 257;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8714/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0);
  v29 = LocalizationManager__GetNumberFormatLong(v12[7], 0);
  v30 = v14[12];
  v31 = (Il2CppObject *)v29;
  v32 = LocalizationManager__GetNumberFormatLong(v30, 0);
  v33 = BalanceConfig_TypeInfo;
  v34 = (Il2CppObject *)v32;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  v35 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v33->static_fields->QpMax, 0);
  v36 = System_String__Format_63559904(v28, v31, v34, v35, 0);
  v27 = v12[7];
  v25 = v36;
LABEL_25:
  this->fields.overQpValue = v27;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11691/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11697/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11690/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  v41 = v39;
  v42 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v7,
    Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__,
    0);
  QpGiftEntity = (int *)CompleteMissionListViewManager___c_TypeInfo;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    QpGiftEntity = (int *)CompleteMissionListViewManager___c_TypeInfo;
  }
  onTransition = *(System_Action_o **)(*((_QWORD *)QpGiftEntity + 23) + 32LL);
  if ( !onTransition )
  {
    if ( !QpGiftEntity[56] )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity);
      QpGiftEntity = (int *)CompleteMissionListViewManager___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)QpGiftEntity + 23);
    onTransition = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(onTransition, v44, Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, 0);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__68_1 = onTransition;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__68_1, (int32_t)onTransition, v46, v47);
  }
  if ( !qpMaxAlertDialog )
    goto LABEL_35;
  ServantSellMaxAlertDialog__Open(qpMaxAlertDialog, Empty, v25, Empty, v37, v38, v41, v42, onTransition, 0, 1, 0);
}


void CompleteMissionListViewManager__CreateList(
        CompleteMissionListViewManager_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionList,
        System_Int32_array *mstMissionIdList,
        int32_t type,
        System_Action_o *redispCallBack,
        const MethodInfo *method)
{
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  CompleteMissionListViewItem_o *v14; // x23
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t CompleteMissionFilterId_k__BackingField; // w25
  __int64 *v26; // x8
  void *ObjectList; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int v32; // w22
  System_Collections_Generic_List_object__o *v33; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C364CA & 1) == 0 )
  {
    sub_1C32C20(&CompleteMissionListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_8812/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1C32C20(&StringLiteral_8679/*"MISSION_EMPTY_TXT"*/);
    byte_4C364CA = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.listType = 0;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v37 = v36;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v37.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v14 = (CompleteMissionListViewItem_o *)sub_1C32E6C(CompleteMissionListViewItem_TypeInfo);
      CompleteMissionListViewItem___ctor(v14, (EventMissionEntity_o *)current, type, v15);
      if ( !itemList )
        sub_1C32E7C(v16);
      items = itemList->fields._items;
      v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C32E7C(v16);
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v14,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v14;
        sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v14, v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v10, v11);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !byte_4C31EBA )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EBA = 1;
  }
  CompleteMissionFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( CompleteMissionFilterId_k__BackingField )
    v26 = &StringLiteral_8679/*"MISSION_EMPTY_TXT"*/;
  else
    v26 = &StringLiteral_8812/*"MST_MISSION_EMPTY_TXT"*/;
  ObjectList = LocalizationManager__Get((System_String_o *)*v26, 0);
  if ( !emptyMessageLabel )
    goto LABEL_39;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0);
  if ( !byte_4C31EBA )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EBA = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  CompleteMissionListViewManager__setList(this, v28);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.reDispAct, (int32_t)redispCallBack, v30, v31);
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v29);
  if ( !ObjectList )
LABEL_39:
    sub_1C32E7C(ObjectList);
  v32 = *((_DWORD *)ObjectList + 6);
  v33 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v32 >= 1 )
  {
    for ( i = 0; i != v32; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v33,
               i,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ObjectList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_39;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)Item, 0);
      }
    }
  }
}


void CompleteMissionListViewManager__DestroyList(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


CompleteMissionListViewItem_o *CompleteMissionListViewManager__GetItem(
        CompleteMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CompleteMissionListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C364CD & 1) == 0 )
  {
    sub_1C32C20(&CompleteMissionListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C364CD = 1;
  }
  result = (CompleteMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CompleteMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (CompleteMissionListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
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


void CompleteMissionListViewManager__ModifyItem(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  Il2CppObject *Entity; // x20
  bool v6; // cc
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *v8; // x8
  int64_t v9; // x20
  _BOOL8 v10; // x0
  MissionListViewItem_o *current; // x22
  __int64 naturalAligment; // x10
  __int64 MissionId; // x0
  struct EventMissionEntity_o *v14; // x8
  int32_t v15; // w23
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C364DC & 1) == 0 )
  {
    sub_1C32C20(&CompleteMissionListViewItem_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C364DC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             missionToRecieve->fields.id,
             (const MethodInfo_3396838 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !Entity )
    goto LABEL_46;
  if ( Instance <= (__int64)Entity[4].klass )
  {
    this->fields.isEndEvent = 0;
    return;
  }
  v6 = Instance <= (__int64)Entity[4].monitor;
  this->fields.isEndEvent = v6;
  if ( v6 && this->fields.itemList )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (int64_t)NetworkManager_TypeInfo;
      }
      v8 = this->fields.missionToRecieve;
      if ( v8 )
      {
        if ( MasterData_object )
        {
          Instance = (int64_t)UserEventMissionMaster__GetEntity(
                                (UserEventMissionMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                                v8->fields.id,
                                0);
          if ( this->fields.itemList )
          {
            v9 = Instance;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v18,
              (System_Collections_Generic_List_object__o *)this->fields.itemList,
              (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v19 = v18;
            while ( 1 )
            {
              v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v19,
                      (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v10 )
                break;
              current = (MissionListViewItem_o *)v19.fields._current;
              if ( !v19.fields._current
                || (naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment,
                    v19.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
                || (CompleteMissionListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
              {
                sub_1C32E7C(v10);
              }
              MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v19.fields._current, 0);
              v14 = this->fields.missionToRecieve;
              if ( !v14 )
                sub_1C32E7C(MissionId);
              v15 = MissionId;
              if ( (_DWORD)MissionId == v14->fields.id )
              {
                if ( !byte_4C31EB2 )
                {
                  MissionId = sub_1C32C20(&EventRewardSaveData_TypeInfo);
                  byte_4C31EB2 = 1;
                }
                EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v15;
                if ( !v9 )
                  sub_1C32E7C(MissionId);
                MissionListViewItem__ModifyItem(current, *(_DWORD *)(v9 + 32) == 5, 0);
              }
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v17 = current->fields.viewObject;
                if ( !v17 )
                  sub_1C32E7C(0);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, const MethodInfo *))v17->klass->vtable._5_SetItem.methodPtr)(
                  v17,
                  current,
                  v17->klass->vtable._5_SetItem.method);
              }
              if ( current->fields.dispNo == 1 )
                ((void (__fastcall *)(MissionListViewItem_o *, const MethodInfo *))current->klass->vtable._6_CheckMissionCond.methodPtr)(
                  current,
                  current->klass->vtable._6_CheckMissionCond.method);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v19,
              (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            return;
          }
        }
      }
    }
LABEL_46:
    sub_1C32E7C(Instance);
  }
}


void CompleteMissionListViewManager__OnChangeAlphaAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20
  const MethodInfo *v7; // x1

  if ( (byte_4C364E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    byte_4C364E4 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, v4);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v6,
                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      CompleteMissionListViewObject__OnChangeAlphaAnim((CompleteMissionListViewObject_o *)ObjectList, v7);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1C32E7C(ObjectList);
  }
}


void CompleteMissionListViewManager__OnClickFilterList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_4C364D0 & 1) == 0 )
  {
    sub_1C32C20(&Method_CompleteMissionListViewManager_OnClickFilterList__);
    byte_4C364D0 = 1;
  }
  v3 = Method_CompleteMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_CompleteMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_C44694[filterStatus];
  CompleteMissionListViewManager__setList(this, v5);
}


void CompleteMissionListViewManager__OnClickListView(
        CompleteMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  const MethodInfo *v7; // x1
  __int64 naturalAligment; // x10
  PlayMakerFSM_o *v9; // x20
  CompleteMissionListViewManager_o *IsHideReward; // x0
  const MethodInfo *v11; // x1
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v13; // x2
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_4C364CE & 1) == 0 )
  {
    sub_1C32C20(&Method_CompleteMissionListViewManager_OnClickListView__);
    sub_1C32C20(&CompleteMissionListViewObject_TypeInfo);
    sub_1C32C20(&StringLiteral_15565/*"Wait_Action"*/);
    byte_4C364CE = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_20;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15565/*"Wait_Action"*/, 0);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (naturalAligment = CompleteMissionListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CompleteMissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)CompleteMissionListViewObject__GetItem((CompleteMissionListViewObject_o *)obj, v7)) == 0 )
  {
LABEL_20:
    sub_1C32E7C(targetFSM);
  }
  v9 = targetFSM;
  IsHideReward = (CompleteMissionListViewManager_o *)((__int64 (__fastcall *)(PlayMakerFSM_o *, _QWORD))targetFSM->klass[1]._1.byval_arg.data)(
                                                       targetFSM,
                                                       *(_QWORD *)&targetFSM->klass[1]._1.byval_arg.bits);
  if ( ((unsigned __int8)IsHideReward & 1) == 0
    || (IsHideReward = (CompleteMissionListViewManager_o *)CompleteMissionListViewItem__get_IsHideReward(
                                                             (CompleteMissionListViewItem_o *)v9,
                                                             v11),
        ((unsigned __int8)IsHideReward & 1) != 0)
    || BYTE4(v9[4].fields.fsmTemplate) )
  {
    if ( LODWORD(v9[4].fields.m_CancellationTokenSource) == 3
      && (LODWORD(v9[3].klass) != 1 || CompleteMissionListViewManager__checkPanelAllOpen(IsHideReward, v11)) )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v9, 0);
      CompleteMissionListViewManager__recieveReward(this, EventMissionEntity, v13);
    }
    else
    {
      v14 = Method_CompleteMissionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C32C38(Method_CompleteMissionListViewManager_OnClickListView__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C32C04(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
    }
  }
  else
  {
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v9, 0, 0);
  }
}


System_Collections_IEnumerator_o *CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
        CompleteMissionListViewManager_o *this,
        GiftEntity_array *rewards,
        System_String_o *rewardDetail,
        bool isCompleteMission,
        const MethodInfo *method)
{
  bool v9; // w23
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C364D6 & 1) == 0 )
  {
    sub_1C32C20(&CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
    byte_4C364D6 = 1;
  }
  v9 = isCompleteMission;
  v10 = sub_1C32E6C(CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(_QWORD *)(v10 + 48) = rewards;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 48), (int32_t)rewards, v13, v14);
  *(_QWORD *)(v10 + 56) = rewardDetail;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 56), (int32_t)rewardDetail, v15, v16);
  *(_BYTE *)(v10 + 40) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


void CompleteMissionListViewManager__RefrashListDisp(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  _BOOL8 v5; // x0
  __int64 naturalAligment; // x11
  int32_t size; // w8
  int32_t v8; // w21
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C364CF & 1) == 0 )
  {
    sub_1C32C20(&CompleteMissionListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    byte_4C364CF = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v4 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v9;
        ;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))i.fields._current->klass->vtable[6].methodPtr)(
          i.fields._current,
          i.fields._current->klass->vtable[6].method) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v5 )
      break;
    if ( i.fields._current )
    {
      naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CompleteMissionListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == CompleteMissionListViewItem_TypeInfo )
      {
        continue;
      }
    }
    sub_1C32E7C(v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
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
    sub_1C32E7C(ObjectList);
  }
}


void CompleteMissionListViewManager__SetOpenItem(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  struct CompleteMissionListViewItem_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v13; // x2
  float openItemTime; // s8
  System_Action_o *v15; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C364DD & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionListViewManager_modifyOpenItem__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1C32C20(&StringLiteral_18846/*"ef_mission_extric01"*/);
    byte_4C364DD = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1C32E7C(0);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v16,
        ObjectList,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
      v17 = v16;
      while ( 1 )
      {
        v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v17,
               (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
        if ( !v4 )
          break;
        current = v17.fields._current;
        if ( !v17.fields._current )
          sub_1C32E7C(v4);
        Item = (MissionListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                          (CompleteMissionListViewObject_o *)v17.fields._current,
                                          v5);
        v8 = (struct CompleteMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1C32E7C(0);
        MissionId = MissionListViewItem__get_MissionId(Item, 0);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4C31EB2 )
          {
            sub_1C32C20(&EventRewardSaveData_TypeInfo);
            byte_4C31EB2 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v8;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openTargetItem, (int32_t)v8, v9, v10);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v8, 0) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0);
            CompleteMissionListViewManager__getEffect((System_String_o *)StringLiteral_18846/*"ef_mission_extric01"*/, transform, v13);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    }
    openItemTime = this->fields.openItemTime;
    v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_CompleteMissionListViewManager_modifyOpenItem__, 0);
    ListViewManager__DelayCallMethod((ListViewManager_o *)this, openItemTime, v15, 0);
  }
}


void CompleteMissionListViewManager__SetResultData(
        CompleteMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w19

  this->fields.getSvtList = svts;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.getSvtList, (int32_t)svts, (int32_t)cmds, method);
  this->fields.getCommandCodeList = cmds;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.getCommandCodeList, (int32_t)cmds, v6, v7);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1C32E7C(v8);
  id = missionToRecieve->fields.id;
  if ( !byte_4C31EB2 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EB2 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
}


System_Collections_IEnumerator_o *CompleteMissionListViewManager__StartPanelAnimCoroutine(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C364E1 & 1) == 0 )
  {
    sub_1C32C20(&CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
    byte_4C364E1 = 1;
  }
  v3 = sub_1C32E6C(CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void CompleteMissionListViewManager___modifyOpenItem_b__58_0(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  float endEffectTime; // s8
  System_Action_o *v4; // x20

  if ( (byte_4C364E7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionListViewManager_actionAfterCallback__);
    byte_4C364E7 = 1;
  }
  CompleteMissionListViewManager__RefrashListDisp(this, method);
  endEffectTime = this->fields.endEffectTime;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CompleteMissionListViewManager_actionAfterCallback__, 0);
  ListViewManager__DelayCallMethod((ListViewManager_o *)this, endEffectTime, v4, 0);
}


void CompleteMissionListViewManager__actionAfterCallback(
        CompleteMissionListViewManager_o *this,
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
    p_actionCallback->klass = 0;
    sub_1C32BC4(p_actionCallback, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))actionCallback->fields.invoke_impl)(
      actionCallback->fields.method_code,
      actionCallback->fields.method);
  }
}


void CompleteMissionListViewManager__afterReward(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0

  if ( (byte_4C364D7 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C32C20(&StringLiteral_5440/*"END_EFFECT"*/);
    byte_4C364D7 = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0),
        (Instance = (AutomatedAction_o *)this->fields.targetFSM) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5440/*"END_EFFECT"*/, 0);
}


void CompleteMissionListViewManager__animAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t dispNo; // w20
  intptr_t m_CachedPtr; // x8

  v2 = this;
  if ( (byte_4C364E0 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C364E0 = 1;
  }
  missionToRecieve = v2->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_12;
  dispNo = missionToRecieve->fields.dispNo;
  this = (CompleteMissionListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (m_CachedPtr = this[2].fields.m_CachedPtr) == 0
    || (this = *(CompleteMissionListViewManager_o **)(m_CachedPtr + 32)) == 0
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     dispNo - 2,
                                                     0)) == 0
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     v2->fields.distanceToTexObj,
                                                     0)) == 0
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
        (this = (CompleteMissionListViewManager_o *)v2->fields.touchBlockObj) == 0) )
  {
LABEL_12:
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void CompleteMissionListViewManager__checkAcceptable(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v5; // x8
  _DWORD *v6; // x20
  _DWORD *v7; // x21
  Il2CppObject *MasterData_object; // x21
  UserPresentBoxEntity_array *VaildList; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BalanceConfig_c *v12; // x0
  __int64 *v13; // x8
  CompleteMissionListViewManager___c_c *v14; // x0
  System_Action_o *_9__46_0; // x20
  Il2CppObject *v16; // x21
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C364D3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__);
    sub_1C32C20(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1C32C20(&StringLiteral_12215/*"SHOW_MSG"*/);
    sub_1C32C20(&StringLiteral_11152/*"REWARD_ACCEPTABLE"*/);
    byte_4C364D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_40;
  if ( !Instance )
    goto LABEL_40;
  Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0);
  v5 = this->fields.missionToRecieve;
  if ( !v5 )
    goto LABEL_40;
  if ( v5->fields.rewardType == 1 )
  {
    v6 = Instance;
    if ( !Instance )
      goto LABEL_40;
    if ( Gift__IsServant_40327796(*((_DWORD *)Instance + 5), 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( Instance )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v6[6],
                       (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Instance )
          {
            v7 = Instance;
            if ( !SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0) && !SvtType__IsStatusUp(v7[21], 0) )
              goto LABEL_29;
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C31812 )
              {
                sub_1C32C20(&NetworkManager_TypeInfo);
                byte_4C31812 = 1;
              }
              Instance = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = NetworkManager_TypeInfo;
              }
              if ( MasterData_object )
              {
                VaildList = UserPresentBoxMaster__getVaildList(
                              (UserPresentBoxMaster_o *)MasterData_object,
                              *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                              0);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  Instance = DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( Instance )
                  {
                    Instance = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 v6[6],
                                 (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( VaildList )
                    {
                      v12 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v12 = BalanceConfig_TypeInfo;
                      }
                      if ( v12->static_fields->PresentBoxMax > SLODWORD(VaildList->max_length) )
                        goto LABEL_29;
                      v14 = CompleteMissionListViewManager___c_TypeInfo;
                      if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
                        v14 = CompleteMissionListViewManager___c_TypeInfo;
                      }
                      _9__46_0 = v14->static_fields->__9__46_0;
                      if ( !_9__46_0 )
                      {
                        if ( !v14->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v14);
                          v14 = CompleteMissionListViewManager___c_TypeInfo;
                        }
                        v16 = (Il2CppObject *)v14->static_fields->__9;
                        _9__46_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                        System_Action___ctor(
                          _9__46_0,
                          v16,
                          Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__,
                          0);
                        static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        static_fields->__9__46_0 = _9__46_0;
                        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__46_0, (int32_t)_9__46_0, v18, v19);
                      }
                      this->fields.ShowMSG = _9__46_0;
                      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ShowMSG, (int32_t)_9__46_0, v10, v11);
                      Instance = this->fields.targetFSM;
                      if ( Instance )
                      {
                        v13 = &StringLiteral_12215/*"SHOW_MSG"*/;
                        goto LABEL_31;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_40:
      sub_1C32E7C(Instance);
    }
  }
LABEL_29:
  Instance = this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_40;
  v13 = &StringLiteral_11152/*"REWARD_ACCEPTABLE"*/;
LABEL_31:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v13, 0);
}


bool CompleteMissionListViewManager__checkPanelAllOpen(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  void *monitor; // x8
  System_Collections_Generic_List_EventMissionEntity__o *v4; // x19

  if ( (byte_4C364E3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C364E3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (monitor = Instance[9].monitor) == 0
    || (v4 = (System_Collections_Generic_List_EventMissionEntity__o *)*((_QWORD *)monitor + 16),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
    || (Instance = (DataManager_o *)EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, v4, 0), !v4)
    || !Instance )
  {
    sub_1C32E7C(Instance);
  }
  return v4->fields._size - 1 == LODWORD(Instance->fields.m_CancellationTokenSource);
}


void CompleteMissionListViewManager__endloadEffect(
        CompleteMissionListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v8; // x1
  struct EventMissionEntity_o *v9; // x8

  if ( (byte_4C364DA & 1) == 0 )
  {
    sub_1C32C20(&CompleteMissionListViewManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4C364DA = 1;
  }
  if ( data )
  {
    CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)CompleteMissionListViewManager_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve )
      goto LABEL_13;
    if ( MissionActionManager__checkScroll(missionToRecieve->fields.id, 5, 0) )
    {
      if ( this->fields.filterStatus )
      {
        this->fields.filterStatus = 0;
        CompleteMissionListViewManager__setList(this, v8);
      }
    }
    else
    {
      CompleteMissionListViewManager__RefrashListDisp(this, v8);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v9 = this->fields.missionToRecieve;
    if ( !v9 || !Instance )
LABEL_13:
      sub_1C32E7C(Instance);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v9->fields.id, 5, 0, 0);
  }
}


UnityEngine_GameObject_o *CompleteMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__51111776; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4C364DB & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&CompleteMissionListViewManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C364DB = 1;
  }
  effectAssetData = CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              effectAssetData,
                              name,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51111776,
                                     (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C313D1 )
  {
    effectAssetData = (AssetData_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C313D6 )
  {
    effectAssetData = (AssetData_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1C32E7C(effectAssetData);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v7;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *CompleteMissionListViewManager__get_ClippingObjectList(
        CompleteMissionListViewManager_o *this,
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL8 v13; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C364C9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C364C9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C32E7C(0);
      Item = (ListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                 (CompleteMissionListViewObject_o *)Component_object,
                                 v8);
      if ( !Item )
        sub_1C32E7C(0);
      if ( Item->fields.isTermination )
      {
        v13 = ListViewManager__ClippingItem_43718444((ListViewManager_o *)this, Item, 0);
        if ( v13 )
        {
          if ( !v3 )
            sub_1C32E7C(v13);
          items = v3->fields._items;
          v15 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C32E7C(v13);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C32E7C(Item);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C32E7C(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v17 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v9;
        sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *CompleteMissionListViewManager__get_ObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C364C8 & 1) == 0 )
  {
    sub_1C32C20(&Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
    byte_4C364C8 = 1;
  }
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                               (MissionListViewManager_o *)this,
                                                                               (const MethodInfo_316534C *)Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
}


void CompleteMissionListViewManager__loadOpenMissionEffect(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4C364D9 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionListViewManager_endloadEffect__);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&StringLiteral_5881/*"Effect/EventMission"*/);
    byte_4C364D9 = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager_endloadEffect__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5881/*"Effect/EventMission"*/, v3, 1, 0);
}


void CompleteMissionListViewManager__modifyOpenItem(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x21
  Il2CppClass *v8; // x0
  System_Action_o *v9; // x20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C364DE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&CompleteMissionListViewItem_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C364DE = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1C32E7C(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v11 = v10;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v11,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v11.fields._current;
      if ( !v11.fields._current
        || (naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment,
            v11.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (CompleteMissionListViewItem_c *)v11.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        sub_1C32E7C(v4);
      }
      klass = v11.fields._current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v8 = current[7].klass;
        if ( !v8 )
          sub_1C32E7C(0);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v8->_1.image + 49))(
          v8,
          current,
          *((_QWORD *)v8->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, 0);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v9, 0);
}


void CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v9; // w22
  int32_t v10; // w21
  __int64 naturalAligment; // x10
  bool v12; // w0
  _QWORD *v13; // x8
  bool v14; // w19
  System_Reflection_MethodBase_o *v15; // x0
  int32_t v16; // w1

  if ( (byte_4C364CC & 1) == 0 )
  {
    sub_1C32C20(&CompleteMissionListViewItem_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C364CC = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.actionCallback, (int32_t)callback, (int32_t)callback, method);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v9 = size - 1;
  if ( size >= 1 )
  {
    v10 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (CompleteMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v9 == v10 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v10;
    }
    while ( itemList );
LABEL_15:
    sub_1C32E7C(itemList);
  }
LABEL_16:
  v10 = 0;
LABEL_17:
  v12 = ListViewManager__MoveTopItem((ListViewManager_o *)this, v10, 1, 0.0, 0);
  v13 = Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__;
  v14 = v12;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C32C38(Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C32C04(v13, v13[4]);
  if ( v14 )
    v16 = 0;
  else
    v16 = 2;
  OverwriteAssetSoundName__PlaySystemSe(v15, v16, 0, 0);
}


void CompleteMissionListViewManager__panelAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchBlockObj; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  Il2CppObject *Entity; // x19
  UnityEngine_GameObject_c *klass; // x8
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  CommonUI_o *v11; // x20
  CompleteMissionListViewManager___c_c *v12; // x8
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v14; // x22
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *countText; // [xsp+40h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4C364E2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C32C20(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__);
    sub_1C32C20(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1C32C20(&StringLiteral_25210/*"{0}×{1}"*/);
    sub_1C32C20(&StringLiteral_15957/*"[^0-9]"*/);
    sub_1C32C20(&StringLiteral_3709/*"COMPLETE_MISSION_ACTION_SUCCESS"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_1172/*"1"*/);
    byte_4C364E2 = 1;
  }
  countText = (System_String_o *)StringLiteral_1/*""*/;
  nameText = (System_String_o *)StringLiteral_1/*""*/;
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             missionToRecieve->fields.missionTargetId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Entity )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)GiftMaster__GetGiftListById(
                                                (GiftMaster_o *)touchBlockObj,
                                                HIDWORD(Entity[1].monitor),
                                                0);
  if ( !touchBlockObj )
    goto LABEL_31;
  klass = touchBlockObj[1].klass;
  if ( !klass )
    return;
  if ( !(_DWORD)klass )
    sub_1C32E84(touchBlockObj);
  touchBlockObj = (UnityEngine_GameObject_o *)touchBlockObj[1].monitor;
  if ( !touchBlockObj )
    goto LABEL_31;
  GiftEntity__GetInfo((GiftEntity_o *)touchBlockObj, &nameText, &countText, 0);
  if ( System_String__IsNullOrEmpty(nameText, 0) )
    return;
  if ( !System_String__IsNullOrEmpty(countText, 0) )
  {
    v7 = countText;
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    v8 = System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_15957/*"[^0-9]"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
    if ( System_String__op_Inequality(v8, (System_String_o *)StringLiteral_1172/*"1"*/, 0) )
      nameText = System_String__Format_63559836(
                   (System_String_o *)StringLiteral_25210/*"{0}×{1}"*/,
                   (Il2CppObject *)nameText,
                   (Il2CppObject *)countText,
                   0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3709/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, 0);
  v10 = System_String__Format(v9, (Il2CppObject *)nameText, 0);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)touchBlockObj;
  v12 = CompleteMissionListViewManager___c_TypeInfo;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v12 = CompleteMissionListViewManager___c_TypeInfo;
  }
  _9__65_0 = v12->static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__65_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__65_0, v14, Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, 0);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = _9__65_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__65_0, (int32_t)_9__65_0, v16, v17);
  }
  if ( !v11 )
LABEL_31:
    sub_1C32E7C(touchBlockObj);
  CommonUI__OpenNotificationDialog(v11, 0, v10, _9__65_0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void CompleteMissionListViewManager__recieveReward(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  EventMissionEntity_o *v13; // x21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4C364D2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionListViewManager_recieveReward__);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__);
    sub_1C32C20(&CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
    byte_4C364D2 = 1;
  }
  v5 = sub_1C32E6C(CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = missionEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)missionEntity, v9, v10);
  MissionListViewManager__SetupGetEffectOptions(
    (MissionListViewManager_o *)this,
    *(EventMissionEntity_o **)(v5 + 24),
    0);
  v11 = Method_CompleteMissionListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_recieveReward__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C32C38(Method_CompleteMissionListViewManager_recieveReward__);
  v12 = (System_Reflection_MethodBase_o *)sub_1C32C04(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0, 0);
  v13 = *(EventMissionEntity_o **)(v5 + 24);
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__,
    0);
  CompleteMissionListViewManager__CehckQpMaxAlert(this, v13, v14, v15);
}


void CompleteMissionListViewManager__setAfterAction(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4C364D8 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4C364D8 = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_1C32E7C(Instance);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, missionToRecieve->fields.id, 5, 1, 0);
  }
  else
  {
    CompleteMissionListViewManager__loadOpenMissionEffect(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionListViewManager__setFilterId(
        CompleteMissionListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  CompleteMissionListViewManager__setList(this, *(const MethodInfo **)&id);
}


void CompleteMissionListViewManager__setFilterName(
        CompleteMissionListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UISprite_o *filterBtnTxt; // x0

  filterBtnTxt = this->fields.filterBtnTxt;
  if ( !filterBtnTxt
    || (UISprite__set_spriteName(filterBtnTxt, targetFile, 0), (filterBtnTxt = this->fields.filterBtnTxt) == 0) )
  {
    sub_1C32E7C(filterBtnTxt);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))filterBtnTxt->klass->vtable._33_MakePixelPerfect.methodPtr)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._33_MakePixelPerfect.method);
}


void CompleteMissionListViewManager__setList(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  const MethodInfo *v10; // x2
  UILabel_o *v11; // x21
  struct ListViewSort_o *v12; // x8
  int v13; // w9
  bool v14; // w2
  int32_t filterStatus; // w19

  if ( (byte_4C364D1 & 1) == 0 )
  {
    sub_1C32C20(&ListViewSort_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8812/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1C32C20(&StringLiteral_17555/*"btn_txt_completed"*/);
    sub_1C32C20(&StringLiteral_17588/*"btn_txt_receipt"*/);
    sub_1C32C20(&StringLiteral_17587/*"btn_txt_progress"*/);
    sub_1C32C20(&StringLiteral_8679/*"MISSION_EMPTY_TXT"*/);
    sub_1C32C20(&StringLiteral_17537/*"btn_txt_all"*/);
    byte_4C364D1 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43737184(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8679/*"MISSION_EMPTY_TXT"*/, 0);
  if ( !emptyMessageLabel )
LABEL_42:
    sub_1C32E7C(operationSortInfo);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0);
  switch ( this->fields.filterStatus )
  {
    case 0:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17537/*"btn_txt_all"*/, v10);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 1, 0);
      v11 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8812/*"MST_MISSION_EMPTY_TXT"*/, 0);
      if ( !v11 )
        goto LABEL_42;
      UILabel__set_text(v11, operationSortInfo, 0);
      goto LABEL_35;
    case 1:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17588/*"btn_txt_receipt"*/, v10);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
      v12 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v13 = 1;
      goto LABEL_37;
    case 2:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17587/*"btn_txt_progress"*/, v10);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v14 = 0;
      goto LABEL_33;
    case 3:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17555/*"btn_txt_completed"*/, v10);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v14 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v14, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
LABEL_35:
      v12 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v13 = 13;
LABEL_37:
      v12->fields.sortKind = v13;
LABEL_38:
      operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
      filterStatus = this->fields.filterStatus;
      if ( !byte_4C31EB9 )
      {
        sub_1C32C20(&EventRewardSaveData_TypeInfo);
        byte_4C31EB9 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = filterStatus;
      EventRewardSaveData__SaveCompleteMissionData(0);
      return;
    default:
      goto LABEL_38;
  }
}


void CompleteMissionListViewManager__setNextMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v9; // w22
  int32_t v10; // w21
  __int64 naturalAligment; // x10
  System_Action_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C364CB & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&CompleteMissionListViewItem_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C364CB = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.actionCallback, (int32_t)callback, (int32_t)callback, method);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v9 = size - 1;
  if ( size >= 1 )
  {
    v10 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (CompleteMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v9 == v10 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v10;
    }
    while ( itemList );
LABEL_15:
    sub_1C32E7C(itemList);
  }
LABEL_16:
  v10 = 0;
LABEL_17:
  v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__,
    0);
  this->fields.callbackAfterScroll = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v12, v13, v14);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v10, 1, 0.0, 0);
}


void CompleteMissionListViewManager__setOpenPanel(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v8; // x8
  Il2CppObject *Entity; // x21
  void *monitor; // x8
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  void *v14; // x8
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  void *v18; // x8
  Il2CppObject *v19; // x22
  void *v20; // x8
  UISprite_o *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x20
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *v35; // x0
  System_String_o *v36; // x20
  AssetLoader_LoadEndDataHandler_o *v37; // x21
  int v38; // [xsp+8h] [xbp-48h] BYREF
  int klass_high; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C364DF & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C32C20(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1C32C20(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__);
    sub_1C32C20(&CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
    sub_1C32C20(&StringLiteral_4631/*"CompleteMission/{0}/{1}"*/);
    byte_4C364DF = 1;
  }
  v3 = sub_1C32E6C(CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_42;
  *(_QWORD *)(v3 + 40) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v5, v6);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 1, 0);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_42;
  *(_DWORD *)(v3 + 24) = missionToRecieve->fields.dispNo - 2;
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v8 = this->fields.missionToRecieve;
  if ( !v8 )
    goto LABEL_42;
  if ( !touchBlockObj )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             v8->fields.missionTargetId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  monitor = touchBlockObj[57].monitor;
  if ( !monitor )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)monitor + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTexObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)touchBlockObj,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Component_object, v12, v13);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v14 = touchBlockObj[57].monitor;
  if ( !v14 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v14 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToEfPanelObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToAdjustObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToRowlingPanelObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTextureObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  v15 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v3 + 32) = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v15, v16, v17);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v18 = touchBlockObj[57].monitor;
  if ( !v18 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v18 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToNumObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  v19 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v20 = touchBlockObj[57].monitor;
  if ( !v20 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v20 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToEfPanelObj,
                                                0);
  if ( !touchBlockObj
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToAdjustObj,
                                                      0)) == 0
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToRowlingPanelObj,
                                                      0)) == 0
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToNumberObj,
                                                      0)) == 0
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)touchBlockObj,
                                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        !v19)
    || (v21 = (UISprite_o *)touchBlockObj) == 0
    || (UISprite__set_atlas((UISprite_o *)touchBlockObj, (UIAtlas_o *)v19[29].klass, 0),
        UISprite__set_spriteName(v21, (System_String_o *)v19[29].monitor, 0),
        !Entity) )
  {
LABEL_42:
    sub_1C32E7C(touchBlockObj);
  }
  klass_high = HIDWORD(Entity[1].klass);
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v22, v23, v24, v25, v26, v27);
  v38 = *(_DWORD *)(v3 + 24);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v29, v30, v31, v32, v33, v34);
  v36 = System_String__Format_63559836((System_String_o *)StringLiteral_4631/*"CompleteMission/{0}/{1}"*/, v28, v35, 0);
  v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v37,
    (Il2CppObject *)v3,
    Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v36, v37, 1, 0);
}


void CompleteMissionListViewManager__setPanelAnim(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  struct EventMissionEntity_o *missionToRecieve; // x8

  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1C32E7C(this);
  if ( missionToRecieve->fields.dispNo >= 2 )
    CompleteMissionListViewManager__setOpenPanel(this, method);
}


void CompleteMissionListViewManager__startPanelAnim(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchBlockObj; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x1

  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  started = CompleteMissionListViewManager__StartPanelAnimCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


void CompleteMissionListViewManager__unAcceptableDlg(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4C364D4 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1C32C20(&StringLiteral_5445/*"END_NOTICE"*/);
    byte_4C364D4 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(intptr_t, intptr_t))ShowMSG->fields.invoke_impl)(
          ShowMSG->fields.method_code,
          ShowMSG->fields.method),
        (this = (CompleteMissionListViewManager_o *)v2->fields.targetFSM) == 0) )
  {
    sub_1C32E7C(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5445/*"END_NOTICE"*/, 0);
}


void CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50___ctor(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__MoveNext(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct CompleteMissionListViewManager_o *_4__this; // x22
  Il2CppObject *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  void *_8__1; // x0
  struct CompleteMissionListViewManager_o *v11; // x1
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o *v12; // x8
  _BOOL4 isCompleteMission; // w9
  __int64 v14; // x8
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *Instance; // x0
  GiftEntity_array *rewards; // x20
  System_String_o *rewardDetail; // x21
  Il2CppObject *v27; // x23
  CommonUI_o *v28; // x19
  MissionRewardGetDialog_ClickDelegate_o *v29; // x22

  if ( (byte_4C364F4 & 1) == 0 )
  {
    sub_1C32C20(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__);
    sub_1C32C20(&CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_4C364F4 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_16;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_1C32E6C(CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    System_Object___ctor(v5, 0);
    this->fields.__8__1 = (struct CompleteMissionListViewManager___c__DisplayClass50_0_o *)v5;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v5, v6, v7);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_25;
    v11 = this->fields.__4__this;
    *((_QWORD *)_8__1 + 2) = v11;
    sub_1C32BC4((CGThumbnailListItem_o *)((char *)_8__1 + 16), (int32_t)v11, v8, v9);
    v12 = this->fields.__8__1;
    if ( !v12 )
      goto LABEL_25;
    isCompleteMission = this->fields.isCompleteMission;
    v12->fields.isCompleteMission = isCompleteMission;
    if ( !isCompleteMission )
      goto LABEL_22;
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0);
    _8__1 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !_8__1 )
      goto LABEL_25;
    v14 = *((_QWORD *)_8__1 + 172);
    if ( !v14 )
      goto LABEL_25;
    _8__1 = *(void **)(v14 + 32);
    if ( !_8__1 )
      goto LABEL_25;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)_8__1,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._anim_5__2, (int32_t)Component_object, v16, v17);
    _8__1 = this->fields._anim_5__2;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)_8__1, 0);
LABEL_16:
    _8__1 = this->fields._anim_5__2;
    if ( !_8__1 )
      goto LABEL_25;
    _8__1 = (void *)UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)_8__1, 0);
    if ( ((unsigned __int8)_8__1 & 1) != 0 )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, 0, v18, v19);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0);
    this->fields._anim_5__2 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._anim_5__2, 0, v22, v23);
LABEL_22:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    rewards = this->fields.rewards;
    rewardDetail = this->fields.rewardDetail;
    v27 = (Il2CppObject *)this->fields.__8__1;
    v28 = (CommonUI_o *)Instance;
    v29 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1C32E6C(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      v29,
      v27,
      Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      0);
    if ( v28 )
    {
      CommonUI__OpenMissionRewardGetDialog(v28, rewards, rewardDetail, v29, 0, 0);
      return 0;
    }
LABEL_25:
    sub_1C32E7C(_8__1);
  }
  return 0;
}


Il2CppObject *CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_IEnumerator_Reset(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_IEnumerator_get_Current(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_IDisposable_Dispose(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  ;
}


void CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64___ctor(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__MoveNext(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  CompleteMissionListViewManager_o *_4__this; // x20
  UnityEngine_Component_o *Instance; // x0
  _QWORD *monitor; // x8
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4C364F5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C364F5 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    monitor = Instance[57].monitor;
    if ( !monitor )
      goto LABEL_17;
    Instance = (UnityEngine_Component_o *)monitor[4];
    if ( !Instance )
      goto LABEL_17;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         Instance,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._anim_5__2, (int32_t)Component_object, v8, v9);
    Instance = (UnityEngine_Component_o *)this->fields._anim_5__2;
    if ( !Instance )
      goto LABEL_17;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)Instance, 0);
LABEL_11:
    Instance = (UnityEngine_Component_o *)this->fields._anim_5__2;
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, 0, v11, v12);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( _4__this )
      {
        CompleteMissionListViewManager__panelAfterCallback(_4__this, v10);
        return 0;
      }
    }
LABEL_17:
    sub_1C32E7C(Instance);
  }
  return 0;
}


Il2CppObject *CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_IEnumerator_Reset(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_IEnumerator_get_Current(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_IDisposable_Dispose(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  ;
}


void CompleteMissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C364E8 & 1) == 0 )
  {
    sub_1C32C20(&CompleteMissionListViewManager___c_TypeInfo);
    byte_4C364E8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(CompleteMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CompleteMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct CompleteMissionListViewManager___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)CompleteMissionListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CompleteMissionListViewManager___c___ctor(CompleteMissionListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c___CehckQpMaxAlert_b__68_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C364EB & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C364EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseCompleteMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0, 0);
}


void CompleteMissionListViewManager___c___checkAcceptable_b__46_0(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x0
  CompleteMissionListViewManager___c_c *v4; // x8
  System_String_o *v5; // x20
  System_String_o *v6; // x21
  System_Action_o *_9__46_1; // x22
  Il2CppObject *v8; // x23
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C364E9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__);
    sub_1C32C20(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1C32C20(&StringLiteral_8673/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C364E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8673/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0);
  v4 = CompleteMissionListViewManager___c_TypeInfo;
  v5 = v3;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v4 = CompleteMissionListViewManager___c_TypeInfo;
  }
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  _9__46_1 = v4->static_fields->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v4->static_fields->__9;
    _9__46_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__46_1, v8, Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, 0);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__46_1 = _9__46_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__46_1, (int32_t)_9__46_1, v10, v11);
  }
  if ( !Instance )
    sub_1C32E7C(v3);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v6, v5, _9__46_1, 150, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void CompleteMissionListViewManager___c___checkAcceptable_b__46_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C364EA & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C364EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void CompleteMissionListViewManager___c___panelAfterCallback_b__65_0(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void CompleteMissionListViewManager___c__DisplayClass45_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass45_0___recieveReward_b__0(
        CompleteMissionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CompleteMissionListViewManager___c__DisplayClass45_0_o *v4; // x19
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct CompleteMissionListViewManager_o *v7; // x8

  v4 = this;
  if ( (byte_4C364EC & 1) == 0 )
  {
    this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)sub_1C32C20(&StringLiteral_8669/*"MISSIONN_REWARD"*/);
    byte_4C364EC = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (missionEntity = v4->fields.missionEntity,
        _4__this->fields.missionToRecieve = missionEntity,
        sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.missionToRecieve, (int32_t)missionEntity, v2, v3),
        (v7 = v4->fields.__4__this) == 0)
    || (this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)v7->fields.targetFSM) == 0 )
  {
    sub_1C32E7C(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8669/*"MISSIONN_REWARD"*/, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__2(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C364EE & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C364EE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
}


void CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__4(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C364ED & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C364ED = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
}


void CompleteMissionListViewManager___c__DisplayClass49_1___ctor(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__0(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v2; // x19
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v5; // x8
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  System_Text_StringBuilder_o *v8; // x20
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v9; // x8
  System_String_o *v10; // x21
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v11; // x8
  const MethodInfo *v12; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v13; // x8
  System_String_o *v14; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v15; // x8
  System_String_o *v16; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v17; // x8
  System_String_o *v18; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v19; // x8
  System_String_o *v20; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v21; // x8
  struct CompleteMissionListViewManager_o *v22; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v23; // x8
  struct CompleteMissionListViewManager_o *v24; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v25; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x21
  long double inited; // q0
  _QWORD *v29; // x22
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 v32; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v33; // x8
  struct CompleteMissionListViewManager_o *v34; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v35; // x21
  Il2CppObject *NumberFormatLong; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v37; // x8
  CompleteMissionListViewManager_o *v38; // x21
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v39; // x22
  const MethodInfo *v40; // x4
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v41; // x8
  System_Collections_IEnumerator_o *Dialog; // x1

  v2 = this;
  if ( (byte_4C364EF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_object___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_8715/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_8672/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_8675/*"MISSION_ACTION_SUCCESS"*/);
    sub_1C32C20(&StringLiteral_50/*"\n \n"*/);
    sub_1C32C20(&StringLiteral_51/*"\n \n "*/);
    sub_1C32C20(&StringLiteral_8716/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1C32C20(&StringLiteral_8678/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_4C364EF = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_73;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)_4__this->fields.touchBlockObj;
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v5 = v2->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_73;
  ActionExtensions__Call(v5->fields.callback, 0);
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_73;
  if ( giftList->fields._size < 1 )
  {
    v11 = v2->fields.CS___8__locals1;
    if ( v11 )
    {
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v11->fields.__4__this;
      if ( this )
      {
        CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)this, v6);
        v13 = v2->fields.CS___8__locals1;
        if ( v13 )
        {
          this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v13->fields.__4__this;
          if ( this )
          {
            CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)this, v12);
            return;
          }
        }
      }
    }
    goto LABEL_73;
  }
  v8 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v8, 0);
  v9 = v2->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v9->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v10 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                             this,
                             this->klass->vtable._3_ToString.method);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v10, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemNum >= 2 )
    {
      if ( !v10 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__Substring_63564468(
                                                                         v10,
                                                                         0,
                                                                         v10->fields._stringLength - 2,
                                                                         0);
      if ( !v8 )
        goto LABEL_73;
      System_Text_StringBuilder__Append_63603608(v8, (System_String_o *)this, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8672/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_63603608(
                                                                         v8,
                                                                         v14,
                                                                         0);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_8675/*"MISSION_ACTION_SUCCESS"*/,
                                                                         0);
      if ( !v8 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                         v8,
                                                                         (System_String_o *)this,
                                                                         (Il2CppObject *)v10,
                                                                         0);
    }
    v15 = v2->fields.CS___8__locals1;
    if ( !v15 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v15->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    v16 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                               this,
                               this->klass->vtable._3_ToString.method);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v16, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_63603608(
                                                                         v8,
                                                                         (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                         0);
  }
  v17 = v2->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v17->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v18 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                             this,
                             this->klass->vtable._3_ToString.method);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v18, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v19 = v2->fields.CS___8__locals1;
    if ( !v19 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v19->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                                                                       this,
                                                                       this->klass->vtable._3_ToString.method);
    if ( !v8 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_63603608(v8, (System_String_o *)this, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8678/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_63603608(
                                                                       v8,
                                                                       v20,
                                                                       0);
  }
  v21 = v2->fields.CS___8__locals1;
  if ( !v21 )
    goto LABEL_73;
  v22 = v21->fields.__4__this;
  if ( !v22 )
    goto LABEL_73;
  if ( v22->fields.isQpMaxAlert )
  {
    if ( v22->fields.isQpAlreadyMax )
    {
      if ( v8 )
      {
        if ( v2->fields.giftTypeItemNum >= 2 )
          System_Text_StringBuilder__Append_63603608(v8, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0);
        else
          System_Text_StringBuilder__set_Length(v8, 0, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_8715/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                           0);
        v33 = v2->fields.CS___8__locals1;
        if ( v33 )
        {
          v34 = v33->fields.__4__this;
          if ( v34 )
          {
            v35 = this;
            NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v34->fields.overQpValue, 0);
            this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                               v8,
                                                                               (System_String_o *)v35,
                                                                               NumberFormatLong,
                                                                               0);
            goto LABEL_67;
          }
        }
      }
LABEL_73:
      sub_1C32E7C(this);
    }
    if ( !v8 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_63603608(v8, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_8716/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                       0);
    v23 = v2->fields.CS___8__locals1;
    if ( !v23 )
      goto LABEL_73;
    v24 = v23->fields.__4__this;
    if ( !v24 )
      goto LABEL_73;
    v25 = this;
    v26 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v24->fields.overQpValue, 0);
    v27 = System_String__Format((System_String_o *)v25, v26, 0);
    v29 = Method_System_Array_Empty_object___;
    v30 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v30 )
    {
      sub_1C83390(Method_System_Array_Empty_object___);
      v30 = v29[7];
    }
    v31 = *(_QWORD *)(v30 + 16);
    if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
      v31 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v31 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v31);
    v32 = *(_QWORD *)(v29[7] + 16LL);
    if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
      v32 = sub_1C83334(inited);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat_63610148(
                                                                       v8,
                                                                       v27,
                                                                       **(System_Object_array ***)(v32 + 184),
                                                                       0);
  }
LABEL_67:
  v37 = v2->fields.CS___8__locals1;
  if ( !v37 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v2->fields.giftList;
  if ( !this )
    goto LABEL_73;
  v38 = v37->fields.__4__this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v8 )
    goto LABEL_73;
  v39 = this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                                                                     v8,
                                                                     v8->klass->vtable._3_ToString.method);
  v41 = v2->fields.CS___8__locals1;
  if ( !v41 || !v38 )
    goto LABEL_73;
  Dialog = CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
             v38,
             (GiftEntity_array *)v39,
             (System_String_o *)this,
             v41->fields.isCompleteMission,
             v40);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)v38, Dialog, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__1(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v2; // x19
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4C364F0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1C32C20(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__);
    byte_4C364F0 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v6, v7);
  }
  if ( !_4__this )
LABEL_8:
    sub_1C32E7C(this);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__3, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__3(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v6; // x8
  Il2CppObject *v7; // x0
  EventRewardSetEntity_o *rwdSetEnt; // x20
  CommonUI_o *v9; // x21
  System_String_o *v10; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v11; // x22
  MissionRewardGetDialog_ClickDelegate_o *_9__4; // x23
  System_String_o *v13; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C364F1 & 1) == 0 )
  {
    sub_1C32C20(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C32C20(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__);
    sub_1C32C20(&StringLiteral_8675/*"MISSION_ACTION_SUCCESS"*/);
    byte_4C364F1 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  SummonAssetManager__UnloadSummonAssets(Instance, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  v6 = this->fields.CS___8__locals1;
  if ( !v6 )
    goto LABEL_15;
  ActionExtensions__Call(v6->fields.callback, 0);
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  rwdSetEnt = this->fields.rwdSetEnt;
  v9 = (CommonUI_o *)v7;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8675/*"MISSION_ACTION_SUCCESS"*/, 0);
  Instance = (SummonAssetManager_o *)System_String__Format(v10, (Il2CppObject *)this->fields.sendName, 0);
  v11 = this->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_15;
  _9__4 = v11->fields.__9__4;
  v13 = (System_String_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1C32E6C(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v11,
      Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__,
      0);
    v11->fields.__9__4 = _9__4;
    sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields.__9__4, (int32_t)_9__4, v14, v15);
  }
  if ( !v9 )
LABEL_15:
    sub_1C32E7C(Instance);
  CommonUI__OpenMissionRewardGetDialog_31273884(v9, rwdSetEnt, v13, _9__4, 0);
}


void CompleteMissionListViewManager___c__DisplayClass50_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass50_0___OpenPanelMissionRewardGetDialog_b__0(
        CompleteMissionListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C364F2 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C364F2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseMissionRewardGetDialog(Instance, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_8;
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
  if ( this->fields.isCompleteMission )
    return;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
LABEL_8:
    sub_1C32E7C(Instance);
  CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)Instance, v5);
}


void CompleteMissionListViewManager___c__DisplayClass61_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass61_0___setOpenPanel_b__0(
        CompleteMissionListViewManager___c__DisplayClass61_0_o *this,
        AssetData_o *backPanel,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  struct UITexture_o *tex; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  struct UITexture_o *animTex; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  struct CompleteMissionComponent_o *completeMissionComp; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionComponent_o *v25; // x8
  struct CompleteMissionListViewManager_o *v26; // x8
  struct CompleteMissionComponent_o *v27; // x8
  struct CompleteMissionListViewManager_o *v28; // x8
  struct CompleteMissionListViewManager_o *v29; // x19
  float endEffectTime; // s8
  System_Action_o *v31; // x20
  int32_t v32; // [xsp+8h] [xbp-48h] BYREF
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C364F3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&Method_CompleteMissionListViewManager_animAfterCallback__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    byte_4C364F3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0);
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx, v7, v8, v9, v10, v11, v12);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_25096/*"{0}"*/, v13, 0);
  if ( !backPanel )
    goto LABEL_30;
  Instance = (CommonUI_o *)AssetData__GetObject_object__51111776(
                             backPanel,
                             (System_String_o *)Instance,
                             (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !tex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
    tex,
    Instance,
    tex->klass->vtable._27_set_mainTexture.method);
  animTex = this->fields.animTex;
  v32 = this->fields.completeMissionPanelChildIdx;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v15, v16, v17, v18, v19, v20);
  v22 = System_String__Format((System_String_o *)StringLiteral_25096/*"{0}"*/, v21, 0);
  Instance = (CommonUI_o *)AssetData__GetObject_object__51111776(
                             backPanel,
                             v22,
                             (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !animTex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, const MethodInfo *))animTex->klass->vtable._27_set_mainTexture.methodPtr)(
    animTex,
    Instance,
    animTex->klass->vtable._27_set_mainTexture.method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  completeMissionComp = Instance->fields.completeMissionComp;
  if ( !completeMissionComp )
    goto LABEL_30;
  Instance = (CommonUI_o *)completeMissionComp->fields.completeMissionPanel;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             _4__this->fields.distanceToNumObj,
                             0);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v25 = Instance->fields.completeMissionComp;
  if ( !v25 )
    goto LABEL_30;
  Instance = (CommonUI_o *)v25->fields.completeMissionPanel;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             v26->fields.distanceToTexObj,
                             0);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v27 = Instance->fields.completeMissionComp;
  if ( !v27
    || (Instance = (CommonUI_o *)v27->fields.completeMissionPanel) == 0
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   this->fields.completeMissionPanelChildIdx,
                                   0),
        (v28 = this->fields.__4__this) == 0)
    || !Instance
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   v28->fields.distanceToEfPanelObj,
                                   0)) == 0
    || (Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0),
        (v29 = this->fields.__4__this) == 0) )
  {
LABEL_30:
    sub_1C32E7C(Instance);
  }
  endEffectTime = v29->fields.endEffectTime;
  v31 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v29, Method_CompleteMissionListViewManager_animAfterCallback__, 0);
  ListViewManager__DelayCallMethod((ListViewManager_o *)v29, endEffectTime, v31, 0);
}


void CompleteMissionListViewManager___c__DisplayClass68_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass68_0___CehckQpMaxAlert_b__0(
        CompleteMissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *decideCallback; // x8

  decideCallback = this->fields.decideCallback;
  if ( !decideCallback )
    sub_1C32E7C(this);
  ((void (__fastcall *)(intptr_t, intptr_t))decideCallback->fields.invoke_impl)(
    decideCallback->fields.method_code,
    decideCallback->fields.method);
}