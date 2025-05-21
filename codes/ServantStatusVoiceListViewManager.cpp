void __fastcall ServantStatusVoiceListViewManager___ctor(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.transformNameAddHeight = 34;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(
        ServantStatusVoiceListViewManager_o *this,
        int32_t *firstPriority,
        ServantVoiceRelationEntity_array *relationList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  VoiceInfo_array *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  signed int max_length; // w8
  VoiceMaster_o *v16; // x21
  unsigned int v17; // w9
  char v18; // w20
  ServantVoiceRelationEntity_o *v19; // x23
  __int64 v20; // x24
  __int64 v21; // x25
  VoiceInfo_array *v22; // x24
  unsigned __int64 v23; // x22
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t size; // w27
  __int64 v26; // x26
  __int64 v27; // x28
  VoiceInfo_o *v28; // x29
  int32_t v29; // w28
  int32_t v30; // w20
  ServantStatusVoiceListViewItem_o *v31; // x26
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  const MethodInfo *v38; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v39; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v40; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+28h] [xbp-78h]
  unsigned int v42; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4B426B8 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_VoiceMaster___, firstPriority);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BDB878(&ServantStatusVoiceListViewItem_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B426B8 = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_29;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v16 = (VoiceMaster_o *)Instance;
    v17 = 0;
    v18 = 1;
    ascendOrder = 0;
    v39 = (VoiceMaster_o *)Instance;
    v40 = relationList;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_30:
        sub_1BDBADC(Instance, v13, v14);
      v19 = relationList->m_Items[v17];
      v42 = v17;
      if ( !v19 )
        goto LABEL_29;
      v21 = *(_QWORD *)&v19->fields.relationSvtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v19->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v45.fields.currentCryptoKey = v21;
      *(_QWORD *)&v45.fields.fakeValue = v20;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v45, 0LL);
      if ( !v16 )
        goto LABEL_29;
      Instance = VoiceMaster__getEnableInfo(v16, svtId, (int32_t)Instance, 0, 0LL, 0, 0, 0LL);
      v22 = Instance;
      if ( (v18 & 1) == 0 && ascendOrder != v19->fields.ascendOrder )
        ++*firstPriority;
      if ( !Instance )
        goto LABEL_29;
      ascendOrder = v19->fields.ascendOrder;
      if ( (int)Instance->max_length >= 1 )
        break;
LABEL_27:
      v16 = v39;
      relationList = v40;
      v18 = 0;
      max_length = v40->max_length;
      v17 = v42 + 1;
      if ( (int)(v42 + 1) >= max_length )
        return;
    }
    v23 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v27 = *(_QWORD *)&v19->fields.relationSvtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&v19->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v46.fields.currentCryptoKey = v27;
      *(_QWORD *)&v46.fields.fakeValue = v26;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v46, 0LL);
      if ( v23 >= v22->max_length )
        goto LABEL_30;
      v28 = v22->m_Items[v23];
      v29 = (int)Instance;
      v30 = *firstPriority;
      v31 = (ServantStatusVoiceListViewItem_o *)sub_1BDBAC4(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v31, size, svtId, v29, 0, v28, v30, 0, 0, v38);
      items = itemList->fields._items;
      v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v36 = itemList->fields._size;
      if ( (unsigned int)v36 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v31,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + v36;
        itemList->fields._size = v36 + 1;
        v37[4] = (Il2CppClass *)v31;
        sub_1BDB81C((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v31, v32, v33);
      }
      if ( (__int64)++v23 >= (int)v22->max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1BDBAD4(Instance, v13);
  }
}


void __fastcall ServantStatusVoiceListViewManager__Awake(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4B426B7 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B426B7 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1BDBAD4(scrollView, method);
  }
  v4 = *((float *)scrollView + 77);
  this->fields.defaultPanelCenter = *((float *)scrollView + 75);
  this->fields.defaultPanelHeight = v4;
}


