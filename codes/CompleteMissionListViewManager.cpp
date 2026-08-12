void CompleteMissionListViewManager___ctor(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F1CB & 1) == 0 )
  {
    sub_2213A60(&MissionListViewManager_TypeInfo);
    byte_596F1CB = 1;
  }
  if ( !*(&MissionListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, method, v2);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0);
}


void CompleteMissionListViewManager__AcceptReward(
        CompleteMissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 Master_object; // x0
  Il2CppObject *v7; // x1
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
  __int64 v20; // x1
  __int64 v21; // x2
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftMaster_o *v23; // x20
  struct EventMissionEntity_o *v24; // x8
  __int64 v25; // x8
  __int64 v26; // x20
  unsigned __int64 v27; // x23
  __int64 v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Object_array *v35; // x27
  __int64 v36; // x1
  char *v37; // x0
  System_Text_StringBuilder_o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Text_StringBuilder_o *v45; // x0
  System_Text_StringBuilder_o *v46; // x20
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x19
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  Il2CppObject **v60; // x21
  System_Object_array *v61; // x8
  int max_length; // w24
  __int64 v63; // x28
  unsigned int v64; // w29
  __int64 v65; // x8
  __int64 v66; // x8
  __int64 v67; // x8
  __int64 v68; // x8
  System_Collections_Generic_List_GiftEntity__c **v69; // x23
  System_Collections_Generic_List_object__o *v70; // x26
  System_Collections_Generic_List_object__o *v71; // x22
  int v72; // w28
  __int64 v73; // x27
  unsigned int v74; // w29
  __int64 v75; // x8
  __int64 v76; // x8
  ServantEntity_o *v77; // x24
  bool IsCombineMaterial; // w25
  Il2CppObject *v79; // x8
  System_String_o *v80; // x0
  __int64 v81; // x8
  Il2CppObject *v82; // x24
  Il2CppObject *v83; // x0
  __int64 v84; // x2
  Il2CppObject *v85; // x24
  System_Text_StringBuilder_o *monitor; // x25
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  struct System_Object_array *items; // x9
  _QWORD *v94; // x8
  __int64 size; // x10
  Il2CppClass **v96; // x0
  __int64 v97; // x8
  __int64 v98; // x8
  bool IsCountableWithPlus; // w0
  Il2CppObject **v100; // x9
  Il2CppObject *v101; // x20
  System_Text_StringBuilder_o *v102; // x24
  System_Collections_Generic_List_GiftEntity__c **v103; // x25
  __int64 v104; // x2
  int64_t getQpValue; // x23
  __int64 v106; // x8
  System_Collections_Generic_List_object__o *v107; // x19
  System_String_o *v108; // x26
  Il2CppObject *v109; // x0
  __int64 v110; // x2
  __int64 v111; // x8
  System_Text_StringBuilder_o *v112; // x25
  __int64 v113; // x8
  System_Collections_Generic_List_object__o *v114; // x0
  System_Text_StringBuilder_o *v115; // x25
  struct System_Object_array *v116; // x9
  _QWORD *v117; // x8
  __int64 v118; // x10
  EventRewardSetEntity_o *SetRewardData; // x0
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  __int64 v132; // x1
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *Instance; // x21
  System_Action_o *v135; // x22
  System_Collections_Generic_List_object__o *v136; // x21
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  System_Action_o *v143; // x21
  Il2CppObject *v144; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  EventRewardSetEntity_o *v147; // x20
  CommonUI_o *v148; // x23
  System_String_o *v149; // x0
  System_String_o *v150; // x0
  Il2CppObject *v151; // x24
  System_String_o *v152; // x21
  MissionRewardGetDialog_ClickDelegate_o *v153; // x22
  __int64 v154; // x0
  __int64 v155; // [xsp+8h] [xbp-98h]
  CompleteMissionListViewManager_o *v156; // [xsp+10h] [xbp-90h]
  int64_t v157; // [xsp+18h] [xbp-88h] BYREF
  Il2CppObject *v158; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v159; // [xsp+28h] [xbp-78h] BYREF
  CompleteMissionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Object_array *array; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_596F1BA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Array_Resize_GiftEntity___);
    sub_2213A60(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor___91651904);
    sub_2213A60(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__);
    sub_2213A60(&CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__);
    sub_2213A60(&CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
    sub_2213A60(&StringLiteral_9040/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_2213A60(&StringLiteral_9039/*"MISSION_ACTION_SUCCESS"*/);
    sub_2213A60(&StringLiteral_26615/*"{0}×{1:#,0}"*/);
    sub_2213A60(&StringLiteral_26668/*"×"*/);
    sub_2213A60(&StringLiteral_9035/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_2213A60(&StringLiteral_49/*"\n "*/);
    sub_2213A60(&StringLiteral_26976/*"＋"*/);
    byte_596F1BA = 1;
  }
  entity = 0;
  array = 0;
  v158 = 0;
  v159 = 0;
  v5 = sub_2213CCC(CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_158;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20, v21);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_158;
  v23 = (GiftMaster_o *)Master_object;
  if ( !Master_object )
    goto LABEL_158;
  array = (System_Object_array *)GiftMaster__GetGiftListById(
                                   (GiftMaster_o *)Master_object,
                                   missionToRecieve->fields.giftId,
                                   0);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  v24 = this->fields.missionToRecieve;
  if ( !v24 || !Master_object )
    goto LABEL_158;
  Master_object = CompleteMissionMaster__TryGetEntityFromObjectId(
                    (CompleteMissionMaster_o *)Master_object,
                    &entity,
                    v24->fields.id,
                    0);
  *(_BYTE *)(v5 + 48) = Master_object & 1;
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_158;
    Master_object = (__int64)GiftMaster__GetGiftListById(v23, entity->fields.giftId, 0);
    if ( !Master_object )
      goto LABEL_158;
    v25 = *(_QWORD *)(Master_object + 24);
    v26 = Master_object;
    if ( (int)v25 >= 1 )
    {
      v27 = 0;
      while ( v27 < (unsigned int)v25 )
      {
        if ( !array )
          goto LABEL_158;
        v28 = *(_QWORD *)(v26 + 32 + 8 * v27);
        System_Array__Resize_object_(
          &array,
          LODWORD(array->max_length) + 1,
          (const MethodInfo_37A83F4 *)Method_System_Array_Resize_GiftEntity___);
        v35 = array;
        if ( !array )
          goto LABEL_158;
        if ( v28 )
        {
          Master_object = sub_2213BB4(v28, array->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v154 = sub_2213D00(0, v36);
            sub_2213BA0(v154, 0);
          }
        }
        if ( !LODWORD(v35->max_length) )
          break;
        v37 = (char *)v35 + ((__int64)(((unsigned __int64)LODWORD(v35->max_length) << 32) - 0x100000000LL) >> 29);
        *((_QWORD *)v37 + 4) = v28;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v37 + 32), v28, v29, v30, v31, v32, v33, v34);
        LODWORD(v25) = *(_DWORD *)(v26 + 24);
        if ( (__int64)++v27 >= (int)v25 )
          goto LABEL_22;
      }
LABEL_159:
      sub_2213CE4(Master_object);
    }
  }
LABEL_22:
  v38 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v38, 0);
  *(_QWORD *)(v5 + 40) = v38;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v45, 0);
  v46 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v46, 0);
  *(_QWORD *)(v5 + 32) = v46;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v46, v47, v48, v49, v50, v51, v52);
  v53 = sub_2213CCC(CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v53, 0);
  if ( !v53 )
    goto LABEL_158;
  *(_QWORD *)(v53 + 48) = v5;
  v60 = (Il2CppObject **)(v53 + 48);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v53 + 48), v5, v54, v55, v56, v57, v58, v59);
  Master_object = (__int64)this->fields.missionToRecieve;
  if ( !Master_object )
    goto LABEL_158;
  if ( *(_DWORD *)(Master_object + 80) == 1 )
  {
    Master_object = (__int64)this->fields.touchBlockObj;
    if ( !Master_object )
      goto LABEL_158;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    v61 = array;
    *(_DWORD *)(v53 + 24) = 0;
    if ( !v61 )
      goto LABEL_158;
    max_length = v61->max_length;
    v156 = this;
    if ( max_length >= 1 )
    {
      v63 = 4;
      while ( array )
      {
        v64 = v63 - 4;
        if ( (unsigned int)(v63 - 4) >= LODWORD(array->max_length) )
          goto LABEL_159;
        v65 = *((_QWORD *)&array->obj.klass + v63);
        if ( !v65 )
          break;
        Master_object = Gift__IsServant_47387968(*(_DWORD *)(v65 + 20), 0);
        if ( (Master_object & 1) == 0 )
        {
          if ( !array )
            break;
          if ( v64 >= LODWORD(array->max_length) )
            goto LABEL_159;
          v66 = *((_QWORD *)&array->obj.klass + v63);
          if ( !v66 )
            break;
          Master_object = Gift__IsCommandCode_47388336(*(_DWORD *)(v66 + 20), 0);
          if ( (Master_object & 1) == 0 )
          {
            if ( !array )
              break;
            if ( v64 >= LODWORD(array->max_length) )
              goto LABEL_159;
            v67 = *((_QWORD *)&array->obj.klass + v63);
            if ( !v67 )
              break;
            Master_object = Gift__IsCostumeRelease(*(_DWORD *)(v67 + 20), 0);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Master_object )
                break;
              Master_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Master_object,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
              if ( !array )
                break;
              if ( v64 >= LODWORD(array->max_length) )
                goto LABEL_159;
              v68 = *((_QWORD *)&array->obj.klass + v63);
              if ( !v68 || !Master_object )
                break;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &v159,
                                *(_DWORD *)(v68 + 24),
                                (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( (Master_object & 1) != 0 )
              {
                Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !v159 || !Master_object )
                  break;
                Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v159[1].klass, 0);
                if ( (Master_object & 1) == 0 )
                  ++*(_DWORD *)(v53 + 24);
              }
            }
          }
        }
        if ( (_DWORD)++v63 - max_length == 4 )
          goto LABEL_52;
      }
LABEL_158:
      sub_2213CDC(Master_object, v7);
    }
