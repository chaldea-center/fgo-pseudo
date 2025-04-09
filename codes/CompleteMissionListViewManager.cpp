void __fastcall CompleteMissionListViewManager___ctor(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_49B9B6D & 1) == 0 )
  {
    sub_1B4CF90(&MissionListViewManager_TypeInfo, method);
    byte_49B9B6D = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager__AcceptReward(
        CompleteMissionListViewManager_o *this,
        System_Action_o *callback,
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
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x22
  __int64 Master_object; // x0
  Il2CppObject *v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftMaster_o *v45; // x20
  struct EventMissionEntity_o *v46; // x8
  __int64 v47; // x8
  __int64 v48; // x20
  unsigned __int64 v49; // x23
  __int64 v50; // x21
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Object_array *v53; // x27
  __int64 v54; // x8
  char *v55; // x0
  System_Text_StringBuilder_o *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Text_StringBuilder_o *v59; // x0
  System_Text_StringBuilder_o *v60; // x20
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  __int64 v63; // x20
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject **v66; // x21
  System_Object_array *v67; // x8
  signed int max_length; // w28
  il2cpp_array_size_t v69; // w9
  __int64 v70; // x27
  Il2CppObject *v71; // x8
  Il2CppObject *v72; // x8
  Il2CppObject *v73; // x8
  Il2CppObject *v74; // x8
  EventRewardSetEntity_o *SetRewardData; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  __int64 v80; // x1
  Il2CppObject **v81; // x22
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *v83; // x21
  System_Action_o *v84; // x22
  System_Collections_Generic_List_object__o *v85; // x26
  System_Collections_Generic_List_object__o *v86; // x22
  const MethodInfo_37B4410 **v87; // x23
  il2cpp_array_size_t v88; // w29
  Il2CppObject *v89; // x8
  Il2CppObject *v90; // x8
  ServantEntity_o *v91; // x24
  _BOOL4 IsCombineMaterial; // w25
  Il2CppObject *v93; // x8
  System_String_o *v94; // x0
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x8
  Il2CppObject *v99; // x24
  Il2CppObject *v100; // x0
  Il2CppObject *v101; // x24
  System_Text_StringBuilder_o *monitor; // x25
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct System_Object_array *items; // x8
  _QWORD *v106; // x9
  __int64 size; // x10
  Il2CppClass **v108; // x0
  Il2CppObject *v109; // x8
  Il2CppObject *v110; // x8
  bool IsCountableWithPlus; // w0
  Il2CppObject **v112; // x8
  Il2CppObject *v113; // x25
  System_Text_StringBuilder_o *v114; // x24
  const MethodInfo_37B4410 **v115; // x20
  int32_t getQpValue; // w23
  Il2CppObject *v117; // x8
  System_Collections_Generic_List_object__o *v118; // x19
  System_String_o *v119; // x26
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  Il2CppObject *v123; // x0
  __int64 v124; // x8
  System_Text_StringBuilder_o *v125; // x25
  __int64 v126; // x8
  System_Collections_Generic_List_object__o *v127; // x0
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  System_Collections_Generic_List_object__o *v131; // x21
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  System_Action_o *v134; // x21
  Il2CppObject *Instance; // x0
  EventRewardSetEntity_o *v136; // x20
  CommonUI_o *v137; // x23
  System_String_o *v138; // x0
  System_String_o *v139; // x0
  Il2CppObject *v140; // x24
  System_String_o *v141; // x21
  MissionRewardGetDialog_ClickDelegate_o *v142; // x22
  __int64 v143; // x0
  CompleteMissionListViewManager_o *v144; // [xsp+8h] [xbp-98h]
  __int64 v145; // [xsp+10h] [xbp-90h]
  int32_t monitor_high; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v147; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v148; // [xsp+28h] [xbp-78h] BYREF
  CompleteMissionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Object_array *array; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49B9B5C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_System_Array_Resize_GiftEntity___, v5);
    sub_1B4CF90(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v6);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMaster_CompleteMissionMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMaster_GiftMaster___, v10);
    sub_1B4CF90(&DataManager_TypeInfo, v11);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_1B4CF90(&int_TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GiftEntity__Add__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GiftEntity___ctor___75442224, v18);
    sub_1B4CF90(&System_Collections_Generic_List_GiftEntity__TypeInfo, v19);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v20);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v23);
    sub_1B4CF90(&System_Text_StringBuilder_TypeInfo, v24);
    sub_1B4CF90(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__, v25);
    sub_1B4CF90(&CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo, v26);
    sub_1B4CF90(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__, v27);
    sub_1B4CF90(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__, v28);
    sub_1B4CF90(&CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo, v29);
    sub_1B4CF90(&StringLiteral_8480/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v30);
    sub_1B4CF90(&StringLiteral_8479/*"MISSION_ACTION_SUCCESS"*/, v31);
    sub_1B4CF90(&StringLiteral_24818/*"{0}×{1:#,0}"*/, v32);
    sub_1B4CF90(&StringLiteral_24868/*"×"*/, v33);
    sub_1B4CF90(&StringLiteral_8475/*"MISSION_ACTION_ITEM_FORMAT"*/, v34);
    sub_1B4CF90(&StringLiteral_49/*"\n "*/, v35);
    sub_1B4CF90(&StringLiteral_25166/*"＋"*/, v36);
    byte_49B9B5C = 1;
  }
  v148 = 0LL;
  entity = 0LL;
  v147 = 0LL;
  v37 = sub_1B4D1DC(CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_52;
  *(_QWORD *)(v37 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 16), (int32_t)this, v40, v41);
  *(_QWORD *)(v37 + 24) = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 24), (int32_t)callback, v42, v43);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_52;
  v45 = (GiftMaster_o *)Master_object;
  if ( !Master_object )
    goto LABEL_52;
  array = (System_Object_array *)GiftMaster__GetGiftListById(
                                   (GiftMaster_o *)Master_object,
                                   missionToRecieve->fields.giftId,
                                   0LL);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  v46 = this->fields.missionToRecieve;
  if ( !v46 || !Master_object )
    goto LABEL_52;
  Master_object = CompleteMissionMaster__TryGetEntityFromObjectId(
                    (CompleteMissionMaster_o *)Master_object,
                    &entity,
                    v46->fields.id,
                    0LL);
  *(_BYTE *)(v37 + 48) = Master_object & 1;
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_52;
    Master_object = (__int64)GiftMaster__GetGiftListById(v45, entity->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_52;
    v47 = *(_QWORD *)(Master_object + 24);
    v48 = Master_object;
    if ( (int)v47 >= 1 )
    {
      v49 = 0LL;
      while ( v49 < (unsigned int)v47 )
      {
        if ( !array )
          goto LABEL_52;
        v50 = *(_QWORD *)(v48 + 32 + 8 * v49);
        System_Array__Resize_object_(
          &array,
          array->max_length + 1,
          (const MethodInfo_2EC2B54 *)Method_System_Array_Resize_GiftEntity___);
        v53 = array;
        if ( !array )
          goto LABEL_52;
        if ( v50 )
        {
          Master_object = sub_1B4D0CC(v50, array->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v143 = sub_1B4D210(0LL);
            sub_1B4D0B8(v143, 0LL);
          }
        }
        v54 = *(_QWORD *)&v53->max_length;
        if ( !(_DWORD)v54 )
          break;
        v55 = (char *)v53 + (((v54 << 32) - 0x100000000LL) >> 29);
        *((_QWORD *)v55 + 4) = v50;
        sub_1B4CF34((CGThumbnailListItem_o *)(v55 + 32), v50, v51, v52);
        LODWORD(v47) = *(_DWORD *)(v48 + 24);
        if ( (__int64)++v49 >= (int)v47 )
          goto LABEL_22;
      }
LABEL_156:
      sub_1B4D1F4(Master_object, v39);
    }
  }
