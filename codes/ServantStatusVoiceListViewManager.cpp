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

  if ( (byte_4B19F9D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_VoiceMaster___, firstPriority);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BCAFF8(&ServantStatusVoiceListViewItem_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B19F9D = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
        sub_1BCB25C(Instance, v13, v14);
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
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v45, 0LL);
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
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v46, 0LL);
      if ( v23 >= v22->max_length )
        goto LABEL_30;
      v28 = v22->m_Items[v23];
      v29 = (int)Instance;
      v30 = *firstPriority;
      v31 = (ServantStatusVoiceListViewItem_o *)sub_1BCB244(ServantStatusVoiceListViewItem_TypeInfo);
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
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + v36;
        itemList->fields._size = v36 + 1;
        v37[4] = (Il2CppClass *)v31;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v31, v32, v33);
      }
      if ( (__int64)++v23 >= (int)v22->max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1BCB254(Instance, v13);
  }
}


void __fastcall ServantStatusVoiceListViewManager__Awake(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4B19F9C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B19F9C = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1BCB254(scrollView, method);
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
  System_Collections_Generic_List_T__o *v63; // x23
  __int64 v64; // x2
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  System_Int32_array *v68; // x9
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  Il2CppObject *MasterData_object; // x19
  int32_t maxLimitCount; // w20
  System_Int32_array *VoiceLimitCountList; // x24
  ServantVoiceRelationEntity_array *v74; // x19
  int32_t v75; // w0
  const MethodInfo *v76; // x4
  ServantVoiceRelationEntity_array *v77; // x19
  int32_t v78; // w0
  const MethodInfo *v79; // x4
  __int64 v80; // x8
  unsigned __int64 v81; // x19
  int32_t v82; // w20
  VoiceInfo_array *EnableInfo; // x24
  System_Collections_Generic_List_object__o *v84; // x27
  int max_length; // w8
  il2cpp_array_size_t v86; // w22
  Il2CppClass **v87; // x26
  Il2CppClass *v88; // x8
  VoiceInfo_o **v89; // x26
  Il2CppClass *v90; // t1
  char *name; // x23
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x4
  int v94; // w19
  BalanceConfig_c *v95; // x8
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  int v100; // w8
  const MethodInfo *v101; // x3
  _BOOL8 v102; // x0
  const MethodInfo *v103; // x1
  Il2CppObject *current; // x28
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  __int64 v107; // x0
  __int64 v108; // x2
  int32_t v109; // w5
  const MethodInfo *v110; // x6
  int32_t v111; // w1
  bool voiceLabelSpec; // w21
  _BOOL8 v113; // x0
  const MethodInfo *v114; // x1
  __int64 v115; // x10
  Il2CppClass *v116; // x8
  __int64 v117; // x0
  __int64 v118; // x1
  __int64 v119; // x2
  struct VoiceEntity_o *voiceEntity; // x8
  int32_t v121; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  __int64 v123; // x1
  System_String_o *v124; // x2
  struct VoiceEntity_o *v125; // x8
  int32_t v126; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v127; // x19
  System_String_o *v128; // x2
  int v129; // w8
  bool v130; // w25
  System_Collections_Generic_List_object__o *v131; // x23
  int32_t v132; // w28
  VoiceInfo_o *v133; // x29
  int32_t v134; // w26
  int32_t v135; // w19
  ServantStatusVoiceListViewItem_o *v136; // x20
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  struct System_Object_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  Il2CppClass **v142; // x0
  __int64 v143; // x0
  __int64 v144; // x2
  int32_t v145; // w22
  int32_t v146; // w21
  int32_t v147; // w19
  BalanceConfig_c *v148; // x8
  __int64 v149; // x1
  Il2CppObject *v150; // x20
  NetworkManager_c *v151; // x0
  int64_t v152; // x19
  UserServantCollectionEntity_o *v153; // x23
  _BOOL8 v154; // x0
  __int64 v155; // x1
  int32_t v156; // w20
  BalanceConfig_c *v157; // x0
  VoiceInfo_array *v158; // x0
  __int64 v159; // x1
  VoiceInfo_array *v160; // x23
  unsigned __int64 v161; // x26
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t v163; // w28
  __int64 v164; // x1
  __int64 v165; // x2
  int32_t v166; // w20
  BalanceConfig_c *v167; // x0
  VoiceInfo_o *v168; // x24
  int32_t ServantIdHyde; // w19
  ServantStatusVoiceListViewItem_o *v170; // x25
  __int64 v171; // x0
  __int64 v172; // x1
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  struct System_Object_array *v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  Il2CppClass **v178; // x0
  int v179; // w19
  BalanceConfig_c *v180; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t v182; // w19
  BalanceConfig_c *v183; // x8
  int32_t v184; // w29
  _QWORD *v185; // x23
  unsigned __int64 v186; // x21
  System_Collections_Generic_List_object__o *v187; // x27
  int32_t v188; // w25
  int32_t v189; // w28
  VoiceInfo_o *v190; // x19
  int32_t ServantIdMashu2; // w24
  ServantStatusVoiceListViewItem_o *v192; // x20
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  struct System_Object_array *v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  Il2CppClass **v198; // x0
  NetworkManager_c *v199; // x0
  BalanceConfig_c *v200; // x8
  int64_t v201; // x20
  struct BalanceConfig_StaticFields *v202; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  int32_t v206; // w19
  int32_t v207; // w26
  BalanceConfig_c *v208; // x8
  _QWORD *v209; // x23
  unsigned __int64 v210; // x21
  System_Collections_Generic_List_object__o *v211; // x27
  int32_t v212; // w25
  int32_t v213; // w28
  VoiceInfo_o *v214; // x19
  int32_t ServantIdMashu3; // w24
  ServantStatusVoiceListViewItem_o *v216; // x20
  int32_t v217; // w2
  const MethodInfo *v218; // x3
  struct System_Object_array *v219; // x8
  _QWORD *v220; // x9
  __int64 v221; // x10
  Il2CppClass **v222; // x0
  ServantVoiceRelationEntity_array *v223; // x19
  int32_t v224; // w0
  const MethodInfo *v225; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v226; // x8
  int32_t v227; // w25
  __int64 v228; // x20
  int32_t i; // w21
  ServantStatusVoiceListViewItem_o *v230; // x22
  __int64 v231; // x10
  const MethodInfo *v232; // x2
  int v233; // w8
  int32_t v234; // w23
  Il2CppObject *v235; // x24
  __int64 v236; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v238; // x1
  System_String_o *v239; // x0
  const MethodInfo *v240; // x3
  __int64 v241; // x8
  _QWORD *v242; // x9
  __int64 v243; // x10
  __int64 v244; // x0
  int32_t v245; // w22
  _BOOL8 v246; // x0
  __int64 v247; // x1
  const MethodInfo *v248; // x2
  __int64 v249; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x19
  const MethodInfo *v252; // [xsp+8h] [xbp-188h]
  System_String_o *v253; // [xsp+20h] [xbp-170h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+28h] [xbp-168h]
  ServantLimitAddMaster_o *v256; // [xsp+38h] [xbp-158h]
  unsigned __int64 v257; // [xsp+40h] [xbp-150h]
  System_Collections_Generic_List_T__o *v258; // [xsp+48h] [xbp-148h]
  System_Int32_array *v259; // [xsp+50h] [xbp-140h]
  VoiceMaster_o *v260; // [xsp+58h] [xbp-138h]
  unsigned __int64 v261; // [xsp+60h] [xbp-130h]
  VoicePlayCondMaster_o *v262; // [xsp+68h] [xbp-128h]
  int32_t svtId; // [xsp+78h] [xbp-118h]
  int limitCount; // [xsp+7Ch] [xbp-114h]
  System_Collections_Generic_List_Enumerator_object__o v267; // [xsp+88h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+A0h] [xbp-F0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v270; // [xsp+C0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v271; // [xsp+E0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+100h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+108h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+110h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+11Ch] [xbp-74h] BYREF
  UnityEngine_Vector4_o v276; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19F9E & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, mainInfo);
    sub_1BCAFF8(&CondType_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_VoiceMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v11);
    sub_1BCAFF8(&DataManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__get_Current__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_VoiceEntity__Add__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v28);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__, v29);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__, v30);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_VoiceEntity___ctor__, v31);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v32);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__, v33);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v34);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v35);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v36);
    sub_1BCAFF8(&System_Collections_Generic_List_VoiceEntity__TypeInfo, v37);
    sub_1BCAFF8(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v38);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v39);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v40);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v41);
    sub_1BCAFF8(&ServantStatusVoiceListViewItem_TypeInfo, v42);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1BCAFF8(&TutorialFlag_TypeInfo, v44);
    sub_1BCAFF8(&StringLiteral_15123/*"VOICE_EMPTY_MESSAGE"*/, v45);
    sub_1BCAFF8(&StringLiteral_11896/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, v46);
    byte_4B19F9E = 1;
  }
  v47 = StringLiteral_15123/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v271, 0, sizeof(v271));
  memset(&v270, 0, sizeof(v270));
  entity = 0LL;
  memset(&j, 0, sizeof(j));
  defaultPanelCenter = this->fields.defaultPanelCenter;
  defaultPanelHeight = this->fields.defaultPanelHeight;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !mainInfo )
    goto LABEL_272;
  transformNameSprite = this->fields.transformNameSprite;
  if ( !transformNameSprite )
    goto LABEL_272;
  IsTransformServant_k__BackingField = mainInfo->fields._IsTransformServant_k__BackingField;
  transformNameSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transformNameSprite, 0LL);
  if ( !transformNameSprite )
    goto LABEL_272;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 1, 0LL);
    v53 = this;
    transformNameLabel = this->fields.transformNameLabel;
    transformNameSprite = ServantStatusListViewItem__GetTransformName(mainInfo, 0LL);
    if ( !transformNameLabel )
      goto LABEL_272;
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
    goto LABEL_272;
  transformNameSprite = scrollView->fields.mPanel;
  if ( !transformNameSprite )
    goto LABEL_272;
  v276.fields.x = *((float *)transformNameSprite + 74);
  v276.fields.z = *((float *)transformNameSprite + 76);
  v276.fields.y = defaultPanelCenter;
  v276.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v276, 0LL);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_272;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v57);
    byte_4B165D1 = 1;
  }
  v59 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v59 = NetworkManager_TypeInfo;
  }
  v253 = (System_String_o *)v47;
  userIdNumber = v59->static_fields->userIdNumber;
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       userIdNumber,
                       (int32_t)transformNameSprite,
                       0LL);
  v61 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_VoiceMaster___);
  v262 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v62 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v63 = (System_Collections_Generic_List_T__o *)sub_1BCB244(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v63,
    (const MethodInfo_369EB84 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v63 )
    goto LABEL_272;
  items = v63->fields._items;
  v66 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v63->fields._version;
  if ( !items )
    goto LABEL_272;
  size = v63->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v63,
      81,
      *(const MethodInfo_369F3D8 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
  }
  else
  {
    v63->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v68 = changeSvtVoiceIdList;
  v256 = (ServantLimitAddMaster_o *)v62;
  if ( !changeSvtVoiceIdList )
LABEL_272:
    sub_1BCB254(transformNameSprite, v51);
  v69 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  if ( (int)v69 >= 1 )
  {
    v70 = 0LL;
    v260 = (VoiceMaster_o *)v61;
    v258 = v63;
    while ( 1 )
    {
      if ( v70 >= (unsigned int)v69 )
        goto LABEL_273;
      v257 = v70;
      svtId = v68->m_Items[v70 + 1];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_272;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      transformNameSprite = EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_272;
      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
      transformNameSprite = UserServantCollectionEntity__getCostumeList(EntityDefinitely, 0LL);
      if ( !MasterData_object )
        goto LABEL_272;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              (ServantLimitAddMaster_o *)MasterData_object,
                              svtId,
                              maxLimitCount,
                              (System_Int32_array *)transformNameSprite,
                              0LL);
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_272;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_272;
      ServantVoiceRelationMaster__GetRelationList_41966716(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0LL);
      v74 = beforeRelationList;
      v75 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v74, v75, v76);
      v77 = sameRelationList;
      ++firstPriority;
      v78 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v77, v78, v79);
      if ( !VoiceLimitCountList )
        goto LABEL_272;
      v80 = *(_QWORD *)&VoiceLimitCountList->max_length;
      if ( (int)v80 >= 1 )
        break;
LABEL_232:
      v223 = afterRelationList;
      v224 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v223, v224, v225);
      v68 = changeSvtVoiceIdList;
      LODWORD(v69) = changeSvtVoiceIdList->max_length;
      v70 = v257 + 1;
      if ( (__int64)(v257 + 1) >= (int)v69 )
        goto LABEL_233;
    }
    v81 = 0LL;
    v259 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v81 >= (unsigned int)v80 )
        goto LABEL_273;
      v82 = VoiceLimitCountList->m_Items[v81 + 1];
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( !v61 )
        goto LABEL_272;
      v261 = v81;
      limitCount = v82;
      EnableInfo = VoiceMaster__getEnableInfo(
                     (VoiceMaster_o *)v61,
                     (int32_t)transformNameSprite,
                     svtId,
                     v82,
                     (System_Collections_Generic_List_CondType_Kind__o *)v63,
                     0,
                     0,
                     0LL);
      v84 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_VoiceEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v84,
        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_VoiceEntity___ctor__);
      if ( !EnableInfo )
        goto LABEL_272;
      max_length = EnableInfo->max_length;
      if ( max_length >= 1 )
        break;