LABEL_52:
    v69 = &System_Collections_Generic_List_GiftEntity__TypeInfo;
    v70 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v70,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v71 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v71,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( max_length >= 1 )
    {
      v72 = -max_length;
      v73 = 4;
      v155 = v53;
      do
      {
        if ( !array )
          goto LABEL_158;
        v74 = v73 - 4;
        if ( (unsigned int)(v73 - 4) >= LODWORD(array->max_length) )
          goto LABEL_159;
        v75 = *((_QWORD *)&array->obj.klass + v73);
        if ( !v75 )
          goto LABEL_158;
        Master_object = Gift__IsServant_47387968(*(_DWORD *)(v75 + 20), 0);
        if ( (Master_object & 1) != 0 )
        {
          Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Master_object )
            goto LABEL_158;
          Master_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Master_object,
                                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !array )
            goto LABEL_158;
          if ( v74 >= LODWORD(array->max_length) )
            goto LABEL_159;
          v76 = *((_QWORD *)&array->obj.klass + v73);
          if ( !v76 )
            goto LABEL_158;
          if ( !Master_object )
            goto LABEL_158;
          Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     *(_DWORD *)(v76 + 24),
                                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_158;
          v77 = (ServantEntity_o *)Master_object;
          IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Master_object + 84), 0);
          Master_object = SvtType__IsStatusUp(v77->fields.type, 0);
          v79 = *v60;
          if ( !*v60 )
            goto LABEL_158;
          if ( LOBYTE(v79[3].klass) | (IsCombineMaterial | (unsigned __int8)Master_object) & 1 )
          {
            Master_object = (__int64)v79[2].monitor;
            if ( !Master_object )
              goto LABEL_158;
            v80 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 360LL))(
                                       Master_object,
                                       *(_QWORD *)(*(_QWORD *)Master_object + 368LL));
            Master_object = System_String__IsNullOrEmpty(v80, 0);
            if ( (Master_object & 1) == 0 )
            {
              if ( !*v60 )
                goto LABEL_158;
              Master_object = (__int64)(*v60)[2].monitor;
              if ( !Master_object )
                goto LABEL_158;
              System_Text_StringBuilder__Append_75735064(
                (System_Text_StringBuilder_o *)Master_object,
                (System_String_o *)StringLiteral_49/*"\n "*/,
                0);
            }
            Master_object = (__int64)ServantEntity__getName(v77, -1, -1, 0, 0, 0);
            if ( !array )
              goto LABEL_158;
            if ( v74 >= LODWORD(array->max_length) )
              goto LABEL_159;
            v81 = *((_QWORD *)&array->obj.klass + v73);
            if ( !v81 )
              goto LABEL_158;
            v82 = (Il2CppObject *)Master_object;
            LODWORD(v157) = *(_DWORD *)(v81 + 28);
            v83 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v157);
            Master_object = (__int64)System_String__Format_75697880((System_String_o *)StringLiteral_26615/*"{0}×{1:#,0}"*/, v82, v83, 0);
            if ( !*v60 )
              goto LABEL_158;
            v85 = (Il2CppObject *)Master_object;
            monitor = (System_Text_StringBuilder_o *)(*v60)[2].monitor;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v84);
            Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9035/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
            if ( !monitor )
              goto LABEL_158;
            Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                       monitor,
                                       (System_String_o *)Master_object,
                                       v85,
                                       0);
            if ( !array )
              goto LABEL_158;
            if ( v74 >= LODWORD(array->max_length) )
              goto LABEL_159;
            if ( !v71 )
              goto LABEL_158;
            v7 = (Il2CppObject *)*((_QWORD *)&array->obj.klass + v73);
            items = v71->fields._items;
            v94 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v71->fields._version;
            if ( !items )
              goto LABEL_158;
            size = v71->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v113 = v94[4];
              v114 = v71;
LABEL_125:
              System_Collections_Generic_List_object___AddWithResize(
                v114,
                v7,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v113 + 192) + 112LL));
              goto LABEL_126;
            }
            v96 = &items->obj.klass + size;
            v71->fields._size = size + 1;
LABEL_84:
            v96[4] = (Il2CppClass *)v7;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v96 + 4), (int32_t)v7, v87, v88, v89, v90, v91, v92);
          }
        }
        else
        {
          if ( !array )
            goto LABEL_158;
          if ( v74 >= LODWORD(array->max_length) )
            goto LABEL_159;
          v97 = *((_QWORD *)&array->obj.klass + v73);
          if ( !v97 )
            goto LABEL_158;
          Master_object = Gift__IsItem_47387928(*(_DWORD *)(v97 + 20), 0);
          if ( (Master_object & 1) != 0 )
          {
            Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Master_object )
              goto LABEL_158;
            Master_object = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Master_object,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( !array )
              goto LABEL_158;
            if ( v74 >= LODWORD(array->max_length) )
              goto LABEL_159;
            v98 = *((_QWORD *)&array->obj.klass + v73);
            if ( !v98 || !Master_object )
              goto LABEL_158;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &v158,
                              *(_DWORD *)(v98 + 24),
                              (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !v158 || !Master_object )
                goto LABEL_158;
              Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v158[1].klass, 0);
              if ( (Master_object & 1) == 0 )
              {
                if ( !array )
                  goto LABEL_158;
                if ( v74 >= LODWORD(array->max_length) )
                  goto LABEL_159;
                Master_object = *((_QWORD *)&array->obj.klass + v73);
                if ( !Master_object )
                  goto LABEL_158;
                Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0);
                if ( (Master_object & 1) == 0 || !v156->fields.isQpAlreadyMax )
                {
                  if ( !v158 )
                    goto LABEL_158;
                  IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)v158[3].klass, 0);
                  v100 = (Il2CppObject **)&StringLiteral_26976/*"＋"*/;
                  if ( !IsCountableWithPlus )
                    v100 = (Il2CppObject **)&StringLiteral_26668/*"×"*/;
                  v101 = *v100;
                  v102 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
                  System_Text_StringBuilder___ctor(v102, 0);
                  if ( !v158 )
                    goto LABEL_158;
                  if ( !v102 )
                    goto LABEL_158;
                  Master_object = (__int64)System_Text_StringBuilder__Append_75735064(
                                             v102,
                                             (System_String_o *)v158[1].monitor,
                                             0);
                  if ( !array )
                    goto LABEL_158;
                  if ( v74 >= LODWORD(array->max_length) )
                    goto LABEL_159;
                  Master_object = *((_QWORD *)&array->obj.klass + v73);
                  if ( !Master_object )
                    goto LABEL_158;
                  v103 = v69;
                  Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0);
                  if ( (Master_object & 1) == 0
                    || !v156->fields.isQpMaxAlert
                    || (getQpValue = v156->fields.getQpValue) == 0 )
                  {
                    if ( !array )
                      goto LABEL_158;
                    if ( v74 >= LODWORD(array->max_length) )
                      goto LABEL_159;
                    v106 = *((_QWORD *)&array->obj.klass + v73);
                    if ( !v106 )
                      goto LABEL_158;
                    getQpValue = *(int *)(v106 + 28);
                  }
                  v107 = v70;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v104);
                  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_9040/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0);
                  v157 = getQpValue;
                  v109 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v157);
                  Master_object = (__int64)System_Text_StringBuilder__AppendFormat_75741272(v102, v108, v101, v109, 0);
                  v111 = *(_QWORD *)(v155 + 48);
                  if ( *(int *)(v155 + 24) >= 2 )
                  {
                    if ( !v111 )
                      goto LABEL_158;
                    v69 = v103;
                    v70 = v107;
                    v115 = *(System_Text_StringBuilder_o **)(v111 + 32);
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v110);
                    Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9035/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
                    v53 = v155;
                    if ( !v115 )
                      goto LABEL_158;
                    Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                               v115,
                                               (System_String_o *)Master_object,
                                               (Il2CppObject *)v102,
                                               0);
                    if ( !*v60 )
                      goto LABEL_158;
                    Master_object = (__int64)(*v60)[2].klass;
                    if ( !Master_object )
                      goto LABEL_158;
                    Master_object = (__int64)System_Text_StringBuilder__Append_75735064(
                                               (System_Text_StringBuilder_o *)Master_object,
                                               (System_String_o *)StringLiteral_49/*"\n "*/,
                                               0);
                  }
                  else
                  {
                    if ( !v111 )
                      goto LABEL_158;
                    v69 = v103;
                    v112 = *(System_Text_StringBuilder_o **)(v111 + 32);
                    v70 = v107;
                    Master_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v102->klass->vtable._3_ToString.methodPtr)(
                                      v102,
                                      v102->klass->vtable._3_ToString.method);
                    if ( !v112 )
                      goto LABEL_158;
                    Master_object = (__int64)System_Text_StringBuilder__Append_75735064(
                                               v112,
                                               (System_String_o *)Master_object,
                                               0);
                    v53 = v155;
                  }
                  if ( !array )
                    goto LABEL_158;
                  if ( v74 >= LODWORD(array->max_length) )
                    goto LABEL_159;
                  if ( !v70 )
                    goto LABEL_158;
                  v7 = (Il2CppObject *)*((_QWORD *)&array->obj.klass + v73);
                  v116 = v70->fields._items;
                  v117 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                  ++v70->fields._version;
                  if ( !v116 )
                    goto LABEL_158;
                  v118 = v70->fields._size;
                  if ( (unsigned int)v118 >= LODWORD(v116->max_length) )
                  {
                    v113 = v117[4];
                    v114 = v70;
                    goto LABEL_125;
                  }
                  v96 = &v116->obj.klass + v118;
                  v70->fields._size = v118 + 1;
                  goto LABEL_84;
                }
              }
            }
          }
        }