void __fastcall ServantStatusVoiceListViewManager__CreateList(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        System_Int32_array *changeSvtVoiceIdList,
        const MethodInfo *method)
{
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
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x22
  float defaultPanelCenter; // s9
  float defaultPanelHeight; // s8
  void *transformNameSprite; // x0
  const MethodInfo *v51; // x1
  _BOOL4 IsTransformServant_k__BackingField; // w19
  ServantStatusVoiceListViewManager_o *v53; // x20
  UILabel_o *transformNameLabel; // x19
  float transformNameAddHeight; // s0
  struct UIScrollView_o *scrollView; // x8
  __int64 v57; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v59; // x0
  int64_t userIdNumber; // x19
  Il2CppObject *v61; // x22
  Il2CppObject *v62; // x19
  System_Collections_Generic_List_T__o *v63; // x20
  __int64 v64; // x2
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  System_Int32_array *v68; // x9
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  Il2CppObject *MasterData_object; // x19
  int32_t maxLimitCount; // w20
  ServantVoiceRelationEntity_array *v73; // x19
  int32_t v74; // w0
  const MethodInfo *v75; // x4
  ServantVoiceRelationEntity_array *v76; // x19
  int32_t v77; // w0
  const MethodInfo *v78; // x4
  System_Int32_array *v79; // x9
  __int64 v80; // x8
  unsigned __int64 v81; // x10
  int32_t v82; // w19
  VoiceInfo_array *EnableInfo; // x19
  int max_length; // w8
  unsigned int v85; // w22
  Il2CppClass **v86; // x26
  Il2CppClass *v87; // x8
  VoiceInfo_o **v88; // x26
  Il2CppClass *v89; // t1
  char *name; // x23
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x4
  int v93; // w19
  BalanceConfig_c *v94; // x8
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  int v99; // w8
  const MethodInfo *v100; // x3
  _BOOL8 v101; // x0
  const MethodInfo *v102; // x1
  Il2CppObject *current; // x28
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  __int64 v106; // x0
  __int64 v107; // x2
  int32_t v108; // w5
  const MethodInfo *v109; // x6
  int32_t v110; // w1
  bool voiceLabelSpec; // w21
  _BOOL8 v112; // x0
  const MethodInfo *v113; // x1
  __int64 v114; // x10
  Il2CppClass *v115; // x8
  __int64 v116; // x0
  __int64 v117; // x1
  __int64 v118; // x2
  struct VoiceEntity_o *voiceEntity; // x8
  int32_t v120; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  __int64 v122; // x1
  System_String_o *v123; // x2
  struct VoiceEntity_o *v124; // x8
  int32_t v125; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v126; // x19
  System_String_o *v127; // x2
  int v128; // w8
  System_Collections_Generic_List_object__o *v129; // x23
  bool v130; // w27
  bool v131; // w24
  char v132; // w20
  int32_t v133; // w25
  VoiceInfo_o *v134; // x28
  int32_t v135; // w29
  int32_t v136; // w19
  bool v137; // w26
  ServantStatusVoiceListViewItem_o *v138; // x20
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  __int64 v145; // x0
  __int64 v146; // x2
  int32_t v147; // w22
  int32_t v148; // w21
  int32_t v149; // w19
  BalanceConfig_c *v150; // x8
  __int64 v151; // x1
  Il2CppObject *v152; // x20
  NetworkManager_c *v153; // x0
  int64_t v154; // x19
  UserServantCollectionEntity_o *v155; // x23
  _BOOL8 v156; // x0
  __int64 v157; // x1
  int32_t v158; // w20
  BalanceConfig_c *v159; // x0
  VoiceInfo_array *v160; // x0
  __int64 v161; // x1
  VoiceInfo_array *v162; // x23
  unsigned __int64 v163; // x26
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t v165; // w28
  __int64 v166; // x1
  __int64 v167; // x2
  int32_t v168; // w20
  BalanceConfig_c *v169; // x0
  VoiceInfo_o *v170; // x24
  int32_t ServantIdHyde; // w19
  ServantStatusVoiceListViewItem_o *v172; // x25
  __int64 v173; // x0
  __int64 v174; // x1
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  Il2CppClass **v180; // x0
  int v181; // w19
  BalanceConfig_c *v182; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t v184; // w19
  BalanceConfig_c *v185; // x8
  int32_t v186; // w29
  _QWORD *v187; // x23
  unsigned __int64 v188; // x21
  System_Collections_Generic_List_object__o *v189; // x27
  int32_t v190; // w25
  int32_t v191; // w28
  VoiceInfo_o *v192; // x19
  int32_t ServantIdMashu2; // w24
  ServantStatusVoiceListViewItem_o *v194; // x20
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  struct System_Object_array *v197; // x8
  _QWORD *v198; // x9
  __int64 v199; // x10
  Il2CppClass **v200; // x0
  NetworkManager_c *v201; // x0
  BalanceConfig_c *v202; // x8
  int64_t v203; // x20
  struct BalanceConfig_StaticFields *v204; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  int32_t v208; // w19
  int32_t v209; // w26
  BalanceConfig_c *v210; // x8
  _QWORD *v211; // x23
  unsigned __int64 v212; // x21
  System_Collections_Generic_List_object__o *v213; // x27
  int32_t v214; // w25
  int32_t v215; // w28
  VoiceInfo_o *v216; // x19
  int32_t ServantIdMashu3; // w24
  ServantStatusVoiceListViewItem_o *v218; // x20
  int32_t v219; // w2
  const MethodInfo *v220; // x3
  struct System_Object_array *v221; // x8
  _QWORD *v222; // x9
  __int64 v223; // x10
  Il2CppClass **v224; // x0
  ServantVoiceRelationEntity_array *v225; // x19
  int32_t v226; // w0
  const MethodInfo *v227; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v228; // x8
  int32_t v229; // w25
  __int64 v230; // x20
  int32_t i; // w21
  ServantStatusVoiceListViewItem_o *v232; // x22
  __int64 v233; // x10
  const MethodInfo *v234; // x2
  int v235; // w8
  int32_t v236; // w23
  Il2CppObject *v237; // x24
  __int64 v238; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v240; // x1
  System_String_o *v241; // x0
  const MethodInfo *v242; // x3
  __int64 v243; // x8
  _QWORD *v244; // x9
  __int64 v245; // x10
  __int64 v246; // x0
  int32_t v247; // w22
  _BOOL8 v248; // x0
  __int64 v249; // x1
  const MethodInfo *v250; // x2
  __int64 v251; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x19
  const MethodInfo *v254; // [xsp+8h] [xbp-198h]
  System_String_o *v255; // [xsp+20h] [xbp-180h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+28h] [xbp-178h]
  ServantLimitAddMaster_o *v258; // [xsp+38h] [xbp-168h]
  unsigned __int64 v259; // [xsp+40h] [xbp-160h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+48h] [xbp-158h]
  System_Int32_array *VoiceLimitCountList; // [xsp+50h] [xbp-150h]
  VoiceMaster_o *v262; // [xsp+58h] [xbp-148h]
  unsigned __int64 v263; // [xsp+60h] [xbp-140h]
  System_Collections_Generic_List_object__o *v264; // [xsp+68h] [xbp-138h]
  VoicePlayCondMaster_o *v265; // [xsp+70h] [xbp-130h]
  int32_t svtId; // [xsp+80h] [xbp-120h]
  int limitCount; // [xsp+84h] [xbp-11Ch]
  VoiceInfo_array *v270; // [xsp+90h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v271; // [xsp+98h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+B0h] [xbp-F0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+C8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v274; // [xsp+D0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v275; // [xsp+F0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+110h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+118h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+120h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+12Ch] [xbp-74h] BYREF
  UnityEngine_Vector4_o v280; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B426B9 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, mainInfo);
    sub_1BDB878(&CondType_TypeInfo, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_VoiceMaster___, v10);
    sub_1BDB878(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v11);
    sub_1BDB878(&DataManager_TypeInfo, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__get_Current__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v22);
    sub_1BDB878(&Method_System_Collections_Generic_List_VoiceEntity__Add__, v23);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v24);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__, v25);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__, v26);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__, v27);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v28);
    sub_1BDB878(&Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__, v29);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__, v30);
    sub_1BDB878(&Method_System_Collections_Generic_List_VoiceEntity___ctor__, v31);
    sub_1BDB878(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v32);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__, v33);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v34);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v35);
    sub_1BDB878(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v36);
    sub_1BDB878(&System_Collections_Generic_List_VoiceEntity__TypeInfo, v37);
    sub_1BDB878(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v38);
    sub_1BDB878(&LocalizationManager_TypeInfo, v39);
    sub_1BDB878(&NetworkManager_TypeInfo, v40);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v41);
    sub_1BDB878(&ServantStatusVoiceListViewItem_TypeInfo, v42);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1BDB878(&TutorialFlag_TypeInfo, v44);
    sub_1BDB878(&StringLiteral_15216/*"VOICE_EMPTY_MESSAGE"*/, v45);
    sub_1BDB878(&StringLiteral_11969/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, v46);
    byte_4B426B9 = 1;
  }
  v47 = StringLiteral_15216/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v275, 0, sizeof(v275));
  memset(&v274, 0, sizeof(v274));
  entity = 0LL;
  memset(&j, 0, sizeof(j));
  defaultPanelCenter = this->fields.defaultPanelCenter;
  defaultPanelHeight = this->fields.defaultPanelHeight;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !mainInfo )
    goto LABEL_267;
  transformNameSprite = this->fields.transformNameSprite;
  if ( !transformNameSprite )
    goto LABEL_267;
  IsTransformServant_k__BackingField = mainInfo->fields._IsTransformServant_k__BackingField;
  transformNameSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transformNameSprite, 0LL);
  if ( !transformNameSprite )
    goto LABEL_267;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 1, 0LL);
    v53 = this;
    transformNameLabel = this->fields.transformNameLabel;
    transformNameSprite = ServantStatusListViewItem__GetTransformName(mainInfo, 0LL);
    if ( !transformNameLabel )
      goto LABEL_267;
    UILabel__set_text(transformNameLabel, (System_String_o *)transformNameSprite, 0LL);
    transformNameAddHeight = (float)this->fields.transformNameAddHeight;
    defaultPanelCenter = defaultPanelCenter + (float)(transformNameAddHeight * -0.5);
    defaultPanelHeight = defaultPanelHeight - transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 0, 0LL);
    v53 = this;
  }
  scrollView = v53->fields.scrollView;
  if ( !scrollView )
    goto LABEL_267;
  transformNameSprite = scrollView->fields.mPanel;
  if ( !transformNameSprite )
    goto LABEL_267;
  v280.fields.x = *((float *)transformNameSprite + 74);
  v280.fields.z = *((float *)transformNameSprite + 76);
  v280.fields.y = defaultPanelCenter;
  v280.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v280, 0LL);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_267;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v57);
    byte_4B3ED56 = 1;
  }
  v59 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v59 = NetworkManager_TypeInfo;
  }
  v255 = (System_String_o *)v47;
  userIdNumber = v59->static_fields->userIdNumber;
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !Master_object )
    goto LABEL_267;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       userIdNumber,
                       (int32_t)transformNameSprite,
                       0LL);
  v61 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_VoiceMaster___);
  v265 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v62 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v63 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v63,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v63 )
    goto LABEL_267;
  items = v63->fields._items;
  v66 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v63->fields._version;
  if ( !items )
    goto LABEL_267;
  size = v63->fields._size;
  disableCondTypeList = (System_Collections_Generic_List_CondType_Kind__o *)v63;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      81,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
  }
  else
  {
    v63->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v68 = changeSvtVoiceIdList;
  v258 = (ServantLimitAddMaster_o *)v62;
  if ( !changeSvtVoiceIdList )
LABEL_267:
    sub_1BDBAD4(transformNameSprite, v51);
  v69 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  if ( (int)v69 >= 1 )
  {
    v70 = 0LL;
    v262 = (VoiceMaster_o *)v61;
    while ( 1 )
    {
      if ( v70 >= (unsigned int)v69 )
        goto LABEL_268;
      v259 = v70;
      svtId = v68->m_Items[v70 + 1];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_267;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      transformNameSprite = EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_267;
      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
      transformNameSprite = UserServantCollectionEntity__getCostumeList(EntityDefinitely, 0LL);
      if ( !MasterData_object )
        goto LABEL_267;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              (ServantLimitAddMaster_o *)MasterData_object,
                              svtId,
                              maxLimitCount,
                              (System_Int32_array *)transformNameSprite,
                              0LL);
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_267;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_267;
      ServantVoiceRelationMaster__GetRelationList_41767052(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0LL);
      v73 = beforeRelationList;
      v74 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v73, v74, v75);
      v76 = sameRelationList;
      ++firstPriority;
      v77 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v76, v77, v78);
      v79 = VoiceLimitCountList;
      if ( !VoiceLimitCountList )
        goto LABEL_267;
      v80 = *(_QWORD *)&VoiceLimitCountList->max_length;
      if ( (int)v80 >= 1 )
        break;