LABEL_133:
      v145 = firstPriority;
      v146 = ++firstPriority;
      v147 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v148 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v148 = BalanceConfig_TypeInfo;
      }
      if ( v147 == v148->static_fields->ServantIdJekyll )
      {
        transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transformNameSprite )
          goto LABEL_272;
        v150 = DataManager__GetMasterData_object_(
                 (DataManager_o *)transformNameSprite,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v149);
          byte_4B165D1 = 1;
        }
        v151 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v151 = NetworkManager_TypeInfo;
        }
        v152 = v151->static_fields->userIdNumber;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        if ( !v150 )
          goto LABEL_272;
        v153 = UserServantCollectionMaster__GetEntityDefinitely(
                 (UserServantCollectionMaster_o *)v150,
                 v152,
                 (int32_t)transformNameSprite,
                 0LL);
        transformNameSprite = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v84, 0LL);
        if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        {
          if ( !v84 )
            goto LABEL_272;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v267,
            v84,
            (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
          v270 = v267;
          while ( 1 )
          {
            v154 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v270,
                     (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
            if ( !v154 )
              break;
            if ( !v270.fields._current )
              sub_1BCB254(v154, v155);
            if ( !v153 )
              sub_1BCB254(v154, v155);
            if ( UserServantCollectionEntity__IsPlayed(v153, HIDWORD(v270.fields._current[3].klass), 0LL) )
            {
              v156 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v157 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v157 = BalanceConfig_TypeInfo;
              }
              v158 = VoiceMaster__getEnableInfo(
                       v260,
                       v156,
                       v157->static_fields->ServantIdHyde,
                       limitCount,
                       0LL,
                       0,
                       0,
                       0LL);
              v160 = v158;
              if ( !v158 )
                sub_1BCB254(0LL, v159);
              if ( (int)v158->max_length >= 1 )
              {
                v161 = 0LL;
                do
                {
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !itemList )
                    sub_1BCB254(v158, v159);
                  v163 = itemList->fields._size;
                  v166 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v167 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v167 = BalanceConfig_TypeInfo;
                  }
                  if ( v161 >= v160->max_length )
                    sub_1BCB25C(v167, v164, v165);
                  v168 = v160->m_Items[v161];
                  ServantIdHyde = v167->static_fields->ServantIdHyde;
                  v170 = (ServantStatusVoiceListViewItem_o *)sub_1BCB244(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v170,
                    v163,
                    v166,
                    ServantIdHyde,
                    limitCount,
                    v168,
                    v146,
                    0,
                    0,
                    v252);
                  v175 = itemList->fields._items;
                  v176 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v175 )
                    sub_1BCB254(v171, v172);
                  v177 = itemList->fields._size;
                  if ( (unsigned int)v177 >= v175->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v170,
                      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v178 = &v175->obj.klass + v177;
                    itemList->fields._size = v177 + 1;
                    v178[4] = (Il2CppClass *)v170;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v178 + 4), (int32_t)v170, v173, v174);
                  }
                  ++v161;
                }
                while ( (__int64)v161 < (int)v160->max_length );
              }
              firstPriority = v145 + 2;
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v270,
            (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
        }
      }
      else
      {
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        v179 = (int)transformNameSprite;
        v180 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v180 = BalanceConfig_TypeInfo;
        }
        static_fields = v180->static_fields;
        if ( v179 == static_fields->ServantIdMashu1 )
        {
          if ( !v180->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v180);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          if ( limitCount != static_fields->SpecialLimitCountPLD )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_39617644(115, 0LL) )
            {
              v182 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v183 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v183 = BalanceConfig_TypeInfo;
              }
              v184 = v146;
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      v260,
                                      v182,
                                      v183->static_fields->ServantIdMashu2,
                                      limitCount,
                                      0LL,
                                      0,
                                      0,
                                      0LL);
              if ( !transformNameSprite )
                goto LABEL_272;
              v185 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v186 = 0LL;
                while ( 1 )
                {
                  v187 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v187 )
                    goto LABEL_272;
                  v188 = v187->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v189 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v186 >= *((unsigned int *)v185 + 6) )
                    break;
                  v190 = (VoiceInfo_o *)v185[v186 + 4];
                  ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
                  v192 = (ServantStatusVoiceListViewItem_o *)sub_1BCB244(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v192,
                    v188,
                    v189,
                    ServantIdMashu2,
                    limitCount,
                    v190,
                    v184,
                    0,
                    0,
                    v252);
                  v195 = v187->fields._items;
                  v196 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v187->fields._version;
                  if ( !v195 )
                    goto LABEL_272;
                  v197 = v187->fields._size;
                  if ( (unsigned int)v197 >= v195->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v187,
                      (Il2CppObject *)v192,
                      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v198 = &v195->obj.klass + v197;
                    v187->fields._size = v197 + 1;
                    v198[4] = (Il2CppClass *)v192;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v198 + 4), (int32_t)v192, v193, v194);
                  }
                  if ( (__int64)++v186 >= *((int *)v185 + 6) )
                    goto LABEL_196;
                }