LABEL_126:
        ++v73;
      }
      while ( v72 + (_DWORD)v73 != 4 );
    }
    v136 = (System_Collections_Generic_List_object__o *)sub_2213CCC(*v69);
    System_Collections_Generic_List_object____ctor_71841080(
      v136,
      (System_Collections_Generic_IEnumerable_T__o *)v70,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_GiftEntity___ctor___91651904);
    *(_QWORD *)(v53 + 16) = v136;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v53 + 16), (int32_t)v136, v137, v138, v139, v140, v141, v142);
    Master_object = *(_QWORD *)(v53 + 16);
    if ( !Master_object )
      goto LABEL_158;
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)Master_object,
      (System_Collections_Generic_IEnumerable_T__o *)v71,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v143 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v143,
      (Il2CppObject *)v53,
      Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__,
      0);
    this = v156;
    if ( v156->fields.isTreasureEffect )
      MissionListViewManager__StartEventMissionClearItemAction(
        (MissionListViewManager_o *)v156,
        (GiftEntity_array *)array,
        0,
        v143,
        0);
    else
      MissionListViewManager__StartItemGetEffectAction(
        (MissionListViewManager_o *)v156,
        (GiftEntity_array *)array,
        0,
        v143,
        0);
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Master_object, 0);
    *(_QWORD *)(v53 + 32) = SetRewardData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v53 + 32),
      (int32_t)SetRewardData,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
    if ( !*(_QWORD *)(v53 + 32) )
      goto LABEL_158;
    v132 = *(_QWORD *)(*(_QWORD *)(v53 + 32) + 32LL);
    *(_QWORD *)(v53 + 40) = v132;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v53 + 40), v132, v126, v127, v128, v129, v130, v131);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && getSvtList->max_length )
    {
      Master_object = (__int64)this->fields.touchBlockObj;
      if ( !Master_object )
        goto LABEL_158;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v135 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v135,
        (Il2CppObject *)v53,
        Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__,
        0);
      if ( !Instance )
        goto LABEL_158;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v135, 0);
    }
    else
    {
      if ( !*v60 )
        goto LABEL_158;
      ActionExtensions__Call((System_Action_o *)(*v60)[1].monitor, 0);
      v144 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v147 = *(EventRewardSetEntity_o **)(v53 + 32);
      v148 = (CommonUI_o *)v144;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v145, v146);
      v149 = LocalizationManager__Get((System_String_o *)StringLiteral_9039/*"MISSION_ACTION_SUCCESS"*/, 0);
      v150 = System_String__Format(v149, *(Il2CppObject **)(v53 + 40), 0);
      v151 = *v60;
      v152 = v150;
      v153 = (MissionRewardGetDialog_ClickDelegate_o *)sub_2213CCC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v153,
        v151,
        Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__,
        0);
      if ( !v148 )
        goto LABEL_158;
      CommonUI__OpenMissionRewardGetDialog_37453652(v148, v147, v152, v153, 0);
    }
  }
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
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x24
  int *v17; // x22
  System_String_o *v18; // x20
  __int64 v19; // x2
  _QWORD *v20; // x23
  int64_t v21; // x25
  int64_t QpMax; // x8
  __int64 v23; // x25
  __int64 v24; // x26
  System_String_o *v25; // x24
  Il2CppObject *NumberFormatLong; // x25
  System_String_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  BalanceConfig_c *v30; // x8
  Il2CppObject *v31; // x26
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  System_String_o *v35; // x24
  __int64 v36; // x10
  int64_t v37; // x8
  int64_t v38; // x8
  System_String_o *v39; // x24
  System_String_o *v40; // x0
  int64_t v41; // x8
  Il2CppObject *v42; // x23
  System_String_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
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
  __int64 v56; // x2
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *onTransition; // x21
  Il2CppObject *v59; // x27
  struct CompleteMissionListViewManager___c_StaticFields *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7

  if ( (byte_596F1CA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__);
    sub_2213A60(&CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
    sub_2213A60(&CompleteMissionListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_9078/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_9081/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12200/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_2213A60(&StringLiteral_12199/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_2213A60(&StringLiteral_12206/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_596F1CA = 1;
  }
  v7 = sub_2213CCC(CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_35;
  *(_QWORD *)(v7 + 16) = decideCallback;
  v16 = v7 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)decideCallback, v10, v11, v12, v13, v14, v15);
  if ( !missionEntity )
    goto LABEL_35;
  QpGiftEntity = (int *)EventMissionEntity__GetQpGiftEntity(missionEntity, 0);
  if ( !QpGiftEntity )
  {
LABEL_18:
    if ( *(_QWORD *)v16 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v16 + 64LL),
        *(_QWORD *)(*(_QWORD *)v16 + 40LL));
      return;
    }
LABEL_35:
    sub_2213CDC(QpGiftEntity, v9);
  }
  v17 = QpGiftEntity;
  v18 = **(System_String_o ***)(qword_5984390 + 184);
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  *(_OWORD *)&this->fields.overQpValue = 0u;
  QpGiftEntity = (int *)UserGameMaster__getSelfUserGame(0);
  if ( !QpGiftEntity )
    goto LABEL_35;
  v20 = QpGiftEntity;
  v21 = *((_QWORD *)QpGiftEntity + 12);
  QpGiftEntity = (int *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v19);
    QpGiftEntity = (int *)BalanceConfig_TypeInfo;
  }
  QpMax = *(_QWORD *)(*((_QWORD *)QpGiftEntity + 23) + 8LL);
  if ( v21 < QpMax )
  {
    v23 = v20[12];
    v24 = v17[7];
    if ( !QpGiftEntity[57] )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity, v9, v19);
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v23 + v24 > QpMax )
    {
      *(_WORD *)&this->fields.isQpMaxAlert = 1;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v19);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9081/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0);
      NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v17[7], 0);
      v27 = LocalizationManager__GetNumberFormatLong(v20[12], 0);
      v30 = BalanceConfig_TypeInfo;
      v31 = (Il2CppObject *)v27;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28, v29);
        v30 = BalanceConfig_TypeInfo;
      }
      v32 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v30->static_fields->QpMax, 0);
      v35 = System_String__Format_75697948(v25, NumberFormatLong, v31, v32, 0);
      v36 = v17[7];
      v37 = BalanceConfig_TypeInfo->static_fields->QpMax - v20[12];
      this->fields.getQpValue = v37;
      v38 = v36 - v37;
      goto LABEL_25;
    }
    goto LABEL_18;
  }
  *(_WORD *)&this->fields.isQpMaxAlert = 257;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v19);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9078/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0);
  v40 = LocalizationManager__GetNumberFormatLong(v17[7], 0);
  v41 = v20[12];
  v42 = (Il2CppObject *)v40;
  v43 = LocalizationManager__GetNumberFormatLong(v41, 0);
  v46 = BalanceConfig_TypeInfo;
  v47 = (Il2CppObject *)v43;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v44, v45);
    v46 = BalanceConfig_TypeInfo;
  }
  v48 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v46->static_fields->QpMax, 0);
  v49 = System_String__Format_75697948(v39, v42, v47, v48, 0);
  v38 = v17[7];
  v35 = v49;
LABEL_25:
  this->fields.overQpValue = v38;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12200/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12206/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12199/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  v54 = v52;
  v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v7,
    Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__,
    0);
  QpGiftEntity = (int *)CompleteMissionListViewManager___c_TypeInfo;
  if ( !*(&CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo, v9, v56);
    QpGiftEntity = (int *)CompleteMissionListViewManager___c_TypeInfo;
  }
  static_fields = (struct CompleteMissionListViewManager___c_StaticFields *)*((_QWORD *)QpGiftEntity + 23);
  onTransition = static_fields->__9__68_1;
  if ( !onTransition )
  {
    if ( !QpGiftEntity[57] )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity, v9, v56);
      static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    }
    v59 = (Il2CppObject *)static_fields->__9;
    onTransition = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(onTransition, v59, Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, 0);
    v60 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v60->__9__68_1 = onTransition;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v60->__9__68_1,
      (int32_t)onTransition,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  if ( !qpMaxAlertDialog )
    goto LABEL_35;
  ServantSellMaxAlertDialog__Open(qpMaxAlertDialog, v18, v35, v18, v50, v51, v54, v55, onTransition, 0, 1, 0);
}


void CompleteMissionListViewManager__CreateList(
        CompleteMissionListViewManager_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionList,
        System_Int32_array *mstMissionIdList,
        int32_t type,
        System_Action_o *redispCallBack,
        const MethodInfo *method)
{
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  CompleteMissionListViewItem_o *v18; // x23
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t CompleteMissionFilterId_k__BackingField; // w26
  __int64 *v35; // x8
  void *ObjectList; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  int v46; // w22
  System_Collections_Generic_List_object__o *v47; // x19
  int32_t i; // w20
  __int64 v49; // x1
  __int64 v50; // x2
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596F1AF & 1) == 0 )
  {
    sub_2213A60(&CompleteMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9178/*"MST_MISSION_EMPTY_TXT"*/);
    sub_2213A60(&StringLiteral_9043/*"MISSION_EMPTY_TXT"*/);
    byte_596F1AF = 1;
  }
  memset(&v53, 0, sizeof(v53));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.listType = 0;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v52,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v53 = v52;
    v52.fields._list = 0;
    *(_QWORD *)&v52.fields._index = &v53;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v53,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v53.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v18 = (CompleteMissionListViewItem_o *)sub_2213CCC(CompleteMissionListViewItem_TypeInfo);
      CompleteMissionListViewItem___ctor(v18, (EventMissionEntity_o *)current, type, v19);
      if ( !itemList
        || (items = itemList->fields._items,
            v29 = Method_System_Collections_Generic_List_ListViewItem__Add__,
            ++itemList->fields._version,
            !items) )
      {
        sub_2213CDC(v20, v21);
      }
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v18,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v18, v22, v23, v24, v25, v26, v27);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v53,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
      (int32_t)sort,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !byte_596A844 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A844 = 1;
  }
  CompleteMissionFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, sort, v10);
  if ( CompleteMissionFilterId_k__BackingField )
    v35 = &StringLiteral_9043/*"MISSION_EMPTY_TXT"*/;
  else
    v35 = &StringLiteral_9178/*"MST_MISSION_EMPTY_TXT"*/;
  ObjectList = LocalizationManager__Get((System_String_o *)*v35, 0);
  if ( !emptyMessageLabel )
    goto LABEL_38;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0);
  if ( !byte_596A844 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A844 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  CompleteMissionListViewManager__setList(this, v38);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.reDispAct,
      (int32_t)redispCallBack,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v39);
  if ( !ObjectList )
