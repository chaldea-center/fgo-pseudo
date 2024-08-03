void __fastcall CompleteMissionListViewManager___ctor(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FB2A6 & 1) == 0 )
  {
    sub_1B640C8(&MissionListViewManager_TypeInfo, method);
    byte_49FB2A6 = 1;
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
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftMaster_o *v44; // x20
  struct EventMissionEntity_o *v45; // x8
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x8
  __int64 v49; // x20
  unsigned __int64 v50; // x23
  __int64 v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  System_Object_array *v54; // x27
  __int64 v55; // x8
  char *v56; // x0
  System_Text_StringBuilder_o *v57; // x20
  int32_t v58; // w2
  int32_t v59; // w3
  __int64 v60; // x1
  __int64 v61; // x2
  System_Text_StringBuilder_o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  System_Text_StringBuilder_o *v65; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x20
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject **v73; // x21
  __int64 v74; // x2
  System_Object_array *v75; // x8
  signed int max_length; // w28
  il2cpp_array_size_t v77; // w9
  __int64 v78; // x27
  Il2CppObject *v79; // x8
  Il2CppObject *v80; // x8
  Il2CppObject *v81; // x8
  Il2CppObject *v82; // x8
  EventRewardSetEntity_o *SetRewardData; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w2
  int32_t v87; // w3
  __int64 v88; // x1
  Il2CppObject **v89; // x22
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *v91; // x21
  __int64 v92; // x1
  __int64 v93; // x2
  System_Action_o *v94; // x22
  System_Collections_Generic_List_object__o *v95; // x26
  __int64 v96; // x1
  __int64 v97; // x2
  System_Collections_Generic_List_object__o *v98; // x22
  __int64 v99; // x2
  const MethodInfo_36EC03C **v100; // x23
  il2cpp_array_size_t v101; // w29
  Il2CppObject *v102; // x8
  Il2CppObject *v103; // x8
  ServantEntity_o *v104; // x24
  _BOOL4 IsCombineMaterial; // w25
  Il2CppObject *v106; // x8
  System_String_o *v107; // x0
  Il2CppObject *v108; // x8
  Il2CppObject *v109; // x24
  Il2CppObject *v110; // x0
  Il2CppObject *v111; // x24
  System_Text_StringBuilder_o *monitor; // x25
  int32_t v113; // w2
  int32_t v114; // w3
  Il2CppObject *v115; // x1
  struct System_Object_array *items; // x8
  _QWORD *v117; // x9
  __int64 size; // x10
  Il2CppClass **v119; // x0
  Il2CppObject *v120; // x8
  Il2CppObject *v121; // x8
  bool IsCountableWithPlus; // w0
  __int64 v123; // x1
  __int64 v124; // x2
  Il2CppObject **v125; // x8
  Il2CppObject *v126; // x25
  System_Text_StringBuilder_o *v127; // x24
  const MethodInfo_36EC03C **v128; // x20
  int32_t getQpValue; // w23
  Il2CppObject *v130; // x8
  System_Collections_Generic_List_object__o *v131; // x19
  System_String_o *v132; // x26
  Il2CppObject *v133; // x0
  __int64 v134; // x8
  System_Text_StringBuilder_o *v135; // x25
  __int64 v136; // x8
  System_Collections_Generic_List_object__o *v137; // x0
  struct System_Object_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  System_Collections_Generic_List_object__o *v141; // x21
  int32_t v142; // w2
  int32_t v143; // w3
  __int64 v144; // x1
  __int64 v145; // x2
  System_Action_o *v146; // x21
  Il2CppObject *Instance; // x0
  EventRewardSetEntity_o *v148; // x20
  CommonUI_o *v149; // x23
  System_String_o *v150; // x0
  System_String_o *v151; // x0
  Il2CppObject *v152; // x24
  System_String_o *v153; // x21
  __int64 v154; // x1
  __int64 v155; // x2
  MissionRewardGetDialog_ClickDelegate_o *v156; // x22
  __int64 v157; // x0
  CompleteMissionListViewManager_o *v158; // [xsp+8h] [xbp-98h]
  __int64 v159; // [xsp+10h] [xbp-90h]
  int32_t monitor_high; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v161; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v162; // [xsp+28h] [xbp-78h] BYREF
  CompleteMissionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Object_array *array; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49FB295 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_System_Array_Resize_GiftEntity___, v5);
    sub_1B640C8(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_CompleteMissionMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_1B640C8(&int_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor___75655800, v18);
    sub_1B640C8(&System_Collections_Generic_List_GiftEntity__TypeInfo, v19);
    sub_1B640C8(&LocalizationManager_TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v23);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v24);
    sub_1B640C8(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__, v25);
    sub_1B640C8(&CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo, v26);
    sub_1B640C8(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__, v27);
    sub_1B640C8(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__, v28);
    sub_1B640C8(&CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo, v29);
    sub_1B640C8(&StringLiteral_8606/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v30);
    sub_1B640C8(&StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, v31);
    sub_1B640C8(&StringLiteral_25014/*"{0}×{1:#,0}"*/, v32);
    sub_1B640C8(&StringLiteral_25061/*"×"*/, v33);
    sub_1B640C8(&StringLiteral_8601/*"MISSION_ACTION_ITEM_FORMAT"*/, v34);
    sub_1B640C8(&StringLiteral_49/*"\n "*/, v35);
    sub_1B640C8(&StringLiteral_25356/*"＋"*/, v36);
    byte_49FB295 = 1;
  }
  v162 = 0LL;
  entity = 0LL;
  v161 = 0LL;
  v37 = sub_1B64314(CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_52;
  *(_QWORD *)(v37 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 16), (int32_t)this, v39, v40);
  *(_QWORD *)(v37 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 24), (int32_t)callback, v41, v42);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_52;
  v44 = (GiftMaster_o *)Master_object;
  if ( !Master_object )
    goto LABEL_52;
  array = (System_Object_array *)GiftMaster__GetGiftListById(
                                   (GiftMaster_o *)Master_object,
                                   missionToRecieve->fields.giftId,
                                   0LL);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  v45 = this->fields.missionToRecieve;
  if ( !v45 || !Master_object )
    goto LABEL_52;
  Master_object = CompleteMissionMaster__TryGetEntityFromObjectId(
                    (CompleteMissionMaster_o *)Master_object,
                    &entity,
                    v45->fields.id,
                    0LL);
  *(_BYTE *)(v37 + 48) = Master_object & 1;
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_52;
    Master_object = (__int64)GiftMaster__GetGiftListById(v44, entity->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_52;
    v48 = *(_QWORD *)(Master_object + 24);
    v49 = Master_object;
    if ( (int)v48 >= 1 )
    {
      v50 = 0LL;
      while ( v50 < (unsigned int)v48 )
      {
        if ( !array )
          goto LABEL_52;
        v51 = *(_QWORD *)(v49 + 32 + 8 * v50);
        System_Array__Resize_object_(
          &array,
          array->max_length + 1,
          (const MethodInfo_2DF910C *)Method_System_Array_Resize_GiftEntity___);
        v54 = array;
        if ( !array )
          goto LABEL_52;
        if ( v51 )
        {
          Master_object = sub_1B64204(v51, array->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v157 = sub_1B64348(0LL);
            sub_1B641F0(v157, 0LL);
          }
        }
        v55 = *(_QWORD *)&v54->max_length;
        if ( !(_DWORD)v55 )
          break;
        v56 = (char *)v54 + (((v55 << 32) - 0x100000000LL) >> 29);
        *((_QWORD *)v56 + 4) = v51;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 32), v51, v52, v53);
        LODWORD(v48) = *(_DWORD *)(v49 + 24);
        if ( (__int64)++v50 >= (int)v48 )
          goto LABEL_22;
      }
LABEL_156:
      sub_1B6432C(Master_object, v46);
    }
  }
