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
  signed int max_length; // w8
  VoiceMaster_o *v15; // x21
  unsigned int v16; // w9
  char v17; // w20
  ServantVoiceRelationEntity_o *v18; // x23
  __int64 v19; // x24
  __int64 v20; // x25
  VoiceInfo_array *v21; // x24
  unsigned __int64 v22; // x22
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t size; // w27
  __int64 v25; // x26
  __int64 v26; // x28
  VoiceInfo_o *v27; // x29
  int32_t v28; // w28
  int32_t v29; // w20
  ServantStatusVoiceListViewItem_o *v30; // x26
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v38; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v39; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+28h] [xbp-78h]
  unsigned int v41; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4A4C495 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_VoiceMaster___, firstPriority);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B863B8(&ServantStatusVoiceListViewItem_TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A4C495 = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_29;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v15 = (VoiceMaster_o *)Instance;
    v16 = 0;
    v17 = 1;
    ascendOrder = 0;
    v38 = (VoiceMaster_o *)Instance;
    v39 = relationList;
    while ( 1 )
    {
      if ( v16 >= max_length )
LABEL_30:
        sub_1B8661C(Instance, v13);
      v18 = relationList->m_Items[v16];
      v41 = v16;
      if ( !v18 )
        goto LABEL_29;
      v20 = *(_QWORD *)&v18->fields.relationSvtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v18->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v44.fields.currentCryptoKey = v20;
      *(_QWORD *)&v44.fields.fakeValue = v19;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v44, 0LL);
      if ( !v15 )
        goto LABEL_29;
      Instance = VoiceMaster__getEnableInfo(v15, svtId, (int32_t)Instance, 0, 0LL, 0, 0, 0LL);
      v21 = Instance;
      if ( (v17 & 1) == 0 && ascendOrder != v18->fields.ascendOrder )
        ++*firstPriority;
      if ( !Instance )
        goto LABEL_29;
      ascendOrder = v18->fields.ascendOrder;
      if ( (int)Instance->max_length >= 1 )
        break;
LABEL_27:
      v15 = v38;
      relationList = v39;
      v17 = 0;
      max_length = v39->max_length;
      v16 = v41 + 1;
      if ( (int)(v41 + 1) >= max_length )
        return;
    }
    v22 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v26 = *(_QWORD *)&v18->fields.relationSvtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&v18->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v45.fields.currentCryptoKey = v26;
      *(_QWORD *)&v45.fields.fakeValue = v25;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v45, 0LL);
      if ( v22 >= v21->max_length )
        goto LABEL_30;
      v27 = v21->m_Items[v22];
      v28 = (int)Instance;
      v29 = *firstPriority;
      v30 = (ServantStatusVoiceListViewItem_o *)sub_1B86604(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v30, size, svtId, v28, 0, v27, v29, 0, 0, v37);
      items = itemList->fields._items;
      v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v35 = itemList->fields._size;
      if ( (unsigned int)v35 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v30,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + v35;
        itemList->fields._size = v35 + 1;
        v36[4] = (Il2CppClass *)v30;
        sub_1B8635C((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v30, v31, v32);
      }
      if ( (__int64)++v22 >= (int)v21->max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1B86614(Instance, v13);
  }
}