LABEL_227:
      v225 = afterRelationList;
      v226 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v225, v226, v227);
      v68 = changeSvtVoiceIdList;
      LODWORD(v69) = changeSvtVoiceIdList->max_length;
      v70 = v259 + 1;
      if ( (__int64)(v259 + 1) >= (int)v69 )
        goto LABEL_228;
    }
    v81 = 0LL;
    while ( 1 )
    {
      if ( v81 >= (unsigned int)v80 )
        goto LABEL_268;
      v82 = v79->m_Items[v81 + 1];
      v263 = v81;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( !v61 )
        goto LABEL_267;
      limitCount = v82;
      EnableInfo = VoiceMaster__getEnableInfo(
                     (VoiceMaster_o *)v61,
                     (int32_t)transformNameSprite,
                     svtId,
                     v82,
                     disableCondTypeList,
                     0,
                     0,
                     0LL);
      v264 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_VoiceEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v264,
        (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_VoiceEntity___ctor__);
      if ( !EnableInfo )
        goto LABEL_267;
      max_length = EnableInfo->max_length;
      v270 = EnableInfo;
      if ( max_length >= 1 )
        break;
LABEL_128:
      v147 = firstPriority;
      v148 = ++firstPriority;
      v149 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v150 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v150 = BalanceConfig_TypeInfo;
      }
      if ( v149 == v150->static_fields->ServantIdJekyll )
      {
        transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transformNameSprite )
          goto LABEL_267;
        v152 = DataManager__GetMasterData_object_(
                 (DataManager_o *)transformNameSprite,
                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B3ED56 )
        {
          sub_1BDB878(&NetworkManager_TypeInfo, v151);
          byte_4B3ED56 = 1;
        }
        v153 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v153 = NetworkManager_TypeInfo;
        }
        v154 = v153->static_fields->userIdNumber;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        if ( !v152 )
          goto LABEL_267;
        v155 = UserServantCollectionMaster__GetEntityDefinitely(
                 (UserServantCollectionMaster_o *)v152,
                 v154,
                 (int32_t)transformNameSprite,
                 0LL);
        transformNameSprite = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v264, 0LL);
        if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        {
          if ( !v264 )
            goto LABEL_267;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v271,
            v264,
            (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
          v274 = v271;
          while ( 1 )
          {
            v156 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v274,
                     (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
            if ( !v156 )
              break;
            if ( !v274.fields._current )
              sub_1BDBAD4(v156, v157);
            if ( !v155 )
              sub_1BDBAD4(v156, v157);
            if ( UserServantCollectionEntity__IsPlayed(v155, HIDWORD(v274.fields._current[3].klass), 0LL) )
            {
              v158 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v159 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v159 = BalanceConfig_TypeInfo;
              }
              v160 = VoiceMaster__getEnableInfo(
                       v262,
                       v158,
                       v159->static_fields->ServantIdHyde,
                       limitCount,
                       0LL,
                       0,
                       0,
                       0LL);
              v162 = v160;
              if ( !v160 )
                sub_1BDBAD4(0LL, v161);
              if ( (int)v160->max_length >= 1 )
              {
                v163 = 0LL;
                do
                {
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !itemList )
                    sub_1BDBAD4(v160, v161);
                  v165 = itemList->fields._size;
                  v168 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v169 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v169 = BalanceConfig_TypeInfo;
                  }
                  if ( v163 >= v162->max_length )
                    sub_1BDBADC(v169, v166, v167);
                  v170 = v162->m_Items[v163];
                  ServantIdHyde = v169->static_fields->ServantIdHyde;
                  v172 = (ServantStatusVoiceListViewItem_o *)sub_1BDBAC4(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v172,
                    v165,
                    v168,
                    ServantIdHyde,
                    limitCount,
                    v170,
                    v148,
                    0,
                    0,
                    v254);
                  v177 = itemList->fields._items;
                  v178 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v177 )
                    sub_1BDBAD4(v173, v174);
                  v179 = itemList->fields._size;
                  if ( (unsigned int)v179 >= v177->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v172,
                      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v180 = &v177->obj.klass + v179;
                    itemList->fields._size = v179 + 1;
                    v180[4] = (Il2CppClass *)v172;
                    sub_1BDB81C((CGThumbnailListItem_o *)(v180 + 4), (int32_t)v172, v175, v176);
                  }
                  ++v163;
                }
                while ( (__int64)v163 < (int)v162->max_length );
              }
              firstPriority = v147 + 2;
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v274,
            (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
        }
      }
      else
      {
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        v181 = (int)transformNameSprite;
        v182 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v182 = BalanceConfig_TypeInfo;
        }
        static_fields = v182->static_fields;
        if ( v181 == static_fields->ServantIdMashu1 )
        {
          if ( !v182->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v182);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          if ( limitCount != static_fields->SpecialLimitCountPLD )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_39449392(115, 0LL) )
            {
              v184 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v185 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v185 = BalanceConfig_TypeInfo;
              }
              v186 = v148;
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      v262,
                                      v184,
                                      v185->static_fields->ServantIdMashu2,
                                      limitCount,
                                      0LL,
                                      0,
                                      0,
                                      0LL);
              if ( !transformNameSprite )
                goto LABEL_267;
              v187 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v188 = 0LL;
                while ( 1 )
                {
                  v189 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v189 )
                    goto LABEL_267;
                  v190 = v189->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v191 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v188 >= *((unsigned int *)v187 + 6) )
                    break;
                  v192 = (VoiceInfo_o *)v187[v188 + 4];
                  ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
                  v194 = (ServantStatusVoiceListViewItem_o *)sub_1BDBAC4(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v194,
                    v190,
                    v191,
                    ServantIdMashu2,
                    limitCount,
                    v192,
                    v186,
                    0,
                    0,
                    v254);
                  v197 = v189->fields._items;
                  v198 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v189->fields._version;
                  if ( !v197 )
                    goto LABEL_267;
                  v199 = v189->fields._size;
                  if ( (unsigned int)v199 >= v197->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v189,
                      (Il2CppObject *)v194,
                      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v200 = &v197->obj.klass + v199;
                    v189->fields._size = v199 + 1;
                    v200[4] = (Il2CppClass *)v194;
                    sub_1BDB81C((CGThumbnailListItem_o *)(v200 + 4), (int32_t)v194, v195, v196);
                  }
                  if ( (__int64)++v188 >= *((int *)v187 + 6) )
                    goto LABEL_191;
                }