LABEL_22:
  v57 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v46, v47);
  System_Text_StringBuilder___ctor(v57, 0LL);
  *(_QWORD *)(v37 + 40) = v57;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 40), (int32_t)v57, v58, v59);
  v62 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v60, v61);
  System_Text_StringBuilder___ctor(v62, 0LL);
  v65 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v63, v64);
  System_Text_StringBuilder___ctor(v65, 0LL);
  *(_QWORD *)(v37 + 32) = v65;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)v65, v66, v67);
  v70 = sub_1B64314(CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo, v68, v69);
  System_Object___ctor((Il2CppObject *)v70, 0LL);
  if ( !v70 )
    goto LABEL_52;
  *(_QWORD *)(v70 + 48) = v37;
  v73 = (Il2CppObject **)(v70 + 48);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 48), v37, v71, v72);
  Master_object = (__int64)this->fields.missionToRecieve;
  if ( !Master_object )
    goto LABEL_52;
  if ( *(_DWORD *)(Master_object + 80) == 1 )
  {
    Master_object = (__int64)this->fields.touchBlockObj;
    if ( Master_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      *(_DWORD *)(v70 + 24) = 0;
      v75 = array;
      v159 = v70;
      if ( array )
      {
        max_length = array->max_length;
        if ( max_length >= 1 )
        {
          v77 = 0;
          while ( v77 < v75->max_length )
          {
            v78 = (int)v77;
            v79 = v75->m_Items[v77];
            if ( !v79 )
              goto LABEL_52;
            Master_object = Gift__IsServant_37376332(HIDWORD(v79[1].klass), 0LL);
            if ( (Master_object & 1) == 0 )
            {
              if ( !array )
                goto LABEL_52;
              if ( (unsigned int)v78 >= array->max_length )
                goto LABEL_156;
              v80 = array->m_Items[v78];
              if ( !v80 )
                goto LABEL_52;
              Master_object = Gift__IsCommandCode_37376724(HIDWORD(v80[1].klass), 0LL);
              if ( (Master_object & 1) == 0 )
              {
                if ( !array )
                  goto LABEL_52;
                if ( (unsigned int)v78 >= array->max_length )
                  goto LABEL_156;
                v81 = array->m_Items[v78];
                if ( !v81 )
                  goto LABEL_52;
                Master_object = Gift__IsCostumeRelease(HIDWORD(v81[1].klass), 0LL);
                if ( (Master_object & 1) == 0 )
                {
                  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Master_object )
                    goto LABEL_52;
                  Master_object = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Master_object,
                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( !array )
                    goto LABEL_52;
                  if ( (unsigned int)v78 >= array->max_length )
                    goto LABEL_156;
                  v82 = array->m_Items[v78];
                  if ( !v82 || !Master_object )
                    goto LABEL_52;
                  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &v162,
                                    (int32_t)v82[1].monitor,
                                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                  if ( (Master_object & 1) != 0 )
                  {
                    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !v162 || !Master_object )
                      goto LABEL_52;
                    Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v162[1].klass, 0LL);
                    if ( (Master_object & 1) == 0 )
                      ++*(_DWORD *)(v70 + 24);
                  }
                }
              }
            }
            if ( max_length - 1 == (_DWORD)v78 )
              goto LABEL_59;
            v75 = array;
            v77 = v78 + 1;
            if ( !array )
              goto LABEL_52;
          }
          goto LABEL_156;
        }
LABEL_59:
        v95 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                             v46,
                                                             v74);
        System_Collections_Generic_List_object____ctor(
          v95,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        v98 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                             v96,
                                                             v97);
        System_Collections_Generic_List_object____ctor(
          v98,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        if ( max_length >= 1 )
        {
          v100 = (const MethodInfo_36EC03C **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
          v101 = 0;
          v158 = this;
          do
          {
            if ( !array )
              goto LABEL_52;
            if ( v101 >= array->max_length )
              goto LABEL_156;
            v102 = array->m_Items[v101];
            if ( !v102 )
              goto LABEL_52;
            Master_object = Gift__IsServant_37376332(HIDWORD(v102[1].klass), 0LL);
            if ( (Master_object & 1) != 0 )
            {
              Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v100);
              if ( !Master_object )
                goto LABEL_52;
              Master_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Master_object,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !array )
                goto LABEL_52;
              if ( v101 >= array->max_length )
                goto LABEL_156;
              v103 = array->m_Items[v101];
              if ( !v103 )
                goto LABEL_52;
              if ( !Master_object )
                goto LABEL_52;
              Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         (int32_t)v103[1].monitor,
                                         (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Master_object )
                goto LABEL_52;
              v104 = (ServantEntity_o *)Master_object;
              IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Master_object + 84), 0LL);
              Master_object = SvtType__IsStatusUp(v104->fields.type, 0LL);
              v106 = *v73;
              if ( !*v73 )
                goto LABEL_52;
              if ( LOBYTE(v106[3].klass) | (IsCombineMaterial | (unsigned int)Master_object) & 1 )
              {
                Master_object = (__int64)v106[2].monitor;
                if ( !Master_object )
                  goto LABEL_52;
                v107 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 360LL))(
                                            Master_object,
                                            *(_QWORD *)(*(_QWORD *)Master_object + 368LL));
                Master_object = System_String__IsNullOrEmpty(v107, 0LL);
                if ( (Master_object & 1) == 0 )
                {
                  if ( !*v73 )
                    goto LABEL_52;
                  Master_object = (__int64)(*v73)[2].monitor;
                  if ( !Master_object )
                    goto LABEL_52;
                  System_Text_StringBuilder__Append_60536548(
                    (System_Text_StringBuilder_o *)Master_object,
                    (System_String_o *)StringLiteral_49/*"\n "*/,
                    0LL);
                }
                Master_object = (__int64)ServantEntity__getName(v104, -1, -1, 0LL);
                if ( !array )
                  goto LABEL_52;
                if ( v101 >= array->max_length )
                  goto LABEL_156;
                v108 = array->m_Items[v101];
                if ( !v108 )
                  goto LABEL_52;
                v109 = (Il2CppObject *)Master_object;
                monitor_high = HIDWORD(v108[1].monitor);
                v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
                Master_object = (__int64)System_String__Format_61389768(
                                           (System_String_o *)StringLiteral_25014/*"{0}×{1:#,0}"*/,
                                           v109,
                                           v110,
                                           0LL);
                if ( !*v73 )
                  goto LABEL_52;
                v111 = (Il2CppObject *)Master_object;
                monitor = (System_Text_StringBuilder_o *)(*v73)[2].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8601/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !monitor )
                  goto LABEL_52;
                Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                           monitor,
                                           (System_String_o *)Master_object,
                                           v111,
                                           0LL);
                if ( !array )
                  goto LABEL_52;
                if ( v101 >= array->max_length )
                  goto LABEL_156;
                if ( !v98 )
                  goto LABEL_52;
                v115 = array->m_Items[v101];
                items = v98->fields._items;
                v117 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                ++v98->fields._version;
                if ( !items )
                  goto LABEL_52;
                size = v98->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  v136 = v117[4];
                  v137 = v98;
LABEL_132:
                  System_Collections_Generic_List_object___AddWithResize(
                    v137,
                    v115,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v136 + 192) + 112LL));
                  goto LABEL_133;
                }
                v119 = &items->obj.klass + size;
                v98->fields._size = size + 1;
LABEL_91:
                v119[4] = (Il2CppClass *)v115;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v119 + 4), (int32_t)v115, v113, v114);
              }
            }
            else
            {
              if ( !array )
                goto LABEL_52;
              if ( v101 >= array->max_length )
                goto LABEL_156;
              v120 = array->m_Items[v101];
              if ( !v120 )
                goto LABEL_52;
              Master_object = Gift__IsItem_37376280(HIDWORD(v120[1].klass), 0LL);
              if ( (Master_object & 1) != 0 )
              {
                Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v100);
                if ( !Master_object )
                  goto LABEL_52;
                Master_object = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
                if ( !array )
                  goto LABEL_52;
                if ( v101 >= array->max_length )
                  goto LABEL_156;
                v121 = array->m_Items[v101];
                if ( !v121 || !Master_object )
                  goto LABEL_52;
                Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  &v161,
                                  (int32_t)v121[1].monitor,
                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                if ( (Master_object & 1) != 0 )
                {
                  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v161 || !Master_object )
                    goto LABEL_52;
                  Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v161[1].klass, 0LL);
                  if ( (Master_object & 1) == 0 )
                  {
                    if ( !array )
                      goto LABEL_52;
                    if ( v101 >= array->max_length )
                      goto LABEL_156;
                    Master_object = (__int64)array->m_Items[v101];
                    if ( !Master_object )
                      goto LABEL_52;
                    Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0LL);
                    if ( (Master_object & 1) == 0 || !this->fields.isQpAlreadyMax )
                    {
                      if ( !v161 )
                        goto LABEL_52;
                      IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)v161[3].klass, 0LL);
                      v125 = (Il2CppObject **)&StringLiteral_25356/*"＋"*/;
                      if ( !IsCountableWithPlus )
                        v125 = (Il2CppObject **)&StringLiteral_25061/*"×"*/;
                      v126 = *v125;
                      v127 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v123, v124);
                      System_Text_StringBuilder___ctor(v127, 0LL);
                      if ( !v161 )
                        goto LABEL_52;
                      if ( !v127 )
                        goto LABEL_52;
                      Master_object = (__int64)System_Text_StringBuilder__Append_60536548(
                                                 v127,
                                                 (System_String_o *)v161[1].monitor,
                                                 0LL);
                      if ( !array )
                        goto LABEL_52;
                      if ( v101 >= array->max_length )
                        goto LABEL_156;
                      Master_object = (__int64)array->m_Items[v101];
                      if ( !Master_object )
                        goto LABEL_52;
                      v128 = v100;
                      Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0LL);
                      if ( (Master_object & 1) == 0
                        || !this->fields.isQpMaxAlert
                        || (getQpValue = this->fields.getQpValue) == 0 )
                      {
                        if ( !array )
                          goto LABEL_52;
                        if ( v101 >= array->max_length )
                          goto LABEL_156;
                        v130 = array->m_Items[v101];
                        if ( !v130 )
                          goto LABEL_52;
                        getQpValue = HIDWORD(v130[1].monitor);
                      }
                      v131 = v95;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v132 = LocalizationManager__Get((System_String_o *)StringLiteral_8606/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                      monitor_high = getQpValue;
                      v133 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
                      Master_object = (__int64)System_Text_StringBuilder__AppendFormat_60542900(
                                                 v127,
                                                 v132,
                                                 v126,
                                                 v133,
                                                 0LL);
                      v134 = *(_QWORD *)(v159 + 48);
                      if ( !v134 )
                        goto LABEL_52;
                      v135 = *(System_Text_StringBuilder_o **)(v134 + 32);
                      v95 = v131;
                      v100 = v128;
                      if ( *(int *)(v159 + 24) >= 2 )
                      {
                        this = v158;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8601/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                        if ( !v135 )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                                   v135,
                                                   (System_String_o *)Master_object,
                                                   (Il2CppObject *)v127,
                                                   0LL);
                        if ( !*v73 )
                          goto LABEL_52;
                        Master_object = (__int64)(*v73)[2].klass;
                        if ( !Master_object )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__Append_60536548(
                                                   (System_Text_StringBuilder_o *)Master_object,
                                                   (System_String_o *)StringLiteral_49/*"\n "*/,
                                                   0LL);
                      }
                      else
                      {
                        Master_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v127->klass->vtable._3_ToString.method)(
                                          v127,
                                          v127->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                        this = v158;
                        if ( !v135 )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__Append_60536548(
                                                   v135,
                                                   (System_String_o *)Master_object,
                                                   0LL);
                      }
                      if ( !array )
                        goto LABEL_52;
                      if ( v101 >= array->max_length )
                        goto LABEL_156;
                      if ( !v95 )
                        goto LABEL_52;
                      v115 = array->m_Items[v101];
                      v138 = v95->fields._items;
                      v139 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                      ++v95->fields._version;
                      if ( !v138 )
                        goto LABEL_52;
                      v140 = v95->fields._size;
                      if ( (unsigned int)v140 >= v138->max_length )
                      {
                        v136 = v139[4];
                        v137 = v95;
                        goto LABEL_132;
                      }
                      v119 = &v138->obj.klass + v140;
                      v95->fields._size = v140 + 1;
                      goto LABEL_91;
                    }
                  }
                }
              }
            }