LABEL_273:
                sub_1BCB25C(transformNameSprite, v51, v64);
              }
LABEL_196:
              v146 = v145 + 2;
              firstPriority = v145 + 2;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B165D1 )
            {
              sub_1BCAFF8(&NetworkManager_TypeInfo, v51);
              byte_4B165D1 = 1;
            }
            v199 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v199 = NetworkManager_TypeInfo;
            }
            v200 = BalanceConfig_TypeInfo;
            v201 = v199->static_fields->userIdNumber;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v200 = BalanceConfig_TypeInfo;
            }
            v202 = v200->static_fields;
            MashuTdGradeUpQuestId = v202->MashuTdGradeUpQuestId;
            MashuTdGradeUpQuestPhase = v202->MashuTdGradeUpQuestPhase;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                            v201,
                                            MashuTdGradeUpQuestId,
                                            MashuTdGradeUpQuestPhase,
                                            -1,
                                            0,
                                            0LL);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
            {
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              transformNameSprite = v256;
              if ( !v256 )
                goto LABEL_272;
              transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                              v256,
                                              &entity,
                                              BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                              limitCount,
                                              0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_272;
                svtVoiceId = entity->fields.svtVoiceId;
                transformNameSprite = BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  transformNameSprite = BalanceConfig_TypeInfo;
                }
                if ( svtVoiceId != *(_DWORD *)(*((_QWORD *)transformNameSprite + 23) + 376LL) )
                {
                  v206 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v207 = v146;
                  v208 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v208 = BalanceConfig_TypeInfo;
                  }
                  transformNameSprite = VoiceMaster__getEnableInfo(
                                          v260,
                                          v206,
                                          v208->static_fields->ServantIdMashu3,
                                          limitCount,
                                          0LL,
                                          0,
                                          0,
                                          0LL);
                  if ( !transformNameSprite )
                    goto LABEL_272;
                  v209 = transformNameSprite;
                  if ( *((int *)transformNameSprite + 6) >= 1 )
                  {
                    v210 = 0LL;
                    do
                    {
                      v211 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      if ( !v211 )
                        goto LABEL_272;
                      v212 = v211->fields._size;
                      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                      v213 = (int)transformNameSprite;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( v210 >= *((unsigned int *)v209 + 6) )
                        goto LABEL_273;
                      v214 = (VoiceInfo_o *)v209[v210 + 4];
                      ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                      v216 = (ServantStatusVoiceListViewItem_o *)sub_1BCB244(ServantStatusVoiceListViewItem_TypeInfo);
                      ServantStatusVoiceListViewItem___ctor(
                        v216,
                        v212,
                        v213,
                        ServantIdMashu3,
                        limitCount,
                        v214,
                        v207,
                        0,
                        0,
                        v252);
                      v219 = v211->fields._items;
                      v220 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v211->fields._version;
                      if ( !v219 )
                        goto LABEL_272;
                      v221 = v211->fields._size;
                      if ( (unsigned int)v221 >= v219->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v211,
                          (Il2CppObject *)v216,
                          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v222 = &v219->obj.klass + v221;
                        v211->fields._size = v221 + 1;
                        v222[4] = (Il2CppClass *)v216;
                        sub_1BCAF9C((CGThumbnailListItem_o *)(v222 + 4), (int32_t)v216, v217, v218);
                      }
                    }
                    while ( (__int64)++v210 < *((int *)v209 + 6) );
                  }
                  firstPriority = v207 + 1;
                }
              }
            }
          }
        }
      }
      VoiceLimitCountList = v259;
      v61 = (Il2CppObject *)v260;
      v63 = v258;
      LODWORD(v80) = v259->max_length;
      v81 = v261 + 1;
      if ( (__int64)(v261 + 1) >= (int)v80 )
        goto LABEL_232;
    }
    v86 = 0;
    while ( 1 )
    {
      if ( v86 >= max_length )
        goto LABEL_273;
      v87 = &EnableInfo->obj.klass + (int)v86;
      v90 = v87[4];
      v89 = (VoiceInfo_o **)(v87 + 4);
      v88 = v90;
      if ( !v90 )
        goto LABEL_272;
      name = (char *)v88->_1.name;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v94 = (int)transformNameSprite;
      v95 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v95 = BalanceConfig_TypeInfo;
      }
      if ( v94 == v95->static_fields->ServantIdJekyll )
      {
        if ( !name )
          goto LABEL_272;
        if ( *((_DWORD *)name + 7) == 7 )
        {
          if ( !v84 )
            goto LABEL_272;
          v96 = v84->fields._items;
          v97 = Method_System_Collections_Generic_List_VoiceEntity__Add__;
          ++v84->fields._version;
          if ( !v96 )
            goto LABEL_272;
          v98 = v84->fields._size;
          if ( (unsigned int)v98 >= v96->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v84,
              (Il2CppObject *)name,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
          }
          else
          {
            v99 = &v96->obj.klass + v98;
            v84->fields._size = v98 + 1;
            v99[4] = (Il2CppClass *)name;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v99 + 4), (int32_t)name, v64, v92);
          }
        }
      }
      if ( limitCount <= 10 )
      {
        if ( !name )
          goto LABEL_272;
        if ( *((_DWORD *)name + 7) == 2 )
        {
          v100 = *((_DWORD *)name + 12);
          if ( v100 == 7 )
          {
            if ( *((_DWORD *)name + 13) != 2 )
            {
              if ( v86 >= EnableInfo->max_length )
                goto LABEL_273;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              limitCount,
                                              *v89,
                                              v93);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
              {
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_272;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v267,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v271 = v267;
                do
                {
                  v102 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &v271,
                           (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v102 )
                    goto LABEL_102;
                  current = v271.fields._current;
                  if ( !v271.fields._current
                    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                        LOBYTE(v271.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                    || (ServantStatusVoiceListViewItem_c *)v271.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1BCB254(v102, v103);
                  }
                  klass = v271.fields._current[10].klass;
                  if ( !klass )
                    sub_1BCB254(v102, v103);
                }
                while ( HIDWORD(klass->_1.namespaze) != 2
                     || LODWORD(klass->_1.this_arg.data) != 7
                     || HIDWORD(klass->_1.this_arg.data) != *((_DWORD *)name + 13)
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v271.fields._current,
                          v103) != svtId );
                v107 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                v111 = v107;
                if ( v86 >= EnableInfo->max_length )
                  sub_1BCB25C(v107, (unsigned int)v107, v108);
                goto LABEL_125;
              }
LABEL_82:
              if ( v86 >= EnableInfo->max_length )
                goto LABEL_273;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              *v89,
                                              v101);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                goto LABEL_121;
              voiceLabelSpec = 1;
              goto LABEL_104;
            }
          }
          else if ( v100 == 18 )
          {
            if ( v86 >= EnableInfo->max_length )
              goto LABEL_273;
            transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                            (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                            svtId,
                                            limitCount,
                                            *v89,
                                            v93);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              goto LABEL_82;
            transformNameSprite = this->fields.itemList;
            if ( !transformNameSprite )
              goto LABEL_272;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v267,
              (System_Collections_Generic_List_object__o *)transformNameSprite,
              (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v271 = v267;
            do
            {
              v113 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v271,
                       (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v113 )
                goto LABEL_102;
              current = v271.fields._current;
              if ( !v271.fields._current
                || (v115 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v271.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v115)
                || (ServantStatusVoiceListViewItem_c *)v271.fields._current->klass->_2.typeHierarchy[v115 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_1BCB254(v113, v114);
              }
              v116 = v271.fields._current[10].klass;
              if ( !v116 )
                sub_1BCB254(v113, v114);
            }
            while ( HIDWORD(v116->_1.namespaze) != 2
                 || LODWORD(v116->_1.this_arg.data) != 18
                 || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                      (ServantStatusVoiceListViewItem_o *)v271.fields._current,
                      v114) != svtId );
            v117 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
            if ( v86 >= EnableInfo->max_length )
              sub_1BCB25C(v117, v118, v119);
            if ( !*v89 )
              sub_1BCB254(v117, v118);
            voiceEntity = (*v89)->fields.voiceEntity;
            if ( !voiceEntity )
              sub_1BCB254(v117, v118);
            v121 = v117;
            id = voiceEntity->fields.id;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v124 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48161020(id, 0LL);
            if ( !v262 )
              sub_1BCB254(0LL, v123);
            if ( !VoicePlayCondMaster__isVoiceCond(v262, v121, v124, 81, 0LL) )
            {
              v143 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v111 = v143;
              if ( v86 >= EnableInfo->max_length )
                sub_1BCB25C(v143, (unsigned int)v143, v144);
LABEL_125:
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v111,
                svtId,
                limitCount,
                *v89,
                v109,
                v110);
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v271,
                (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              goto LABEL_121;
            }
LABEL_102:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v271,
              (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
      }
      voiceLabelSpec = 0;
LABEL_104:
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( v86 >= EnableInfo->max_length )
        goto LABEL_273;
      if ( !*v89 )
        goto LABEL_272;
      v125 = (*v89)->fields.voiceEntity;
      if ( !v125 )
        goto LABEL_272;
      v126 = (int)transformNameSprite;
      v127 = v125->fields.id;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48161020(v127, 0LL);
      transformNameSprite = v262;
      if ( !v262 )
        goto LABEL_272;
      transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v262, v126, v128, 81, 0LL);
      if ( !name )
        goto LABEL_272;
      v129 = *((_DWORD *)name + 12);
      v130 = v129 == 7 || v129 == 18 || v129 == 54 && ((unsigned __int8)transformNameSprite & 1) != 0;
      v131 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !v131 )
        goto LABEL_272;
      v132 = v131->fields._size;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( v86 >= EnableInfo->max_length )
        goto LABEL_273;
      v133 = *v89;
      v134 = firstPriority;
      v135 = (int)transformNameSprite;
      v136 = (ServantStatusVoiceListViewItem_o *)sub_1BCB244(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v136, v132, v135, svtId, limitCount, v133, v134, v130, voiceLabelSpec, v252);
      v139 = v131->fields._items;
      v140 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v131->fields._version;
      if ( !v139 )
        goto LABEL_272;
      v141 = v131->fields._size;
      if ( (unsigned int)v141 >= v139->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v131,
          (Il2CppObject *)v136,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
      }
      else
      {
        v142 = &v139->obj.klass + v141;
        v131->fields._size = v141 + 1;
        v142[4] = (Il2CppClass *)v136;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v142 + 4), (int32_t)v136, v137, v138);
      }