LABEL_38:
    sub_2213CDC(ObjectList, v37);
  v46 = *((_DWORD *)ObjectList + 6);
  v47 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v46 >= 1 )
  {
    for ( i = 0; i != v46; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v47,
               i,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49, v50);
      ObjectList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_38;
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

  if ( (byte_596F1B2 & 1) == 0 )
  {
    sub_2213A60(&CompleteMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596F1B2 = 1;
  }
  result = (CompleteMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CompleteMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Entity; // x20
  bool v9; // cc
  __int64 v10; // x2
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *v12; // x8
  int64_t v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  MissionListViewItem_o *current; // x22
  __int64 naturalAligment; // x10
  __int64 MissionId; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct EventMissionEntity_o *v21; // x8
  int32_t v22; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v24; // x1
  struct ListViewObject_o *v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596F1C1 & 1) == 0 )
  {
    sub_2213A60(&CompleteMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F1C1 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             missionToRecieve->fields.id,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  Instance = NetworkManager__getTime(0);
  if ( !Entity )
    goto LABEL_46;
  if ( Instance <= (__int64)Entity[4].klass )
  {
    this->fields.isEndEvent = 0;
    return;
  }
  v9 = Instance <= (__int64)Entity[4].monitor;
  this->fields.isEndEvent = v9;
  if ( v9 && this->fields.itemList )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v10);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (int64_t)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v10);
        Instance = (int64_t)NetworkManager_TypeInfo;
      }
      v12 = this->fields.missionToRecieve;
      if ( v12 )
      {
        if ( MasterData_object )
        {
          Instance = (int64_t)UserEventMissionMaster__GetEntity(
                                (UserEventMissionMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                                v12->fields.id,
                                0);
          if ( this->fields.itemList )
          {
            v13 = Instance;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v26,
              (System_Collections_Generic_List_object__o *)this->fields.itemList,
              (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v27 = v26;
            v26.fields._list = 0;
            *(_QWORD *)&v26.fields._index = &v27;
            while ( 1 )
            {
              v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v27,
                      (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v14 )
                break;
              current = (MissionListViewItem_o *)v27.fields._current;
              if ( !v27.fields._current
                || (naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment,
                    v27.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
                || (CompleteMissionListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
              {
                sub_2213CDC(v14, v15);
              }
              MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v27.fields._current, 0);
              v21 = this->fields.missionToRecieve;
              if ( !v21 )
                sub_2213CDC(MissionId, v19);
              v22 = MissionId;
              if ( (_DWORD)MissionId == v21->fields.id )
              {
                if ( !byte_596A748 )
                {
                  MissionId = sub_2213A60(&EventRewardSaveData_TypeInfo);
                  byte_596A748 = 1;
                }
                EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v22;
                if ( !v13 )
                  sub_2213CDC(MissionId, v19);
                MissionListViewItem__ModifyItem(current, *(_DWORD *)(v13 + 32) == 5, 0);
              }
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v25 = current->fields.viewObject;
                if ( !v25 )
                  sub_2213CDC(0, v24);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, const MethodInfo *))v25->klass->vtable._5_SetItem.methodPtr)(
                  v25,
                  current,
                  v25->klass->vtable._5_SetItem.method);
              }
              if ( current->fields.dispNo == 1 )
                ((void (__fastcall *)(MissionListViewItem_o *, const MethodInfo *))current->klass->vtable._6_CheckMissionCond.methodPtr)(
                  current,
                  current->klass->vtable._6_CheckMissionCond.method);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v27,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            return;
          }
        }
      }
    }
LABEL_46:
    sub_2213CDC(Instance, v4);
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

  if ( (byte_596F1C9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    byte_596F1C9 = 1;
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
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      CompleteMissionListViewObject__OnChangeAlphaAnim((CompleteMissionListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_2213CDC(ObjectList, v4);
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

  if ( (byte_596F1B5 & 1) == 0 )
  {
    sub_2213A60(&Method_CompleteMissionListViewManager_OnClickFilterList__);
    byte_596F1B5 = 1;
  }
  v3 = Method_CompleteMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_CompleteMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  filterStatus = (unsigned int)this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_ED8CE8[filterStatus];
  CompleteMissionListViewManager__setList(this, v5);
}


void CompleteMissionListViewManager__OnClickListView(
        CompleteMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 naturalAligment; // x10
  PlayMakerFSM_o *v8; // x20
  CompleteMissionListViewManager_o *IsHideReward; // x0
  const MethodInfo *v10; // x1
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_596F1B3 & 1) == 0 )
  {
    sub_2213A60(&Method_CompleteMissionListViewManager_OnClickListView__);
    sub_2213A60(&CompleteMissionListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_16179/*"Wait_Action"*/);
    byte_596F1B3 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_20;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_16179/*"Wait_Action"*/, 0);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (naturalAligment = CompleteMissionListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CompleteMissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)CompleteMissionListViewObject__GetItem(
                                        (CompleteMissionListViewObject_o *)obj,
                                        (const MethodInfo *)obj)) == 0 )
  {
LABEL_20:
    sub_2213CDC(targetFSM, obj);
  }
  v8 = targetFSM;
  IsHideReward = (CompleteMissionListViewManager_o *)((__int64 (__fastcall *)(PlayMakerFSM_o *, _QWORD))targetFSM->klass[1]._1.byval_arg.data)(
                                                       targetFSM,
                                                       *(_QWORD *)&targetFSM->klass[1]._1.byval_arg.bits);
  if ( ((unsigned __int8)IsHideReward & 1) == 0
    || (IsHideReward = (CompleteMissionListViewManager_o *)CompleteMissionListViewItem__get_IsHideReward(
                                                             (CompleteMissionListViewItem_o *)v8,
                                                             v10),
        ((unsigned __int8)IsHideReward & 1) != 0)
    || BYTE4(v8[4].fields.fsmTemplate) )
  {
    if ( LODWORD(v8[4].fields.m_CancellationTokenSource) == 3
      && (LODWORD(v8[3].klass) != 1 || CompleteMissionListViewManager__checkPanelAllOpen(IsHideReward, v10)) )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v8, 0);
      CompleteMissionListViewManager__recieveReward(this, EventMissionEntity, v12);
    }
    else
    {
      v13 = Method_CompleteMissionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_2213A78(Method_CompleteMissionListViewManager_OnClickListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0);
    }
  }
  else
  {
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v8, 0, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_596F1BB & 1) == 0 )
  {
    sub_2213A60(&CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
    byte_596F1BB = 1;
  }
  v9 = isCompleteMission;
  v10 = sub_2213CCC(CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 32), (int32_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 48) = rewards;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 48), (int32_t)rewards, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v10 + 56) = rewardDetail;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 56), (int32_t)rewardDetail, v23, v24, v25, v26, v27, v28);
  *(_BYTE *)(v10 + 40) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


void CompleteMissionListViewManager__RefrashListDisp(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x10
  int32_t size; // w8
  int32_t v10; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596F1B4 & 1) == 0 )
  {
    sub_2213A60(&CompleteMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    byte_596F1B4 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v5 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v11.fields._current
      || (klass = v11.fields._current->klass,
          naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment,
          v11.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (CompleteMissionListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
    {
      sub_2213CDC(v11.fields._current, v6);
    }
    klass->vtable[6].methodPtr();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  if ( size > 0 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v10,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( ++v10 >= v5->fields._size )
        return;
    }
LABEL_17:
    sub_2213CDC(ObjectList, v4);
  }
}


void CompleteMissionListViewManager__SetOpenItem(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v10; // x1
  struct CompleteMissionListViewItem_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v20; // x2
  float openItemTime; // s8
  System_Action_o *v22; // x20
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596F1C2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CompleteMissionListViewManager_modifyOpenItem__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_19715/*"ef_mission_extric01"*/);
    byte_596F1C2 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v24, 0, sizeof(v24));
  if ( itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_2213CDC(0, v5);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v23,
        ObjectList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
      v24 = v23;
      v23.fields._list = 0;
      *(_QWORD *)&v23.fields._index = &v24;
      while ( 1 )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v24,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
        if ( !v6 )
          break;
        current = v24.fields._current;
        if ( !v24.fields._current )
          sub_2213CDC(v6, v7);
        Item = (MissionListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                          (CompleteMissionListViewObject_o *)v24.fields._current,
                                          v7);
        v11 = (struct CompleteMissionListViewItem_o *)Item;
        if ( !Item )
          sub_2213CDC(0, v10);
        MissionId = MissionListViewItem__get_MissionId(Item, 0);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_596A748 )
          {
            sub_2213A60(&EventRewardSaveData_TypeInfo);
            byte_596A748 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v11;
          sub_2213A04(
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
            CompleteMissionListViewManager__getEffect((System_String_o *)StringLiteral_19715/*"ef_mission_extric01"*/, transform, v20);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    }
    openItemTime = this->fields.openItemTime;
    v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_CompleteMissionListViewManager_modifyOpenItem__, 0);
    ListViewManager__DelayCallMethod((ListViewManager_o *)this, openItemTime, v22, 0);
  }
}


void CompleteMissionListViewManager__SetResultData(
        CompleteMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  __int64 v17; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w19

  this->fields.getSvtList = svts;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.getSvtList,
    (int32_t)svts,
    (System_String_o *)cmds,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.getCommandCodeList,
    (int32_t)cmds,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_2213CDC(v16, v17);
  id = missionToRecieve->fields.id;
  if ( !byte_596A748 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A748 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
}


System_Collections_IEnumerator_o *CompleteMissionListViewManager__StartPanelAnimCoroutine(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596F1C6 & 1) == 0 )
  {
    sub_2213A60(&CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
    byte_596F1C6 = 1;
  }
  v3 = sub_2213CCC(CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void CompleteMissionListViewManager___modifyOpenItem_b__58_0(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  float endEffectTime; // s8
  System_Action_o *v4; // x20

  if ( (byte_596F1CC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CompleteMissionListViewManager_actionAfterCallback__);
    byte_596F1CC = 1;
  }
  CompleteMissionListViewManager__RefrashListDisp(this, method);
  endEffectTime = this->fields.endEffectTime;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CompleteMissionListViewManager_actionAfterCallback__, 0);
  ListViewManager__DelayCallMethod((ListViewManager_o *)this, endEffectTime, v4, 0);
}


void CompleteMissionListViewManager__actionAfterCallback(
        CompleteMissionListViewManager_o *this,
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
    sub_2213A04(p_actionCallback, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))actionCallback->fields.invoke_impl)(
      actionCallback->fields.method_code,
      actionCallback->fields.method);
  }
}


void CompleteMissionListViewManager__afterReward(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596F1BC & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_2213A60(&StringLiteral_5642/*"END_EFFECT"*/);
    byte_596F1BC = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0),
        (Instance = (AutomatedAction_o *)this->fields.targetFSM) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5642/*"END_EFFECT"*/, 0);
}


void CompleteMissionListViewManager__animAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t dispNo; // w21
  __int64 v5; // x2
  __int64 v6; // x8
  UnityEngine_Object_o *v7; // x20
  const MethodInfo *v8; // x4
  UnityEngine_GameObject_o *childGameObject; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_596F1C5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (CompleteMissionListViewManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596F1C5 = 1;
  }
  missionToRecieve = v2->fields.missionToRecieve;
  childGameObject = 0;
  if ( !missionToRecieve )
    goto LABEL_15;
  dispNo = missionToRecieve->fields.dispNo;
  this = (CompleteMissionListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_15;
  v6 = *((_QWORD *)this + 173);
  if ( !v6 )
    goto LABEL_15;
  v7 = *(UnityEngine_Object_o **)(v6 + 40);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v5);
  this = (CompleteMissionListViewManager_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_15;
    if ( CompleteMissionPanelComponent__TryGetPanelChildGameObject(
           (CompleteMissionPanelComponent_o *)v7,
           dispNo - 2,
           v2->fields.distanceToTexObj,
           &childGameObject,
           v8) )
    {
      this = (CompleteMissionListViewManager_o *)childGameObject;
      if ( !childGameObject )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(childGameObject, 1, 0);
    }
  }
  this = (CompleteMissionListViewManager_o *)v2->fields.touchBlockObj;
  if ( !this )