LABEL_133:
            ++v101;
          }
          while ( max_length != v101 );
        }
        v141 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                              System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                              v46,
                                                              v99);
        System_Collections_Generic_List_object____ctor_55234504(
          v141,
          (System_Collections_Generic_IEnumerable_T__o *)v95,
          (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_GiftEntity___ctor___75655800);
        *(_QWORD *)(v159 + 16) = v141;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v159 + 16), (int32_t)v141, v142, v143);
        Master_object = *(_QWORD *)(v159 + 16);
        if ( Master_object )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)Master_object,
            (System_Collections_Generic_IEnumerable_T__o *)v98,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
          v146 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v144, v145);
          System_Action___ctor(
            v146,
            (Il2CppObject *)v159,
            Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__,
            0LL);
          MissionListViewManager__StartItemGetEffectAction(
            (MissionListViewManager_o *)this,
            (GiftEntity_array *)array,
            0,
            v146,
            0LL);
          goto LABEL_155;
        }
      }
    }
LABEL_52:
    sub_1B64324(Master_object);
  }
  SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Master_object, 0LL);
  *(_QWORD *)(v70 + 32) = SetRewardData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 32), (int32_t)SetRewardData, v84, v85);
  if ( !*(_QWORD *)(v70 + 32) )
    goto LABEL_52;
  v88 = *(_QWORD *)(*(_QWORD *)(v70 + 32) + 32LL);
  *(_QWORD *)(v70 + 40) = v88;
  v89 = (Il2CppObject **)(v70 + 40);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 40), v88, v86, v87);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList || !*(_QWORD *)&getSvtList->max_length )
  {
    if ( *v73 )
    {
      ActionExtensions__Call((System_Action_o *)(*v73)[1].monitor, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v148 = *(EventRewardSetEntity_o **)(v70 + 32);
      v149 = (CommonUI_o *)Instance;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v150 = LocalizationManager__Get((System_String_o *)StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v151 = System_String__Format(v150, *v89, 0LL);
      v152 = *v73;
      v153 = v151;
      v156 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B64314(
                                                         MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                         v154,
                                                         v155);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v156,
        v152,
        Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__,
        0LL);
      if ( v149 )
      {
        CommonUI__OpenMissionRewardGetDialog_30413388(v149, v148, v153, v156, 0LL);
        goto LABEL_155;
      }
    }
    goto LABEL_52;
  }
  Master_object = (__int64)this->fields.touchBlockObj;
  if ( !Master_object )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v91 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v94 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v92, v93);
  System_Action___ctor(
    v94,
    (Il2CppObject *)v70,
    Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__,
    0LL);
  if ( !v91 )
    goto LABEL_52;
  SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)v91, v94, 0LL);
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
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x24
  _DWORD *v24; // x22
  System_String_o *Empty; // x20
  _DWORD *v26; // x23
  int32_t v27; // w25
  int32_t QpMax; // w8
  int v29; // w25
  int v30; // w26
  System_String_o *v31; // x24
  Il2CppObject *NumberFormat; // x25
  System_String_o *v33; // x0
  BalanceConfig_c *v34; // x8
  Il2CppObject *v35; // x26
  Il2CppObject *v36; // x0
  System_String_o *v37; // x24
  int32_t v38; // w8
  int32_t v39; // w8
  System_String_o *v40; // x24
  System_String_o *v41; // x0
  int32_t v42; // w8
  Il2CppObject *v43; // x23
  System_String_o *v44; // x0
  BalanceConfig_c *v45; // x8
  Il2CppObject *v46; // x25
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  System_String_o *v49; // x22
  System_String_o *v50; // x23
  System_String_o *v51; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x25
  System_String_o *v53; // x19
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_o *v56; // x26
  __int64 v57; // x1
  __int64 v58; // x2
  System_Action_o *onTransition; // x21
  Il2CppObject *v60; // x27
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v62; // w2
  int32_t v63; // w3

  if ( (byte_49FB2A5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, missionEntity);
    sub_1B640C8(&BalanceConfig_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&string_TypeInfo, v9);
    sub_1B640C8(&Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, v10);
    sub_1B640C8(&Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__, v11);
    sub_1B640C8(&CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo, v12);
    sub_1B640C8(&CompleteMissionListViewManager___c_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_8643/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v14);
    sub_1B640C8(&StringLiteral_8646/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v15);
    sub_1B640C8(&StringLiteral_11604/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v16);
    sub_1B640C8(&StringLiteral_11603/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v17);
    sub_1B640C8(&StringLiteral_11610/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v18);
    byte_49FB2A5 = 1;
  }
  v19 = sub_1B64314(CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo, missionEntity, decideCallback);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_35;
  *(_QWORD *)(v19 + 16) = decideCallback;
  v23 = v19 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)decideCallback, v21, v22);
  if ( !missionEntity )
    goto LABEL_35;
  QpGiftEntity = EventMissionEntity__GetQpGiftEntity(missionEntity, 0LL);
  if ( !QpGiftEntity )
  {
LABEL_18:
    if ( *(_QWORD *)v23 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v23 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v23 + 64LL),
        *(_QWORD *)(*(_QWORD *)v23 + 40LL));
      return;
    }
LABEL_35:
    sub_1B64324(QpGiftEntity);
  }
  v24 = QpGiftEntity;
  Empty = string_TypeInfo->static_fields->Empty;
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  *(_QWORD *)&this->fields.overQpValue = 0LL;
  QpGiftEntity = UserGameMaster__getSelfUserGame(0LL);
  if ( !QpGiftEntity )
    goto LABEL_35;
  v26 = QpGiftEntity;
  v27 = *((_DWORD *)QpGiftEntity + 24);
  QpGiftEntity = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    QpGiftEntity = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)QpGiftEntity + 23) + 4LL);
  if ( v27 < QpMax )
  {
    v29 = v26[24];
    v30 = v24[7];
    if ( !*((_DWORD *)QpGiftEntity + 56) )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity);
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v30 + v29 > QpMax )
    {
      *(_WORD *)&this->fields.isQpMaxAlert = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8646/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v24[7], 0LL);
      v33 = LocalizationManager__GetNumberFormat(v26[24], 0LL);
      v34 = BalanceConfig_TypeInfo;
      v35 = (Il2CppObject *)v33;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v34 = BalanceConfig_TypeInfo;
      }
      v36 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v34->static_fields->QpMax, 0LL);
      v37 = System_String__Format_61389836(v31, NumberFormat, v35, v36, 0LL);
      v38 = BalanceConfig_TypeInfo->static_fields->QpMax - v26[24];
      this->fields.getQpValue = v38;
      v39 = v24[7] - v38;
      goto LABEL_25;
    }
    goto LABEL_18;
  }
  *(_WORD *)&this->fields.isQpMaxAlert = 257;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8643/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
  v41 = LocalizationManager__GetNumberFormat(v24[7], 0LL);
  v42 = v26[24];
  v43 = (Il2CppObject *)v41;
  v44 = LocalizationManager__GetNumberFormat(v42, 0LL);
  v45 = BalanceConfig_TypeInfo;
  v46 = (Il2CppObject *)v44;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v45 = BalanceConfig_TypeInfo;
  }
  v47 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v45->static_fields->QpMax, 0LL);
  v48 = System_String__Format_61389836(v40, v43, v46, v47, 0LL);
  v39 = v24[7];
  v37 = v48;