LABEL_268:
                sub_1BDBADC(transformNameSprite, v51, v64);
              }
LABEL_191:
              v148 = v147 + 2;
              firstPriority = v147 + 2;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B3ED56 )
            {
              sub_1BDB878(&NetworkManager_TypeInfo, v51);
              byte_4B3ED56 = 1;
            }
            v201 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v201 = NetworkManager_TypeInfo;
            }
            v202 = BalanceConfig_TypeInfo;
            v203 = v201->static_fields->userIdNumber;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v202 = BalanceConfig_TypeInfo;
            }
            v204 = v202->static_fields;
            MashuTdGradeUpQuestId = v204->MashuTdGradeUpQuestId;
            MashuTdGradeUpQuestPhase = v204->MashuTdGradeUpQuestPhase;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                            v203,
                                            MashuTdGradeUpQuestId,
                                            MashuTdGradeUpQuestPhase,
                                            -1,
                                            0,
                                            0LL);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
            {
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              transformNameSprite = v258;
              if ( !v258 )
                goto LABEL_267;
              transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                              v258,
                                              &entity,
                                              BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                              limitCount,
                                              0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_267;
                svtVoiceId = entity->fields.svtVoiceId;
                transformNameSprite = BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  transformNameSprite = BalanceConfig_TypeInfo;
                }
                if ( svtVoiceId != *(_DWORD *)(*((_QWORD *)transformNameSprite + 23) + 376LL) )
                {
                  v208 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v209 = v148;
                  v210 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v210 = BalanceConfig_TypeInfo;
                  }
                  transformNameSprite = VoiceMaster__getEnableInfo(
                                          v262,
                                          v208,
                                          v210->static_fields->ServantIdMashu3,
                                          limitCount,
                                          0LL,
                                          0,
                                          0,
                                          0LL);
                  if ( !transformNameSprite )
                    goto LABEL_267;
                  v211 = transformNameSprite;
                  if ( *((int *)transformNameSprite + 6) >= 1 )
                  {
                    v212 = 0LL;
                    do
                    {
                      v213 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      if ( !v213 )
                        goto LABEL_267;
                      v214 = v213->fields._size;
                      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                      v215 = (int)transformNameSprite;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( v212 >= *((unsigned int *)v211 + 6) )
                        goto LABEL_268;
                      v216 = (VoiceInfo_o *)v211[v212 + 4];
                      ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                      v218 = (ServantStatusVoiceListViewItem_o *)sub_1BDBAC4(ServantStatusVoiceListViewItem_TypeInfo);
                      ServantStatusVoiceListViewItem___ctor(
                        v218,
                        v214,
                        v215,
                        ServantIdMashu3,
                        limitCount,
                        v216,
                        v209,
                        0,
                        0,
                        v254);
                      v221 = v213->fields._items;
                      v222 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v213->fields._version;
                      if ( !v221 )
                        goto LABEL_267;
                      v223 = v213->fields._size;
                      if ( (unsigned int)v223 >= v221->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v213,
                          (Il2CppObject *)v218,
                          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v224 = &v221->obj.klass + v223;
                        v213->fields._size = v223 + 1;
                        v224[4] = (Il2CppClass *)v218;
                        sub_1BDB81C((CGThumbnailListItem_o *)(v224 + 4), (int32_t)v218, v219, v220);
                      }
                    }
                    while ( (__int64)++v212 < *((int *)v211 + 6) );
                  }
                  firstPriority = v209 + 1;
                }
              }
            }
          }
        }
      }
      v79 = VoiceLimitCountList;
      v61 = (Il2CppObject *)v262;
      LODWORD(v80) = VoiceLimitCountList->max_length;
      v81 = v263 + 1;
      if ( (__int64)(v263 + 1) >= (int)v80 )
        goto LABEL_227;
    }
    v85 = 0;
    while ( 1 )
    {
      if ( v85 >= max_length )
        goto LABEL_268;
      v86 = &v270->obj.klass + (int)v85;
      v89 = v86[4];
      v88 = (VoiceInfo_o **)(v86 + 4);
      v87 = v89;
      if ( !v89 )
        goto LABEL_267;
      name = (char *)v87->_1.name;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v93 = (int)transformNameSprite;
      v94 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v94 = BalanceConfig_TypeInfo;
      }
      if ( v93 == v94->static_fields->ServantIdJekyll )
      {
        if ( !name )
          goto LABEL_267;
        if ( *((_DWORD *)name + 7) == 7 )
        {
          if ( !v264 )
            goto LABEL_267;
          v95 = v264->fields._items;
          v96 = Method_System_Collections_Generic_List_VoiceEntity__Add__;
          ++v264->fields._version;
          if ( !v95 )
            goto LABEL_267;
          v97 = v264->fields._size;
          if ( (unsigned int)v97 >= v95->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v264,
              (Il2CppObject *)name,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
          }
          else
          {
            v98 = &v95->obj.klass + v97;
            v264->fields._size = v97 + 1;
            v98[4] = (Il2CppClass *)name;
            sub_1BDB81C((CGThumbnailListItem_o *)(v98 + 4), (int32_t)name, v64, v91);
          }
        }
      }
      if ( limitCount <= 10 )
      {
        if ( !name )
          goto LABEL_267;
        if ( *((_DWORD *)name + 7) == 2 )
        {
          v99 = *((_DWORD *)name + 12);
          if ( v99 == 7 )
          {
            if ( *((_DWORD *)name + 13) != 2 )
            {
              if ( v85 >= v270->max_length )
                goto LABEL_268;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              limitCount,
                                              *v88,
                                              v92);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
              {
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_267;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v271,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v275 = v271;
                do
                {
                  v101 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &v275,
                           (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v101 )
                    goto LABEL_102;
                  current = v275.fields._current;
                  if ( !v275.fields._current
                    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                        LOBYTE(v275.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                    || (ServantStatusVoiceListViewItem_c *)v275.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1BDBAD4(v101, v102);
                  }
                  klass = v275.fields._current[10].klass;
                  if ( !klass )
                    sub_1BDBAD4(v101, v102);
                }
                while ( HIDWORD(klass->_1.namespaze) != 2
                     || LODWORD(klass->_1.this_arg.data) != 7
                     || HIDWORD(klass->_1.this_arg.data) != *((_DWORD *)name + 13)
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v275.fields._current,
                          v102) != svtId );
                v106 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                v110 = v106;
                if ( v85 >= v270->max_length )
                  sub_1BDBADC(v106, (unsigned int)v106, v107);
                goto LABEL_120;
              }
LABEL_82:
              if ( v85 >= v270->max_length )
                goto LABEL_268;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              *v88,
                                              v100);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                goto LABEL_117;
              voiceLabelSpec = 1;
              goto LABEL_104;
            }
          }
          else if ( v99 == 18 )
          {
            if ( v85 >= v270->max_length )
              goto LABEL_268;
            transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                            (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                            svtId,
                                            limitCount,
                                            *v88,
                                            v92);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              goto LABEL_82;
            transformNameSprite = this->fields.itemList;
            if ( !transformNameSprite )
              goto LABEL_267;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v271,
              (System_Collections_Generic_List_object__o *)transformNameSprite,
              (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v275 = v271;
            do
            {
              v112 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v275,
                       (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v112 )
                goto LABEL_102;
              current = v275.fields._current;
              if ( !v275.fields._current
                || (v114 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v275.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v114)
                || (ServantStatusVoiceListViewItem_c *)v275.fields._current->klass->_2.typeHierarchy[v114 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_1BDBAD4(v112, v113);
              }
              v115 = v275.fields._current[10].klass;
              if ( !v115 )
                sub_1BDBAD4(v112, v113);
            }
            while ( HIDWORD(v115->_1.namespaze) != 2
                 || LODWORD(v115->_1.this_arg.data) != 18
                 || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                      (ServantStatusVoiceListViewItem_o *)v275.fields._current,
                      v113) != svtId );
            v116 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
            if ( v85 >= v270->max_length )
              sub_1BDBADC(v116, v117, v118);
            if ( !*v88 )
              sub_1BDBAD4(v116, v117);
            voiceEntity = (*v88)->fields.voiceEntity;
            if ( !voiceEntity )
              sub_1BDBAD4(v116, v117);
            v120 = v116;
            id = voiceEntity->fields.id;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48263560(id, 0LL);
            if ( !v265 )
              sub_1BDBAD4(0LL, v122);
            if ( !VoicePlayCondMaster__isVoiceCond(v265, v120, v123, 81, 0LL) )
            {
              v145 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v110 = v145;
              if ( v85 >= v270->max_length )
                sub_1BDBADC(v145, (unsigned int)v145, v146);
LABEL_120:
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v110,
                svtId,
                limitCount,
                *v88,
                v108,
                v109);
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v275,
                (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              goto LABEL_117;
            }
LABEL_102:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v275,
              (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
      }
      voiceLabelSpec = 0;
LABEL_104:
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( v85 >= v270->max_length )
        goto LABEL_268;
      if ( !*v88 )
        goto LABEL_267;
      v124 = (*v88)->fields.voiceEntity;
      if ( !v124 )
        goto LABEL_267;
      v125 = (int)transformNameSprite;
      v126 = v124->fields.id;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48263560(v126, 0LL);
      transformNameSprite = v265;
      if ( !v265 )
        goto LABEL_267;
      transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v265, v125, v127, 81, 0LL);
      if ( !name )
        goto LABEL_267;
      v128 = *((_DWORD *)name + 12);
      v129 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v130 = v128 == 18;
      v131 = v128 == 7;
      if ( !v129 )
        goto LABEL_267;
      v132 = (char)transformNameSprite;
      v133 = v129->fields._size;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( v85 >= v270->max_length )
        goto LABEL_268;
      v134 = *v88;
      v135 = firstPriority;
      v136 = (int)transformNameSprite;
      v137 = v132 & (v130 || v131);
      v138 = (ServantStatusVoiceListViewItem_o *)sub_1BDBAC4(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v138, v133, v136, svtId, limitCount, v134, v135, v137, voiceLabelSpec, v254);
      v141 = v129->fields._items;
      v142 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v129->fields._version;
      if ( !v141 )
        goto LABEL_267;
      v143 = v129->fields._size;
      if ( (unsigned int)v143 >= v141->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v129,
          (Il2CppObject *)v138,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
      }
      else
      {
        v144 = &v141->obj.klass + v143;
        v129->fields._size = v143 + 1;
        v144[4] = (Il2CppClass *)v138;
        sub_1BDB81C((CGThumbnailListItem_o *)(v144 + 4), (int32_t)v138, v139, v140);
      }
LABEL_117:
      ++v85;
      max_length = v270->max_length;
      if ( (int)v85 >= max_length )
        goto LABEL_128;
    }
  }