void __fastcall ServantStatusVoiceListViewManager__Awake(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4A4C494 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4A4C494 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1B86614(scrollView, method);
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
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  System_Int32_array *v67; // x9
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  Il2CppObject *MasterData_object; // x19
  int32_t maxLimitCount; // w20
  ServantVoiceRelationEntity_array *v72; // x19
  int32_t v73; // w0
  const MethodInfo *v74; // x4
  ServantVoiceRelationEntity_array *v75; // x19
  int32_t v76; // w0
  const MethodInfo *v77; // x4
  System_Int32_array *v78; // x9
  __int64 v79; // x8
  unsigned __int64 v80; // x10
  int32_t v81; // w19
  VoiceInfo_array *EnableInfo; // x19
  int max_length; // w8
  unsigned int v84; // w22
  Il2CppClass **v85; // x26
  Il2CppClass *v86; // x8
  VoiceInfo_o **v87; // x26
  Il2CppClass *v88; // t1
  char *name; // x23
  int32_t v90; // w2
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
  int32_t v107; // w5
  const MethodInfo *v108; // x6
  int32_t v109; // w1
  bool voiceLabelSpec; // w21
  _BOOL8 v111; // x0
  const MethodInfo *v112; // x1
  __int64 v113; // x10
  Il2CppClass *v114; // x8
  __int64 v115; // x0
  __int64 v116; // x1
  struct VoiceEntity_o *voiceEntity; // x8
  int32_t v118; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  __int64 v120; // x1
  System_String_o *v121; // x2
  struct VoiceEntity_o *v122; // x8
  int32_t v123; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v124; // x19
  System_String_o *v125; // x2
  int v126; // w8
  System_Collections_Generic_List_object__o *v127; // x23
  bool v128; // w27
  bool v129; // w24
  char v130; // w20
  int32_t v131; // w25
  VoiceInfo_o *v132; // x28
  int32_t v133; // w29
  int32_t v134; // w19
  bool v135; // w26
  ServantStatusVoiceListViewItem_o *v136; // x20
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  struct System_Object_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  Il2CppClass **v142; // x0
  __int64 v143; // x0
  int32_t v144; // w22
  int32_t v145; // w21
  int32_t v146; // w19
  BalanceConfig_c *v147; // x8
  __int64 v148; // x1
  Il2CppObject *v149; // x20
  NetworkManager_c *v150; // x0
  int64_t v151; // x19
  UserServantCollectionEntity_o *v152; // x23
  _BOOL8 v153; // x0
  __int64 v154; // x1
  int32_t v155; // w20
  BalanceConfig_c *v156; // x0
  VoiceInfo_array *v157; // x0
  __int64 v158; // x1
  VoiceInfo_array *v159; // x23
  unsigned __int64 v160; // x26
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t v162; // w28
  __int64 v163; // x1
  int32_t v164; // w20
  BalanceConfig_c *v165; // x0
  VoiceInfo_o *v166; // x24
  int32_t ServantIdHyde; // w19
  ServantStatusVoiceListViewItem_o *v168; // x25
  __int64 v169; // x0
  __int64 v170; // x1
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  struct System_Object_array *v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  Il2CppClass **v176; // x0
  int v177; // w19
  BalanceConfig_c *v178; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t v180; // w19
  BalanceConfig_c *v181; // x8
  int32_t v182; // w29
  _QWORD *v183; // x23
  unsigned __int64 v184; // x21
  System_Collections_Generic_List_object__o *v185; // x27
  int32_t v186; // w25
  int32_t v187; // w28
  VoiceInfo_o *v188; // x19
  int32_t ServantIdMashu2; // w24
  ServantStatusVoiceListViewItem_o *v190; // x20
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  struct System_Object_array *v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  Il2CppClass **v196; // x0
  NetworkManager_c *v197; // x0
  BalanceConfig_c *v198; // x8
  int64_t v199; // x20
  struct BalanceConfig_StaticFields *v200; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  int32_t v204; // w19
  int32_t v205; // w26
  BalanceConfig_c *v206; // x8
  _QWORD *v207; // x23
  unsigned __int64 v208; // x21
  System_Collections_Generic_List_object__o *v209; // x27
  int32_t v210; // w25
  int32_t v211; // w28
  VoiceInfo_o *v212; // x19
  int32_t ServantIdMashu3; // w24
  ServantStatusVoiceListViewItem_o *v214; // x20
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  struct System_Object_array *v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  Il2CppClass **v220; // x0
  ServantVoiceRelationEntity_array *v221; // x19
  int32_t v222; // w0
  const MethodInfo *v223; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v224; // x8
  int32_t v225; // w25
  __int64 v226; // x20
  int32_t i; // w21
  ServantStatusVoiceListViewItem_o *v228; // x22
  __int64 v229; // x10
  const MethodInfo *v230; // x2
  int v231; // w8
  int32_t v232; // w23
  Il2CppObject *v233; // x24
  __int64 v234; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v236; // x1
  System_String_o *v237; // x0
  const MethodInfo *v238; // x3
  __int64 v239; // x8
  _QWORD *v240; // x9
  __int64 v241; // x10
  __int64 v242; // x0
  int32_t v243; // w22
  _BOOL8 v244; // x0
  __int64 v245; // x1
  const MethodInfo *v246; // x2
  __int64 v247; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x19
  const MethodInfo *v250; // [xsp+8h] [xbp-198h]
  System_String_o *v251; // [xsp+20h] [xbp-180h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+28h] [xbp-178h]
  ServantLimitAddMaster_o *v254; // [xsp+38h] [xbp-168h]
  unsigned __int64 v255; // [xsp+40h] [xbp-160h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+48h] [xbp-158h]
  System_Int32_array *VoiceLimitCountList; // [xsp+50h] [xbp-150h]
  VoiceMaster_o *v258; // [xsp+58h] [xbp-148h]
  unsigned __int64 v259; // [xsp+60h] [xbp-140h]
  System_Collections_Generic_List_object__o *v260; // [xsp+68h] [xbp-138h]
  VoicePlayCondMaster_o *v261; // [xsp+70h] [xbp-130h]
  int32_t svtId; // [xsp+80h] [xbp-120h]
  int limitCount; // [xsp+84h] [xbp-11Ch]
  VoiceInfo_array *v266; // [xsp+90h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v267; // [xsp+98h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+B0h] [xbp-F0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+C8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v270; // [xsp+D0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v271; // [xsp+F0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+110h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+118h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+120h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+12Ch] [xbp-74h] BYREF
  UnityEngine_Vector4_o v276; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A4C496 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, mainInfo);
    sub_1B863B8(&CondType_TypeInfo, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_VoiceMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v11);
    sub_1B863B8(&DataManager_TypeInfo, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__get_Current__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_VoiceEntity__Add__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__, v26);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__, v29);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__, v30);
    sub_1B863B8(&Method_System_Collections_Generic_List_VoiceEntity___ctor__, v31);
    sub_1B863B8(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v32);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__, v33);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v34);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v35);
    sub_1B863B8(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v36);
    sub_1B863B8(&System_Collections_Generic_List_VoiceEntity__TypeInfo, v37);
    sub_1B863B8(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v38);
    sub_1B863B8(&LocalizationManager_TypeInfo, v39);
    sub_1B863B8(&NetworkManager_TypeInfo, v40);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v41);
    sub_1B863B8(&ServantStatusVoiceListViewItem_TypeInfo, v42);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1B863B8(&TutorialFlag_TypeInfo, v44);
    sub_1B863B8(&StringLiteral_15016/*"VOICE_EMPTY_MESSAGE"*/, v45);
    sub_1B863B8(&StringLiteral_11795/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, v46);
    byte_4A4C496 = 1;
  }
  v47 = StringLiteral_15016/*"VOICE_EMPTY_MESSAGE"*/;
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
  v276.fields.x = *((float *)transformNameSprite + 74);
  v276.fields.z = *((float *)transformNameSprite + 76);
  v276.fields.y = defaultPanelCenter;
  v276.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v276, 0LL);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_267;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v57);
    byte_4A48C25 = 1;
  }
  v59 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v59 = NetworkManager_TypeInfo;
  }
  v251 = (System_String_o *)v47;
  userIdNumber = v59->static_fields->userIdNumber;
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !Master_object )
    goto LABEL_267;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       userIdNumber,
                       (int32_t)transformNameSprite,
                       0LL);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_VoiceMaster___);
  v261 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v62 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v63 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v63,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v63 )
    goto LABEL_267;
  items = v63->fields._items;
  v65 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v63->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v67 = changeSvtVoiceIdList;
  v254 = (ServantLimitAddMaster_o *)v62;
  if ( !changeSvtVoiceIdList )