LABEL_25:
  this->fields.overQpValue = v39;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11604/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11610/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11603/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  v53 = v51;
  v56 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v54, v55);
  System_Action___ctor(
    v56,
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
    v60 = (Il2CppObject *)**((_QWORD **)QpGiftEntity + 23);
    onTransition = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v57, v58);
    System_Action___ctor(onTransition, v60, Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__68_1 = onTransition;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__68_1, (int32_t)onTransition, v62, v63);
  }
  if ( !qpMaxAlertDialog )
    goto LABEL_35;
  ServantSellMaxAlertDialog__Open(qpMaxAlertDialog, Empty, v37, Empty, v49, v50, v53, v56, onTransition, 0LL, 1, 0LL);
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
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  CompleteMissionListViewItem_o *v28; // x23
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t CompleteMissionFilterId_k__BackingField; // w25
  __int64 *v40; // x8
  void *ObjectList; // x0
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  int v46; // w22
  System_Collections_Generic_List_object__o *v47; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FB28A & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionListViewItem_TypeInfo, missionList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_8729/*"MST_MISSION_EMPTY_TXT"*/, v20);
    sub_1B640C8(&StringLiteral_8609/*"MISSION_EMPTY_TXT"*/, v21);
    byte_49FB28A = 1;
  }
  memset(&v51, 0, sizeof(v51));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = 0;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v51 = v50;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v51.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v28 = (CompleteMissionListViewItem_o *)sub_1B64314(CompleteMissionListViewItem_TypeInfo, v24, v25);
      CompleteMissionListViewItem___ctor(v28, (EventMissionEntity_o *)current, type, v29);
      if ( !itemList )
        sub_1B64324(v30);
      items = itemList->fields._items;
      v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B64324(v30);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v28,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v28;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v28, v31, v32);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v22, v23);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !byte_49FB2EC )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, sort);
    byte_49FB2EC = 1;
  }
  CompleteMissionFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( CompleteMissionFilterId_k__BackingField )
    v40 = &StringLiteral_8609/*"MISSION_EMPTY_TXT"*/;
  else
    v40 = &StringLiteral_8729/*"MST_MISSION_EMPTY_TXT"*/;
  ObjectList = LocalizationManager__Get((System_String_o *)*v40, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_39;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
  if ( !byte_49FB2EC )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v42);
    byte_49FB2EC = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  CompleteMissionListViewManager__setList(this, v42);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.reDispAct, (int32_t)redispCallBack, v44, v45);
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v43);
  if ( !ObjectList )
LABEL_39:
    sub_1B64324(ObjectList);
  v46 = *((_DWORD *)ObjectList + 6);
  v47 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v46 >= 1 )
  {
    for ( i = 0; i != v46; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v47,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
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

  if ( (byte_49FB28D & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_49FB28D = 1;
  }
  result = (CompleteMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CompleteMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  DataManager_o *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  Il2CppObject *Entity; // x20
  void *monitor; // x8
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *v18; // x8
  DataManager_o *v19; // x20
  _BOOL8 v20; // x0
  MissionListViewItem_o *current; // x22
  __int64 methodPtr_low; // x10
  __int64 MissionId; // x0
  __int64 v24; // x1
  struct EventMissionEntity_o *v25; // x8
  int32_t v26; // w23
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FB29C & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionListViewItem_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FB29C = 1;
  }
  memset(&v30, 0, sizeof(v30));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_41;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             missionToRecieve->fields.id,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_41;
  if ( (__int64)Instance <= (__int64)Entity[4].klass )
  {
    this->fields.isEndEvent = 0;
    return;
  }
  monitor = Entity[4].monitor;
  this->fields.isEndEvent = (__int64)Instance <= (__int64)monitor;
  if ( (__int64)Instance <= (__int64)monitor && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v18 = this->fields.missionToRecieve;
      if ( v18 )
      {
        if ( MasterData_object )
        {
          Instance = (DataManager_o *)UserEventMissionMaster__GetEntity(
                                        (UserEventMissionMaster_o *)MasterData_object,
                                        (int64_t)Instance,
                                        v18->fields.id,
                                        0LL);
          if ( this->fields.itemList )
          {
            v19 = Instance;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v29,
              (System_Collections_Generic_List_object__o *)this->fields.itemList,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v30 = v29;
            while ( 1 )
            {
              v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v30,
                      (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v20 )
                break;
              current = (MissionListViewItem_o *)v30.fields._current;
              if ( !v30.fields._current
                || (methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                || (CompleteMissionListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
              {
                sub_1B64324(v20);
              }
              MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v30.fields._current, 0LL);
              v25 = this->fields.missionToRecieve;
              if ( !v25 )
                sub_1B64324(MissionId);
              v26 = MissionId;
              if ( (_DWORD)MissionId == v25->fields.id )
              {
                if ( !byte_49F934E )
                {
                  MissionId = sub_1B640C8(&EventRewardSaveData_TypeInfo, v24);
                  byte_49F934E = 1;
                }
                EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v26;
                if ( !v19 )
                  sub_1B64324(MissionId);
                MissionListViewItem__ModifyItem(current, *(_DWORD *)&v19->fields._DispLog == 5, 0LL);
              }
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v28 = current->fields.viewObject;
                if ( !v28 )
                  sub_1B64324(0LL);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v28->klass->vtable._5_SetItem.method)(
                  v28,
                  current,
                  v28->klass->vtable._6_SetItem.methodPtr);
              }
              if ( current->fields.dispNo == 1 )
                ((void (__fastcall *)(MissionListViewItem_o *, Il2CppMethodPointer))current->klass->vtable._6_CheckMissionCond.method)(
                  current,
                  current->klass->vtable._7_SetGiftData.methodPtr);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v30,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            return;
          }
        }
      }
    }
LABEL_41:
    sub_1B64324(Instance);
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
  const MethodInfo *v8; // x1

  if ( (byte_49FB2A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v3);
    byte_49FB2A4 = 1;
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
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      CompleteMissionListViewObject__OnChangeAlphaAnim((CompleteMissionListViewObject_o *)ObjectList, v8);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1B64324(ObjectList);
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

  if ( (byte_49FB290 & 1) == 0 )
  {
    sub_1B640C8(&Method_CompleteMissionListViewManager_OnClickFilterList__, method);
    byte_49FB290 = 1;
  }
  v3 = Method_CompleteMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CompleteMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_BDB44C[filterStatus];
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
  const MethodInfo *v9; // x1
  __int64 methodPtr_low; // x10
  PlayMakerFSM_o *v11; // x20
  CompleteMissionListViewManager_o *IsHideReward; // x0
  const MethodInfo *v13; // x1
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0

  if ( (byte_49FB28E & 1) == 0 )
  {
    sub_1B640C8(&Method_CompleteMissionListViewManager_OnClickListView__, obj);
    sub_1B640C8(&CompleteMissionListViewObject_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_15498/*"Wait_Action"*/, v6);
    byte_49FB28E = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_20;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15498/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (methodPtr_low = LOBYTE(CompleteMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CompleteMissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)CompleteMissionListViewObject__GetItem((CompleteMissionListViewObject_o *)obj, v9)) == 0LL )
  {
LABEL_20:
    sub_1B64324(targetFSM);
  }
  v11 = targetFSM;
  IsHideReward = (CompleteMissionListViewManager_o *)(*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
                                                       targetFSM,
                                                       targetFSM->klass[1]._1.this_arg.data);
  if ( ((unsigned __int8)IsHideReward & 1) == 0
    || (IsHideReward = (CompleteMissionListViewManager_o *)CompleteMissionListViewItem__get_IsHideReward(
                                                             (CompleteMissionListViewItem_o *)v11,
                                                             v13),
        ((unsigned __int8)IsHideReward & 1) != 0)
    || BYTE4(v11[4].fields.fsm) )
  {
    if ( v11[4].fields.m_CachedPtr == 3
      && (LODWORD(v11[2].fields.addEventHandlers) != 1
       || CompleteMissionListViewManager__checkPanelAllOpen(IsHideReward, v13)) )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v11, 0LL);
      CompleteMissionListViewManager__recieveReward(this, EventMissionEntity, v15);
    }
    else
    {
      v16 = Method_CompleteMissionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1B640E0(Method_CompleteMissionListViewManager_OnClickListView__);
      v17 = (System_Reflection_MethodBase_o *)sub_1B640AC(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
    }
  }
  else
  {
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v11, 0, 0LL);
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
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FB296 & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo, rewards);
    byte_49FB296 = 1;
  }
  v9 = isCompleteMission;
  v10 = sub_1B64314(
          CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo,
          rewards,
          rewardDetail);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(_QWORD *)(v10 + 48) = rewards;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 48), (int32_t)rewards, v13, v14);
  *(_QWORD *)(v10 + 56) = rewardDetail;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 56), (int32_t)rewardDetail, v15, v16);
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
  System_Collections_Generic_List_object__o *v10; // x20
  _BOOL8 v11; // x0
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v14; // w21
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB28F & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionListViewItem_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v8);
    byte_49FB28F = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
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
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CompleteMissionListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == CompleteMissionListViewItem_TypeInfo )
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
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
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
  __int64 v12; // x2
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  struct CompleteMissionListViewItem_o *v17; // x21
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v23; // x2
  float openItemTime; // s8
  System_Action_o *v25; // x20
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB29D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CompleteMissionListViewManager_modifyOpenItem__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v8);
    sub_1B640C8(&StringLiteral_18770/*"ef_mission_extric01"*/, v9);
    byte_49FB29D = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1B64324(0LL);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v26,
        ObjectList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
      v27 = v26;
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v27,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
        if ( !v13 )
          break;
        current = v27.fields._current;
        if ( !v27.fields._current )
          sub_1B64324(v13);
        Item = (MissionListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                          (CompleteMissionListViewObject_o *)v27.fields._current,
                                          v14);
        v17 = (struct CompleteMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1B64324(0LL);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_49F934E )
          {
            sub_1B640C8(&EventRewardSaveData_TypeInfo, v18);
            byte_49F934E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v17;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openTargetItem, (int32_t)v17, v19, v20);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v17, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            CompleteMissionListViewManager__getEffect((System_String_o *)StringLiteral_18770/*"ef_mission_extric01"*/, transform, v23);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v27,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    }
    openItemTime = this->fields.openItemTime;
    v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
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
  int32_t v7; // w3
  __int64 v8; // x0
  __int64 v9; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w19

  this->fields.getSvtList = svts;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.getSvtList,
    (int32_t)svts,
    (int32_t)cmds,
    (int32_t)method);
  this->fields.getCommandCodeList = cmds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.getCommandCodeList, (int32_t)cmds, v6, v7);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1B64324(v8);
  id = missionToRecieve->fields.id;
  if ( !byte_49F934E )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v9);
    byte_49F934E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
}