LABEL_22:
  v56 = (System_Text_StringBuilder_o *)sub_1B4D1DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v56, 0LL);
  *(_QWORD *)(v37 + 40) = v56;
  sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 40), (int32_t)v56, v57, v58);
  v59 = (System_Text_StringBuilder_o *)sub_1B4D1DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v59, 0LL);
  v60 = (System_Text_StringBuilder_o *)sub_1B4D1DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v60, 0LL);
  *(_QWORD *)(v37 + 32) = v60;
  sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 32), (int32_t)v60, v61, v62);
  v63 = sub_1B4D1DC(CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v63, 0LL);
  if ( !v63 )
    goto LABEL_52;
  *(_QWORD *)(v63 + 48) = v37;
  v66 = (Il2CppObject **)(v63 + 48);
  sub_1B4CF34((CGThumbnailListItem_o *)(v63 + 48), v37, v64, v65);
  Master_object = (__int64)this->fields.missionToRecieve;
  if ( !Master_object )
    goto LABEL_52;
  if ( *(_DWORD *)(Master_object + 80) == 1 )
  {
    Master_object = (__int64)this->fields.touchBlockObj;
    if ( Master_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      *(_DWORD *)(v63 + 24) = 0;
      v67 = array;
      v145 = v63;
      if ( array )
      {
        max_length = array->max_length;
        if ( max_length >= 1 )
        {
          v69 = 0;
          while ( v69 < v67->max_length )
          {
            v70 = (int)v69;
            v71 = v67->m_Items[v69];
            if ( !v71 )
              goto LABEL_52;
            Master_object = Gift__IsServant_38223924(HIDWORD(v71[1].klass), 0LL);
            if ( (Master_object & 1) == 0 )
            {
              if ( !array )
                goto LABEL_52;
              if ( (unsigned int)v70 >= array->max_length )
                goto LABEL_156;
              v72 = array->m_Items[v70];
              if ( !v72 )
                goto LABEL_52;
              Master_object = Gift__IsCommandCode_38224316(HIDWORD(v72[1].klass), 0LL);
              if ( (Master_object & 1) == 0 )
              {
                if ( !array )
                  goto LABEL_52;
                if ( (unsigned int)v70 >= array->max_length )
                  goto LABEL_156;
                v73 = array->m_Items[v70];
                if ( !v73 )
                  goto LABEL_52;
                Master_object = Gift__IsCostumeRelease(HIDWORD(v73[1].klass), 0LL);
                if ( (Master_object & 1) == 0 )
                {
                  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Master_object )
                    goto LABEL_52;
                  Master_object = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Master_object,
                                             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( !array )
                    goto LABEL_52;
                  if ( (unsigned int)v70 >= array->max_length )
                    goto LABEL_156;
                  v74 = array->m_Items[v70];
                  if ( !v74 || !Master_object )
                    goto LABEL_52;
                  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &v148,
                                    (int32_t)v74[1].monitor,
                                    (const MethodInfo_319D9E8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                  if ( (Master_object & 1) != 0 )
                  {
                    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !v148 || !Master_object )
                      goto LABEL_52;
                    Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v148[1].klass, 0LL);
                    if ( (Master_object & 1) == 0 )
                      ++*(_DWORD *)(v63 + 24);
                  }
                }
              }
            }
            if ( max_length - 1 == (_DWORD)v70 )
              goto LABEL_59;
            v67 = array;
            v69 = v70 + 1;
            if ( !array )
              goto LABEL_52;
          }
          goto LABEL_156;
        }
LABEL_59:
        v85 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v85,
          (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        v86 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v86,
          (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        if ( max_length >= 1 )
        {
          v87 = (const MethodInfo_37B4410 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
          v88 = 0;
          v144 = this;
          do
          {
            if ( !array )
              goto LABEL_52;
            if ( v88 >= array->max_length )
              goto LABEL_156;
            v89 = array->m_Items[v88];
            if ( !v89 )
              goto LABEL_52;
            Master_object = Gift__IsServant_38223924(HIDWORD(v89[1].klass), 0LL);
            if ( (Master_object & 1) != 0 )
            {
              Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v87);
              if ( !Master_object )
                goto LABEL_52;
              Master_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Master_object,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !array )
                goto LABEL_52;
              if ( v88 >= array->max_length )
                goto LABEL_156;
              v90 = array->m_Items[v88];
              if ( !v90 )
                goto LABEL_52;
              if ( !Master_object )
                goto LABEL_52;
              Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         (int32_t)v90[1].monitor,
                                         (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Master_object )
                goto LABEL_52;
              v91 = (ServantEntity_o *)Master_object;
              IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Master_object + 84), 0LL);
              Master_object = SvtType__IsStatusUp(v91->fields.type, 0LL);
              v93 = *v66;
              if ( !*v66 )
                goto LABEL_52;
              if ( LOBYTE(v93[3].klass) | (IsCombineMaterial | (unsigned int)Master_object) & 1 )
              {
                Master_object = (__int64)v93[2].monitor;
                if ( !Master_object )
                  goto LABEL_52;
                v94 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 360LL))(
                                           Master_object,
                                           *(_QWORD *)(*(_QWORD *)Master_object + 368LL));
                Master_object = System_String__IsNullOrEmpty(v94, 0LL);
                if ( (Master_object & 1) == 0 )
                {
                  if ( !*v66 )
                    goto LABEL_52;
                  Master_object = (__int64)(*v66)[2].monitor;
                  if ( !Master_object )
                    goto LABEL_52;
                  System_Text_StringBuilder__Append_61178652(
                    (System_Text_StringBuilder_o *)Master_object,
                    (System_String_o *)StringLiteral_49/*"\n "*/,
                    0LL);
                }
                Master_object = (__int64)ServantEntity__getName(v91, -1, -1, 0, 0LL);
                if ( !array )
                  goto LABEL_52;
                if ( v88 >= array->max_length )
                  goto LABEL_156;
                v98 = array->m_Items[v88];
                if ( !v98 )
                  goto LABEL_52;
                v99 = (Il2CppObject *)Master_object;
                monitor_high = HIDWORD(v98[1].monitor);
                v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v95, v96, v97);
                Master_object = (__int64)System_String__Format_61134760(
                                           (System_String_o *)StringLiteral_24818/*"{0}×{1:#,0}"*/,
                                           v99,
                                           v100,
                                           0LL);
                if ( !*v66 )
                  goto LABEL_52;
                v101 = (Il2CppObject *)Master_object;
                monitor = (System_Text_StringBuilder_o *)(*v66)[2].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8475/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !monitor )
                  goto LABEL_52;
                Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                           monitor,
                                           (System_String_o *)Master_object,
                                           v101,
                                           0LL);
                if ( !array )
                  goto LABEL_52;
                if ( v88 >= array->max_length )
                  goto LABEL_156;
                if ( !v86 )
                  goto LABEL_52;
                v39 = array->m_Items[v88];
                items = v86->fields._items;
                v106 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                ++v86->fields._version;
                if ( !items )
                  goto LABEL_52;
                size = v86->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  v126 = v106[4];
                  v127 = v86;
LABEL_132:
                  System_Collections_Generic_List_object___AddWithResize(
                    v127,
                    v39,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v126 + 192) + 112LL));
                  goto LABEL_133;
                }
                v108 = &items->obj.klass + size;
                v86->fields._size = size + 1;
LABEL_91:
                v108[4] = (Il2CppClass *)v39;
                sub_1B4CF34((CGThumbnailListItem_o *)(v108 + 4), (int32_t)v39, v103, v104);
              }
            }
            else
            {
              if ( !array )
                goto LABEL_52;
              if ( v88 >= array->max_length )
                goto LABEL_156;
              v109 = array->m_Items[v88];
              if ( !v109 )
                goto LABEL_52;
              Master_object = Gift__IsItem_38223872(HIDWORD(v109[1].klass), 0LL);
              if ( (Master_object & 1) != 0 )
              {
                Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v87);
                if ( !Master_object )
                  goto LABEL_52;
                Master_object = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ItemMaster___);
                if ( !array )
                  goto LABEL_52;
                if ( v88 >= array->max_length )
                  goto LABEL_156;
                v110 = array->m_Items[v88];
                if ( !v110 || !Master_object )
                  goto LABEL_52;
                Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  &v147,
                                  (int32_t)v110[1].monitor,
                                  (const MethodInfo_319D9E8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                if ( (Master_object & 1) != 0 )
                {
                  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v147 || !Master_object )
                    goto LABEL_52;
                  Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v147[1].klass, 0LL);
                  if ( (Master_object & 1) == 0 )
                  {
                    if ( !array )
                      goto LABEL_52;
                    if ( v88 >= array->max_length )
                      goto LABEL_156;
                    Master_object = (__int64)array->m_Items[v88];
                    if ( !Master_object )
                      goto LABEL_52;
                    Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0LL);
                    if ( (Master_object & 1) == 0 || !this->fields.isQpAlreadyMax )
                    {
                      if ( !v147 )
                        goto LABEL_52;
                      IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)v147[3].klass, 0LL);
                      v112 = (Il2CppObject **)&StringLiteral_25166/*"＋"*/;
                      if ( !IsCountableWithPlus )
                        v112 = (Il2CppObject **)&StringLiteral_24868/*"×"*/;
                      v113 = *v112;
                      v114 = (System_Text_StringBuilder_o *)sub_1B4D1DC(System_Text_StringBuilder_TypeInfo);
                      System_Text_StringBuilder___ctor(v114, 0LL);
                      if ( !v147 )
                        goto LABEL_52;
                      if ( !v114 )
                        goto LABEL_52;
                      Master_object = (__int64)System_Text_StringBuilder__Append_61178652(
                                                 v114,
                                                 (System_String_o *)v147[1].monitor,
                                                 0LL);
                      if ( !array )
                        goto LABEL_52;
                      if ( v88 >= array->max_length )
                        goto LABEL_156;
                      Master_object = (__int64)array->m_Items[v88];
                      if ( !Master_object )
                        goto LABEL_52;
                      v115 = v87;
                      Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0LL);
                      if ( (Master_object & 1) == 0
                        || !this->fields.isQpMaxAlert
                        || (getQpValue = this->fields.getQpValue) == 0 )
                      {
                        if ( !array )
                          goto LABEL_52;
                        if ( v88 >= array->max_length )
                          goto LABEL_156;
                        v117 = array->m_Items[v88];
                        if ( !v117 )
                          goto LABEL_52;
                        getQpValue = HIDWORD(v117[1].monitor);
                      }
                      v118 = v85;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v119 = LocalizationManager__Get((System_String_o *)StringLiteral_8480/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                      monitor_high = getQpValue;
                      v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v120, v121, v122);
                      Master_object = (__int64)System_Text_StringBuilder__AppendFormat_61185004(
                                                 v114,
                                                 v119,
                                                 v113,
                                                 v123,
                                                 0LL);
                      v124 = *(_QWORD *)(v145 + 48);
                      if ( !v124 )
                        goto LABEL_52;
                      v125 = *(System_Text_StringBuilder_o **)(v124 + 32);
                      v85 = v118;
                      v87 = v115;
                      if ( *(int *)(v145 + 24) >= 2 )
                      {
                        this = v144;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8475/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                        if ( !v125 )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                                   v125,
                                                   (System_String_o *)Master_object,
                                                   (Il2CppObject *)v114,
                                                   0LL);
                        if ( !*v66 )
                          goto LABEL_52;
                        Master_object = (__int64)(*v66)[2].klass;
                        if ( !Master_object )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__Append_61178652(
                                                   (System_Text_StringBuilder_o *)Master_object,
                                                   (System_String_o *)StringLiteral_49/*"\n "*/,
                                                   0LL);
                      }
                      else
                      {
                        Master_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v114->klass->vtable._3_ToString.method)(
                                          v114,
                                          v114->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                        this = v144;
                        if ( !v125 )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__Append_61178652(
                                                   v125,
                                                   (System_String_o *)Master_object,
                                                   0LL);
                      }
                      if ( !array )
                        goto LABEL_52;
                      if ( v88 >= array->max_length )
                        goto LABEL_156;
                      if ( !v85 )
                        goto LABEL_52;
                      v39 = array->m_Items[v88];
                      v128 = v85->fields._items;
                      v129 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                      ++v85->fields._version;
                      if ( !v128 )
                        goto LABEL_52;
                      v130 = v85->fields._size;
                      if ( (unsigned int)v130 >= v128->max_length )
                      {
                        v126 = v129[4];
                        v127 = v85;
                        goto LABEL_132;
                      }
                      v108 = &v128->obj.klass + v130;
                      v85->fields._size = v130 + 1;
                      goto LABEL_91;
                    }
                  }
                }
              }
            }