LABEL_267:
    sub_1B86614(transformNameSprite, v51);
  v68 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  if ( (int)v68 >= 1 )
  {
    v69 = 0LL;
    v258 = (VoiceMaster_o *)v61;
    while ( 1 )
    {
      if ( v69 >= (unsigned int)v68 )
        goto LABEL_268;
      v255 = v69;
      svtId = v67->m_Items[v69 + 1];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_267;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_267;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_267;
      ServantVoiceRelationMaster__GetRelationList_40904068(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0LL);
      v72 = beforeRelationList;
      v73 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v72, v73, v74);
      v75 = sameRelationList;
      ++firstPriority;
      v76 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v75, v76, v77);
      v78 = VoiceLimitCountList;
      if ( !VoiceLimitCountList )
        goto LABEL_267;
      v79 = *(_QWORD *)&VoiceLimitCountList->max_length;
      if ( (int)v79 >= 1 )
        break;
LABEL_227:
      v221 = afterRelationList;
      v222 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v221, v222, v223);
      v67 = changeSvtVoiceIdList;
      LODWORD(v68) = changeSvtVoiceIdList->max_length;
      v69 = v255 + 1;
      if ( (__int64)(v255 + 1) >= (int)v68 )
        goto LABEL_228;
    }
    v80 = 0LL;
    while ( 1 )
    {
      if ( v80 >= (unsigned int)v79 )
        goto LABEL_268;
      v81 = v78->m_Items[v80 + 1];
      v259 = v80;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( !v61 )
        goto LABEL_267;
      limitCount = v81;
      EnableInfo = VoiceMaster__getEnableInfo(
                     (VoiceMaster_o *)v61,
                     (int32_t)transformNameSprite,
                     svtId,
                     v81,
                     disableCondTypeList,
                     0,
                     0,
                     0LL);
      v260 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_VoiceEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v260,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_VoiceEntity___ctor__);
      if ( !EnableInfo )
        goto LABEL_267;
      max_length = EnableInfo->max_length;
      v266 = EnableInfo;
      if ( max_length >= 1 )
        break;