System_Collections_IEnumerator_o *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB2A1 & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo, method);
    byte_49FB2A1 = 1;
  }
  v4 = sub_1B64314(CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall CompleteMissionListViewManager___modifyOpenItem_b__58_0(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float endEffectTime; // s8
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_49FB2A7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CompleteMissionListViewManager_actionAfterCallback__, v3);
    byte_49FB2A7 = 1;
  }
  CompleteMissionListViewManager__RefrashListDisp(this, method);
  endEffectTime = this->fields.endEffectTime;
  v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CompleteMissionListViewManager_actionAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)this, endEffectTime, v7, 0LL);
}


void __fastcall CompleteMissionListViewManager__actionAfterCallback(
        CompleteMissionListViewManager_o *this,
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


void __fastcall CompleteMissionListViewManager__afterReward(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  AutomatedAction_o *Instance; // x0

  if ( (byte_49FB297 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    sub_1B640C8(&StringLiteral_5448/*"END_EFFECT"*/, v3);
    byte_49FB297 = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL),
        (Instance = (AutomatedAction_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5448/*"END_EFFECT"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager__animAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t dispNo; // w20
  struct UILabel_o *sortKindLabel; // x8

  v2 = this;
  if ( (byte_49FB2A0 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1B640C8(
                                                 &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                 method);
    byte_49FB2A0 = 1;
  }
  missionToRecieve = v2->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_12;
  dispNo = missionToRecieve->fields.dispNo;
  this = (CompleteMissionListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (sortKindLabel = this[2].fields.sortKindLabel) == 0LL
    || (this = (CompleteMissionListViewManager_o *)sortKindLabel->fields.leftAnchor) == 0LL
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
    sub_1B64324(this);
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
  int64_t Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v18; // x8
  int64_t v19; // x20
  int64_t v20; // x21
  Il2CppObject *MasterData_object; // x21
  UserPresentBoxEntity_array *VaildList; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t v25; // w3
  BalanceConfig_c *v26; // x0
  __int64 *v27; // x8
  CompleteMissionListViewManager___c_c *v28; // x0
  System_Action_o *_9__46_0; // x20
  Il2CppObject *v30; // x21
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_49FB293 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BalanceConfig_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__, v12);
    sub_1B640C8(&CompleteMissionListViewManager___c_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_12081/*"SHOW_MSG"*/, v14);
    sub_1B640C8(&StringLiteral_11064/*"REWARD_ACCEPTABLE"*/, v15);
    byte_49FB293 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_36;
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v18 = this->fields.missionToRecieve;
  if ( !v18 )
    goto LABEL_36;
  if ( v18->fields.rewardType == 1 )
  {
    v19 = Instance;
    if ( !Instance )
      goto LABEL_36;
    if ( Gift__IsServant_37376332(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_DWORD *)(v19 + 24),
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Instance )
          {
            v20 = Instance;
            if ( !SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL)
              && !SvtType__IsStatusUp(*(_DWORD *)(v20 + 84), 0LL) )
            {
              goto LABEL_25;
            }
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager__get_UserId(0LL);
              if ( MasterData_object )
              {
                VaildList = UserPresentBoxMaster__getVaildList(
                              (UserPresentBoxMaster_o *)MasterData_object,
                              Instance,
                              0LL);
                Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( Instance )
                  {
                    Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          *(_DWORD *)(v19 + 24),
                                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( VaildList )
                    {
                      v26 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v26 = BalanceConfig_TypeInfo;
                      }
                      if ( v26->static_fields->PresentBoxMax > (signed int)VaildList->max_length )
                        goto LABEL_25;
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
                        _9__46_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
                        System_Action___ctor(
                          _9__46_0,
                          v30,
                          Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__,
                          0LL);
                        static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        static_fields->__9__46_0 = _9__46_0;
                        sub_1B6406C(
                          (ServantStatusBattleListViewItem_o *)&static_fields->__9__46_0,
                          (int32_t)_9__46_0,
                          v32,
                          v33);
                      }
                      this->fields.ShowMSG = _9__46_0;
                      sub_1B6406C(
                        (ServantStatusBattleListViewItem_o *)&this->fields.ShowMSG,
                        (int32_t)_9__46_0,
                        v24,
                        v25);
                      Instance = (int64_t)this->fields.targetFSM;
                      if ( Instance )
                      {
                        v27 = &StringLiteral_12081/*"SHOW_MSG"*/;
                        goto LABEL_27;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_36:
      sub_1B64324(Instance);
    }
  }
LABEL_25:
  Instance = (int64_t)this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_36;
  v27 = &StringLiteral_11064/*"REWARD_ACCEPTABLE"*/;
LABEL_27:
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
  void *monitor; // x8
  System_Collections_Generic_List_EventMissionEntity__o *v8; // x19

  if ( (byte_49FB2A3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FB2A3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (monitor = Instance[9].monitor) == 0LL
    || (v8 = (System_Collections_Generic_List_EventMissionEntity__o *)*((_QWORD *)monitor + 16),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, v8, 0LL), !v8)
    || !Instance )
  {
    sub_1B64324(Instance);
  }
  return v8->fields._size - 1 == LODWORD(Instance->fields.m_CancellationTokenSource);
}


void __fastcall CompleteMissionListViewManager__endloadEffect(
        CompleteMissionListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v9; // x1
  struct EventMissionEntity_o *v10; // x8

  if ( (byte_49FB29A & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionListViewManager_TypeInfo, data);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v6);
    byte_49FB29A = 1;
  }
  if ( data )
  {
    CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)CompleteMissionListViewManager_TypeInfo->static_fields,
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
        CompleteMissionListViewManager__setList(this, v9);
      }
    }
    else
    {
      CompleteMissionListViewManager__RefrashListDisp(this, v9);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v10 = this->fields.missionToRecieve;
    if ( !v10 || !Instance )
LABEL_13:
      sub_1B64324(Instance);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v10->fields.id, 5, 0, 0LL);
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
  Il2CppObject *Object_object__48347676; // x19
  UnityEngine_GameObject_o *v10; // x19
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x20
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x20

  if ( (byte_49FB29B & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, parentTr);
    sub_1B640C8(&CompleteMissionListViewManager_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FB29B = 1;
  }
  effectAssetData = CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData;
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


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ClippingObjectList(
        CompleteMissionListViewManager_o *this,
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

  if ( (byte_49FB289 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FB289 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
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
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                 (CompleteMissionListViewObject_o *)Component_object,
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
          v24 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
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
        v24 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
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
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v12;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FB288 & 1) == 0 )
  {
    sub_1B640C8(&Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___, method);
    byte_49FB288 = 1;
  }
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                               (MissionListViewManager_o *)this,
                                                                               (const MethodInfo_2EB7894 *)Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
}


void __fastcall CompleteMissionListViewManager__loadOpenMissionEffect(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetLoader_LoadEndDataHandler_o *v7; // x20

  if ( (byte_49FB299 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_CompleteMissionListViewManager_endloadEffect__, v4);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_5817/*"Effect/EventMission"*/, v6);
    byte_49FB299 = 1;
  }
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5817/*"Effect/EventMission"*/, v7, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__modifyOpenItem(
        CompleteMissionListViewManager_o *this,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v12; // x0
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x21
  void *v16; // x0
  System_Action_o *v17; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB29E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&CompleteMissionListViewItem_TypeInfo, v4);
    sub_1B640C8(&Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FB29E = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v12 )
        break;
      current = v19.fields._current;
      if ( !v19.fields._current
        || (methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (CompleteMissionListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        sub_1B64324(v12);
      }
      monitor = (UnityEngine_Object_o *)v19.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v16 = current[6].monitor;
        if ( !v16 )
          sub_1B64324(0LL);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v16 + 392LL))(
          v16,
          current,
          *(_QWORD *)(*(_QWORD *)v16 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v17, 0LL);
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

  if ( (byte_49FB28C & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionListViewItem_TypeInfo, *(_QWORD *)&missionID);
    sub_1B640C8(&Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    byte_49FB28C = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.actionCallback,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
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
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B64324(itemList);
  }
LABEL_16:
  v13 = 0;
LABEL_17:
  v15 = ListViewManager__MoveTopItem((ListViewManager_o *)this, v13, 1, 0LL);
  v16 = Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__;
  v17 = v15;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1B640E0(Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__);
  v18 = (System_Reflection_MethodBase_o *)sub_1B640AC(v16, v16[4]);
  if ( v17 )
    v19 = 0;
  else
    v19 = 2;
  OverwriteAssetSoundName__PlaySystemSe(v18, v19, 0LL);
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
  __int64 v20; // x1
  UnityEngine_GameObject_c *klass; // x8
  System_String_o *v22; // x19
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  CommonUI_o *v28; // x20
  CompleteMissionListViewManager___c_c *v29; // x8
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v31; // x22
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *countText; // [xsp+30h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_49FB2A2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&System_Text_RegularExpressions_Regex_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, v10);
    sub_1B640C8(&CompleteMissionListViewManager___c_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_25015/*"{0}×{1}"*/, v12);
    sub_1B640C8(&StringLiteral_15900/*"[^0-9]"*/, v13);
    sub_1B640C8(&StringLiteral_3754/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, v14);
    sub_1B640C8(&StringLiteral_1/*""*/, v15);
    sub_1B640C8(&StringLiteral_1267/*"1"*/, v16);
    byte_49FB2A2 = 1;
  }
  countText = (System_String_o *)StringLiteral_1/*""*/;
  nameText = (System_String_o *)StringLiteral_1/*""*/;
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             missionToRecieve->fields.missionTargetId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
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
    sub_1B6432C(touchBlockObj, v20);
  touchBlockObj = (UnityEngine_GameObject_o *)touchBlockObj[1].monitor;
  if ( !touchBlockObj )
    goto LABEL_31;
  GiftEntity__GetInfo((GiftEntity_o *)touchBlockObj, &nameText, &countText, 0LL);
  if ( System_String__IsNullOrEmpty(nameText, 0LL) )
    return;
  if ( !System_String__IsNullOrEmpty(countText, 0LL) )
  {
    v22 = countText;
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    v23 = System_Text_RegularExpressions_Regex__Replace(
            v22,
            (System_String_o *)StringLiteral_15900/*"[^0-9]"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v23, (System_String_o *)StringLiteral_1267/*"1"*/, 0LL) )
      nameText = System_String__Format_61389768(
                   (System_String_o *)StringLiteral_25015/*"{0}×{1}"*/,
                   (Il2CppObject *)nameText,
                   (Il2CppObject *)countText,
                   0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, 0LL);
  v25 = System_String__Format(v24, (Il2CppObject *)nameText, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = (CommonUI_o *)touchBlockObj;
  v29 = CompleteMissionListViewManager___c_TypeInfo;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v29 = CompleteMissionListViewManager___c_TypeInfo;
  }
  _9__65_0 = v29->static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__65_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
    System_Action___ctor(_9__65_0, v31, Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = _9__65_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__65_0, (int32_t)_9__65_0, v33, v34);
  }
  if ( !v28 )
LABEL_31:
    sub_1B64324(touchBlockObj);
  CommonUI__OpenNotificationDialog(v28, 0LL, v25, _9__65_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  EventMissionEntity_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3

  if ( (byte_49FB292 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, missionEntity);
    sub_1B640C8(&Method_CompleteMissionListViewManager_recieveReward__, v5);
    sub_1B640C8(&Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__, v6);
    sub_1B640C8(&CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo, v7);
    byte_49FB292 = 1;
  }
  v8 = sub_1B64314(CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo, missionEntity, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v8 + 24) = missionEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)missionEntity, v12, v13);
  v14 = Method_CompleteMissionListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_recieveReward__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B640E0(Method_CompleteMissionListViewManager_recieveReward__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B640AC(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0LL);
  v16 = *(EventMissionEntity_o **)(v8 + 24);
  v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v8,
    Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__,
    0LL);
  CompleteMissionListViewManager__CehckQpMaxAlert(this, v16, v19, v20);
}


void __fastcall CompleteMissionListViewManager__setAfterAction(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_49FB298 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_49FB298 = 1;
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
    sub_1B64324(filterBtnTxt);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall CompleteMissionListViewManager__setList(
        CompleteMissionListViewManager_o *this,
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
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v12; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  const MethodInfo *v18; // x2
  UILabel_o *v19; // x21
  struct ListViewSort_o *v20; // x8
  int v21; // w9
  bool v22; // w2
  __int64 v23; // x1
  int32_t filterStatus; // w19

  if ( (byte_49FB291 & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_8729/*"MST_MISSION_EMPTY_TXT"*/, v5);
    sub_1B640C8(&StringLiteral_17499/*"btn_txt_completed"*/, v6);
    sub_1B640C8(&StringLiteral_17532/*"btn_txt_receipt"*/, v7);
    sub_1B640C8(&StringLiteral_17531/*"btn_txt_progress"*/, v8);
    sub_1B640C8(&StringLiteral_8609/*"MISSION_EMPTY_TXT"*/, v9);
    sub_1B640C8(&StringLiteral_17481/*"btn_txt_all"*/, v10);
    byte_49FB291 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v12 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, method, v2);
  ListViewSort___ctor_40426860(v12, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v12, v14, v15);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8609/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_42:
    sub_1B64324(operationSortInfo);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17481/*"btn_txt_all"*/, v18);
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
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8729/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v19 )
        goto LABEL_42;
      UILabel__set_text(v19, operationSortInfo, 0LL);
      goto LABEL_35;
    case 1:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17532/*"btn_txt_receipt"*/, v18);
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
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17531/*"btn_txt_progress"*/, v18);
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
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17499/*"btn_txt_completed"*/, v18);
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
      if ( !byte_49FB2ED )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, v23);
        byte_49FB2ED = 1;
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
  int32_t v18; // w3

  if ( (byte_49FB28B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&missionID);
    sub_1B640C8(&CompleteMissionListViewItem_TypeInfo, v7);
    sub_1B640C8(&Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_49FB28B = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.actionCallback,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
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
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B64324(itemList);
  }
LABEL_16:
  v14 = 0;
LABEL_17:
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, *(_QWORD *)&missionID, callback);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__,
    0LL);
  this->fields.callbackAfterScroll = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackAfterScroll, (int32_t)v16, v17, v18);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v14, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setOpenPanel(
        CompleteMissionListViewManager_o *this,
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
  __int64 v15; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v20; // x8
  Il2CppObject *Entity; // x21
  void *monitor; // x8
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  void *v26; // x8
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  void *v30; // x8
  Il2CppObject *v31; // x22
  void *v32; // x8
  UISprite_o *v33; // x20
  Il2CppObject *v34; // x20
  Il2CppObject *v35; // x0
  System_String_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  AssetLoader_LoadEndDataHandler_o *v39; // x21
  int v40; // [xsp+8h] [xbp-48h] BYREF
  int klass_high; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FB29F & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v4);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITexture___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__, v12);
    sub_1B640C8(&CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_4637/*"CompleteMission/{0}/{1}"*/, v14);
    byte_49FB29F = 1;
  }
  v15 = sub_1B64314(CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_42;
  *(_QWORD *)(v15 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 40), (int32_t)this, v17, v18);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 1, 0LL);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_42;
  *(_DWORD *)(v15 + 24) = missionToRecieve->fields.dispNo - 2;
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v20 = this->fields.missionToRecieve;
  if ( !v20 )
    goto LABEL_42;
  if ( !touchBlockObj )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             v20->fields.missionTargetId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                *(_DWORD *)(v15 + 24),
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v15 + 16) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)Component_object, v24, v25);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v26 = touchBlockObj[57].monitor;
  if ( !v26 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v26 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v15 + 24),
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
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v15 + 32) = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v27, v28, v29);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v30 = touchBlockObj[57].monitor;
  if ( !v30 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v30 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v15 + 24),
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
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v32 = touchBlockObj[57].monitor;
  if ( !v32 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v32 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v15 + 24),
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
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        !v31)
    || (v33 = (UISprite_o *)touchBlockObj) == 0LL
    || (UISprite__set_atlas((UISprite_o *)touchBlockObj, (UIAtlas_o *)v31[29].klass, 0LL),
        UISprite__set_spriteName(v33, (System_String_o *)v31[29].monitor, 0LL),
        !Entity) )
  {
LABEL_42:
    sub_1B64324(touchBlockObj);
  }
  klass_high = HIDWORD(Entity[1].klass);
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high);
  v40 = *(_DWORD *)(v15 + 24);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v36 = System_String__Format_61389768((System_String_o *)StringLiteral_4637/*"CompleteMission/{0}/{1}"*/, v34, v35, 0LL);
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v37, v38);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)v15,
    Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v36, v39, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setPanelAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *missionToRecieve; // x8

  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1B64324(this);
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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  started = CompleteMissionListViewManager__StartPanelAnimCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall CompleteMissionListViewManager__unAcceptableDlg(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_49FB294 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1B640C8(&StringLiteral_5453/*"END_NOTICE"*/, method);
    byte_49FB294 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (CompleteMissionListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1B64324(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5453/*"END_NOTICE"*/, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct CompleteMissionListViewManager_o *_4__this; // x22
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  void *_8__1; // x0
  struct CompleteMissionListViewManager_o *v16; // x1
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o *v17; // x8
  _BOOL4 isCompleteMission; // w9
  __int64 v19; // x8
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *Instance; // x0
  GiftEntity_array *rewards; // x20
  System_String_o *rewardDetail; // x21
  Il2CppObject *v32; // x23
  CommonUI_o *v33; // x19
  __int64 v34; // x1
  __int64 v35; // x2
  MissionRewardGetDialog_ClickDelegate_o *v36; // x22

  if ( (byte_49FB2B4 & 1) == 0 )
  {
    sub_1B640C8(&MissionRewardGetDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Animation___, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(
      &Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      v6);
    sub_1B640C8(&CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo, v7);
    byte_49FB2B4 = 1;
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
    v10 = (Il2CppObject *)sub_1B64314(CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo, method, v2);
    System_Object___ctor(v10, 0LL);
    this->fields.__8__1 = (struct CompleteMissionListViewManager___c__DisplayClass50_0_o *)v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__8__1, (int32_t)v10, v11, v12);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_25;
    v16 = this->fields.__4__this;
    *((_QWORD *)_8__1 + 2) = v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)_8__1 + 16), (int32_t)v16, v13, v14);
    v17 = this->fields.__8__1;
    if ( !v17 )
      goto LABEL_25;
    isCompleteMission = this->fields.isCompleteMission;
    v17->fields.isCompleteMission = isCompleteMission;
    if ( !isCompleteMission )
      goto LABEL_22;
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0LL);
    _8__1 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !_8__1 )
      goto LABEL_25;
    v19 = *((_QWORD *)_8__1 + 172);
    if ( !v19 )
      goto LABEL_25;
    _8__1 = *(void **)(v19 + 32);
    if ( !_8__1 )
      goto LABEL_25;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)_8__1,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._anim_5__2, (int32_t)Component_object, v21, v22);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v23, v24);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._anim_5__2, 0, v27, v28);