LABEL_228:
  v228 = this->fields.itemList;
  if ( !v228 )
    goto LABEL_267;
  v229 = v228->fields._size;
  v230 = sub_1BDBAC4(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v230,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v229 - 1 >= 1 )
  {
    for ( i = 0; i != v229 - 1; ++i )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_267;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              i,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_267;
      v232 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v233 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v233
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v233 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_267;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v51) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v232, v51);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v230 )
            goto LABEL_267;
          v234 = (const MethodInfo *)*(unsigned int *)(v230 + 24);
          v235 = *(_DWORD *)(v230 + 28) + 1;
          *(_DWORD *)(v230 + 24) = 0;
          *(_DWORD *)(v230 + 28) = v235;
          if ( (int)v234 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v230 + 16), 0, (int32_t)v234, 0LL);
          v236 = i + 1;
          if ( i + 1 < v229 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_267;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v236,
                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_267;
              v237 = (Il2CppObject *)transformNameSprite;
              v238 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v238
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v238
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_267;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v51);
              v241 = ServantStatusVoiceListViewItem__get_OpenName(v232, v240);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v241, 0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v243 = *(_QWORD *)(v230 + 16);
                v244 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v230 + 28);
                if ( !v243 )
                  goto LABEL_267;
                v245 = *(int *)(v230 + 24);
                if ( (unsigned int)v245 >= *(_DWORD *)(v243 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v230,
                    v237,
                    *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v244[4] + 192LL) + 112LL));
                }
                else
                {
                  v246 = v243 + 8 * v245;
                  *(_DWORD *)(v230 + 24) = v245 + 1;
                  *(_QWORD *)(v246 + 32) = v237;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v246 + 32), (int32_t)v237, (int32_t)v234, v242);
                }
              }
            }
            while ( v229 != ++v236 );
          }
          if ( *(int *)(v230 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v232, 1, v234);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v271,
              (System_Collections_Generic_List_object__o *)v230,
              (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v247 = 2;
            for ( j = v271;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)j.fields._current,
                    v247++,
                    v250) )
            {
              v248 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &j,
                       (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v248 )
                break;
              if ( j.fields._current )
              {
                v251 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(j.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v251
                  && (ServantStatusVoiceListViewItem_c *)j.fields._current->klass->_2.typeHierarchy[v251 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1BDBAD4(v248, v249);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &j,
              (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11969/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_267;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v255, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_267;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)transformNameSprite, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
}


void __fastcall ServantStatusVoiceListViewManager__DestroyList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantStatusVoiceListViewItem_o *__fastcall ServantStatusVoiceListViewManager__GetItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusVoiceListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B426BC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BDB878(&ServantStatusVoiceListViewItem_TypeInfo, v5);
    byte_4B426BC = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ServantStatusVoiceListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct VoiceEntity_o *voiceEntity; // x8
  __int64 svtVoiceType; // x8
  __int64 v15; // x20
  struct VoiceEntity_o *v16; // x8
  System_String_o *v17; // x19
  System_String_o *v18; // x0
  __int64 v19; // x20
  int v20; // w8
  System_String_o *v21; // x19
  unsigned int v22; // w21
  __int64 v23; // x22
  __int64 v24; // x8
  __int64 v25; // x8

  if ( (byte_4B426BA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BDB878(&StringLiteral_16088/*"_"*/, v9);
    byte_4B426BA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_41759660(
                                (ServantVoiceMaster_o *)Instance,
                                svtId,
                                limitCount,
                                0LL);
  if ( !voiceInfo )
    goto LABEL_25;
  voiceEntity = voiceInfo->fields.voiceEntity;
  if ( !voiceEntity || !Instance )
    goto LABEL_25;
  svtVoiceType = voiceEntity->fields.svtVoiceType;
  if ( (unsigned int)svtVoiceType >= LODWORD(Instance->fields.m_CancellationTokenSource) )
LABEL_26:
    sub_1BDBADC(Instance, v11, v12);
  v15 = *((_QWORD *)&Instance->fields._DispLog + svtVoiceType);
  if ( !v15 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0LL);
  v16 = voiceInfo->fields.voiceEntity;
  if ( !v16
    || (v17 = (System_String_o *)Instance, (Instance = (DataManager_o *)v16->fields.id) == 0LL)
    || (v18 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass[1]._1.image),
        Instance = (DataManager_o *)System_String__Concat_62610508(
                                      v17,
                                      (System_String_o *)StringLiteral_16088/*"_"*/,
                                      v18,
                                      0LL),
        (v19 = *(_QWORD *)(v15 + 32)) == 0) )
  {
LABEL_25:
    sub_1BDBAD4(Instance, v11);
  }
  v20 = *(_DWORD *)(v19 + 24);
  if ( v20 < 1 )
    return 0;
  v21 = (System_String_o *)Instance;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 >= v20 )
      goto LABEL_26;
    v23 = *(_QWORD *)(v19 + 8LL * (int)v22 + 32);
    if ( !v23 )
      goto LABEL_25;
    v24 = *(_QWORD *)(v23 + 64);
    if ( !v24 )
      goto LABEL_25;
    if ( !*(_DWORD *)(v24 + 24) )
      goto LABEL_26;
    v25 = *(_QWORD *)(v24 + 32);
    if ( !v25 )
      goto LABEL_25;
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v25 + 16), v21, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( *(_DWORD *)(v23 + 80) )
        return 1;
    }
    v20 = *(_DWORD *)(v19 + 24);
    if ( (int)++v22 >= v20 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v12; // x2
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  DataManager_o *v15; // x19
  unsigned int v16; // w23
  bool v17; // w25
  ServantVoiceCond_o *v18; // x8
  int32_t condType; // w9
  int value; // w26
  __int64 v21; // x20
  __int64 v22; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B426BB & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&NetworkManager_TypeInfo, v6);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B426BB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    byte_4B3ED56 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_31;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                (UserServantCollectionMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                svtId,
                                0LL);
  if ( !voiceInfo )
    goto LABEL_31;
  servantVoiceConds = voiceInfo->fields.servantVoiceConds;
  if ( !servantVoiceConds )
    goto LABEL_31;
  max_length = servantVoiceConds->max_length;
  if ( max_length >= 1 )
  {
    v15 = Instance;
    v16 = 0;
    v17 = 1;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1BDBADC(Instance, v10, v12);
      v18 = servantVoiceConds->m_Items[v16];
      if ( !v18 )
        break;
      condType = v18->fields.condType;
      if ( condType == 20 || condType == 3 )
        v17 = 0;
      value = v18->fields.value;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v15 )
          break;
        v21 = *(__int64 *)((char *)&v15->fields.lockCountObj + 4);
        v22 = *(_QWORD *)&v15->fields.isFailedLoad;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v24.fields.currentCryptoKey = v21;
        *(_QWORD *)&v24.fields.fakeValue = v22;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v24, 0LL);
        if ( (int)Instance >= value )
          v17 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v16 >= max_length )
        return v17;
    }