LABEL_128:
      v144 = firstPriority;
      v145 = ++firstPriority;
      v146 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v147 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v147 = BalanceConfig_TypeInfo;
      }
      if ( v146 == v147->static_fields->ServantIdJekyll )
      {
        transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transformNameSprite )
          goto LABEL_267;
        v149 = DataManager__GetMasterData_object_(
                 (DataManager_o *)transformNameSprite,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4A48C25 )
        {
          sub_1B863B8(&NetworkManager_TypeInfo, v148);
          byte_4A48C25 = 1;
        }
        v150 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v150 = NetworkManager_TypeInfo;
        }
        v151 = v150->static_fields->userIdNumber;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        if ( !v149 )
          goto LABEL_267;
        v152 = UserServantCollectionMaster__GetEntityDefinitely(
                 (UserServantCollectionMaster_o *)v149,
                 v151,
                 (int32_t)transformNameSprite,
                 0LL);
        transformNameSprite = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v260, 0LL);
        if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        {
          if ( !v260 )
            goto LABEL_267;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v267,
            v260,
            (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
          v270 = v267;
          while ( 1 )
          {
            v153 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v270,
                     (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
            if ( !v153 )
              break;
            if ( !v270.fields._current )
              sub_1B86614(v153, v154);
            if ( !v152 )
              sub_1B86614(v153, v154);
            if ( UserServantCollectionEntity__IsPlayed(v152, HIDWORD(v270.fields._current[3].klass), 0LL) )
            {
              v155 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v156 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v156 = BalanceConfig_TypeInfo;
              }
              v157 = VoiceMaster__getEnableInfo(
                       v258,
                       v155,
                       v156->static_fields->ServantIdHyde,
                       limitCount,
                       0LL,
                       0,
                       0,
                       0LL);
              v159 = v157;
              if ( !v157 )
                sub_1B86614(0LL, v158);
              if ( (int)v157->max_length >= 1 )
              {
                v160 = 0LL;
                do
                {
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !itemList )
                    sub_1B86614(v157, v158);
                  v162 = itemList->fields._size;
                  v164 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v165 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v165 = BalanceConfig_TypeInfo;
                  }
                  if ( v160 >= v159->max_length )
                    sub_1B8661C(v165, v163);
                  v166 = v159->m_Items[v160];
                  ServantIdHyde = v165->static_fields->ServantIdHyde;
                  v168 = (ServantStatusVoiceListViewItem_o *)sub_1B86604(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v168,
                    v162,
                    v164,
                    ServantIdHyde,
                    limitCount,
                    v166,
                    v145,
                    0,
                    0,
                    v250);
                  v173 = itemList->fields._items;
                  v174 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v173 )
                    sub_1B86614(v169, v170);
                  v175 = itemList->fields._size;
                  if ( (unsigned int)v175 >= v173->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v168,
                      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v176 = &v173->obj.klass + v175;
                    itemList->fields._size = v175 + 1;
                    v176[4] = (Il2CppClass *)v168;
                    sub_1B8635C((CGThumbnailListItem_o *)(v176 + 4), (int32_t)v168, v171, v172);
                  }
                  ++v160;
                }
                while ( (__int64)v160 < (int)v159->max_length );
              }
              firstPriority = v144 + 2;
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v270,
            (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
        }
      }
      else
      {
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        v177 = (int)transformNameSprite;
        v178 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v178 = BalanceConfig_TypeInfo;
        }
        static_fields = v178->static_fields;
        if ( v177 == static_fields->ServantIdMashu1 )
        {
          if ( !v178->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v178);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          if ( limitCount != static_fields->SpecialLimitCountPLD )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_38640612(115, 0LL) )
            {
              v180 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v181 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v181 = BalanceConfig_TypeInfo;
              }
              v182 = v145;
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      v258,
                                      v180,
                                      v181->static_fields->ServantIdMashu2,
                                      limitCount,
                                      0LL,
                                      0,
                                      0,
                                      0LL);
              if ( !transformNameSprite )
                goto LABEL_267;
              v183 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v184 = 0LL;
                while ( 1 )
                {
                  v185 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v185 )
                    goto LABEL_267;
                  v186 = v185->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v187 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v184 >= *((unsigned int *)v183 + 6) )
                    break;
                  v188 = (VoiceInfo_o *)v183[v184 + 4];
                  ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
                  v190 = (ServantStatusVoiceListViewItem_o *)sub_1B86604(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v190,
                    v186,
                    v187,
                    ServantIdMashu2,
                    limitCount,
                    v188,
                    v182,
                    0,
                    0,
                    v250);
                  v193 = v185->fields._items;
                  v194 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v185->fields._version;
                  if ( !v193 )
                    goto LABEL_267;
                  v195 = v185->fields._size;
                  if ( (unsigned int)v195 >= v193->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v185,
                      (Il2CppObject *)v190,
                      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v196 = &v193->obj.klass + v195;
                    v185->fields._size = v195 + 1;
                    v196[4] = (Il2CppClass *)v190;
                    sub_1B8635C((CGThumbnailListItem_o *)(v196 + 4), (int32_t)v190, v191, v192);
                  }
                  if ( (__int64)++v184 >= *((int *)v183 + 6) )
                    goto LABEL_191;
                }