LABEL_22:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    rewards = this->fields.rewards;
    rewardDetail = this->fields.rewardDetail;
    v32 = (Il2CppObject *)this->fields.__8__1;
    v33 = (CommonUI_o *)Instance;
    v36 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B64314(MissionRewardGetDialog_ClickDelegate_TypeInfo, v34, v35);
    MissionRewardGetDialog_ClickDelegate___ctor(
      v36,
      v32,
      Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      0LL);
    if ( v33 )
    {
      CommonUI__OpenMissionRewardGetDialog(v33, rewards, rewardDetail, v36, 0, 0LL);
      return 0;
    }
LABEL_25:
    sub_1B64324(_8__1);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_49FB2B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49FB2B5 = 1;
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._anim_5__2, (int32_t)Component_object, v9, v10);
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v12, v13);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( _4__this )
      {
        CompleteMissionListViewManager__panelAfterCallback(_4__this, v11);
        return 0;
      }
    }
LABEL_17:
    sub_1B64324(Instance);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB2A8 & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionListViewManager___c_TypeInfo, v1);
    byte_49FB2A8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CompleteMissionListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CompleteMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct CompleteMissionListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CompleteMissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FB2AB & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49FB2AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseCompleteMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
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
  __int64 v11; // x2
  CompleteMissionListViewManager___c_c *v12; // x8
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  System_Action_o *_9__46_1; // x22
  Il2CppObject *v16; // x23
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FB2A9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, v4);
    sub_1B640C8(&CompleteMissionListViewManager___c_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_8603/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FB2A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8603/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v12 = CompleteMissionListViewManager___c_TypeInfo;
  v13 = v9;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v12 = CompleteMissionListViewManager___c_TypeInfo;
  }
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  _9__46_1 = v12->static_fields->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v12->static_fields->__9;
    _9__46_1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(_9__46_1, v16, Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__46_1 = _9__46_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__46_1, (int32_t)_9__46_1, v18, v19);
  }
  if ( !Instance )
    sub_1B64324(v9);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v14, v13, _9__46_1, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FB2AA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FB2AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  int32_t v3; // w3
  CompleteMissionListViewManager___c__DisplayClass45_0_o *v4; // x19
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct CompleteMissionListViewManager_o *v7; // x8

  v4 = this;
  if ( (byte_49FB2AC & 1) == 0 )
  {
    this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)sub_1B640C8(&StringLiteral_8599/*"MISSIONN_REWARD"*/, method);
    byte_49FB2AC = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (missionEntity = v4->fields.missionEntity,
        _4__this->fields.missionToRecieve = missionEntity,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.missionToRecieve,
          (int32_t)missionEntity,
          v2,
          v3),
        (v7 = v4->fields.__4__this) == 0LL)
    || (this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)v7->fields.targetFSM) == 0LL )
  {
    sub_1B64324(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8599/*"MISSIONN_REWARD"*/, 0LL);
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

  if ( (byte_49FB2AE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FB2AE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__4(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49FB2AD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FB2AD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
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
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  System_Text_StringBuilder_o *v20; // x20
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v21; // x8
  System_String_o *v22; // x21
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v23; // x8
  const MethodInfo *v24; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v25; // x8
  System_String_o *v26; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v27; // x8
  System_String_o *v28; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v29; // x8
  System_String_o *v30; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v31; // x8
  System_String_o *v32; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v33; // x8
  struct CompleteMissionListViewManager_o *v34; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v35; // x8
  struct CompleteMissionListViewManager_o *v36; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v37; // x21
  Il2CppObject *v38; // x0
  System_String_o *v39; // x21
  _QWORD *v40; // x22
  __int64 v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v44; // x8
  struct CompleteMissionListViewManager_o *v45; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v46; // x21
  Il2CppObject *NumberFormat; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v48; // x8
  CompleteMissionListViewManager_o *v49; // x21
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v50; // x22
  const MethodInfo *v51; // x4
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v52; // x8
  System_Collections_IEnumerator_o *Dialog; // x1

  v2 = this;
  if ( (byte_49FB2AF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_object___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_8644/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v7);
    sub_1B640C8(&StringLiteral_8602/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v8);
    sub_1B640C8(&StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, v9);
    sub_1B640C8(&StringLiteral_50/*"\n \n"*/, v10);
    sub_1B640C8(&StringLiteral_51/*"\n \n "*/, v11);
    sub_1B640C8(&StringLiteral_8645/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v12);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1B640C8(&StringLiteral_8608/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v13);
    byte_49FB2AF = 1;
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
    v23 = v2->fields.CS___8__locals1;
    if ( v23 )
    {
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v23->fields.__4__this;
      if ( this )
      {
        CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)this, v17);
        v25 = v2->fields.CS___8__locals1;
        if ( v25 )
        {
          this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v25->fields.__4__this;
          if ( this )
          {
            CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)this, v24);
            return;
          }
        }
      }
    }
    goto LABEL_73;
  }
  v20 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v17, v18);
  System_Text_StringBuilder___ctor(v20, 0LL);
  v21 = v2->fields.CS___8__locals1;
  if ( !v21 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v21->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v22 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v22, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemNum >= 2 )
    {
      if ( !v22 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__Substring_61394392(
                                                                         v22,
                                                                         0,
                                                                         v22->fields._stringLength - 2,
                                                                         0LL);
      if ( !v20 )
        goto LABEL_73;
      System_Text_StringBuilder__Append_60536548(v20, (System_String_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8602/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_60536548(
                                                                         v20,
                                                                         v26,
                                                                         0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/,
                                                                         0LL);
      if ( !v20 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                         v20,
                                                                         (System_String_o *)this,
                                                                         (Il2CppObject *)v22,
                                                                         0LL);
    }
    v27 = v2->fields.CS___8__locals1;
    if ( !v27 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v27->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    v28 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v28, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_60536548(
                                                                         v20,
                                                                         (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                         0LL);
  }
  v29 = v2->fields.CS___8__locals1;
  if ( !v29 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v29->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v30 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v30, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v31 = v2->fields.CS___8__locals1;
    if ( !v31 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v31->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                       this,
                                                                       this->klass[1]._1.image);
    if ( !v20 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_60536548(v20, (System_String_o *)this, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8608/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_60536548(
                                                                       v20,
                                                                       v32,
                                                                       0LL);
  }
  v33 = v2->fields.CS___8__locals1;
  if ( !v33 )
    goto LABEL_73;
  v34 = v33->fields.__4__this;
  if ( !v34 )
    goto LABEL_73;
  if ( v34->fields.isQpMaxAlert )
  {
    if ( v34->fields.isQpAlreadyMax )
    {
      if ( v20 )
      {
        if ( v2->fields.giftTypeItemNum >= 2 )
          System_Text_StringBuilder__Append_60536548(v20, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
        else
          System_Text_StringBuilder__set_Length(v20, 0, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_8644/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                           0LL);
        v44 = v2->fields.CS___8__locals1;
        if ( v44 )
        {
          v45 = v44->fields.__4__this;
          if ( v45 )
          {
            v46 = this;
            NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v45->fields.overQpValue, 0LL);
            this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                               v20,
                                                                               (System_String_o *)v46,
                                                                               NumberFormat,
                                                                               0LL);
            goto LABEL_67;
          }
        }
      }
LABEL_73:
      sub_1B64324(this);
    }
    if ( !v20 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_60536548(v20, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_8645/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                       0LL);
    v35 = v2->fields.CS___8__locals1;
    if ( !v35 )
      goto LABEL_73;
    v36 = v35->fields.__4__this;
    if ( !v36 )
      goto LABEL_73;
    v37 = this;
    v38 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v36->fields.overQpValue, 0LL);
    v39 = System_String__Format((System_String_o *)v37, v38, 0LL);
    v40 = Method_System_Array_Empty_object___;
    v41 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v41 )
    {
      sub_1BB6000(Method_System_Array_Empty_object___);
      v41 = v40[7];
    }
    v42 = *(_QWORD *)(v41 + 16);
    if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
      v42 = sub_1BB5FA4(v42);
    if ( !*(_DWORD *)(v42 + 224) )
      j_il2cpp_runtime_class_init_0(v42);
    v43 = *(_QWORD *)(v40[7] + 16LL);
    if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
      v43 = sub_1BB5FA4(v43);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat_60543088(
                                                                       v20,
                                                                       v39,
                                                                       **(System_Object_array ***)(v43 + 184),
                                                                       0LL);
  }
LABEL_67:
  v48 = v2->fields.CS___8__locals1;
  if ( !v48 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v2->fields.giftList;
  if ( !this )
    goto LABEL_73;
  v49 = v48->fields.__4__this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v20 )
    goto LABEL_73;
  v50 = this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v20->klass->vtable._3_ToString.method)(
                                                                     v20,
                                                                     v20->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v52 = v2->fields.CS___8__locals1;
  if ( !v52 || !v49 )
    goto LABEL_73;
  Dialog = CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
             v49,
             (GiftEntity_array *)v50,
             (System_String_o *)this,
             v52->fields.isCompleteMission,
             v51);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v49, Dialog, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__1(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v3; // x19
  __int64 v4; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  v3 = this;
  if ( (byte_49FB2B0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1B640C8(
                                                                       &Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
                                                                       v4);
    byte_49FB2B0 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__3 = v3->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v8, v9);
  }
  if ( !_4__this )
LABEL_8:
    sub_1B64324(this);
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
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v11; // x8
  Il2CppObject *v12; // x0
  EventRewardSetEntity_o *rwdSetEnt; // x20
  CommonUI_o *v14; // x21
  System_String_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v18; // x22
  MissionRewardGetDialog_ClickDelegate_o *_9__4; // x23
  System_String_o *v20; // x19
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49FB2B1 & 1) == 0 )
  {
    sub_1B640C8(&MissionRewardGetDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v5);
    sub_1B640C8(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__, v6);
    sub_1B640C8(&StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, v7);
    byte_49FB2B1 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v11 = this->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_15;
  ActionExtensions__Call(v11->fields.callback, 0LL);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  rwdSetEnt = this->fields.rwdSetEnt;
  v14 = (CommonUI_o *)v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8605/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v15, (Il2CppObject *)this->fields.sendName, 0LL);
  v18 = this->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_15;
  _9__4 = v18->fields.__9__4;
  v20 = (System_String_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B64314(
                                                        MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                        v16,
                                                        v17);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v18,
      Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__,
      0LL);
    v18->fields.__9__4 = _9__4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.__9__4, (int32_t)_9__4, v21, v22);
  }
  if ( !v14 )