LABEL_15:
    sub_2213CDC(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void CompleteMissionListViewManager__checkAcceptable(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v6; // x8
  _DWORD *v7; // x20
  _DWORD *v8; // x20
  __int64 v9; // x2
  Il2CppObject *MasterData_object; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  _DWORD *v17; // x20
  BalanceConfig_c *v18; // x0
  __int64 *v19; // x8
  CompleteMissionListViewManager___c_c *v20; // x0
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__46_0; // x20
  Il2CppObject *v23; // x21
  struct CompleteMissionListViewManager___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_596F1B8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__);
    sub_2213A60(&CompleteMissionListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_12732/*"SHOW_MSG"*/);
    sub_2213A60(&StringLiteral_11639/*"REWARD_ACCEPTABLE"*/);
    byte_596F1B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_38;
  if ( !Instance )
    goto LABEL_38;
  Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0);
  v6 = this->fields.missionToRecieve;
  if ( !v6 )
    goto LABEL_38;
  if ( v6->fields.rewardType == 1 )
  {
    v7 = Instance;
    if ( !Instance )
      goto LABEL_38;
    if ( Gift__IsServant_47387968(*((_DWORD *)Instance + 5), 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( Instance )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v7[6],
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Instance )
          {
            v8 = Instance;
            if ( !SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0) && !SvtType__IsStatusUp(v8[21], 0) )
              goto LABEL_27;
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v9);
              if ( !byte_5969EF2 )
              {
                sub_2213A60(&NetworkManager_TypeInfo);
                byte_5969EF2 = 1;
              }
              Instance = NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v9);
                Instance = NetworkManager_TypeInfo;
              }
              if ( MasterData_object )
              {
                Instance = UserPresentBoxMaster__getVaildList(
                             (UserPresentBoxMaster_o *)MasterData_object,
                             *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                             0);
                if ( Instance )
                {
                  v17 = Instance;
                  v18 = BalanceConfig_TypeInfo;
                  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v11);
                    v18 = BalanceConfig_TypeInfo;
                  }
                  if ( v18->static_fields->PresentBoxMax > v17[6] )
                    goto LABEL_27;
                  v20 = CompleteMissionListViewManager___c_TypeInfo;
                  if ( !*(&CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo, v4, v11);
                    v20 = CompleteMissionListViewManager___c_TypeInfo;
                  }
                  static_fields = v20->static_fields;
                  _9__46_0 = static_fields->__9__46_0;
                  if ( !_9__46_0 )
                  {
                    if ( !*(&v20->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(v20, v4, v11);
                      static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                    }
                    v23 = (Il2CppObject *)static_fields->__9;
                    _9__46_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(
                      _9__46_0,
                      v23,
                      Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__,
                      0);
                    v24 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                    v24->__9__46_0 = _9__46_0;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&v24->__9__46_0,
                      (int32_t)_9__46_0,
                      v25,
                      v26,
                      v27,
                      v28,
                      v29,
                      v30);
                  }
                  this->fields.ShowMSG = _9__46_0;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.ShowMSG,
                    (int32_t)_9__46_0,
                    v11,
                    v12,
                    v13,
                    v14,
                    v15,
                    v16);
                  Instance = this->fields.targetFSM;
                  if ( Instance )
                  {
                    v19 = &StringLiteral_12732/*"SHOW_MSG"*/;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
        }
      }
LABEL_38:
      sub_2213CDC(Instance, v4);
    }
  }
LABEL_27:
  Instance = this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_38;
  v19 = &StringLiteral_11639/*"REWARD_ACCEPTABLE"*/;
LABEL_29:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v19, 0);
}


bool CompleteMissionListViewManager__checkPanelAllOpen(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  intptr_t m_CachedPtr; // x8
  System_Collections_Generic_List_EventMissionEntity__o *v5; // x19

  if ( (byte_596F1C8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F1C8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (m_CachedPtr = Instance[9].fields.m_CachedPtr) == 0
    || (v5 = *(System_Collections_Generic_List_EventMissionEntity__o **)(m_CachedPtr + 136),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
    || (Instance = (DataManager_o *)EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, v5, 0), !v5)
    || !Instance )
  {
    sub_2213CDC(Instance, v3);
  }
  return v5->fields._size - 1 == LODWORD(Instance->fields.m_CancellationTokenSource);
}


void CompleteMissionListViewManager__endloadEffect(
        CompleteMissionListViewManager_o *this,
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
  struct EventMissionEntity_o *v14; // x8

  if ( (byte_596F1BF & 1) == 0 )
  {
    sub_2213A60(&CompleteMissionListViewManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_596F1BF = 1;
  }
  if ( data )
  {
    CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)CompleteMissionListViewManager_TypeInfo->static_fields,
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
      if ( this->fields.filterStatus )
      {
        this->fields.filterStatus = 0;
        CompleteMissionListViewManager__setList(this, v13);
      }
    }
    else
    {
      CompleteMissionListViewManager__RefrashListDisp(this, v13);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v14 = this->fields.missionToRecieve;
    if ( !v14 || !Instance )
LABEL_13:
      sub_2213CDC(Instance, v11);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v14->fields.id, 5, 0, 0);
  }
}


UnityEngine_GameObject_o *CompleteMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Object_object__58532980; // x19
  UnityEngine_GameObject_o *v9; // x19
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x20

  if ( (byte_596F1C0 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&CompleteMissionListViewManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F1C0 = 1;
  }
  effectAssetData = CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              effectAssetData,
                              name,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__58532980,
                                     (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v9 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v10 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5969AE0 )
  {
    effectAssetData = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v10 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v11 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5969AE5 )
  {
    effectAssetData = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v11 )
LABEL_15:
    sub_2213CDC(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v9;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *CompleteMissionListViewManager__get_ClippingObjectList(
        CompleteMissionListViewManager_o *this,
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
  const MethodInfo *v12; // x1
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

  if ( (byte_596F1AE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F1AE = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                 (CompleteMissionListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *CompleteMissionListViewManager__get_ObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_596F1AD & 1) == 0 )
  {
    sub_2213A60(&Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
    byte_596F1AD = 1;
  }
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                               (MissionListViewManager_o *)this,
                                                                               (const MethodInfo_38EE7FC *)Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
}


void CompleteMissionListViewManager__loadOpenMissionEffect(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_596F1BE & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_CompleteMissionListViewManager_endloadEffect__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&StringLiteral_6132/*"Effect/EventMission"*/);
    byte_596F1BE = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager_endloadEffect__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v5);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6132/*"Effect/EventMission"*/, v3, 1, 0, 0);
}


void CompleteMissionListViewManager__modifyOpenItem(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  struct CompleteMissionListViewItem_o *openTargetItem; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x21
  __int64 v11; // x1
  Il2CppClass *v12; // x0
  System_Action_o *v13; // x20
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596F1C3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CompleteMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F1C3 = 1;
  }
  openTargetItem = this->fields.openTargetItem;
  memset(&v15, 0, sizeof(v15));
  if ( openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_2213CDC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v15 = v14;
    v14.fields._list = 0;
    *(_QWORD *)&v14.fields._index = &v15;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v15,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v5 )
        break;
      current = v15.fields._current;
      if ( !v15.fields._current
        || (naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment,
            v15.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (CompleteMissionListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        sub_2213CDC(v5, v6);
      }
      klass = v15.fields._current[7].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v12 = current[7].klass;
        if ( !v12 )
          sub_2213CDC(0, v11);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v12->_1.image + 49))(
          v12,
          current,
          *((_QWORD *)v12->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, 0);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v13, 0);
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  CompleteMissionListViewManager_o *v10; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  int32_t v13; // w21
  __int64 naturalAligment; // x10
  bool v15; // w0
  _QWORD *v16; // x8
  bool v17; // w19
  int32_t v18; // w19
  System_Reflection_MethodBase_o *v19; // x0

  v10 = this;
  if ( (byte_596F1B1 & 1) == 0 )
  {
    sub_2213A60(&CompleteMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CompleteMissionListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596F1B1 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v10->fields.actionCallback,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemList = v10->fields.itemList;
  if ( !itemList )
    goto LABEL_22;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      this = (CompleteMissionListViewManager_o *)v10->fields.itemList;
      if ( !this )
        break;
      this = (CompleteMissionListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v13,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (CompleteMissionListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      this = (CompleteMissionListViewManager_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)this,
                                                   0);
      if ( !this )
        break;
      if ( LODWORD(this->fields.m_CachedPtr) == missionID )
        goto LABEL_16;
      if ( size == ++v13 )
        goto LABEL_15;
    }
LABEL_22:
    sub_2213CDC(this, *(_QWORD *)&missionID);
  }
LABEL_15:
  v13 = 0;
LABEL_16:
  v15 = ListViewManager__MoveTopItem((ListViewManager_o *)v10, v13, 1, 0.0, 0);
  v16 = Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__;
  v17 = v15;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_2213A78(Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__);
  if ( v17 )
    v18 = 0;
  else
    v18 = 2;
  v19 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, v18, 0, 0);
}