LABEL_133:
            ++v88;
          }
          while ( max_length != v88 );
        }
        v131 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor_56097488(
          v131,
          (System_Collections_Generic_IEnumerable_T__o *)v85,
          (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_GiftEntity___ctor___75442224);
        *(_QWORD *)(v145 + 16) = v131;
        sub_1B4CF34((CGThumbnailListItem_o *)(v145 + 16), (int32_t)v131, v132, v133);
        Master_object = *(_QWORD *)(v145 + 16);
        if ( Master_object )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)Master_object,
            (System_Collections_Generic_IEnumerable_T__o *)v86,
            (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
          v134 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v134,
            (Il2CppObject *)v145,
            Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__,
            0LL);
          MissionListViewManager__StartItemGetEffectAction(
            (MissionListViewManager_o *)this,
            (GiftEntity_array *)array,
            0,
            v134,
            0LL);
          goto LABEL_155;
        }
      }
    }
LABEL_52:
    sub_1B4D1EC(Master_object, v39);
  }
  SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Master_object, 0LL);
  *(_QWORD *)(v63 + 32) = SetRewardData;
  sub_1B4CF34((CGThumbnailListItem_o *)(v63 + 32), (int32_t)SetRewardData, v76, v77);
  if ( !*(_QWORD *)(v63 + 32) )
    goto LABEL_52;
  v80 = *(_QWORD *)(*(_QWORD *)(v63 + 32) + 32LL);
  *(_QWORD *)(v63 + 40) = v80;
  v81 = (Il2CppObject **)(v63 + 40);
  sub_1B4CF34((CGThumbnailListItem_o *)(v63 + 40), v80, v78, v79);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList || !*(_QWORD *)&getSvtList->max_length )
  {
    if ( *v66 )
    {
      ActionExtensions__Call((System_Action_o *)(*v66)[1].monitor, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v136 = *(EventRewardSetEntity_o **)(v63 + 32);
      v137 = (CommonUI_o *)Instance;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v138 = LocalizationManager__Get((System_String_o *)StringLiteral_8479/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v139 = System_String__Format(v138, *v81, 0LL);
      v140 = *v66;
      v141 = v139;
      v142 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B4D1DC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v142,
        v140,
        Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__,
        0LL);
      if ( v137 )
      {
        CommonUI__OpenMissionRewardGetDialog_30328544(v137, v136, v141, v142, 0LL);
        goto LABEL_155;
      }
    }
    goto LABEL_52;
  }
  Master_object = (__int64)this->fields.touchBlockObj;
  if ( !Master_object )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v83 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v84 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v84,
    (Il2CppObject *)v63,
    Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__,
    0LL);
  if ( !v83 )
    goto LABEL_52;
  SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)v83, v84, 0LL);
LABEL_155:
  ActionExtensions__Call(this->fields.reDispAct, 0LL);
}


void __fastcall CompleteMissionListViewManager__Awake(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager__CehckQpMaxAlert(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        System_Action_o *decideCallback,
        const MethodInfo *method)
{
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
  __int64 v19; // x21
  void *QpGiftEntity; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x24
  _DWORD *v25; // x22
  System_String_o *Empty; // x20
  _DWORD *v27; // x23
  int32_t v28; // w25
  int32_t QpMax; // w8
  int v30; // w25
  int v31; // w26
  System_String_o *v32; // x24
  Il2CppObject *NumberFormat; // x25
  System_String_o *v34; // x0
  BalanceConfig_c *v35; // x8
  Il2CppObject *v36; // x26
  Il2CppObject *v37; // x0
  System_String_o *v38; // x24
  int32_t v39; // w8
  int32_t v40; // w8
  System_String_o *v41; // x24
  System_String_o *v42; // x0
  int32_t v43; // w8
  Il2CppObject *v44; // x23
  System_String_o *v45; // x0
  BalanceConfig_c *v46; // x8
  Il2CppObject *v47; // x25
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x22
  System_String_o *v51; // x23
  System_String_o *v52; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x25
  System_String_o *v54; // x19
  System_Action_o *v55; // x26
  System_Action_o *onTransition; // x21
  Il2CppObject *v57; // x27
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3

  if ( (byte_49B9B6C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, missionEntity);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v7);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v8);
    sub_1B4CF90(&string_TypeInfo, v9);
    sub_1B4CF90(&Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, v10);
    sub_1B4CF90(&Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__, v11);
    sub_1B4CF90(&CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo, v12);
    sub_1B4CF90(&CompleteMissionListViewManager___c_TypeInfo, v13);
    sub_1B4CF90(&StringLiteral_8518/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v14);
    sub_1B4CF90(&StringLiteral_8521/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v15);
    sub_1B4CF90(&StringLiteral_11427/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v16);
    sub_1B4CF90(&StringLiteral_11426/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v17);
    sub_1B4CF90(&StringLiteral_11433/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v18);
    byte_49B9B6C = 1;
  }
  v19 = sub_1B4D1DC(CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_35;
  *(_QWORD *)(v19 + 16) = decideCallback;
  v24 = v19 + 16;
  sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 16), (int32_t)decideCallback, v22, v23);
  if ( !missionEntity )
    goto LABEL_35;
  QpGiftEntity = EventMissionEntity__GetQpGiftEntity(missionEntity, 0LL);
  if ( !QpGiftEntity )
  {
LABEL_18:
    if ( *(_QWORD *)v24 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v24 + 64LL),
        *(_QWORD *)(*(_QWORD *)v24 + 40LL));
      return;
    }
LABEL_35:
    sub_1B4D1EC(QpGiftEntity, v21);
  }
  v25 = QpGiftEntity;
  Empty = string_TypeInfo->static_fields->Empty;
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  *(_QWORD *)&this->fields.overQpValue = 0LL;
  QpGiftEntity = UserGameMaster__getSelfUserGame(0LL);
  if ( !QpGiftEntity )
    goto LABEL_35;
  v27 = QpGiftEntity;
  v28 = *((_DWORD *)QpGiftEntity + 24);
  QpGiftEntity = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    QpGiftEntity = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)QpGiftEntity + 23) + 4LL);
  if ( v28 < QpMax )
  {
    v30 = v27[24];
    v31 = v25[7];
    if ( !*((_DWORD *)QpGiftEntity + 56) )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity);
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v31 + v30 > QpMax )
    {
      *(_WORD *)&this->fields.isQpMaxAlert = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8521/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v25[7], 0LL);
      v34 = LocalizationManager__GetNumberFormat(v27[24], 0LL);
      v35 = BalanceConfig_TypeInfo;
      v36 = (Il2CppObject *)v34;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v35 = BalanceConfig_TypeInfo;
      }
      v37 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v35->static_fields->QpMax, 0LL);
      v38 = System_String__Format_61134828(v32, NumberFormat, v36, v37, 0LL);
      v39 = BalanceConfig_TypeInfo->static_fields->QpMax - v27[24];
      this->fields.getQpValue = v39;
      v40 = v25[7] - v39;
      goto LABEL_25;
    }
    goto LABEL_18;
  }
  *(_WORD *)&this->fields.isQpMaxAlert = 257;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8518/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
  v42 = LocalizationManager__GetNumberFormat(v25[7], 0LL);
  v43 = v27[24];
  v44 = (Il2CppObject *)v42;
  v45 = LocalizationManager__GetNumberFormat(v43, 0LL);
  v46 = BalanceConfig_TypeInfo;
  v47 = (Il2CppObject *)v45;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v46 = BalanceConfig_TypeInfo;
  }
  v48 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v46->static_fields->QpMax, 0LL);
  v49 = System_String__Format_61134828(v41, v44, v47, v48, 0LL);
  v40 = v25[7];
  v38 = v49;
LABEL_25:
  this->fields.overQpValue = v40;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11427/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11433/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11426/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  v54 = v52;
  v55 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v19,
    Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__,
    0LL);
  QpGiftEntity = CompleteMissionListViewManager___c_TypeInfo;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    QpGiftEntity = CompleteMissionListViewManager___c_TypeInfo;
  }
  onTransition = *(System_Action_o **)(*((_QWORD *)QpGiftEntity + 23) + 32LL);
  if ( !onTransition )
  {
    if ( !*((_DWORD *)QpGiftEntity + 56) )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity);
      QpGiftEntity = CompleteMissionListViewManager___c_TypeInfo;
    }
    v57 = (Il2CppObject *)**((_QWORD **)QpGiftEntity + 23);
    onTransition = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(onTransition, v57, Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__68_1 = onTransition;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__68_1, (int32_t)onTransition, v59, v60);
  }
  if ( !qpMaxAlertDialog )
    goto LABEL_35;
  ServantSellMaxAlertDialog__Open(qpMaxAlertDialog, Empty, v38, Empty, v50, v51, v54, v55, onTransition, 0LL, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__CreateList(
        CompleteMissionListViewManager_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionList,
        System_Int32_array *mstMissionIdList,
        int32_t type,
        System_Action_o *redispCallBack,
        const MethodInfo *method)
{
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  CompleteMissionListViewItem_o *v26; // x23
  const MethodInfo *v27; // x3
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t CompleteMissionFilterId_k__BackingField; // w25
  __int64 *v39; // x8
  void *ObjectList; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int v46; // w22
  System_Collections_Generic_List_object__o *v47; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49B9B51 & 1) == 0 )
  {
    sub_1B4CF90(&CompleteMissionListViewItem_TypeInfo, missionList);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v17);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v18);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v19);
    sub_1B4CF90(&StringLiteral_8612/*"MST_MISSION_EMPTY_TXT"*/, v20);
    sub_1B4CF90(&StringLiteral_8483/*"MISSION_EMPTY_TXT"*/, v21);
    byte_49B9B51 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = 0;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v51 = v50;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v51.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v26 = (CompleteMissionListViewItem_o *)sub_1B4D1DC(CompleteMissionListViewItem_TypeInfo);
      CompleteMissionListViewItem___ctor(v26, (EventMissionEntity_o *)current, type, v27);
      if ( !itemList )
        sub_1B4D1EC(v28, v29);
      items = itemList->fields._items;
      v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B4D1EC(v28, v29);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v26,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v26;
        sub_1B4CF34((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v26, v30, v31);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v22, v23);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !byte_49B9BB3 )
  {
    sub_1B4CF90(&EventRewardSaveData_TypeInfo, sort);
    byte_49B9BB3 = 1;
  }
  CompleteMissionFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( CompleteMissionFilterId_k__BackingField )
    v39 = &StringLiteral_8483/*"MISSION_EMPTY_TXT"*/;
  else
    v39 = &StringLiteral_8612/*"MST_MISSION_EMPTY_TXT"*/;
  ObjectList = LocalizationManager__Get((System_String_o *)*v39, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_39;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
  if ( !byte_49B9BB3 )
  {
    sub_1B4CF90(&EventRewardSaveData_TypeInfo, v42);
    byte_49B9BB3 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  CompleteMissionListViewManager__setList(this, v42);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.reDispAct, (int32_t)redispCallBack, v44, v45);
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v43);
  if ( !ObjectList )