LABEL_15:
    sub_1B64324(Instance);
  CommonUI__OpenMissionRewardGetDialog_30413388(v14, rwdSetEnt, v20, _9__4, 0LL);
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
  const MethodInfo *v5; // x1

  if ( (byte_49FB2B2 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FB2B2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B64324(Instance);
  CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)Instance, v5);
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
  struct UITexture_o *tex; // x21
  Il2CppObject *v12; // x0
  struct UITexture_o *animTex; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  struct CompleteMissionComponent_o *completeMissionComp; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionComponent_o *v18; // x8
  struct CompleteMissionListViewManager_o *v19; // x8
  struct CompleteMissionComponent_o *v20; // x8
  struct CompleteMissionListViewManager_o *v21; // x8
  __int64 v22; // x1
  __int64 v23; // x2
  struct CompleteMissionListViewManager_o *v24; // x19
  float endEffectTime; // s8
  System_Action_o *v26; // x20
  int32_t v27; // [xsp+8h] [xbp-48h] BYREF
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FB2B3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, backPanel);
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, v5);
    sub_1B640C8(&Method_CompleteMissionListViewManager_animAfterCallback__, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v9);
    byte_49FB2B3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_24883/*"{0}"*/, v12, 0LL);
  if ( !backPanel )
    goto LABEL_30;
  Instance = (CommonUI_o *)AssetData__GetObject_object__48347676(
                             backPanel,
                             (System_String_o *)Instance,
                             (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !tex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
    tex,
    Instance,
    tex->klass->vtable._28_get_shader.methodPtr);
  animTex = this->fields.animTex;
  v27 = this->fields.completeMissionPanelChildIdx;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v15 = System_String__Format((System_String_o *)StringLiteral_24883/*"{0}"*/, v14, 0LL);
  Instance = (CommonUI_o *)AssetData__GetObject_object__48347676(
                             backPanel,
                             v15,
                             (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !animTex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))animTex->klass->vtable._27_set_mainTexture.method)(
    animTex,
    Instance,
    animTex->klass->vtable._28_get_shader.methodPtr);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v18 = Instance->fields.completeMissionComp;
  if ( !v18 )
    goto LABEL_30;
  Instance = (CommonUI_o *)v18->fields.completeMissionPanel;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             v19->fields.distanceToTexObj,
                             0LL);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v20 = Instance->fields.completeMissionComp;
  if ( !v20
    || (Instance = (CommonUI_o *)v20->fields.completeMissionPanel) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   this->fields.completeMissionPanelChildIdx,
                                   0LL),
        (v21 = this->fields.__4__this) == 0LL)
    || !Instance
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   v21->fields.distanceToEfPanelObj,
                                   0LL)) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        (v24 = this->fields.__4__this) == 0LL) )
  {
LABEL_30:
    sub_1B64324(Instance);
  }
  endEffectTime = v24->fields.endEffectTime;
  v26 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(v26, (Il2CppObject *)v24, Method_CompleteMissionListViewManager_animAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)v24, endEffectTime, v26, 0LL);
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
    sub_1B64324(this);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))decideCallback->fields.m_target)(
    decideCallback->fields.original_method_info,
    *(_QWORD *)&decideCallback->fields.extra_arg);
}