void CompleteMissionListViewManager__panelAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchBlockObj; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  Il2CppObject *Entity; // x19
  UnityEngine_GameObject_c *klass; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  __int64 v13; // x2
  CommonUI_o *v14; // x20
  CompleteMissionListViewManager___c_c *v15; // x8
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v18; // x22
  struct CompleteMissionListViewManager___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *countText; // [xsp+40h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_596F1C7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__);
    sub_2213A60(&CompleteMissionListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_26616/*"{0}×{1}"*/);
    sub_2213A60(&StringLiteral_16590/*"[^0-9]"*/);
    sub_2213A60(&StringLiteral_3852/*"COMPLETE_MISSION_ACTION_SUCCESS"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_1248/*"1"*/);
    byte_596F1C7 = 1;
  }
  touchBlockObj = this->fields.touchBlockObj;
  countText = (System_String_o *)StringLiteral_1/*""*/;
  nameText = (System_String_o *)StringLiteral_1/*""*/;
  if ( !touchBlockObj )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             missionToRecieve->fields.missionTargetId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
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
    sub_2213CE4(touchBlockObj);
  touchBlockObj = (UnityEngine_GameObject_o *)touchBlockObj[1].monitor;
  if ( !touchBlockObj )
    goto LABEL_31;
  GiftEntity__GetInfo((GiftEntity_o *)touchBlockObj, &nameText, &countText, 0);
  if ( System_String__IsNullOrEmpty(nameText, 0) )
    return;
  if ( !System_String__IsNullOrEmpty(countText, 0) )
  {
    v9 = countText;
    if ( !*(&System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, v7, v8);
    v10 = System_Text_RegularExpressions_Regex__Replace(
            v9,
            (System_String_o *)StringLiteral_16590/*"[^0-9]"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0);
    if ( System_String__op_Inequality(v10, (System_String_o *)StringLiteral_1248/*"1"*/, 0) )
      nameText = System_String__Format_75697880(
                   (System_String_o *)StringLiteral_26616/*"{0}×{1}"*/,
                   (Il2CppObject *)nameText,
                   (Il2CppObject *)countText,
                   0);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3852/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, 0);
  v12 = System_String__Format(v11, (Il2CppObject *)nameText, 0);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)touchBlockObj;
  v15 = CompleteMissionListViewManager___c_TypeInfo;
  if ( !*(&CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo, method, v13);
    v15 = CompleteMissionListViewManager___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__65_0 = static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, method, v13);
      static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__65_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__65_0, v18, Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, 0);
    v19 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v19->__9__65_0 = _9__65_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->__9__65_0, (int32_t)_9__65_0, v20, v21, v22, v23, v24, v25);
  }
  if ( !v14 )
LABEL_31:
    sub_2213CDC(touchBlockObj, method);
  CommonUI__OpenNotificationDialog(v14, 0, v12, _9__65_0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void CompleteMissionListViewManager__recieveReward(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
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
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  EventMissionEntity_o *v22; // x21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3

  if ( (byte_596F1B7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CompleteMissionListViewManager_recieveReward__);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__);
    sub_2213A60(&CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
    byte_596F1B7 = 1;
  }
  v5 = sub_2213CCC(CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = missionEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)missionEntity, v14, v15, v16, v17, v18, v19);
  MissionListViewManager__SetupGetEffectOptions(
    (MissionListViewManager_o *)this,
    *(EventMissionEntity_o **)(v5 + 24),
    0);
  v20 = Method_CompleteMissionListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_recieveReward__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_2213A78(Method_CompleteMissionListViewManager_recieveReward__);
  v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 8, 0, 0);
  v22 = *(EventMissionEntity_o **)(v5 + 24);
  v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__,
    0);
  CompleteMissionListViewManager__CehckQpMaxAlert(this, v22, v23, v24);
}


void CompleteMissionListViewManager__setAfterAction(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_596F1BD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_596F1BD = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_2213CDC(Instance, v4);
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
    sub_2213CDC(filterBtnTxt, targetFile);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  int32_t filterStatus; // w8
  struct ListViewSort_o *v19; // x8
  int v20; // w9
  bool v21; // w2
  __int64 v22; // x1
  __int64 v23; // x2
  UILabel_o *v24; // x21
  int32_t v25; // w19

  if ( (byte_596F1B6 & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9178/*"MST_MISSION_EMPTY_TXT"*/);
    sub_2213A60(&StringLiteral_18329/*"btn_txt_completed"*/);
    sub_2213A60(&StringLiteral_18363/*"btn_txt_receipt"*/);
    sub_2213A60(&StringLiteral_18362/*"btn_txt_progress"*/);
    sub_2213A60(&StringLiteral_9043/*"MISSION_EMPTY_TXT"*/);
    sub_2213A60(&StringLiteral_18311/*"btn_txt_all"*/);
    byte_596F1B6 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50855524(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.operationSortInfo,
    (int32_t)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_9043/*"MISSION_EMPTY_TXT"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_46;
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus > 1 )
  {
    if ( filterStatus == 2 )
    {
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18362/*"btn_txt_progress"*/, v17);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_46;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_46;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_46;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_46;
      v21 = 0;
    }
    else
    {
      if ( filterStatus != 3 )
        goto LABEL_42;
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18329/*"btn_txt_completed"*/, v17);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo
        || (ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 0, 0),
            (operationSortInfo = (System_String_o *)*p_operationSortInfo) == 0)
        || (ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0),
            (operationSortInfo = (System_String_o *)*p_operationSortInfo) == 0)
        || (ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0),
            (operationSortInfo = (System_String_o *)*p_operationSortInfo) == 0) )
      {
LABEL_46:
        sub_2213CDC(operationSortInfo, v16);
      }
      v21 = 1;
    }
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v21, 0);
    operationSortInfo = (System_String_o *)*p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_46;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
LABEL_39:
    v19 = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_46;
    v20 = 13;
    goto LABEL_41;
  }
  if ( !filterStatus )
  {
    CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18311/*"btn_txt_all"*/, v17);
    operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_46;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
    operationSortInfo = (System_String_o *)*p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_46;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0);
    operationSortInfo = (System_String_o *)*p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_46;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 1, 0);
    operationSortInfo = (System_String_o *)*p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_46;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 1, 0);
    operationSortInfo = (System_String_o *)*p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_46;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 1, 0);
    v24 = this->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
    operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_9178/*"MST_MISSION_EMPTY_TXT"*/, 0);
    if ( !v24 )
      goto LABEL_46;
    UILabel__set_text(v24, operationSortInfo, 0);
    goto LABEL_39;
  }
  if ( filterStatus != 1 )
    goto LABEL_42;
  CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18363/*"btn_txt_receipt"*/, v17);
  operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
  if ( !operationSortInfo )
    goto LABEL_46;
  ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
  operationSortInfo = (System_String_o *)*p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_46;
  ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0);
  operationSortInfo = (System_String_o *)*p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_46;
  ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
  operationSortInfo = (System_String_o *)*p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_46;
  ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 0, 0);
  operationSortInfo = (System_String_o *)*p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_46;
  ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
  v19 = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_46;
  v20 = 1;
LABEL_41:
  v19->fields.sortKind = v20;
LABEL_42:
  operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
  if ( !operationSortInfo )
    goto LABEL_46;
  ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  v25 = this->fields.filterStatus;
  if ( !byte_596A843 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A843 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = v25;
  EventRewardSaveData__SaveCompleteMissionData(0);
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionListViewManager__setNextMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  CompleteMissionListViewManager_o *v10; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  int32_t v13; // w21
  __int64 naturalAligment; // x10
  System_Action_o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  v10 = this;
  if ( (byte_596F1B0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CompleteMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CompleteMissionListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596F1B0 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v10->fields.actionCallback,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemList = v10->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      this = (CompleteMissionListViewManager_o *)v10->fields.itemList;
      if ( !this )
        break;
      this = (CompleteMissionListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v13,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (CompleteMissionListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      this = (CompleteMissionListViewManager_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)this,
                                                   0);
      if ( !this )
        break;
      if ( LODWORD(this->fields.m_CachedPtr) == missionID )
        goto LABEL_16;
      if ( size == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(this, *(_QWORD *)&missionID);
  }
LABEL_15:
  v13 = 0;
LABEL_16:
  v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v10, Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__, 0);
  v10->fields.callbackAfterScroll = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.callbackAfterScroll,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  ListViewManager__MoveTopItem((ListViewManager_o *)v10, v13, 1, 0.0, 0);
}


void CompleteMissionListViewManager__setOpenPanel(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo_47A29F8 *v13; // x0
  intptr_t m_CachedPtr; // x8
  UnityEngine_Object_o *v15; // x22
  struct EventMissionEntity_o *v16; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Entity; // x21
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x4
  bool PanelChildComponent_object; // w24
  bool PanelEffectChildComponent_object; // w23
  const MethodInfo *v24; // x4
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x21
  AssetLoader_LoadEndDataHandler_o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  int v31; // [xsp+8h] [xbp-58h] BYREF
  int klass_high; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *v33; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F1C4 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_CompleteMissionPanelComponent_TryGetPanelChildComponent_UISprite___);
    sub_2213A60(&Method_CompleteMissionPanelComponent_TryGetPanelChildComponent_UITexture___);
    sub_2213A60(&Method_CompleteMissionPanelComponent_TryGetPanelEffectChildComponent_UISprite___);
    sub_2213A60(&Method_CompleteMissionPanelComponent_TryGetPanelEffectChildComponent_UITexture___);
    sub_2213A60(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_2213A60(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__);
    sub_2213A60(&CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
    sub_2213A60(&StringLiteral_4809/*"CompleteMission/{0}/{1}"*/);
    byte_596F1C4 = 1;
  }
  v33 = 0;
  component = 0;
  v3 = sub_2213CCC(CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_38;
  *(_QWORD *)(v3 + 72) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 72), (int32_t)this, v6, v7, v8, v9, v10, v11);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_38;
  CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 1, 0);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_38;
  v13 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  *(_DWORD *)(v3 + 16) = missionToRecieve->fields.dispNo - 2;
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance(v13);
  if ( !touchBlockObj )
    goto LABEL_38;
  m_CachedPtr = touchBlockObj[57].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    goto LABEL_38;
  v15 = *(UnityEngine_Object_o **)(m_CachedPtr + 40);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_38;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v16 = this->fields.missionToRecieve;
  if ( !v16 || !touchBlockObj )
    goto LABEL_38;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             v16->fields.missionTargetId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v15, 0, 0);
  if ( ((unsigned __int8)touchBlockObj & 1) != 0 )
    goto LABEL_35;
  if ( !v15 )
    goto LABEL_38;
  if ( !CompleteMissionPanelComponent__TryGetPanelChildComponent_object_(
          (CompleteMissionPanelComponent_o *)v15,
          *(_DWORD *)(v3 + 16),
          this->fields.distanceToTexObj,
          (Il2CppObject **)(v3 + 24),
          (const MethodInfo_3820A40 *)Method_CompleteMissionPanelComponent_TryGetPanelChildComponent_UITexture___)
    || !CompleteMissionPanelComponent__TryGetPanelEffectChildComponent_object_(
          (CompleteMissionPanelComponent_o *)v15,
          *(_DWORD *)(v3 + 16),
          this->fields.distanceToEfPanelObj,
          this->fields.distanceToAdjustObj,
          this->fields.distanceToRowlingPanelObj,
          this->fields.distanceToTextureObj,
          (Il2CppObject **)(v3 + 32),
          (const MethodInfo_3820B38 *)Method_CompleteMissionPanelComponent_TryGetPanelEffectChildComponent_UITexture___)
    || !CompleteMissionPanelComponent__TryGetPanelChildGameObject(
          (CompleteMissionPanelComponent_o *)v15,
          *(_DWORD *)(v3 + 16),
          this->fields.distanceToTexObj,
          (UnityEngine_GameObject_o **)(v3 + 56),
          v20)
    || !CompleteMissionPanelComponent__TryGetPanelChildGameObject(
          (CompleteMissionPanelComponent_o *)v15,
          *(_DWORD *)(v3 + 16),
          this->fields.distanceToEfPanelObj,
          (UnityEngine_GameObject_o **)(v3 + 64),
          v21) )
  {
LABEL_35:
    touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( touchBlockObj )
    {
      CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 0, 0);
      touchBlockObj = this->fields.touchBlockObj;
      if ( touchBlockObj )
      {
        UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0);
        return;
      }
    }
    goto LABEL_38;
  }
  PanelChildComponent_object = CompleteMissionPanelComponent__TryGetPanelChildComponent_object_(
                                 (CompleteMissionPanelComponent_o *)v15,
                                 *(_DWORD *)(v3 + 16),
                                 this->fields.distanceToNumObj,
                                 &component,
                                 (const MethodInfo_3820A40 *)Method_CompleteMissionPanelComponent_TryGetPanelChildComponent_UISprite___);
  PanelEffectChildComponent_object = CompleteMissionPanelComponent__TryGetPanelEffectChildComponent_object_(
                                       (CompleteMissionPanelComponent_o *)v15,
                                       *(_DWORD *)(v3 + 16),
                                       this->fields.distanceToEfPanelObj,
                                       this->fields.distanceToAdjustObj,
                                       this->fields.distanceToRowlingPanelObj,
                                       this->fields.distanceToNumberObj,
                                       &v33,
                                       (const MethodInfo_3820B38 *)Method_CompleteMissionPanelComponent_TryGetPanelEffectChildComponent_UISprite___);
  touchBlockObj = (UnityEngine_GameObject_o *)CompleteMissionPanelComponent__TryGetPanelChildGameObject(
                                                (CompleteMissionPanelComponent_o *)v15,
                                                *(_DWORD *)(v3 + 16),
                                                this->fields.distanceToNumObj,
                                                (UnityEngine_GameObject_o **)(v3 + 48),
                                                v24);
  *(_BYTE *)(v3 + 40) = (unsigned __int8)touchBlockObj & 1;
  if ( PanelChildComponent_object && PanelEffectChildComponent_object )
  {
    if ( !component )
      goto LABEL_38;
    touchBlockObj = (UnityEngine_GameObject_o *)v33;
    if ( !v33 )
      goto LABEL_38;
    UISprite__set_atlas((UISprite_o *)v33, (UIAtlas_o *)component[29].klass, 0);
    if ( !component )
      goto LABEL_38;
    touchBlockObj = (UnityEngine_GameObject_o *)v33;
    if ( !v33 )
      goto LABEL_38;
    UISprite__set_spriteName((UISprite_o *)v33, (System_String_o *)component[29].monitor, 0);
  }
  if ( !Entity )
    goto LABEL_38;
  klass_high = HIDWORD(Entity[1].klass);
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &klass_high);
  v31 = *(_DWORD *)(v3 + 16);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v31);
  v27 = System_String__Format_75697880((System_String_o *)StringLiteral_4809/*"CompleteMission/{0}/{1}"*/, v25, v26, 0);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v3,
    Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29, v30);
  if ( !AssetManager__loadAssetStorage(v27, v28, 1, 0, 0) )
  {
    touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( touchBlockObj )
    {
      CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 0, 0);
      touchBlockObj = this->fields.touchBlockObj;
      if ( touchBlockObj )
      {
        UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0);
        return;
      }
    }