LABEL_39:
    sub_1B4D1EC(ObjectList, v41);
  v46 = *((_DWORD *)ObjectList + 6);
  v47 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v46 >= 1 )
  {
    for ( i = 0; i != v46; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v47,
               i,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ObjectList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_39;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)Item, 0LL);
      }
    }
  }
}


void __fastcall CompleteMissionListViewManager__DestroyList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CompleteMissionListViewItem_o *__fastcall CompleteMissionListViewManager__GetItem(
        CompleteMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CompleteMissionListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49B9B54 & 1) == 0 )
  {
    sub_1B4CF90(&CompleteMissionListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_49B9B54 = 1;
  }
  result = (CompleteMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CompleteMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (CompleteMissionListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
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


void __fastcall CompleteMissionListViewManager__ModifyItem(
        CompleteMissionListViewManager_o *this,
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
  int64_t Instance; // x0
  __int64 v14; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  Il2CppObject *Entity; // x20
  void *monitor; // x8
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *v19; // x8
  int64_t v20; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  MissionListViewItem_o *current; // x22
  __int64 methodPtr_low; // x10
  __int64 MissionId; // x0
  __int64 v26; // x1
  struct EventMissionEntity_o *v27; // x8
  int32_t v28; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v30; // x1
  struct ListViewObject_o *v31; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49B9B63 & 1) == 0 )
  {
    sub_1B4CF90(&CompleteMissionListViewItem_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1B4CF90(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49B9B63 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             missionToRecieve->fields.id,
             (const MethodInfo_319D99C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_45;
  if ( Instance <= (__int64)Entity[4].klass )
  {
    this->fields.isEndEvent = 0;
    return;
  }
  monitor = Entity[4].monitor;
  this->fields.isEndEvent = Instance <= (__int64)monitor;
  if ( Instance <= (__int64)monitor && this->fields.itemList )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_49B57A5 )
      {
        sub_1B4CF90(&NetworkManager_TypeInfo, v14);
        byte_49B57A5 = 1;
      }
      Instance = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (int64_t)NetworkManager_TypeInfo;
      }
      v19 = this->fields.missionToRecieve;
      if ( v19 )
      {
        if ( MasterData_object )
        {
          Instance = (int64_t)UserEventMissionMaster__GetEntity(
                                (UserEventMissionMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                                v19->fields.id,
                                0LL);
          if ( this->fields.itemList )
          {
            v20 = Instance;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v32,
              (System_Collections_Generic_List_object__o *)this->fields.itemList,
              (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v33 = v32;
            while ( 1 )
            {
              v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v33,
                      (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v21 )
                break;
              current = (MissionListViewItem_o *)v33.fields._current;
              if ( !v33.fields._current
                || (methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v33.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                || (CompleteMissionListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
              {
                sub_1B4D1EC(v21, v22);
              }
              MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v33.fields._current, 0LL);
              v27 = this->fields.missionToRecieve;
              if ( !v27 )
                sub_1B4D1EC(MissionId, v26);
              v28 = MissionId;
              if ( (_DWORD)MissionId == v27->fields.id )
              {
                if ( !byte_49B7B67 )
                {
                  MissionId = sub_1B4CF90(&EventRewardSaveData_TypeInfo, v26);
                  byte_49B7B67 = 1;
                }
                EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v28;
                if ( !v20 )
                  sub_1B4D1EC(MissionId, v26);
                MissionListViewItem__ModifyItem(current, *(_DWORD *)(v20 + 32) == 5, 0LL);
              }
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v31 = current->fields.viewObject;
                if ( !v31 )
                  sub_1B4D1EC(0LL, v30);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v31->klass->vtable._5_SetItem.method)(
                  v31,
                  current,
                  v31->klass->vtable._6_SetItem.methodPtr);
              }
              if ( current->fields.dispNo == 1 )
                ((void (__fastcall *)(MissionListViewItem_o *, Il2CppMethodPointer))current->klass->vtable._6_CheckMissionCond.method)(
                  current,
                  current->klass->vtable._7_SetGiftData.methodPtr);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v33,
              (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            return;
          }
        }
      }
    }
LABEL_45:
    sub_1B4D1EC(Instance, v14);
  }
}


void __fastcall CompleteMissionListViewManager__OnChangeAlphaAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w21
  int32_t v7; // w20

  if ( (byte_49B9B6B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v3);
    byte_49B9B6B = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, v5);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v7,
                                                                  (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      CompleteMissionListViewObject__OnChangeAlphaAnim((CompleteMissionListViewObject_o *)ObjectList, v5);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1B4D1EC(ObjectList, v5);
  }
}


void __fastcall CompleteMissionListViewManager__OnClickFilterList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_49B9B57 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CompleteMissionListViewManager_OnClickFilterList__, method);
    byte_49B9B57 = 1;
  }
  v3 = Method_CompleteMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_CompleteMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_BE195C[filterStatus];
  CompleteMissionListViewManager__setList(this, v5);
}


void __fastcall CompleteMissionListViewManager__OnClickListView(
        CompleteMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 methodPtr_low; // x10
  PlayMakerFSM_o *v10; // x20
  CompleteMissionListViewManager_o *IsHideReward; // x0
  const MethodInfo *v12; // x1
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v14; // x2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  if ( (byte_49B9B55 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CompleteMissionListViewManager_OnClickListView__, obj);
    sub_1B4CF90(&CompleteMissionListViewObject_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_15267/*"Wait_Action"*/, v6);
    byte_49B9B55 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_20;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15267/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (methodPtr_low = LOBYTE(CompleteMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CompleteMissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)CompleteMissionListViewObject__GetItem(
                                        (CompleteMissionListViewObject_o *)obj,
                                        (const MethodInfo *)obj)) == 0LL )
  {
LABEL_20:
    sub_1B4D1EC(targetFSM, obj);
  }
  v10 = targetFSM;
  IsHideReward = (CompleteMissionListViewManager_o *)(*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
                                                       targetFSM,
                                                       targetFSM->klass[1]._1.this_arg.data);
  if ( ((unsigned __int8)IsHideReward & 1) == 0
    || (IsHideReward = (CompleteMissionListViewManager_o *)CompleteMissionListViewItem__get_IsHideReward(
                                                             (CompleteMissionListViewItem_o *)v10,
                                                             v12),
        ((unsigned __int8)IsHideReward & 1) != 0)
    || BYTE4(v10[4].fields.fsm) )
  {
    if ( v10[4].fields.m_CachedPtr == 3
      && (LODWORD(v10[2].fields.addEventHandlers) != 1
       || CompleteMissionListViewManager__checkPanelAllOpen(IsHideReward, v12)) )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v10, 0LL);
      CompleteMissionListViewManager__recieveReward(this, EventMissionEntity, v14);
    }
    else
    {
      v15 = Method_CompleteMissionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1B4CFA8(Method_CompleteMissionListViewManager_OnClickListView__);
      v16 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0LL);
    }
  }
  else
  {
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v10, 0, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
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

  if ( (byte_49B9B5D & 1) == 0 )
  {
    sub_1B4CF90(&CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo, rewards);
    byte_49B9B5D = 1;
  }
  v9 = isCompleteMission;
  v10 = sub_1B4D1DC(CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(_QWORD *)(v10 + 48) = rewards;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 48), (int32_t)rewards, v13, v14);
  *(_QWORD *)(v10 + 56) = rewardDetail;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 56), (int32_t)rewardDetail, v15, v16);
  *(_BYTE *)(v10 + 40) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


void __fastcall CompleteMissionListViewManager__RefrashListDisp(
        CompleteMissionListViewManager_o *this,
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

  if ( (byte_49B9B56 & 1) == 0 )
  {
    sub_1B4CF90(&CompleteMissionListViewItem_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v8);
    byte_49B9B56 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v11 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v17;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    if ( i.fields._current )
    {
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CompleteMissionListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == CompleteMissionListViewItem_TypeInfo )
      {
        continue;
      }
    }
    sub_1B4D1EC(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
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
    sub_1B4D1EC(ObjectList, v10);
  }
}


void __fastcall CompleteMissionListViewManager__SetOpenItem(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v16; // x1
  struct CompleteMissionListViewItem_o *v17; // x21
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v23; // x2
  float openItemTime; // s8
  System_Action_o *v25; // x20
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49B9B64 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_CompleteMissionListViewManager_modifyOpenItem__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v8);
    sub_1B4CF90(&StringLiteral_18532/*"ef_mission_extric01"*/, v9);
    byte_49B9B64 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1B4D1EC(0LL, v11);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v26,
        ObjectList,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
      v27 = v26;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v27,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
        if ( !v12 )
          break;
        current = v27.fields._current;
        if ( !v27.fields._current )
          sub_1B4D1EC(v12, v13);
        Item = (MissionListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                          (CompleteMissionListViewObject_o *)v27.fields._current,
                                          v13);
        v17 = (struct CompleteMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1B4D1EC(0LL, v16);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_49B7B67 )
          {
            sub_1B4CF90(&EventRewardSaveData_TypeInfo, v18);
            byte_49B7B67 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v17;
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.openTargetItem, (int32_t)v17, v19, v20);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v17, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            CompleteMissionListViewManager__getEffect((System_String_o *)StringLiteral_18532/*"ef_mission_extric01"*/, transform, v23);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v27,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    }
    openItemTime = this->fields.openItemTime;
    v25 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_CompleteMissionListViewManager_modifyOpenItem__, 0LL);
    ListViewManager__DelayCallMethod((ListViewManager_o *)this, openItemTime, v25, 0LL);
  }
}