LABEL_268:
                sub_1B8661C(transformNameSprite, v51);
              }
LABEL_191:
              v145 = v144 + 2;
              firstPriority = v144 + 2;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4A48C25 )
            {
              sub_1B863B8(&NetworkManager_TypeInfo, v51);
              byte_4A48C25 = 1;
            }
            v197 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v197 = NetworkManager_TypeInfo;
            }
            v198 = BalanceConfig_TypeInfo;
            v199 = v197->static_fields->userIdNumber;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v198 = BalanceConfig_TypeInfo;
            }
            v200 = v198->static_fields;
            MashuTdGradeUpQuestId = v200->MashuTdGradeUpQuestId;
            MashuTdGradeUpQuestPhase = v200->MashuTdGradeUpQuestPhase;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                            v199,
                                            MashuTdGradeUpQuestId,
                                            MashuTdGradeUpQuestPhase,
                                            -1,
                                            0,
                                            0LL);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
            {
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              transformNameSprite = v254;
              if ( !v254 )
                goto LABEL_267;
              transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                              v254,
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
                if ( svtVoiceId != *(_DWORD *)(*((_QWORD *)transformNameSprite + 23) + 352LL) )
                {
                  v204 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v205 = v145;
                  v206 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v206 = BalanceConfig_TypeInfo;
                  }
                  transformNameSprite = VoiceMaster__getEnableInfo(
                                          v258,
                                          v204,
                                          v206->static_fields->ServantIdMashu3,
                                          limitCount,
                                          0LL,
                                          0,
                                          0,
                                          0LL);
                  if ( !transformNameSprite )
                    goto LABEL_267;
                  v207 = transformNameSprite;
                  if ( *((int *)transformNameSprite + 6) >= 1 )
                  {
                    v208 = 0LL;
                    do
                    {
                      v209 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      if ( !v209 )
                        goto LABEL_267;
                      v210 = v209->fields._size;
                      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                      v211 = (int)transformNameSprite;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( v208 >= *((unsigned int *)v207 + 6) )
                        goto LABEL_268;
                      v212 = (VoiceInfo_o *)v207[v208 + 4];
                      ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                      v214 = (ServantStatusVoiceListViewItem_o *)sub_1B86604(ServantStatusVoiceListViewItem_TypeInfo);
                      ServantStatusVoiceListViewItem___ctor(
                        v214,
                        v210,
                        v211,
                        ServantIdMashu3,
                        limitCount,
                        v212,
                        v205,
                        0,
                        0,
                        v250);
                      v217 = v209->fields._items;
                      v218 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v209->fields._version;
                      if ( !v217 )
                        goto LABEL_267;
                      v219 = v209->fields._size;
                      if ( (unsigned int)v219 >= v217->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v209,
                          (Il2CppObject *)v214,
                          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v220 = &v217->obj.klass + v219;
                        v209->fields._size = v219 + 1;
                        v220[4] = (Il2CppClass *)v214;
                        sub_1B8635C((CGThumbnailListItem_o *)(v220 + 4), (int32_t)v214, v215, v216);
                      }
                    }
                    while ( (__int64)++v208 < *((int *)v207 + 6) );
                  }
                  firstPriority = v205 + 1;
                }
              }
            }
          }
        }
      }
      v78 = VoiceLimitCountList;
      v61 = (Il2CppObject *)v258;
      LODWORD(v79) = VoiceLimitCountList->max_length;
      v80 = v259 + 1;
      if ( (__int64)(v259 + 1) >= (int)v79 )
        goto LABEL_227;
    }
    v84 = 0;
    while ( 1 )
    {
      if ( v84 >= max_length )
        goto LABEL_268;
      v85 = &v266->obj.klass + (int)v84;
      v88 = v85[4];
      v87 = (VoiceInfo_o **)(v85 + 4);
      v86 = v88;
      if ( !v88 )
        goto LABEL_267;
      name = (char *)v86->_1.name;
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
          if ( !v260 )
            goto LABEL_267;
          v95 = v260->fields._items;
          v96 = Method_System_Collections_Generic_List_VoiceEntity__Add__;
          ++v260->fields._version;
          if ( !v95 )
            goto LABEL_267;
          v97 = v260->fields._size;
          if ( (unsigned int)v97 >= v95->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v260,
              (Il2CppObject *)name,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
          }
          else
          {
            v98 = &v95->obj.klass + v97;
            v260->fields._size = v97 + 1;
            v98[4] = (Il2CppClass *)name;
            sub_1B8635C((CGThumbnailListItem_o *)(v98 + 4), (int32_t)name, v90, v91);
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
              if ( v84 >= v266->max_length )
                goto LABEL_268;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              limitCount,
                                              *v87,
                                              v92);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
              {
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_267;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v267,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v271 = v267;
                do
                {
                  v101 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &v271,
                           (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v101 )
                    goto LABEL_102;
                  current = v271.fields._current;
                  if ( !v271.fields._current
                    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                        LOBYTE(v271.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                    || (ServantStatusVoiceListViewItem_c *)v271.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1B86614(v101, v102);
                  }
                  klass = v271.fields._current[10].klass;
                  if ( !klass )
                    sub_1B86614(v101, v102);
                }
                while ( HIDWORD(klass->_1.namespaze) != 2
                     || LODWORD(klass->_1.this_arg.data) != 7
                     || HIDWORD(klass->_1.this_arg.data) != *((_DWORD *)name + 13)
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v271.fields._current,
                          v102) != svtId );
                v106 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                v109 = v106;
                if ( v84 >= v266->max_length )
                  sub_1B8661C(v106, (unsigned int)v106);
                goto LABEL_120;
              }
LABEL_82:
              if ( v84 >= v266->max_length )
                goto LABEL_268;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              *v87,
                                              v100);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                goto LABEL_117;
              voiceLabelSpec = 1;
              goto LABEL_104;
            }
          }
          else if ( v99 == 18 )
          {
            if ( v84 >= v266->max_length )
              goto LABEL_268;
            transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                            (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                            svtId,
                                            limitCount,
                                            *v87,
                                            v92);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              goto LABEL_82;
            transformNameSprite = this->fields.itemList;
            if ( !transformNameSprite )
              goto LABEL_267;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v267,
              (System_Collections_Generic_List_object__o *)transformNameSprite,
              (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v271 = v267;
            do
            {
              v111 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v271,
                       (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v111 )
                goto LABEL_102;
              current = v271.fields._current;
              if ( !v271.fields._current
                || (v113 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v271.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v113)
                || (ServantStatusVoiceListViewItem_c *)v271.fields._current->klass->_2.typeHierarchy[v113 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_1B86614(v111, v112);
              }
              v114 = v271.fields._current[10].klass;
              if ( !v114 )
                sub_1B86614(v111, v112);
            }
            while ( HIDWORD(v114->_1.namespaze) != 2
                 || LODWORD(v114->_1.this_arg.data) != 18
                 || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                      (ServantStatusVoiceListViewItem_o *)v271.fields._current,
                      v112) != svtId );
            v115 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
            if ( v84 >= v266->max_length )
              sub_1B8661C(v115, v116);
            if ( !*v87 )
              sub_1B86614(v115, v116);
            voiceEntity = (*v87)->fields.voiceEntity;
            if ( !voiceEntity )
              sub_1B86614(v115, v116);
            v118 = v115;
            id = voiceEntity->fields.id;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47470088(id, 0LL);
            if ( !v261 )
              sub_1B86614(0LL, v120);
            if ( !VoicePlayCondMaster__isVoiceCond(v261, v118, v121, 81, 0LL) )
            {
              v143 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v109 = v143;
              if ( v84 >= v266->max_length )
                sub_1B8661C(v143, (unsigned int)v143);
LABEL_120:
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v109,
                svtId,
                limitCount,
                *v87,
                v107,
                v108);
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v271,
                (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              goto LABEL_117;
            }
LABEL_102:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v271,
              (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
      }
      voiceLabelSpec = 0;
LABEL_104:
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( v84 >= v266->max_length )
        goto LABEL_268;
      if ( !*v87 )
        goto LABEL_267;
      v122 = (*v87)->fields.voiceEntity;
      if ( !v122 )
        goto LABEL_267;
      v123 = (int)transformNameSprite;
      v124 = v122->fields.id;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47470088(v124, 0LL);
      transformNameSprite = v261;
      if ( !v261 )
        goto LABEL_267;
      transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v261, v123, v125, 81, 0LL);
      if ( !name )
        goto LABEL_267;
      v126 = *((_DWORD *)name + 12);
      v127 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v128 = v126 == 18;
      v129 = v126 == 7;
      if ( !v127 )
        goto LABEL_267;
      v130 = (char)transformNameSprite;
      v131 = v127->fields._size;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( v84 >= v266->max_length )
        goto LABEL_268;
      v132 = *v87;
      v133 = firstPriority;
      v134 = (int)transformNameSprite;
      v135 = v130 & (v128 || v129);
      v136 = (ServantStatusVoiceListViewItem_o *)sub_1B86604(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v136, v131, v134, svtId, limitCount, v132, v133, v135, voiceLabelSpec, v250);
      v139 = v127->fields._items;
      v140 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v127->fields._version;
      if ( !v139 )
        goto LABEL_267;
      v141 = v127->fields._size;
      if ( (unsigned int)v141 >= v139->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v127,
          (Il2CppObject *)v136,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
      }
      else
      {
        v142 = &v139->obj.klass + v141;
        v127->fields._size = v141 + 1;
        v142[4] = (Il2CppClass *)v136;
        sub_1B8635C((CGThumbnailListItem_o *)(v142 + 4), (int32_t)v136, v137, v138);
      }
LABEL_117:
      ++v84;
      max_length = v266->max_length;
      if ( (int)v84 >= max_length )
        goto LABEL_128;
    }
  }