LABEL_38:
    sub_2213CDC(touchBlockObj, v5);
  }
}


void CompleteMissionListViewManager__setPanelAnim(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  struct EventMissionEntity_o *missionToRecieve; // x8

  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_2213CDC(this, method);
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
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  started = CompleteMissionListViewManager__StartPanelAnimCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


void CompleteMissionListViewManager__unAcceptableDlg(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_596F1B9 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_2213A60(&StringLiteral_5647/*"END_NOTICE"*/);
    byte_596F1B9 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(intptr_t, intptr_t))ShowMSG->fields.invoke_impl)(
          ShowMSG->fields.method_code,
          ShowMSG->fields.method),
        (this = (CompleteMissionListViewManager_o *)v2->fields.targetFSM) == 0) )
  {
    sub_2213CDC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5647/*"END_NOTICE"*/, 0);
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
  Il2CppObject *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  void *_8__1; // x0
  struct CompleteMissionListViewManager_o *v19; // x1
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o *v20; // x8
  _BOOL4 isCompleteMission; // w9
  __int64 v22; // x8
  Il2CppObject *Component_object; // x0
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
  Il2CppObject **p__2__current; // x19
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *Instance; // x0
  GiftEntity_array *rewards; // x20
  System_String_o *rewardDetail; // x21
  Il2CppObject *v47; // x23
  CommonUI_o *v48; // x19
  MissionRewardGetDialog_ClickDelegate_o *v49; // x22

  if ( (byte_596F1D9 & 1) == 0 )
  {
    sub_2213A60(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__);
    sub_2213A60(&CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_596F1D9 = 1;
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
    v5 = (Il2CppObject *)sub_2213CCC(CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    System_Object___ctor(v5, 0);
    this->fields.__8__1 = (struct CompleteMissionListViewManager___c__DisplayClass50_0_o *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_25;
    v19 = this->fields.__4__this;
    *((_QWORD *)_8__1 + 2) = v19;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)_8__1 + 16), (int32_t)v19, v12, v13, v14, v15, v16, v17);
    v20 = this->fields.__8__1;
    if ( !v20 )
      goto LABEL_25;
    isCompleteMission = this->fields.isCompleteMission;
    v20->fields.isCompleteMission = isCompleteMission;
    if ( !isCompleteMission )
      goto LABEL_22;
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0);
    _8__1 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !_8__1 )
      goto LABEL_25;
    v22 = *((_QWORD *)_8__1 + 173);
    if ( !v22 )
      goto LABEL_25;
    _8__1 = *(void **)(v22 + 32);
    if ( !_8__1 )
      goto LABEL_25;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)_8__1,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._anim_5__2,
      (int32_t)Component_object,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
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
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v30, v31, v32, v33, v34, v35);
      *((_DWORD *)p__2__current - 2) = 1;
      return 1;
    }
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0);
    this->fields._anim_5__2 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._anim_5__2, 0, v38, v39, v40, v41, v42, v43);
LABEL_22:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    rewards = this->fields.rewards;
    rewardDetail = this->fields.rewardDetail;
    v47 = (Il2CppObject *)this->fields.__8__1;
    v48 = (CommonUI_o *)Instance;
    v49 = (MissionRewardGetDialog_ClickDelegate_o *)sub_2213CCC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      v49,
      v47,
      Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      0);
    if ( v48 )
    {
      CommonUI__OpenMissionRewardGetDialog(v48, rewards, rewardDetail, v49, 0, 0);
      return 0;
    }
LABEL_25:
    sub_2213CDC(_8__1, method);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  intptr_t m_CachedPtr; // x8
  Il2CppObject *Component_object; // x0
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
  Il2CppObject **p__2__current; // x19

  if ( (byte_596F1DA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596F1DA = 1;
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    m_CachedPtr = Instance[57].fields.m_CachedPtr;
    if ( !m_CachedPtr )
      goto LABEL_17;
    Instance = *(UnityEngine_Component_o **)(m_CachedPtr + 32);
    if ( !Instance )
      goto LABEL_17;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         Instance,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._anim_5__2,
      (int32_t)Component_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v14, v15, v16, v17, v18, v19);
        *((_DWORD *)p__2__current - 2) = 1;
        return 1;
      }
      if ( _4__this )
      {
        CompleteMissionListViewManager__panelAfterCallback(_4__this, method);
        return 0;
      }
    }
LABEL_17:
    sub_2213CDC(Instance, method);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596F1CD & 1) == 0 )
  {
    sub_2213A60(&CompleteMissionListViewManager___c_TypeInfo);
    byte_596F1CD = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CompleteMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CompleteMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct CompleteMissionListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CompleteMissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v3; // x1

  if ( (byte_596F1D0 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596F1D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseCompleteMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v3);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0, 0);
}