LABEL_31:
    sub_1BDBAD4(Instance, v10);
  }
  return 1;
}


void __fastcall ServantStatusVoiceListViewManager__OnClickListView(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantStatusVoiceListViewManager_o *v5; // x20
  struct ListViewItem_o *linkItem; // x21
  __int64 methodPtr_low; // x10
  struct ServantStatusVoiceListViewManager_CallbackFunc_o *callbackFunc; // x22
  int v9; // w20
  unsigned int Index; // w0
  __int64 v11; // x1

  v5 = this;
  if ( (byte_4B426C2 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1BDB878(&ServantStatusVoiceListViewItem_TypeInfo, obj);
    byte_4B426C2 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1BDBAD4(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      v9 = BYTE1(linkItem[1].fields.sortValue2B);
      Index = ListViewObject__get_Index(obj, 0LL);
      if ( v9 )
        v11 = 2LL;
      else
        v11 = 1LL;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        v11,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__OnMoveEnd(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B426C1 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B426C1 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1BDBAD4(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B426BF & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1BDB878(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v12);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v13);
    byte_4B426BF = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BDBAD4(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BDBAD4(v19, v20);
      ServantStatusVoiceListViewObject__Init_37210064(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_37209560(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B426C0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v9);
    sub_1BDB878(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v10);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v11);
    byte_4B426C0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BDBAD4(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BDBAD4(v17, v18);
      ServantStatusVoiceListViewObject__Init_37210672((ServantStatusVoiceListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        ServantStatusVoiceListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_37208588(this, mode, -1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_37208588(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        int32_t select,
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
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x11
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_object__o *v23; // x19
  int32_t v24; // w20
  const MethodInfo *v25; // x2
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v30; // x23
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B426BE & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__, v12);
    sub_1BDB878(&ServantStatusVoiceListViewItem_TypeInfo, v13);
    sub_1BDB878(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v14);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v15);
    byte_4B426BE = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      itemList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v32; ; BYTE1(i.fields._current[12].klass) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v17 )
        break;
      if ( !i.fields._current )
        sub_1BDBAD4(v17, v18);
      methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1BDBAD4(v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(this, v22);
    if ( !itemList )
      goto LABEL_30;
    v23 = itemList;
    if ( itemList->fields._size >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v23,
                                                                  v24,
                                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_37208460((ServantStatusVoiceListViewObject_o *)itemList, 4, v25);
        if ( ++v24 >= v23->fields._size )
          return;
      }
      goto LABEL_30;
    }
  }
  else
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
    if ( mode == 3 )
    {
      itemList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ClippingObjectList(
                                                                this,
                                                                v20);
      if ( !itemList )
        goto LABEL_30;
      size = itemList->fields._size;
      v27 = itemList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v28 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v27,
                   v28,
                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v30 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_37210064((ServantStatusVoiceListViewObject_o *)Item, 5, v30, 0.1, v31);
          if ( ++v28 >= v27->fields._size )
            return;
        }
LABEL_30:
        sub_1BDBAD4(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
        0.2,
        0LL);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_37209560(this, 3, v21);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_37209504(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc2 = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_37208588(this, mode, -1, v6);
}


void __fastcall ServantStatusVoiceListViewManager__SetObjectItem(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B426BD & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1BDB878(&ServantStatusVoiceListViewObject_TypeInfo, obj);
    byte_4B426BD = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1BDBAD4(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_37208460(
    (ServantStatusVoiceListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall ServantStatusVoiceListViewManager__add_callbackFunc(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusVoiceListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusVoiceListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusVoiceListViewManager_o *v10; // x0
  ServantStatusVoiceListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B426B1 & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B426B1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantStatusVoiceListViewManager_CallbackFunc_c *)v7->klass != ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall ServantStatusVoiceListViewManager__add_callbackFunc2(
        ServantStatusVoiceListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusVoiceListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B426B3 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B426B3 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
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

  if ( (byte_4B426B6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B426B6 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BDBAD4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BDBAD4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BDBAD4(0LL, v18);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BDBAD4(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42750172((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BDBAD4(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BDBAD4(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BDBAD4(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BDBAD4(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BDB81C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v11;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
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
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B426B5 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B426B5 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BDBAD4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BDBAD4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BDBAD4(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BDBAD4(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v11;
}


void __fastcall ServantStatusVoiceListViewManager__remove_callbackFunc(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusVoiceListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusVoiceListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusVoiceListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B426B2 & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B426B2 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantStatusVoiceListViewManager_CallbackFunc_c *)v7->klass != ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
  ServantStatusVoiceListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall ServantStatusVoiceListViewManager__remove_callbackFunc2(
        ServantStatusVoiceListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusVoiceListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B426B4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B426B4 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
  ServantStatusVoiceListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager_CallbackFunc___ctor(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A22F70;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A22F18;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusVoiceListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_4B426C3 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo, v9);
    byte_4B426C3 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             ServantStatusVoiceListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v14, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__Invoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}