void __fastcall CompleteMissionListViewManager__SetResultData(
        CompleteMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w19

  this->fields.getSvtList = svts;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.getSvtList, (int32_t)svts, (int32_t)cmds, method);
  this->fields.getCommandCodeList = cmds;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.getCommandCodeList, (int32_t)cmds, v6, v7);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1B4D1EC(v8, v9);
  id = missionToRecieve->fields.id;
  if ( !byte_49B7B67 )
  {
    sub_1B4CF90(&EventRewardSaveData_TypeInfo, v9);
    byte_49B7B67 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
}


System_Collections_IEnumerator_o *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49B9B68 & 1) == 0 )
  {
    sub_1B4CF90(&CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo, method);
    byte_49B9B68 = 1;
  }
  v3 = sub_1B4D1DC(CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall CompleteMissionListViewManager___modifyOpenItem_b__58_0(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float endEffectTime; // s8
  System_Action_o *v5; // x20

  if ( (byte_49B9B6E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_CompleteMissionListViewManager_actionAfterCallback__, v3);
    byte_49B9B6E = 1;
  }
  CompleteMissionListViewManager__RefrashListDisp(this, method);
  endEffectTime = this->fields.endEffectTime;
  v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CompleteMissionListViewManager_actionAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)this, endEffectTime, v5, 0LL);
}


void __fastcall CompleteMissionListViewManager__actionAfterCallback(
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
    p_actionCallback->klass = 0LL;
    sub_1B4CF34(p_actionCallback, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))actionCallback->fields.m_target)(
      actionCallback->fields.original_method_info,
      *(_QWORD *)&actionCallback->fields.extra_arg);
  }
}


void __fastcall CompleteMissionListViewManager__afterReward(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  AutomatedAction_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49B9B5E & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    sub_1B4CF90(&StringLiteral_5365/*"END_EFFECT"*/, v3);
    byte_49B9B5E = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL),
        (Instance = (AutomatedAction_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_1B4D1EC(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5365/*"END_EFFECT"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager__animAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t dispNo; // w20
  void *monitor; // x8

  v2 = this;
  if ( (byte_49B9B67 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1B4CF90(
                                                 &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                 method);
    byte_49B9B67 = 1;
  }
  missionToRecieve = v2->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_12;
  dispNo = missionToRecieve->fields.dispNo;
  this = (CompleteMissionListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (monitor = this[2].monitor) == 0LL
    || (this = (CompleteMissionListViewManager_o *)*((_QWORD *)monitor + 4)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     dispNo - 2,
                                                     0LL)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     v2->fields.distanceToTexObj,
                                                     0LL)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (CompleteMissionListViewManager_o *)v2->fields.touchBlockObj) == 0LL) )
  {
LABEL_12:
    sub_1B4D1EC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CompleteMissionListViewManager__checkAcceptable(
        CompleteMissionListViewManager_o *this,
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
  void *Instance; // x0
  __int64 v17; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v19; // x8
  _DWORD *v20; // x20
  _DWORD *v21; // x21
  Il2CppObject *MasterData_object; // x21
  UserPresentBoxEntity_array *VaildList; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  BalanceConfig_c *v26; // x0
  __int64 *v27; // x8
  CompleteMissionListViewManager___c_c *v28; // x0
  System_Action_o *_9__46_0; // x20
  Il2CppObject *v30; // x21
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_49B9B5A & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B4CF90(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__, v12);
    sub_1B4CF90(&CompleteMissionListViewManager___c_TypeInfo, v13);
    sub_1B4CF90(&StringLiteral_11939/*"SHOW_MSG"*/, v14);
    sub_1B4CF90(&StringLiteral_10908/*"REWARD_ACCEPTABLE"*/, v15);
    byte_49B9B5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_40;
  if ( !Instance )
    goto LABEL_40;
  Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v19 = this->fields.missionToRecieve;
  if ( !v19 )
    goto LABEL_40;
  if ( v19->fields.rewardType == 1 )
  {
    v20 = Instance;
    if ( !Instance )
      goto LABEL_40;
    if ( Gift__IsServant_38223924(*((_DWORD *)Instance + 5), 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( Instance )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v20[6],
                       (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Instance )
          {
            v21 = Instance;
            if ( !SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0LL) && !SvtType__IsStatusUp(v21[21], 0LL) )
              goto LABEL_29;
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_49B57A5 )
              {
                sub_1B4CF90(&NetworkManager_TypeInfo, v17);
                byte_49B57A5 = 1;
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
                              0LL);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  Instance = DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( Instance )
                  {
                    Instance = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 v20[6],
                                 (const MethodInfo_319D99C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( VaildList )
                    {
                      v26 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v26 = BalanceConfig_TypeInfo;
                      }
                      if ( v26->static_fields->PresentBoxMax > (signed int)VaildList->max_length )
                        goto LABEL_29;
                      v28 = CompleteMissionListViewManager___c_TypeInfo;
                      if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
                        v28 = CompleteMissionListViewManager___c_TypeInfo;
                      }
                      _9__46_0 = v28->static_fields->__9__46_0;
                      if ( !_9__46_0 )
                      {
                        if ( !v28->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v28);
                          v28 = CompleteMissionListViewManager___c_TypeInfo;
                        }
                        v30 = (Il2CppObject *)v28->static_fields->__9;
                        _9__46_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                        System_Action___ctor(
                          _9__46_0,
                          v30,
                          Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__,
                          0LL);
                        static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        static_fields->__9__46_0 = _9__46_0;
                        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__46_0, (int32_t)_9__46_0, v32, v33);
                      }
                      this->fields.ShowMSG = _9__46_0;
                      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.ShowMSG, (int32_t)_9__46_0, v24, v25);
                      Instance = this->fields.targetFSM;
                      if ( Instance )
                      {
                        v27 = &StringLiteral_11939/*"SHOW_MSG"*/;
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
      sub_1B4D1EC(Instance, v17);
    }
  }
LABEL_29:
  Instance = this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_40;
  v27 = &StringLiteral_10908/*"REWARD_ACCEPTABLE"*/;
LABEL_31:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v27, 0LL);
}


bool __fastcall CompleteMissionListViewManager__checkPanelAllOpen(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  System_Collections_Generic_List_EventMissionEntity__o *v9; // x19

  if ( (byte_49B9B6A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v2);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49B9B6A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (v8 = *(_QWORD *)&Instance[8].fields.writeMasterDataThreadEnd) == 0
    || (v9 = *(System_Collections_Generic_List_EventMissionEntity__o **)(v8 + 128),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, v9, 0LL), !v9)
    || !Instance )
  {
    sub_1B4D1EC(Instance, v7);
  }
  return v9->fields._size - 1 == LODWORD(Instance->fields.m_CancellationTokenSource);
}