LABEL_121:
      max_length = EnableInfo->max_length;
      if ( (int)++v86 >= max_length )
        goto LABEL_133;
    }
  }
LABEL_233:
  v226 = this->fields.itemList;
  if ( !v226 )
    goto LABEL_272;
  v227 = v226->fields._size;
  v228 = sub_1BCB244(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v228,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v227 - 1 >= 1 )
  {
    for ( i = 0; i != v227 - 1; ++i )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_272;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              i,
                              (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_272;
      v230 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v231 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v231
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v231 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_272;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v51) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v230, v51);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v228 )
            goto LABEL_272;
          v232 = (const MethodInfo *)*(unsigned int *)(v228 + 24);
          v233 = *(_DWORD *)(v228 + 28) + 1;
          *(_DWORD *)(v228 + 24) = 0;
          *(_DWORD *)(v228 + 28) = v233;
          if ( (int)v232 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v228 + 16), 0, (int32_t)v232, 0LL);
          v234 = i + 1;
          if ( i + 1 < v227 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_272;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v234,
                                      (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_272;
              v235 = (Il2CppObject *)transformNameSprite;
              v236 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v236
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v236
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_272;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v51);
              v239 = ServantStatusVoiceListViewItem__get_OpenName(v230, v238);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v239, 0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v241 = *(_QWORD *)(v228 + 16);
                v242 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v228 + 28);
                if ( !v241 )
                  goto LABEL_272;
                v243 = *(int *)(v228 + 24);
                if ( (unsigned int)v243 >= *(_DWORD *)(v241 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v228,
                    v235,
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
                }
                else
                {
                  v244 = v241 + 8 * v243;
                  *(_DWORD *)(v228 + 24) = v243 + 1;
                  *(_QWORD *)(v244 + 32) = v235;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v244 + 32), (int32_t)v235, (int32_t)v232, v240);
                }
              }
            }
            while ( v227 != ++v234 );
          }
          if ( *(int *)(v228 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v230, 1, v232);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v267,
              (System_Collections_Generic_List_object__o *)v228,
              (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v245 = 2;
            for ( j = v267;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)j.fields._current,
                    v245++,
                    v248) )
            {
              v246 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &j,
                       (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v246 )
                break;
              if ( j.fields._current )
              {
                v249 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(j.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v249
                  && (ServantStatusVoiceListViewItem_c *)j.fields._current->klass->_2.typeHierarchy[v249 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1BCB254(v246, v247);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &j,
              (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11896/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_272;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v253, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_272;
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

  if ( (byte_4B19FA1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BCAFF8(&ServantStatusVoiceListViewItem_TypeInfo, v5);
    byte_4B19FA1 = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B19F9F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v9);
    byte_4B19F9F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_41959312(
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
    sub_1BCB25C(Instance, v11, v12);
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
        Instance = (DataManager_o *)System_String__Concat_62488672(
                                      v17,
                                      (System_String_o *)StringLiteral_15973/*"_"*/,
                                      v18,
                                      0LL),
        (v19 = *(_QWORD *)(v15 + 32)) == 0) )
  {
LABEL_25:
    sub_1BCB254(Instance, v11);
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

  if ( (byte_4B19FA0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B19FA0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B165D1 = 1;
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
        sub_1BCB25C(Instance, v10, v12);
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
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v24, 0LL);
        if ( (int)Instance >= value )
          v17 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v16 >= max_length )
        return v17;
    }
LABEL_31:
    sub_1BCB254(Instance, v10);
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
  if ( (byte_4B19FA7 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1BCAFF8(&ServantStatusVoiceListViewItem_TypeInfo, obj);
    byte_4B19FA7 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1BCB254(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
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

  if ( (byte_4B19FA6 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B19FA6 = 1;
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
          sub_1BCB254(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4B19FA4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1BCAFF8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v12);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v13);
    byte_4B19FA4 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCB254(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v19, v20);
      ServantStatusVoiceListViewObject__Init_37169576(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_37169072(
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

  if ( (byte_4B19FA5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v9);
    sub_1BCAFF8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v10);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v11);
    byte_4B19FA5 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCB254(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v17, v18);
      ServantStatusVoiceListViewObject__Init_37170184((ServantStatusVoiceListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_37168100(this, mode, -1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_37168100(
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

  if ( (byte_4B19FA3 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__, v12);
    sub_1BCAFF8(&ServantStatusVoiceListViewItem_TypeInfo, v13);
    sub_1BCAFF8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v14);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v15);
    byte_4B19FA3 = 1;
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
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v32; ; BYTE1(i.fields._current[12].klass) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v17 )
        break;
      if ( !i.fields._current )
        sub_1BCB254(v17, v18);
      methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1BCB254(v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_37167972((ServantStatusVoiceListViewObject_o *)itemList, 4, v25);
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
                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v30 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_37169576((ServantStatusVoiceListViewObject_o *)Item, 5, v30, 0.1, v31);
          if ( ++v28 >= v27->fields._size )
            return;
        }
LABEL_30:
        sub_1BCB254(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
        0.2,
        0LL);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_37169072(this, 3, v21);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_37169016(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc2 = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_37168100(this, mode, -1, v6);
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
  if ( (byte_4B19FA2 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1BCAFF8(&ServantStatusVoiceListViewObject_TypeInfo, obj);
    byte_4B19FA2 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1BCB254(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_37167972(
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

  if ( (byte_4B19F96 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B19F96 = 1;
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
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
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

  if ( (byte_4B19F98 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B19F98 = 1;
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
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
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

  if ( (byte_4B19F9B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B19F9B = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BCB254(0LL, v18);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BCB254(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42948252((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BCB254(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BCB254(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BCB254(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BCB254(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4B19F9A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B19F9A = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BCB254(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BCB254(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4B19F97 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B19F97 = 1;
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
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
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

  if ( (byte_4B19F99 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B19F99 = 1;
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
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A13208;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A131B0;
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
  if ( (byte_4B19FA8 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo, v9);
    byte_4B19FA8 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             ServantStatusVoiceListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v14, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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