LABEL_228:
  v224 = this->fields.itemList;
  if ( !v224 )
    goto LABEL_267;
  v225 = v224->fields._size;
  v226 = sub_1B86604(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v226,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v225 - 1 >= 1 )
  {
    for ( i = 0; i != v225 - 1; ++i )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_267;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              i,
                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_267;
      v228 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v229 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v229
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v229 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_267;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v51) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v228, v51);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v226 )
            goto LABEL_267;
          v230 = (const MethodInfo *)*(unsigned int *)(v226 + 24);
          v231 = *(_DWORD *)(v226 + 28) + 1;
          *(_DWORD *)(v226 + 24) = 0;
          *(_DWORD *)(v226 + 28) = v231;
          if ( (int)v230 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v226 + 16), 0, (int32_t)v230, 0LL);
          v232 = i + 1;
          if ( i + 1 < v225 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_267;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v232,
                                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_267;
              v233 = (Il2CppObject *)transformNameSprite;
              v234 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v234
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v234
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_267;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v51);
              v237 = ServantStatusVoiceListViewItem__get_OpenName(v228, v236);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v237, 0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v239 = *(_QWORD *)(v226 + 16);
                v240 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v226 + 28);
                if ( !v239 )
                  goto LABEL_267;
                v241 = *(int *)(v226 + 24);
                if ( (unsigned int)v241 >= *(_DWORD *)(v239 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v226,
                    v233,
                    *(const MethodInfo_35FC958 **)(*(_QWORD *)(v240[4] + 192LL) + 112LL));
                }
                else
                {
                  v242 = v239 + 8 * v241;
                  *(_DWORD *)(v226 + 24) = v241 + 1;
                  *(_QWORD *)(v242 + 32) = v233;
                  sub_1B8635C((CGThumbnailListItem_o *)(v242 + 32), (int32_t)v233, (int32_t)v230, v238);
                }
              }
            }
            while ( v225 != ++v232 );
          }
          if ( *(int *)(v226 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v228, 1, v230);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v267,
              (System_Collections_Generic_List_object__o *)v226,
              (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v243 = 2;
            for ( j = v267;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)j.fields._current,
                    v243++,
                    v246) )
            {
              v244 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &j,
                       (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v244 )
                break;
              if ( j.fields._current )
              {
                v247 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(j.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v247
                  && (ServantStatusVoiceListViewItem_c *)j.fields._current->klass->_2.typeHierarchy[v247 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1B86614(v244, v245);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &j,
              (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_267;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v251, 0LL);
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

  if ( (byte_4A4C499 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B863B8(&ServantStatusVoiceListViewItem_TypeInfo, v5);
    byte_4A4C499 = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  struct VoiceEntity_o *voiceEntity; // x8
  __int64 svtVoiceType; // x8
  __int64 v14; // x20
  struct VoiceEntity_o *v15; // x8
  System_String_o *v16; // x19
  System_String_o *v17; // x0
  __int64 v18; // x20
  int v19; // w8
  System_String_o *v20; // x19
  unsigned int v21; // w21
  __int64 v22; // x22
  __int64 v23; // x8
  __int64 v24; // x8

  if ( (byte_4A4C497 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B863B8(&StringLiteral_15886/*"_"*/, v9);
    byte_4A4C497 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_40896676(
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
    sub_1B8661C(Instance, v11);
  v14 = *((_QWORD *)&Instance->fields._DispLog + svtVoiceType);
  if ( !v14 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0LL);
  v15 = voiceInfo->fields.voiceEntity;
  if ( !v15
    || (v16 = (System_String_o *)Instance, (Instance = (DataManager_o *)v15->fields.id) == 0LL)
    || (v17 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass[1]._1.image),
        Instance = (DataManager_o *)System_String__Concat_61683424(
                                      v16,
                                      (System_String_o *)StringLiteral_15886/*"_"*/,
                                      v17,
                                      0LL),
        (v18 = *(_QWORD *)(v14 + 32)) == 0) )
  {
LABEL_25:
    sub_1B86614(Instance, v11);
  }
  v19 = *(_DWORD *)(v18 + 24);
  if ( v19 < 1 )
    return 0;
  v20 = (System_String_o *)Instance;
  v21 = 0;
  while ( 1 )
  {
    if ( v21 >= v19 )
      goto LABEL_26;
    v22 = *(_QWORD *)(v18 + 8LL * (int)v21 + 32);
    if ( !v22 )
      goto LABEL_25;
    v23 = *(_QWORD *)(v22 + 64);
    if ( !v23 )
      goto LABEL_25;
    if ( !*(_DWORD *)(v23 + 24) )
      goto LABEL_26;
    v24 = *(_QWORD *)(v23 + 32);
    if ( !v24 )
      goto LABEL_25;
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v24 + 16), v20, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( *(_DWORD *)(v22 + 80) )
        return 1;
    }
    v19 = *(_DWORD *)(v18 + 24);
    if ( (int)++v21 >= v19 )
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
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  DataManager_o *v14; // x19
  unsigned int v15; // w23
  bool v16; // w25
  ServantVoiceCond_o *v17; // x8
  int32_t condType; // w9
  int value; // w26
  __int64 v20; // x20
  __int64 v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A4C498 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A4C498 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    byte_4A48C25 = 1;
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
    v14 = Instance;
    v15 = 0;
    v16 = 1;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1B8661C(Instance, v10);
      v17 = servantVoiceConds->m_Items[v15];
      if ( !v17 )
        break;
      condType = v17->fields.condType;
      if ( condType == 20 || condType == 3 )
        v16 = 0;
      value = v17->fields.value;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v14 )
          break;
        v20 = *(__int64 *)((char *)&v14->fields.lockCountObj + 4);
        v21 = *(_QWORD *)&v14->fields.isFailedLoad;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v20;
        *(_QWORD *)&v23.fields.fakeValue = v21;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v23, 0LL);
        if ( (int)Instance >= value )
          v16 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v15 >= max_length )
        return v16;
    }
LABEL_31:
    sub_1B86614(Instance, v10);
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
  if ( (byte_4A4C49F & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1B863B8(&ServantStatusVoiceListViewItem_TypeInfo, obj);
    byte_4A4C49F = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1B86614(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
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

  if ( (byte_4A4C49E & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4C49E = 1;
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
          sub_1B86614(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4A4C49C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1B863B8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v12);
    sub_1B863B8(&StringLiteral_9791/*"OnMoveEnd"*/, v13);
    byte_4A4C49C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B86614(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9791/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B86614(v19, v20);
      ServantStatusVoiceListViewObject__Init_36837012(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_36836508(
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

  if ( (byte_4A4C49D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v9);
    sub_1B863B8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v10);
    sub_1B863B8(&StringLiteral_9791/*"OnMoveEnd"*/, v11);
    byte_4A4C49D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B86614(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9791/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B86614(v17, v18);
      ServantStatusVoiceListViewObject__Init_36837620((ServantStatusVoiceListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_36835536(this, mode, -1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_36835536(
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

  if ( (byte_4A4C49B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__, v12);
    sub_1B863B8(&ServantStatusVoiceListViewItem_TypeInfo, v13);
    sub_1B863B8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v14);
    sub_1B863B8(&StringLiteral_9791/*"OnMoveEnd"*/, v15);
    byte_4A4C49B = 1;
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
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v32; ; BYTE1(i.fields._current[12].klass) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v17 )
        break;
      if ( !i.fields._current )
        sub_1B86614(v17, v18);
      methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1B86614(v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_36835408((ServantStatusVoiceListViewObject_o *)itemList, 4, v25);
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
                   (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v30 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_36837012((ServantStatusVoiceListViewObject_o *)Item, 5, v30, 0.1, v31);
          if ( ++v28 >= v27->fields._size )
            return;
        }
LABEL_30:
        sub_1B86614(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9791/*"OnMoveEnd"*/,
        0.2,
        0LL);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_36836508(this, 3, v21);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_36836452(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc2 = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_36835536(this, mode, -1, v6);
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
  if ( (byte_4A4C49A & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1B863B8(&ServantStatusVoiceListViewObject_TypeInfo, obj);
    byte_4A4C49A = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1B86614(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_36835408(
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

  if ( (byte_4A4C48E & 1) == 0 )
  {
    sub_1B863B8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A4C48E = 1;
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
    v8 = sub_1BC0674(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
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

  if ( (byte_4A4C490 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4C490 = 1;
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
    v8 = sub_1BC0674(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
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

  if ( (byte_4A4C493 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A4C493 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
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
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B86614(0LL, v18);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
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
          v27 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
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
        v27 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
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

  if ( (byte_4A4C492 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A4C492 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B86614(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B86614(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B86614(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B86614(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B8635C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A4C48F & 1) == 0 )
  {
    sub_1B863B8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A4C48F = 1;
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
    v8 = sub_1BC0674(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
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

  if ( (byte_4A4C491 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4C491 = 1;
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
    v8 = sub_1BC0674(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D11E8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D1190;
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
  if ( (byte_4A4C4A0 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo, v9);
    byte_4A4C4A0 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             ServantStatusVoiceListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v14, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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