void __fastcall CompleteMissionListViewManager__endloadEffect(
        CompleteMissionListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v10; // x1
  struct EventMissionEntity_o *v11; // x8

  if ( (byte_49B9B61 & 1) == 0 )
  {
    sub_1B4CF90(&CompleteMissionListViewManager_TypeInfo, data);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v6);
    byte_49B9B61 = 1;
  }
  if ( data )
  {
    CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_1B4CF34(
      (CGThumbnailListItem_o *)CompleteMissionListViewManager_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve )
      goto LABEL_13;
    if ( MissionActionManager__checkScroll(missionToRecieve->fields.id, 5, 0LL) )
    {
      if ( this->fields.filterStatus )
      {
        this->fields.filterStatus = 0;
        CompleteMissionListViewManager__setList(this, v10);
      }
    }
    else
    {
      CompleteMissionListViewManager__RefrashListDisp(this, v10);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v11 = this->fields.missionToRecieve;
    if ( !v11 || !Instance )
LABEL_13:
      sub_1B4D1EC(Instance, v8);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v11->fields.id, 5, 0, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall CompleteMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__49169892; // x19
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_49B9B62 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, parentTr);
    sub_1B4CF90(&CompleteMissionListViewManager_TypeInfo, v5);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    byte_49B9B62 = 1;
  }
  effectAssetData = CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49169892 = AssetData__GetObject_object__49169892(
                              effectAssetData,
                              name,
                              (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49169892,
                                     (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_49B5361 )
  {
    effectAssetData = (AssetData_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_49B5361 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49B5366 )
  {
    effectAssetData = (AssetData_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_49B5366 = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1B4D1EC(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v10;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ClippingObjectList(
        CompleteMissionListViewManager_o *this,
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

  if ( (byte_49B9B50 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    byte_49B9B50 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B4D1EC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B4D1EC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B4D1EC(0LL, v18);
      Item = (ListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                 (CompleteMissionListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B4D1EC(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_41341816((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B4D1EC(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B4D1EC(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B4D1EC(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B4D1EC(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B4CF34((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v11;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B9B4F & 1) == 0 )
  {
    sub_1B4CF90(&Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___, method);
    byte_49B9B4F = 1;
  }
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                               (MissionListViewManager_o *)this,
                                                                               (const MethodInfo_2F839C0 *)Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
}


void __fastcall CompleteMissionListViewManager__loadOpenMissionEffect(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_49B9B60 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    sub_1B4CF90(&Method_CompleteMissionListViewManager_endloadEffect__, v3);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_5776/*"Effect/EventMission"*/, v5);
    byte_49B9B60 = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5776/*"Effect/EventMission"*/, v6, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__modifyOpenItem(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v16; // x1
  void *v17; // x0
  System_Action_o *v18; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49B9B65 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&CompleteMissionListViewItem_TypeInfo, v3);
    sub_1B4CF90(&Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    byte_49B9B65 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1B4D1EC(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v20.fields._current;
      if ( !v20.fields._current
        || (methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v20.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (CompleteMissionListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        sub_1B4D1EC(v11, v12);
      }
      monitor = (UnityEngine_Object_o *)v20.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v17 = current[6].monitor;
        if ( !v17 )
          sub_1B4D1EC(0LL, v16);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v18 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v12; // w22
  int32_t v13; // w21
  __int64 methodPtr_low; // x10
  bool v15; // w0
  _QWORD *v16; // x8
  bool v17; // w19
  System_Reflection_MethodBase_o *v18; // x0
  int32_t v19; // w1

  if ( (byte_49B9B53 & 1) == 0 )
  {
    sub_1B4CF90(&CompleteMissionListViewItem_TypeInfo, *(_QWORD *)&missionID);
    sub_1B4CF90(&Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    byte_49B9B53 = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.actionCallback, (int32_t)callback, (int32_t)callback, method);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v12 = size - 1;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v13,
                                                                (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (CompleteMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0LL);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v12 == v13 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v13;
    }
    while ( itemList );
LABEL_15:
    sub_1B4D1EC(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v13 = 0;
LABEL_17:
  v15 = ListViewManager__MoveTopItem((ListViewManager_o *)this, v13, 1, 0.0, 0LL);
  v16 = Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__;
  v17 = v15;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1B4CFA8(Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__);
  v18 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v16, v16[4]);
  if ( v17 )
    v19 = 0;
  else
    v19 = 2;
  OverwriteAssetSoundName__PlaySystemSe(v18, v19, 0, 0LL);
}


void __fastcall CompleteMissionListViewManager__panelAfterCallback(
        CompleteMissionListViewManager_o *this,
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
  UnityEngine_GameObject_o *touchBlockObj; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  Il2CppObject *Entity; // x19
  UnityEngine_GameObject_c *klass; // x8
  System_String_o *v21; // x19
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x19
  CommonUI_o *v25; // x20
  CompleteMissionListViewManager___c_c *v26; // x8
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v28; // x22
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_String_o *countText; // [xsp+30h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_49B9B69 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1B4CF90(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&System_Text_RegularExpressions_Regex_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B4CF90(&Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, v10);
    sub_1B4CF90(&CompleteMissionListViewManager___c_TypeInfo, v11);
    sub_1B4CF90(&StringLiteral_24819/*"{0}×{1}"*/, v12);
    sub_1B4CF90(&StringLiteral_15663/*"[^0-9]"*/, v13);
    sub_1B4CF90(&StringLiteral_3680/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, v14);
    sub_1B4CF90(&StringLiteral_1/*""*/, v15);
    sub_1B4CF90(&StringLiteral_1190/*"1"*/, v16);
    byte_49B9B69 = 1;
  }
  countText = (System_String_o *)StringLiteral_1/*""*/;
  nameText = (System_String_o *)StringLiteral_1/*""*/;
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             missionToRecieve->fields.missionTargetId,
             (const MethodInfo_319D99C *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Entity )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)GiftMaster__GetGiftListById(
                                                (GiftMaster_o *)touchBlockObj,
                                                HIDWORD(Entity[1].monitor),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_31;
  klass = touchBlockObj[1].klass;
  if ( !klass )
    return;
  if ( !(_DWORD)klass )
    sub_1B4D1F4(touchBlockObj, method);
  touchBlockObj = (UnityEngine_GameObject_o *)touchBlockObj[1].monitor;
  if ( !touchBlockObj )
    goto LABEL_31;
  GiftEntity__GetInfo((GiftEntity_o *)touchBlockObj, &nameText, &countText, 0LL);
  if ( System_String__IsNullOrEmpty(nameText, 0LL) )
    return;
  if ( !System_String__IsNullOrEmpty(countText, 0LL) )
  {
    v21 = countText;
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    v22 = System_Text_RegularExpressions_Regex__Replace(
            v21,
            (System_String_o *)StringLiteral_15663/*"[^0-9]"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v22, (System_String_o *)StringLiteral_1190/*"1"*/, 0LL) )
      nameText = System_String__Format_61134760(
                   (System_String_o *)StringLiteral_24819/*"{0}×{1}"*/,
                   (Il2CppObject *)nameText,
                   (Il2CppObject *)countText,
                   0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, 0LL);
  v24 = System_String__Format(v23, (Il2CppObject *)nameText, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (CommonUI_o *)touchBlockObj;
  v26 = CompleteMissionListViewManager___c_TypeInfo;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v26 = CompleteMissionListViewManager___c_TypeInfo;
  }
  _9__65_0 = v26->static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__65_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__65_0, v28, Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = _9__65_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__65_0, (int32_t)_9__65_0, v30, v31);
  }
  if ( !v25 )
LABEL_31:
    sub_1B4D1EC(touchBlockObj, method);
  CommonUI__OpenNotificationDialog(v25, 0LL, v24, _9__65_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall CompleteMissionListViewManager__recieveReward(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  EventMissionEntity_o *v17; // x21
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3

  if ( (byte_49B9B59 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, missionEntity);
    sub_1B4CF90(&Method_CompleteMissionListViewManager_recieveReward__, v5);
    sub_1B4CF90(&Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__, v6);
    sub_1B4CF90(&CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo, v7);
    byte_49B9B59 = 1;
  }
  v8 = sub_1B4D1DC(CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = missionEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 24), (int32_t)missionEntity, v13, v14);
  v15 = Method_CompleteMissionListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_recieveReward__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B4CFA8(Method_CompleteMissionListViewManager_recieveReward__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 8, 0, 0LL);
  v17 = *(EventMissionEntity_o **)(v8 + 24);
  v18 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v8,
    Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__,
    0LL);
  CompleteMissionListViewManager__CehckQpMaxAlert(this, v17, v18, v19);
}


void __fastcall CompleteMissionListViewManager__setAfterAction(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_49B9B5F & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_49B9B5F = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_1B4D1EC(Instance, v4);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, missionToRecieve->fields.id, 5, 1, 0LL);
  }
  else
  {
    CompleteMissionListViewManager__loadOpenMissionEffect(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__setFilterId(
        CompleteMissionListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  CompleteMissionListViewManager__setList(this, *(const MethodInfo **)&id);
}


void __fastcall CompleteMissionListViewManager__setFilterName(
        CompleteMissionListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UISprite_o *filterBtnTxt; // x0

  filterBtnTxt = this->fields.filterBtnTxt;
  if ( !filterBtnTxt
    || (UISprite__set_spriteName(filterBtnTxt, targetFile, 0LL), (filterBtnTxt = this->fields.filterBtnTxt) == 0LL) )
  {
    sub_1B4D1EC(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall CompleteMissionListViewManager__setList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v11; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  UILabel_o *v19; // x21
  struct ListViewSort_o *v20; // x8
  int v21; // w9
  bool v22; // w2
  __int64 v23; // x1
  int32_t filterStatus; // w19

  if ( (byte_49B9B58 & 1) == 0 )
  {
    sub_1B4CF90(&ListViewSort_TypeInfo, method);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_8612/*"MST_MISSION_EMPTY_TXT"*/, v4);
    sub_1B4CF90(&StringLiteral_17256/*"btn_txt_completed"*/, v5);
    sub_1B4CF90(&StringLiteral_17289/*"btn_txt_receipt"*/, v6);
    sub_1B4CF90(&StringLiteral_17288/*"btn_txt_progress"*/, v7);
    sub_1B4CF90(&StringLiteral_8483/*"MISSION_EMPTY_TXT"*/, v8);
    sub_1B4CF90(&StringLiteral_17238/*"btn_txt_all"*/, v9);
    byte_49B9B58 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v11 = (ListViewSort_o *)sub_1B4D1DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_41359864(v11, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v11;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v11, v13, v14);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8483/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_42:
    sub_1B4D1EC(operationSortInfo, v17);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17238/*"btn_txt_all"*/, v18);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 1, 0LL);
      v19 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8612/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v19 )
        goto LABEL_42;
      UILabel__set_text(v19, operationSortInfo, 0LL);
      goto LABEL_35;
    case 1:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17289/*"btn_txt_receipt"*/, v18);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
      v20 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v21 = 1;
      goto LABEL_37;
    case 2:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17288/*"btn_txt_progress"*/, v18);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v22 = 0;
      goto LABEL_33;
    case 3:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17256/*"btn_txt_completed"*/, v18);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v22 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v22, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_35:
      v20 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v21 = 13;
LABEL_37:
      v20->fields.sortKind = v21;
LABEL_38:
      operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_49B9BB4 )
      {
        sub_1B4CF90(&EventRewardSaveData_TypeInfo, v23);
        byte_49B9BB4 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = filterStatus;
      EventRewardSaveData__SaveCompleteMissionData(0LL);
      return;
    default:
      goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__setNextMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v13; // w22
  int32_t v14; // w21
  __int64 methodPtr_low; // x10
  System_Action_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_49B9B52 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&missionID);
    sub_1B4CF90(&CompleteMissionListViewItem_TypeInfo, v7);
    sub_1B4CF90(&Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_49B9B52 = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.actionCallback, (int32_t)callback, (int32_t)callback, method);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v13 = size - 1;
  if ( size >= 1 )
  {
    v14 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v14,
                                                                (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (CompleteMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0LL);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v13 == v14 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v14;
    }
    while ( itemList );
LABEL_15:
    sub_1B4D1EC(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v14 = 0;
LABEL_17:
  v16 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__,
    0LL);
  this->fields.callbackAfterScroll = v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v16, v17, v18);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v14, 1, 0.0, 0LL);
}


void __fastcall CompleteMissionListViewManager__setOpenPanel(
        CompleteMissionListViewManager_o *this,
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
  __int64 v14; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v20; // x8
  Il2CppObject *Entity; // x21
  void *monitor; // x8
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  void *v26; // x8
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  void *v30; // x8
  Il2CppObject *v31; // x22
  void *v32; // x8
  UISprite_o *v33; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_String_o *v42; // x20
  AssetLoader_LoadEndDataHandler_o *v43; // x21
  int v44; // [xsp+8h] [xbp-48h] BYREF
  int klass_high; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49B9B66 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UITexture___, v4);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v5);
    sub_1B4CF90(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v6);
    sub_1B4CF90(&int_TypeInfo, v7);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B4CF90(&Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__, v11);
    sub_1B4CF90(&CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo, v12);
    sub_1B4CF90(&StringLiteral_4573/*"CompleteMission/{0}/{1}"*/, v13);
    byte_49B9B66 = 1;
  }
  v14 = sub_1B4D1DC(CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_42;
  *(_QWORD *)(v14 + 40) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 40), (int32_t)this, v17, v18);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 1, 0LL);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_42;
  *(_DWORD *)(v14 + 24) = missionToRecieve->fields.dispNo - 2;
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v20 = this->fields.missionToRecieve;
  if ( !v20 )
    goto LABEL_42;
  if ( !touchBlockObj )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             v20->fields.missionTargetId,
             (const MethodInfo_319D99C *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  monitor = touchBlockObj[56].monitor;
  if ( !monitor )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)monitor + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v14 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTexObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)touchBlockObj,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v14 + 16) = Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 16), (int32_t)Component_object, v24, v25);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v26 = touchBlockObj[56].monitor;
  if ( !v26 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v26 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v14 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToEfPanelObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToAdjustObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToRowlingPanelObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTextureObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  v27 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v14 + 32) = v27;
  sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 32), (int32_t)v27, v28, v29);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v30 = touchBlockObj[56].monitor;
  if ( !v30 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v30 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v14 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToNumObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  v31 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v32 = touchBlockObj[56].monitor;
  if ( !v32 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v32 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v14 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToEfPanelObj,
                                                0LL);
  if ( !touchBlockObj
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToAdjustObj,
                                                      0LL)) == 0LL
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToRowlingPanelObj,
                                                      0LL)) == 0LL
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToNumberObj,
                                                      0LL)) == 0LL
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)touchBlockObj,
                                                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UISprite___),
        !v31)
    || (v33 = (UISprite_o *)touchBlockObj) == 0LL
    || (UISprite__set_atlas((UISprite_o *)touchBlockObj, (UIAtlas_o *)v31[29].klass, 0LL),
        UISprite__set_spriteName(v33, (System_String_o *)v31[29].monitor, 0LL),
        !Entity) )
  {
LABEL_42:
    sub_1B4D1EC(touchBlockObj, v16);
  }
  klass_high = HIDWORD(Entity[1].klass);
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v34, v35, v36);
  v44 = *(_DWORD *)(v14 + 24);
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v38, v39, v40);
  v42 = System_String__Format_61134760((System_String_o *)StringLiteral_4573/*"CompleteMission/{0}/{1}"*/, v37, v41, 0LL);
  v43 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v43,
    (Il2CppObject *)v14,
    Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v42, v43, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setPanelAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *missionToRecieve; // x8

  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1B4D1EC(this, method);
  if ( missionToRecieve->fields.dispNo >= 2 )
    CompleteMissionListViewManager__setOpenPanel(this, method);
}