void CompleteMissionListViewManager___c___checkAcceptable_b__46_0(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  CompleteMissionListViewManager___c_c *v8; // x8
  System_String_o *v9; // x20
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x9
  System_String_o *v11; // x21
  System_Action_o *_9__46_1; // x22
  Il2CppObject *v13; // x23
  struct CompleteMissionListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596F1CE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__);
    sub_2213A60(&CompleteMissionListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_9037/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F1CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v2, v3);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_9037/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0);
  v8 = CompleteMissionListViewManager___c_TypeInfo;
  v9 = v5;
  if ( !*(&CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo, v6, v7);
    v8 = CompleteMissionListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  _9__46_1 = static_fields->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__46_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__46_1, v13, Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, 0);
    v14 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v14->__9__46_1 = _9__46_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__46_1, (int32_t)_9__46_1, v15, v16, v17, v18, v19, v20);
  }
  if ( !Instance )
    sub_2213CDC(v5, v6);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v11, v9, _9__46_1, 150, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void CompleteMissionListViewManager___c___checkAcceptable_b__46_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596F1CF & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596F1CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  CompleteMissionListViewManager___c__DisplayClass45_0_o *v8; // x19
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct CompleteMissionListViewManager_o *v11; // x8

  v8 = this;
  if ( (byte_596F1D1 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)sub_2213A60(&StringLiteral_9033/*"MISSIONN_REWARD"*/);
    byte_596F1D1 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (missionEntity = v8->fields.missionEntity,
        _4__this->fields.missionToRecieve = missionEntity,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.missionToRecieve,
          (int32_t)missionEntity,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (v11 = v8->fields.__4__this) == 0)
    || (this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)v11->fields.targetFSM) == 0 )
  {
    sub_2213CDC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9033/*"MISSIONN_REWARD"*/, 0);
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

  if ( (byte_596F1D3 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596F1D3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
}


void CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__4(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_596F1D2 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596F1D2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_2213CDC(Instance, v4);
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
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  System_Text_StringBuilder_o *v7; // x20
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v8; // x8
  System_String_o *v9; // x21
  __int64 v10; // x2
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v11; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v12; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v16; // x8
  System_String_o *v17; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v18; // x8
  System_String_o *v19; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v20; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v24; // x8
  struct CompleteMissionListViewManager_o *v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v30; // x8
  struct CompleteMissionListViewManager_o *v31; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v32; // x21
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  System_String_o *v36; // x21
  long double v37; // q0
  _QWORD *v38; // x22
  __int64 v39; // x8
  __int64 v40; // x0
  __int64 v41; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v42; // x8
  struct CompleteMissionListViewManager_o *v43; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v44; // x21
  Il2CppObject *NumberFormatLong; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v46; // x8
  CompleteMissionListViewManager_o *v47; // x21
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v48; // x22
  const MethodInfo *v49; // x4
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v50; // x8
  System_Collections_IEnumerator_o *Dialog; // x1

  v2 = this;
  if ( (byte_596F1D4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_object___);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_9079/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/);
    sub_2213A60(&StringLiteral_9036/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_2213A60(&StringLiteral_9039/*"MISSION_ACTION_SUCCESS"*/);
    sub_2213A60(&StringLiteral_50/*"\n \n"*/);
    sub_2213A60(&StringLiteral_51/*"\n \n "*/);
    sub_2213A60(&StringLiteral_9080/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_2213A60(&StringLiteral_9042/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_596F1D4 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_74;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_74;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)_4__this->fields.touchBlockObj;
  if ( !this )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v5 = v2->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_74;
  ActionExtensions__Call(v5->fields.callback, 0);
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_74;
  if ( giftList->fields._size < 1 )
  {
    v11 = v2->fields.CS___8__locals1;
    if ( v11 )
    {
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v11->fields.__4__this;
      if ( this )
      {
        CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)this, method);
        v12 = v2->fields.CS___8__locals1;
        if ( v12 )
        {
          this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v12->fields.__4__this;
          if ( this )
          {
            CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)this, method);
            return;
          }
        }
      }
    }
    goto LABEL_74;
  }
  v7 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v7, 0);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_74;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v8->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_74;
  v9 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                            this,
                            this->klass->vtable._3_ToString.method);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v9, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemNum >= 2 )
    {
      if ( !v9 )
        goto LABEL_74;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__Substring_75702848(
                                                                         v9,
                                                                         0,
                                                                         v9->fields._stringLength - 2,
                                                                         0);
      if ( !v7 )
        goto LABEL_74;
      System_Text_StringBuilder__Append_75735064(v7, (System_String_o *)this, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9036/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_75735064(
                                                                         v7,
                                                                         v15,
                                                                         0);
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v10);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_9039/*"MISSION_ACTION_SUCCESS"*/,
                                                                         0);
      if ( !v7 )
        goto LABEL_74;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                         v7,
                                                                         (System_String_o *)this,
                                                                         (Il2CppObject *)v9,
                                                                         0);
    }
    v16 = v2->fields.CS___8__locals1;
    if ( !v16 )
      goto LABEL_74;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v16->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_74;
    v17 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                               this,
                               this->klass->vtable._3_ToString.method);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v17, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_75735064(
                                                                         v7,
                                                                         (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                         0);
  }
  v18 = v2->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_74;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v18->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_74;
  v19 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                             this,
                             this->klass->vtable._3_ToString.method);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v19, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v20 = v2->fields.CS___8__locals1;
    if ( !v20 )
      goto LABEL_74;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v20->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_74;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                                                                       this,
                                                                       this->klass->vtable._3_ToString.method);
    if ( !v7 )
      goto LABEL_74;
    System_Text_StringBuilder__Append_75735064(v7, (System_String_o *)this, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9042/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_75735064(
                                                                       v7,
                                                                       v23,
                                                                       0);
  }
  v24 = v2->fields.CS___8__locals1;
  if ( !v24 )
    goto LABEL_74;
  v25 = v24->fields.__4__this;
  if ( !v25 )
    goto LABEL_74;
  if ( v25->fields.isQpMaxAlert )
  {
    if ( v25->fields.isQpAlreadyMax )
    {
      if ( v2->fields.giftTypeItemNum >= 2 )
      {
        if ( !v7 )
          goto LABEL_74;
        System_Text_StringBuilder__Append_75735064(v7, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0);
      }
      else
      {
        if ( !v7 )
          goto LABEL_74;
        System_Text_StringBuilder__set_Length(v7, 0, 0);
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_9079/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                         0);
      v42 = v2->fields.CS___8__locals1;
      if ( v42 )
      {
        v43 = v42->fields.__4__this;
        if ( v43 )
        {
          v44 = this;
          NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v43->fields.overQpValue, 0);
          this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                             v7,
                                                                             (System_String_o *)v44,
                                                                             NumberFormatLong,
                                                                             0);
          goto LABEL_68;
        }
      }
LABEL_74:
      sub_2213CDC(this, method);
    }
    if ( !v7 )
      goto LABEL_74;
    System_Text_StringBuilder__Append_75735064(v7, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_9080/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                       0);
    v30 = v2->fields.CS___8__locals1;
    if ( !v30 )
      goto LABEL_74;
    v31 = v30->fields.__4__this;
    if ( !v31 )
      goto LABEL_74;
    v32 = this;
    v33 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v31->fields.overQpValue, 0);
    v36 = System_String__Format((System_String_o *)v32, v33, 0);
    v38 = Method_System_Array_Empty_object___;
    v39 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v39 )
    {
      sub_224B964(Method_System_Array_Empty_object___);
      v39 = v38[7];
    }
    v40 = *(_QWORD *)(v39 + 16);
    if ( (*(_WORD *)(v40 + 309) & 1) == 0 )
      v40 = sub_224B908(v37);
    if ( !*(_DWORD *)(v40 + 228) )
      *(__n128 *)&v37 = j_il2cpp_runtime_class_init_0(v40, v34, v35);
    v41 = *(_QWORD *)(v38[7] + 16LL);
    if ( (*(_WORD *)(v41 + 309) & 1) == 0 )
      v41 = sub_224B908(v37);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat_75741460(
                                                                       v7,
                                                                       v36,
                                                                       **(System_Object_array ***)(v41 + 184),
                                                                       0);
  }
LABEL_68:
  v46 = v2->fields.CS___8__locals1;
  if ( !v46 )
    goto LABEL_74;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v2->fields.giftList;
  if ( !this )
    goto LABEL_74;
  v47 = v46->fields.__4__this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v7 )
    goto LABEL_74;
  v48 = this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                                                                     v7,
                                                                     v7->klass->vtable._3_ToString.method);
  v50 = v2->fields.CS___8__locals1;
  if ( !v50 || !v47 )
    goto LABEL_74;
  Dialog = CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
             v47,
             (GiftEntity_array *)v48,
             (System_String_o *)this,
             v50->fields.isCompleteMission,
             v49);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v47, Dialog, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__1(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v2; // x19
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v2 = this;
  if ( (byte_596F1D5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_2213A60(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__);
    byte_596F1D5 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
LABEL_8:
    sub_2213CDC(this, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__3, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__3(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v7; // x8
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  EventRewardSetEntity_o *rwdSetEnt; // x20
  CommonUI_o *v12; // x21
  System_String_o *v13; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v14; // x22
  System_String_o *v15; // x19
  MissionRewardGetDialog_ClickDelegate_o *_9__4; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596F1D6 & 1) == 0 )
  {
    sub_2213A60(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_2213A60(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__);
    sub_2213A60(&StringLiteral_9039/*"MISSION_ACTION_SUCCESS"*/);
    byte_596F1D6 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v7 = this->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_15;
  ActionExtensions__Call(v7->fields.callback, 0);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  rwdSetEnt = this->fields.rwdSetEnt;
  v12 = (CommonUI_o *)v8;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_9039/*"MISSION_ACTION_SUCCESS"*/, 0);
  Instance = (SummonAssetManager_o *)System_String__Format(v13, (Il2CppObject *)this->fields.sendName, 0);
  v14 = this->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_15;
  v15 = (System_String_o *)Instance;
  _9__4 = v14->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (MissionRewardGetDialog_ClickDelegate_o *)sub_2213CCC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v14,
      Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__,
      0);
    v14->fields.__9__4 = _9__4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->fields.__9__4, (int32_t)_9__4, v17, v18, v19, v20, v21, v22);
  }
  if ( !v12 )
LABEL_15:
    sub_2213CDC(Instance, v4);
  CommonUI__OpenMissionRewardGetDialog_37453652(v12, rwdSetEnt, v15, _9__4, 0);
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

  if ( (byte_596F1D7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596F1D7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_2213CDC(Instance, v4);
  CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)Instance, v4);
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
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  struct UITexture_o *tex; // x8
  CommonUI_o *v10; // x20
  struct CompleteMissionListViewManager_o *_4__this; // x19
  float endEffectTime; // s8
  System_Action_o *v13; // x20
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F1D8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&Method_CompleteMissionListViewManager_animAfterCallback__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_26484/*"{0}"*/);
    byte_596F1D8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__SetLoadMode(Instance, 0, 0);
  if ( backPanel )
  {
    completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &completeMissionPanelChildIdx);
    v8 = System_String__Format((System_String_o *)StringLiteral_26484/*"{0}"*/, v7, 0);
    Instance = (CommonUI_o *)AssetData__GetObject_object__58532980(
                               backPanel,
                               v8,
                               (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
    tex = this->fields.tex;
    if ( !tex )
      goto LABEL_15;
    v10 = Instance;
    ((void (__fastcall *)(struct UITexture_o *__return_ptr, struct UITexture_o *, CommonUI_o *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
      tex,
      this->fields.tex,
      Instance,
      tex->klass->vtable._27_set_mainTexture.method);
    Instance = (CommonUI_o *)this->fields.animTex;
    if ( !Instance )
      goto LABEL_15;
    ((void (__fastcall *)(CommonUI_o *, CommonUI_o *, void *))Instance->klass[1].vtable._3_ToString.method)(
      Instance,
      v10,
      Instance->klass[2]._1.image);
  }
  if ( this->fields.hasSpriteGameObject )
  {
    Instance = (CommonUI_o *)this->fields.spriteGameObject;
    if ( !Instance )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  }
  Instance = (CommonUI_o *)this->fields.textureGameObject;
  if ( !Instance
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0),
        (Instance = (CommonUI_o *)this->fields.effectPanelGameObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0),
        (_4__this = this->fields.__4__this) == 0) )
  {
LABEL_15:
    sub_2213CDC(Instance, v6);
  }
  endEffectTime = _4__this->fields.endEffectTime;
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)_4__this, Method_CompleteMissionListViewManager_animAfterCallback__, 0);
  ListViewManager__DelayCallMethod((ListViewManager_o *)_4__this, endEffectTime, v13, 0);
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
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))decideCallback->fields.invoke_impl)(
    decideCallback->fields.method_code,
    decideCallback->fields.method);
}