void __fastcall CompleteMissionListViewManager__startPanelAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchBlockObj; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x1

  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    sub_1B4D1EC(0LL, method);
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  started = CompleteMissionListViewManager__StartPanelAnimCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall CompleteMissionListViewManager__unAcceptableDlg(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_49B9B5B & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1B4CF90(&StringLiteral_5370/*"END_NOTICE"*/, method);
    byte_49B9B5B = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (CompleteMissionListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1B4D1EC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5370/*"END_NOTICE"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50___ctor(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__MoveNext(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct CompleteMissionListViewManager_o *_4__this; // x22
  Il2CppObject *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  void *_8__1; // x0
  struct CompleteMissionListViewManager_o *v15; // x1
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o *v16; // x8
  _BOOL4 isCompleteMission; // w9
  __int64 v18; // x8
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *Instance; // x0
  GiftEntity_array *rewards; // x20
  System_String_o *rewardDetail; // x21
  Il2CppObject *v31; // x23
  CommonUI_o *v32; // x19
  MissionRewardGetDialog_ClickDelegate_o *v33; // x22

  if ( (byte_49B9B7B & 1) == 0 )
  {
    sub_1B4CF90(&MissionRewardGetDialog_ClickDelegate_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Animation___, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(
      &Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      v5);
    sub_1B4CF90(&CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo, v6);
    byte_49B9B7B = 1;
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
    v9 = (Il2CppObject *)sub_1B4D1DC(CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    System_Object___ctor(v9, 0LL);
    this->fields.__8__1 = (struct CompleteMissionListViewManager___c__DisplayClass50_0_o *)v9;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v9, v10, v11);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_25;
    v15 = this->fields.__4__this;
    *((_QWORD *)_8__1 + 2) = v15;
    sub_1B4CF34((CGThumbnailListItem_o *)((char *)_8__1 + 16), (int32_t)v15, v12, v13);
    v16 = this->fields.__8__1;
    if ( !v16 )
      goto LABEL_25;
    isCompleteMission = this->fields.isCompleteMission;
    v16->fields.isCompleteMission = isCompleteMission;
    if ( !isCompleteMission )
      goto LABEL_22;
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0LL);
    _8__1 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !_8__1 )
      goto LABEL_25;
    v18 = *((_QWORD *)_8__1 + 169);
    if ( !v18 )
      goto LABEL_25;
    _8__1 = *(void **)(v18 + 32);
    if ( !_8__1 )
      goto LABEL_25;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)_8__1,
                         (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._anim_5__2, (int32_t)Component_object, v20, v21);
    _8__1 = this->fields._anim_5__2;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)_8__1, 0LL);
LABEL_16:
    _8__1 = this->fields._anim_5__2;
    if ( !_8__1 )
      goto LABEL_25;
    _8__1 = (void *)UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)_8__1, 0LL);
    if ( ((unsigned __int8)_8__1 & 1) != 0 )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1B4CF34((CGThumbnailListItem_o *)p__2__current, 0, v22, v23);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0LL);
    this->fields._anim_5__2 = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._anim_5__2, 0, v26, v27);
LABEL_22:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    rewards = this->fields.rewards;
    rewardDetail = this->fields.rewardDetail;
    v31 = (Il2CppObject *)this->fields.__8__1;
    v32 = (CommonUI_o *)Instance;
    v33 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B4D1DC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      v33,
      v31,
      Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      0LL);
    if ( v32 )
    {
      CommonUI__OpenMissionRewardGetDialog(v32, rewards, rewardDetail, v33, 0, 0LL);
      return 0;
    }
LABEL_25:
    sub_1B4D1EC(_8__1, method);
  }
  return 0;
}


Il2CppObject *__fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_IEnumerator_Reset(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_IEnumerator_get_Current(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_IDisposable_Dispose(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64___ctor(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__MoveNext(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t _1__state; // w8
  CompleteMissionListViewManager_o *_4__this; // x20
  UnityEngine_Component_o *Instance; // x0
  _QWORD *monitor; // x8
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_49B9B7C & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49B9B7C = 1;
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    monitor = Instance[56].monitor;
    if ( !monitor )
      goto LABEL_17;
    Instance = (UnityEngine_Component_o *)monitor[4];
    if ( !Instance )
      goto LABEL_17;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         Instance,
                         (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._anim_5__2, (int32_t)Component_object, v9, v10);
    Instance = (UnityEngine_Component_o *)this->fields._anim_5__2;
    if ( !Instance )
      goto LABEL_17;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)Instance, 0LL);
LABEL_11:
    Instance = (UnityEngine_Component_o *)this->fields._anim_5__2;
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)UnityEngine_Animation__get_isPlaying(
                                              (UnityEngine_Animation_o *)Instance,
                                              0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_1B4CF34((CGThumbnailListItem_o *)p__2__current, 0, v11, v12);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( _4__this )
      {
        CompleteMissionListViewManager__panelAfterCallback(_4__this, method);
        return 0;
      }
    }
LABEL_17:
    sub_1B4D1EC(Instance, method);
  }
  return 0;
}


Il2CppObject *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_IEnumerator_Reset(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_IEnumerator_get_Current(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_IDisposable_Dispose(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B9B6F & 1) == 0 )
  {
    sub_1B4CF90(&CompleteMissionListViewManager___c_TypeInfo, v1);
    byte_49B9B6F = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(CompleteMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CompleteMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct CompleteMissionListViewManager___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)CompleteMissionListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall CompleteMissionListViewManager___c___ctor(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___CehckQpMaxAlert_b__68_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49B9B72 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49B9B72 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseCompleteMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v4);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_0(
        CompleteMissionListViewManager___c_o *this,
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
  CompleteMissionListViewManager___c_c *v11; // x8
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  System_Action_o *_9__46_1; // x22
  Il2CppObject *v15; // x23
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_49B9B70 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v2);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, v4);
    sub_1B4CF90(&CompleteMissionListViewManager___c_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_8477/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v6);
    sub_1B4CF90(&StringLiteral_1/*""*/, v7);
    byte_49B9B70 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8477/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v11 = CompleteMissionListViewManager___c_TypeInfo;
  v12 = v9;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v11 = CompleteMissionListViewManager___c_TypeInfo;
  }
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  _9__46_1 = v11->static_fields->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v11->static_fields->__9;
    _9__46_1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__46_1, v15, Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__46_1 = _9__46_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__46_1, (int32_t)_9__46_1, v17, v18);
  }
  if ( !Instance )
    sub_1B4D1EC(v9, v10);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v13, v12, _9__46_1, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49B9B71 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49B9B71 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___panelAfterCallback_b__65_0(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass45_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass45_0___recieveReward_b__0(
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
  if ( (byte_49B9B73 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)sub_1B4CF90(&StringLiteral_8473/*"MISSIONN_REWARD"*/, method);
    byte_49B9B73 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (missionEntity = v4->fields.missionEntity,
        _4__this->fields.missionToRecieve = missionEntity,
        sub_1B4CF34((CGThumbnailListItem_o *)&_4__this->fields.missionToRecieve, (int32_t)missionEntity, v2, v3),
        (v7 = v4->fields.__4__this) == 0LL)
    || (this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)v7->fields.targetFSM) == 0LL )
  {
    sub_1B4D1EC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8473/*"MISSIONN_REWARD"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__2(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49B9B75 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49B9B75 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B4D1EC(Instance, v4);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__4(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49B9B74 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49B9B74 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B4D1EC(Instance, v4);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___ctor(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__0(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v2; // x19
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
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v16; // x8
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  System_Text_StringBuilder_o *v18; // x20
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v19; // x8
  System_String_o *v20; // x21
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v21; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v22; // x8
  System_String_o *v23; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v24; // x8
  System_String_o *v25; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v26; // x8
  System_String_o *v27; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v28; // x8
  System_String_o *v29; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v30; // x8
  struct CompleteMissionListViewManager_o *v31; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v32; // x8
  struct CompleteMissionListViewManager_o *v33; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x21
  long double inited; // q0
  _QWORD *v38; // x22
  __int64 v39; // x8
  __int64 v40; // x0
  __int64 v41; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v42; // x8
  struct CompleteMissionListViewManager_o *v43; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v44; // x21
  Il2CppObject *NumberFormat; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v46; // x8
  CompleteMissionListViewManager_o *v47; // x21
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v48; // x22
  const MethodInfo *v49; // x4
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v50; // x8
  System_Collections_IEnumerator_o *Dialog; // x1

  v2 = this;
  if ( (byte_49B9B76 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_object___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v4);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v5);
    sub_1B4CF90(&System_Text_StringBuilder_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_8519/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v7);
    sub_1B4CF90(&StringLiteral_8476/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v8);
    sub_1B4CF90(&StringLiteral_8479/*"MISSION_ACTION_SUCCESS"*/, v9);
    sub_1B4CF90(&StringLiteral_50/*"\n \n"*/, v10);
    sub_1B4CF90(&StringLiteral_51/*"\n \n "*/, v11);
    sub_1B4CF90(&StringLiteral_8520/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v12);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1B4CF90(&StringLiteral_8482/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v13);
    byte_49B9B76 = 1;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v16 = v2->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_73;
  ActionExtensions__Call(v16->fields.callback, 0LL);
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_73;
  if ( giftList->fields._size < 1 )
  {
    v21 = v2->fields.CS___8__locals1;
    if ( v21 )
    {
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v21->fields.__4__this;
      if ( this )
      {
        CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)this, method);
        v22 = v2->fields.CS___8__locals1;
        if ( v22 )
        {
          this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v22->fields.__4__this;
          if ( this )
          {
            CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)this, method);
            return;
          }
        }
      }
    }
    goto LABEL_73;
  }
  v18 = (System_Text_StringBuilder_o *)sub_1B4D1DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v18, 0LL);
  v19 = v2->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v19->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v20 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v20, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemNum >= 2 )
    {
      if ( !v20 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__Substring_61139392(
                                                                         v20,
                                                                         0,
                                                                         v20->fields._stringLength - 2,
                                                                         0LL);
      if ( !v18 )
        goto LABEL_73;
      System_Text_StringBuilder__Append_61178652(v18, (System_String_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8476/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_61178652(
                                                                         v18,
                                                                         v23,
                                                                         0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_8479/*"MISSION_ACTION_SUCCESS"*/,
                                                                         0LL);
      if ( !v18 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                         v18,
                                                                         (System_String_o *)this,
                                                                         (Il2CppObject *)v20,
                                                                         0LL);
    }
    v24 = v2->fields.CS___8__locals1;
    if ( !v24 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v24->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    v25 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v25, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_61178652(
                                                                         v18,
                                                                         (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                         0LL);
  }
  v26 = v2->fields.CS___8__locals1;
  if ( !v26 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v26->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v27 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v27, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v28 = v2->fields.CS___8__locals1;
    if ( !v28 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v28->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                       this,
                                                                       this->klass[1]._1.image);
    if ( !v18 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_61178652(v18, (System_String_o *)this, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8482/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_61178652(
                                                                       v18,
                                                                       v29,
                                                                       0LL);
  }
  v30 = v2->fields.CS___8__locals1;
  if ( !v30 )
    goto LABEL_73;
  v31 = v30->fields.__4__this;
  if ( !v31 )
    goto LABEL_73;
  if ( v31->fields.isQpMaxAlert )
  {
    if ( v31->fields.isQpAlreadyMax )
    {
      if ( v18 )
      {
        if ( v2->fields.giftTypeItemNum >= 2 )
          System_Text_StringBuilder__Append_61178652(v18, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
        else
          System_Text_StringBuilder__set_Length(v18, 0, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_8519/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                           0LL);
        v42 = v2->fields.CS___8__locals1;
        if ( v42 )
        {
          v43 = v42->fields.__4__this;
          if ( v43 )
          {
            v44 = this;
            NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v43->fields.overQpValue, 0LL);
            this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                               v18,
                                                                               (System_String_o *)v44,
                                                                               NumberFormat,
                                                                               0LL);
            goto LABEL_67;
          }
        }
      }
LABEL_73:
      sub_1B4D1EC(this, method);
    }
    if ( !v18 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_61178652(v18, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_8520/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                       0LL);
    v32 = v2->fields.CS___8__locals1;
    if ( !v32 )
      goto LABEL_73;
    v33 = v32->fields.__4__this;
    if ( !v33 )
      goto LABEL_73;
    v34 = this;
    v35 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v33->fields.overQpValue, 0LL);
    v36 = System_String__Format((System_String_o *)v34, v35, 0LL);
    v38 = Method_System_Array_Empty_object___;
    v39 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v39 )
    {
      sub_1B9D67C(Method_System_Array_Empty_object___);
      v39 = v38[7];
    }
    v40 = *(_QWORD *)(v39 + 16);
    if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
      v40 = sub_1B9D620(inited);
    if ( !*(_DWORD *)(v40 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v40);
    v41 = *(_QWORD *)(v38[7] + 16LL);
    if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
      v41 = sub_1B9D620(inited);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat_61185192(
                                                                       v18,
                                                                       v36,
                                                                       **(System_Object_array ***)(v41 + 184),
                                                                       0LL);
  }
LABEL_67:
  v46 = v2->fields.CS___8__locals1;
  if ( !v46 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v2->fields.giftList;
  if ( !this )
    goto LABEL_73;
  v47 = v46->fields.__4__this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v18 )
    goto LABEL_73;
  v48 = this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                                                                     v18,
                                                                     v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v50 = v2->fields.CS___8__locals1;
  if ( !v50 || !v47 )
    goto LABEL_73;
  Dialog = CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
             v47,
             (GiftEntity_array *)v48,
             (System_String_o *)this,
             v50->fields.isCompleteMission,
             v49);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)v47, Dialog, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__1(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v2; // x19
  __int64 v3; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_49B9B77 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1B4CF90(
                                                                       &Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
                                                                       v3);
    byte_49B9B77 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v7, v8);
  }
  if ( !_4__this )
LABEL_8:
    sub_1B4D1EC(this, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__3, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__3(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SummonAssetManager_o *Instance; // x0
  __int64 v9; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v12; // x8
  Il2CppObject *v13; // x0
  EventRewardSetEntity_o *rwdSetEnt; // x20
  CommonUI_o *v15; // x21
  System_String_o *v16; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v17; // x22
  MissionRewardGetDialog_ClickDelegate_o *_9__4; // x23
  System_String_o *v19; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_49B9B78 & 1) == 0 )
  {
    sub_1B4CF90(&MissionRewardGetDialog_ClickDelegate_TypeInfo, method);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v5);
    sub_1B4CF90(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__, v6);
    sub_1B4CF90(&StringLiteral_8479/*"MISSION_ACTION_SUCCESS"*/, v7);
    byte_49B9B78 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  SummonAssetManager__UnloadSummonAssets(Instance, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v12 = this->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_15;
  ActionExtensions__Call(v12->fields.callback, 0LL);
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  rwdSetEnt = this->fields.rwdSetEnt;
  v15 = (CommonUI_o *)v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8479/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v16, (Il2CppObject *)this->fields.sendName, 0LL);
  v17 = this->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_15;
  _9__4 = v17->fields.__9__4;
  v19 = (System_String_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B4D1DC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v17,
      Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__,
      0LL);
    v17->fields.__9__4 = _9__4;
    sub_1B4CF34((CGThumbnailListItem_o *)&v17->fields.__9__4, (int32_t)_9__4, v20, v21);
  }
  if ( !v15 )
LABEL_15:
    sub_1B4D1EC(Instance, v9);
  CommonUI__OpenMissionRewardGetDialog_30328544(v15, rwdSetEnt, v19, _9__4, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass50_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass50_0___OpenPanelMissionRewardGetDialog_b__0(
        CompleteMissionListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49B9B79 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49B9B79 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseMissionRewardGetDialog(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_8;
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
  if ( this->fields.isCompleteMission )
    return;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
LABEL_8:
    sub_1B4D1EC(Instance, v4);
  CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)Instance, v4);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass61_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass61_0___setOpenPanel_b__0(
        CompleteMissionListViewManager___c__DisplayClass61_0_o *this,
        AssetData_o *backPanel,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  struct UITexture_o *tex; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  struct UITexture_o *animTex; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
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

  if ( (byte_49B9B7A & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, backPanel);
    sub_1B4CF90(&Method_AssetData_GetObject_Texture2D____75492024, v5);
    sub_1B4CF90(&Method_CompleteMissionListViewManager_animAfterCallback__, v6);
    sub_1B4CF90(&int_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B4CF90(&StringLiteral_24692/*"{0}"*/, v9);
    byte_49B9B7A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx, v13, v14, v15);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_24692/*"{0}"*/, v16, 0LL);
  if ( !backPanel )
    goto LABEL_30;
  Instance = (CommonUI_o *)AssetData__GetObject_object__49169892(
                             backPanel,
                             (System_String_o *)Instance,
                             (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_Texture2D____75492024);
  if ( !tex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
    tex,
    Instance,
    tex->klass->vtable._28_get_shader.methodPtr);
  animTex = this->fields.animTex;
  v32 = this->fields.completeMissionPanelChildIdx;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v18, v19, v20);
  v22 = System_String__Format((System_String_o *)StringLiteral_24692/*"{0}"*/, v21, 0LL);
  Instance = (CommonUI_o *)AssetData__GetObject_object__49169892(
                             backPanel,
                             v22,
                             (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_Texture2D____75492024);
  if ( !animTex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))animTex->klass->vtable._27_set_mainTexture.method)(
    animTex,
    Instance,
    animTex->klass->vtable._28_get_shader.methodPtr);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                             0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             _4__this->fields.distanceToNumObj,
                             0LL);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                             0LL);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             v26->fields.distanceToTexObj,
                             0LL);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v27 = Instance->fields.completeMissionComp;
  if ( !v27
    || (Instance = (CommonUI_o *)v27->fields.completeMissionPanel) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   this->fields.completeMissionPanelChildIdx,
                                   0LL),
        (v28 = this->fields.__4__this) == 0LL)
    || !Instance
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   v28->fields.distanceToEfPanelObj,
                                   0LL)) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        (v29 = this->fields.__4__this) == 0LL) )
  {
LABEL_30:
    sub_1B4D1EC(Instance, v11);
  }
  endEffectTime = v29->fields.endEffectTime;
  v31 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v29, Method_CompleteMissionListViewManager_animAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)v29, endEffectTime, v31, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass68_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass68_0___CehckQpMaxAlert_b__0(
        CompleteMissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *decideCallback; // x8

  decideCallback = this->fields.decideCallback;
  if ( !decideCallback )
    sub_1B4D1EC(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))decideCallback->fields.m_target)(
    decideCallback->fields.original_method_info,
    *(_QWORD *)&decideCallback->fields.extra_arg);
}