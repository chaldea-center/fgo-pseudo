void __fastcall CombineExpUpInfo___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CombineExpUpInfo_c *v4; // x8

  if ( (byte_42E9988 & 1) == 0 )
  {
    sub_B5D5C4(&CombineExpUpInfo_TypeInfo, v1, v2, v3);
    byte_42E9988 = 1;
  }
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_ON_WIDTH = 56;
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_ON_HEIGHT = 36;
  v4 = CombineExpUpInfo_TypeInfo;
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_OFF_WIDTH = 58;
  v4->static_fields->TYPE_BUTTON_OFF_HEIGHT = 38;
}


void __fastcall CombineExpUpInfo___ctor(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_String_array *v31; // x20
  __int64 v32; // x0
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x0
  __int64 v62; // x0

  if ( (byte_42E9987 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&string___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17203/*"btn_hp_"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17158/*"btn_atk_"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17200/*"btn_experience_"*/, v20, v21, v22);
    byte_42E9987 = 1;
  }
  v23 = sub_B5D5DC(string___TypeInfo, 3LL);
  if ( !v23 )
LABEL_23:
    sub_B5D69C(v23, v24);
  v31 = (struct System_String_array *)v23;
  v32 = StringLiteral_17200/*"btn_experience_"*/;
  if ( StringLiteral_17200/*"btn_experience_"*/ )
  {
    v32 = sub_B5D684(StringLiteral_17200/*"btn_experience_"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_22;
    v33 = (System_Int32_array **)StringLiteral_17200/*"btn_experience_"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !v31->max_length )
    goto LABEL_21;
  v31->m_Items[0] = (System_String_o *)v33;
  sub_B5D560((BattleServantConfConponent_o *)v31->m_Items, v33, v25, v26, v27, v28, v29, v30);
  v32 = StringLiteral_17158/*"btn_atk_"*/;
  if ( StringLiteral_17158/*"btn_atk_"*/ )
  {
    v32 = sub_B5D684(StringLiteral_17158/*"btn_atk_"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_22;
    v40 = (System_Int32_array **)StringLiteral_17158/*"btn_atk_"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v31->max_length <= 1 )
    goto LABEL_21;
  v31->m_Items[1] = (System_String_o *)v40;
  sub_B5D560((BattleServantConfConponent_o *)&v31->m_Items[1], v40, v34, v35, v36, v37, v38, v39);
  v32 = StringLiteral_17203/*"btn_hp_"*/;
  if ( StringLiteral_17203/*"btn_hp_"*/ )
  {
    v32 = sub_B5D684(StringLiteral_17203/*"btn_hp_"*/, v31->obj.klass->_1.element_class);
    if ( v32 )
    {
      v47 = (System_Int32_array **)StringLiteral_17203/*"btn_hp_"*/;
      goto LABEL_18;
    }
LABEL_22:
    v62 = sub_B5D6BC(v32);
    sub_B5D668(v62, 0LL);
  }
  v47 = 0LL;
LABEL_18:
  if ( v31->max_length <= 2 )
  {
LABEL_21:
    v61 = sub_B5D6C8(v32);
    sub_B5D668(v61, 0LL);
  }
  v31->m_Items[2] = (System_String_o *)v47;
  sub_B5D560((BattleServantConfConponent_o *)&v31->m_Items[2], v47, v41, v42, v43, v44, v45, v46);
  this->fields.btnSpriteNameList = v31;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.btnSpriteNameList,
    (System_Int32_array **)v31,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v54,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v54 )
    goto LABEL_23;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v54,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v54,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v54,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v54,
    4,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v54,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v54,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v54,
    7,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v54,
    1001,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v54;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.SortClassOrder,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineExpUpInfo__ExpUpInfoSet(
        CombineExpUpInfo_o *this,
        int32_t kind,
        int32_t type,
        bool isFirst,
        System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *afterAction,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o **p_changeAction; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x0
  SvtClassAttri_c *v54; // x0
  __int64 v55; // x21
  DataManager_o *Instance; // x0
  __int64 v57; // x1
  const MethodInfo *v58; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  signed __int64 size; // x27
  System_Int32_array *v62; // x22
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  UserServantStorageMaster_o *v64; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v66; // x24
  UserServantEntity_array *v67; // x23
  unsigned __int64 i; // x25
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *v69; // x24
  int32_t v70; // w24
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x4
  int32_t nowType; // w8
  int32_t v75; // w24
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x6
  int32_t v78; // w3
  struct DataMasterBase_array *datalist; // x8
  __int64 v80; // x9
  __int64 v81; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x8
  DataManager_o *v83; // x8
  int32_t v84; // w1
  int32_t v85; // w4
  int32_t v86; // w5
  struct CombineExpUpClassInfo_array *v87; // x8
  struct CombineExpUpClassInfo_array *v88; // x8
  System_Int32_array *v89; // x2
  System_Int32_array *v90; // x3
  __int64 v91; // x0

  if ( (byte_42E997F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__Invoke__,
      kind,
      type,
      isFirst);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v16, v17, v18);
    sub_B5D5C4(&int___TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int_____ctor__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__, v37, v38, v39);
    sub_B5D5C4(&System_Collections_Generic_List_int____TypeInfo, v40, v41, v42);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46, v47, v48);
    sub_B5D5C4(&SvtClassAttri_TypeInfo, v49, v50, v51);
    byte_42E997F = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  p_changeAction = &this->fields.changeAction;
  if ( afterAction )
  {
    *p_changeAction = afterAction;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.changeAction,
      (System_Int32_array **)afterAction,
      *(System_String_array ***)&type,
      (System_String_array **)isFirst,
      (System_Boolean_array **)afterAction,
      (System_Int32_array **)method,
      v6,
      v7);
  }
  if ( *p_changeAction )
    System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___Invoke(
      *p_changeAction,
      this->fields.nowKind,
      this->fields.nowType,
      (const MethodInfo_25982CC *)Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__Invoke__);
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v53,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
  v54 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v54 = SvtClassAttri_TypeInfo;
  }
  v55 = sub_B5D5DC(int___TypeInfo, v54->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_B5D5DC(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_84;
  nowKind = this->fields.nowKind;
  size = SortClassOrder->fields._size;
  v62 = (System_Int32_array *)Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_84;
      v64 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             MasterData_WarQuestSelectionMaster,
                                                                             0LL);
      v66 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v66,
        CombineMaterialList,
        (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944);
      if ( !v64 )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v64, 0LL);
      if ( !v66 )
        goto LABEL_84;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v66,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v66,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_26;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
      goto LABEL_26;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
LABEL_26:
      v67 = (UserServantEntity_array *)Instance;
      goto LABEL_28;
  }
  v67 = 0LL;
LABEL_28:
  if ( (int)size >= 1 )
  {
    for ( i = 0LL; (__int64)i < size; ++i )
    {
      v69 = this->fields.SortClassOrder;
      if ( !v69 )
        goto LABEL_84;
      if ( i >= (unsigned int)v69->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v70 = v69->fields._items->m_Items[i + 1];
      if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SvtClassAttri_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      }
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(v70, 0LL);
      nowType = this->fields.nowType;
      v75 = (int)ClassId;
      if ( nowType == 1 )
      {
        v78 = 1;
      }
      else
      {
        if ( !nowType )
        {
          Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v67, (int32_t)ClassId, v72);
          if ( !Instance )
            return (char)Instance;
          goto LABEL_43;
        }
        v78 = 2;
      }
      Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v67, (int32_t)ClassId, v78, v73);
      if ( !Instance )
        return (char)Instance;
LABEL_43:
      datalist = Instance->fields.datalist;
      if ( !datalist )
      {
        LOBYTE(Instance) = 0;
        return (char)Instance;
      }
      if ( (int)datalist >= 1 )
      {
        if ( !(_DWORD)datalist )
        {
LABEL_83:
          v91 = sub_B5D6C8(Instance);
          sub_B5D668(v91, 0LL);
        }
        v80 = 0LL;
        while ( 1 )
        {
          v81 = *((_QWORD *)&Instance->fields.lookup + v80);
          if ( !v81 || !v55 )
            break;
          if ( (unsigned int)v80 >= *(_DWORD *)(v55 + 24) )
            goto LABEL_83;
          *(_DWORD *)(v55 + 32 + 4 * v80) = *(_DWORD *)(v81 + 16);
          if ( !v62 )
            break;
          if ( (unsigned int)v80 >= v62->max_length )
            goto LABEL_83;
          v62->m_Items[v80 + 1] = *(_DWORD *)(v81 + 20);
          if ( (int)v80 + 1 >= (int)datalist )
            goto LABEL_55;
          if ( (unsigned int)++v80 >= LODWORD(Instance->fields.datalist) )
            goto LABEL_83;
        }
LABEL_84:
        sub_B5D69C(Instance, v57);
      }
LABEL_55:
      if ( isFirst )
      {
        if ( this->fields.nowType )
        {
          expUpClassInfoList = this->fields.expUpClassInfoList;
          if ( !expUpClassInfoList )
            goto LABEL_84;
          if ( i >= expUpClassInfoList->max_length )
            goto LABEL_83;
          v83 = (DataManager_o *)expUpClassInfoList->m_Items[i];
          if ( !v83 )
            goto LABEL_84;
          if ( LODWORD(Instance->fields.datalist) == 5 )
          {
            if ( v75 == 1001 )
            {
              v84 = 1001;
              v85 = 1;
              v86 = 4;
              Instance = v83;
              goto LABEL_77;
            }
            v85 = 2;
LABEL_76:
            v86 = 3;
            Instance = v83;
            v84 = v75;
LABEL_77:
            v89 = (System_Int32_array *)v55;
            v90 = v62;
LABEL_78:
            CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v84, v89, v90, v85, v86, v77);
            continue;
          }
          if ( v75 != 1001 )
          {
            v85 = 1;
            goto LABEL_76;
          }
          v84 = 1001;
          v86 = 4;
          Instance = v83;
        }
        else
        {
          v88 = this->fields.expUpClassInfoList;
          if ( !v88 )
            goto LABEL_84;
          if ( i >= v88->max_length )
            goto LABEL_83;
          Instance = (DataManager_o *)v88->m_Items[i];
          if ( !Instance )
            goto LABEL_84;
          v86 = 5;
          v84 = v75;
        }
        v89 = (System_Int32_array *)v55;
        v90 = v62;
        v85 = 0;
        goto LABEL_78;
      }
      v87 = this->fields.expUpClassInfoList;
      if ( !v87 )
        goto LABEL_84;
      if ( i >= v87->max_length )
        goto LABEL_83;
      Instance = (DataManager_o *)v87->m_Items[i];
      if ( !Instance )
        goto LABEL_84;
      CombineExpUpClassInfo__Set_26964320((CombineExpUpClassInfo_o *)Instance, v62, v76);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v58);
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassMaterialInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  SvtClassAttri_c *v18; // x0
  CombineExpUpInfo_MaterialData_array *v19; // x21
  __int64 Instance; // x0
  __int64 v21; // x1
  System_Int32_array *TargetClassMaterialSvtIdList; // x0
  System_Int32_array *v23; // x22
  __int64 v24; // x25
  unsigned __int64 v25; // x26
  CombineExpUpInfo_MaterialData_o **m_Items; // x27
  CombineExpUpInfo_MaterialData_o *v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  signed __int64 v34; // x9
  __int64 v35; // x23
  unsigned __int64 v36; // x8
  __int64 v37; // x13
  int32_t v38; // w14
  __int64 v39; // x23
  il2cpp_array_size_t v40; // w25
  Il2CppClass **v41; // x8
  UserServantEntity_o *v42; // x22
  SvtClassAttri_c *v43; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  CombineExpUpInfo_MaterialData_o *v45; // x8
  __int64 v46; // x0
  __int64 v48; // x0

  if ( (byte_42E9980 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)svtList, classId, method);
    sub_B5D5C4(&CombineExpUpInfo_MaterialData___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CombineExpUpInfo_MaterialData_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&SvtClassAttri_TypeInfo, v15, v16, v17);
    byte_42E9980 = 1;
  }
  v18 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v18 = SvtClassAttri_TypeInfo;
  }
  v19 = (CombineExpUpInfo_MaterialData_array *)sub_B5D5DC(
                                                 CombineExpUpInfo_MaterialData___TypeInfo,
                                                 v18->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_48;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  if ( !TargetClassMaterialSvtIdList )
    return 0LL;
  v23 = TargetClassMaterialSvtIdList;
  if ( !*(_QWORD *)&TargetClassMaterialSvtIdList->max_length )
    return 0LL;
  v24 = 0LL;
  v25 = 0LL;
  m_Items = v19->m_Items;
  while ( 1 )
  {
    Instance = (__int64)SvtClassAttri_TypeInfo;
    if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtClassAttri_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      Instance = (__int64)SvtClassAttri_TypeInfo;
    }
    v34 = **(int **)(Instance + 184);
    if ( (__int64)v25 >= v34 )
      break;
    v27 = (CombineExpUpInfo_MaterialData_o *)sub_B5D694(CombineExpUpInfo_MaterialData_TypeInfo);
    CombineExpUpInfo_MaterialData___ctor(v27, 0LL);
    if ( !v19 )
      goto LABEL_48;
    if ( v27 )
    {
      Instance = sub_B5D684(v27, v19->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v48 = sub_B5D6BC(0LL);
        sub_B5D668(v48, 0LL);
      }
    }
    if ( v25 >= v19->max_length )
      goto LABEL_45;
    m_Items[v25] = v27;
    sub_B5D560((BattleServantConfConponent_o *)&m_Items[v24], (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    ++v25;
    ++v24;
  }
  v35 = *(_QWORD *)&v23->max_length;
  if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    LODWORD(v34) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)v35 >= 1 )
  {
    if ( v19 )
    {
      v36 = 0LL;
      while ( ((_DWORD)v34 != (_DWORD)v35) + v36 < v19->max_length && v36 < v23->max_length )
      {
        v37 = *((_QWORD *)&v19->m_Items[(_DWORD)v34 != (_DWORD)v35] + v36);
        if ( !v37 )
          goto LABEL_48;
        v38 = v23->m_Items[++v36];
        *(_DWORD *)(v37 + 16) = v38;
        if ( (__int64)v36 >= (int)v35 )
          goto LABEL_30;
      }
LABEL_45:
      v46 = sub_B5D6C8(Instance);
      sub_B5D668(v46, 0LL);
    }
LABEL_48:
    sub_B5D69C(Instance, v21);
  }
LABEL_30:
  if ( !svtList )
    goto LABEL_48;
  v39 = *(_QWORD *)&svtList->max_length;
  if ( (int)v39 >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      v41 = &svtList->obj.klass + (int)v40;
      v42 = (UserServantEntity_o *)v41[4];
      if ( !v42 )
        goto LABEL_48;
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v41[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v42, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          v43 = SvtClassAttri_TypeInfo;
          if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v43 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v43->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v42, 0LL);
          if ( !v19 )
            goto LABEL_48;
          if ( (unsigned int)(MAX_EXP_UP_RARITY - Instance) >= v19->max_length )
            goto LABEL_45;
          v45 = v19->m_Items[MAX_EXP_UP_RARITY - (int)Instance];
          if ( !v45 )
            goto LABEL_48;
          ++v45->fields.num;
        }
      }
      if ( (int)++v40 >= (int)v39 )
        return v19;
      if ( v40 >= svtList->max_length )
        goto LABEL_45;
    }
  }
  return v19;
}


// local variable allocation has failed, the output may be wrong!
CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassStatusUpInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 Instance; // x0
  __int64 v27; // x1
  System_Int32_array *TargetClassStatusUpSvtIdList; // x24
  SvtClassAttri_c *v29; // x8
  __int64 v30; // x8
  __int64 v31; // x23
  int v32; // w22
  unsigned __int64 v33; // x27
  int32_t *v34; // x28
  int32_t v35; // w26
  ServantLeaderInfo_o *v36; // x25
  __int64 v37; // x9
  CombineExpUpInfo_MaterialData_array *v38; // x24
  BattleServantConfConponent_o *v39; // x25
  __int64 v40; // x20
  CombineExpUpInfo_MaterialData_o *v41; // x26
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  il2cpp_array_size_t v48; // w28
  BattleServantConfConponent_c *klass; // x8
  int v50; // w9
  __int64 v51; // x25
  il2cpp_array_size_t v52; // w20
  Il2CppClass **v53; // x8
  UserServantEntity_o *v54; // x23
  CombineExpUpInfo_MaterialData_o *v55; // x8
  __int64 v56; // x0
  __int64 v58; // x0
  int32_t v59; // [xsp+Ch] [xbp-54h]

  if ( (byte_42E9981 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)svtList, classId, *(_QWORD *)&type);
    sub_B5D5C4(&int___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CombineExpUpInfo_MaterialData___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CombineExpUpInfo_MaterialData_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ServantLeaderInfo_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SvtClassAttri_TypeInfo, v23, v24, v25);
    byte_42E9981 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_60;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  v29 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v29 = SvtClassAttri_TypeInfo;
  }
  Instance = sub_B5D5DC(int___TypeInfo, v29->static_fields->MAX_EXP_UP_RARITY);
  if ( !TargetClassStatusUpSvtIdList )
    goto LABEL_60;
  v30 = *(_QWORD *)&TargetClassStatusUpSvtIdList->max_length;
  v31 = Instance;
  v59 = classId;
  if ( (int)v30 < 1 )
    return 0LL;
  v32 = 0;
  v33 = 0LL;
  v34 = &TargetClassStatusUpSvtIdList->m_Items[1];
  do
  {
    if ( v33 >= (unsigned int)v30 )
    {
LABEL_57:
      v56 = sub_B5D6C8(Instance);
      sub_B5D668(v56, 0LL);
    }
    v35 = v34[v33];
    v36 = (ServantLeaderInfo_o *)sub_B5D694(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_29348816(v36, v35, 0, 1, 0LL);
    if ( type == 2 )
    {
      if ( !v36 )
        goto LABEL_60;
      if ( !v36->fields.hp && !v36->fields.adjustHp )
        goto LABEL_25;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_25;
      if ( !v36 )
        goto LABEL_60;
      if ( !v36->fields.atk && !v36->fields.adjustAtk )
        goto LABEL_25;
    }
    if ( v33 >= TargetClassStatusUpSvtIdList->max_length )
      goto LABEL_57;
    if ( !v31 )
      goto LABEL_60;
    if ( (unsigned int)v32 >= *(_DWORD *)(v31 + 24) )
      goto LABEL_57;
    v37 = v31 + 4LL * v32++;
    *(_DWORD *)(v37 + 32) = v34[v33];
LABEL_25:
    LODWORD(v30) = TargetClassStatusUpSvtIdList->max_length;
    ++v33;
  }
  while ( (__int64)v33 < (int)v30 );
  if ( !v32 )
    return 0LL;
  Instance = sub_B5D5DC(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v32);
  v38 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v32 >= 1 )
  {
    v39 = (BattleServantConfConponent_o *)(Instance + 32);
    v40 = 8LL;
    while ( 1 )
    {
      v41 = (CombineExpUpInfo_MaterialData_o *)sub_B5D694(CombineExpUpInfo_MaterialData_TypeInfo);
      CombineExpUpInfo_MaterialData___ctor(v41, 0LL);
      if ( !v38 )
        break;
      if ( v41 )
      {
        Instance = sub_B5D684(v41, v38->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v58 = sub_B5D6BC(0LL);
          sub_B5D668(v58, 0LL);
        }
      }
      v48 = v40 - 8;
      if ( (unsigned int)(v40 - 8) >= v38->max_length )
        goto LABEL_57;
      v39->klass = (BattleServantConfConponent_c *)v41;
      sub_B5D560(v39, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
      if ( v48 >= v38->max_length )
        goto LABEL_57;
      if ( !v31 )
        break;
      if ( v48 >= *(_DWORD *)(v31 + 24) )
        goto LABEL_57;
      klass = v39->klass;
      if ( !v39->klass )
        break;
      v50 = *(_DWORD *)(v31 + 4 * v40++);
      v39 = (BattleServantConfConponent_o *)((char *)v39 + 8);
      LODWORD(klass->_1.name) = v50;
      if ( (int)v40 - 8 >= v32 )
        goto LABEL_38;
    }
LABEL_60:
    sub_B5D69C(Instance, v27);
  }
LABEL_38:
  if ( !svtList )
    goto LABEL_60;
  v51 = *(_QWORD *)&svtList->max_length;
  if ( (int)v51 >= 1 )
  {
    v52 = 0;
    while ( 1 )
    {
      v53 = &svtList->obj.klass + (int)v52;
      v54 = (UserServantEntity_o *)v53[4];
      if ( !v54 )
        goto LABEL_60;
      Instance = UserServantEntity__IsStatusUp((UserServantEntity_o *)v53[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v54, 0LL);
        if ( (_DWORD)Instance == v59 )
        {
          if ( type == 2 )
          {
            if ( v54->fields.hp || v54->fields.adjustHp )
            {
LABEL_51:
              Instance = UserServantEntity__getRarity(v54, 0LL);
              if ( !v38 )
                goto LABEL_60;
              if ( (unsigned int)(v32 - Instance) >= v38->max_length )
                goto LABEL_57;
              v55 = v38->m_Items[v32 - (int)Instance];
              if ( !v55 )
                goto LABEL_60;
              ++v55->fields.num;
            }
          }
          else if ( type == 1 && (v54->fields.atk || v54->fields.adjustAtk) )
          {
            goto LABEL_51;
          }
        }
      }
      if ( (int)++v52 >= (int)v51 )
        return v38;
      if ( v52 >= svtList->max_length )
        goto LABEL_57;
    }
  }
  return v38;
}


void __fastcall CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x5

  if ( (byte_42E9984 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9984 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 1, 1, 0LL, v5);
  }
}


void __fastcall CombineExpUpInfo__OnClickChangeButton(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x5
  int32_t nowKind; // w8
  int32_t v7; // w1

  if ( (byte_42E9986 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9986 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  nowKind = this->fields.nowKind;
  if ( nowKind )
    v7 = 2 * (nowKind == 1);
  else
    v7 = 1;
  CombineExpUpInfo__ExpUpInfoSet(this, v7, this->fields.nowType, 0, 0LL, v5);
}


void __fastcall CombineExpUpInfo__OnClickLeft(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x5

  if ( (byte_42E9983 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9983 = 1;
  }
  if ( this->fields.nowType )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0LL, v5);
  }
}


void __fastcall CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x5

  if ( (byte_42E9985 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9985 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 2, 1, 0LL, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineExpUpInfo__SetBtnState(
        CombineExpUpInfo_o *this,
        int32_t kind,
        int32_t type,
        const MethodInfo *method)
{
  CombineExpUpInfo_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x24
  struct UnityEngine_GameObject_array *btnObjList; // x8
  il2cpp_array_size_t v29; // w25
  struct UISprite_array *btnSpriteList; // x8
  struct UISprite_array *v31; // x8
  UIWidget_o *v32; // x22
  struct UISprite_array *btnTxtSpriteList; // x8
  struct System_String_array *btnSpriteNameList; // x9
  UISprite_o *v35; // x22
  System_String_o *v36; // x0
  System_String_o *v37; // x1
  struct UISprite_array *v38; // x8
  struct UISprite_array *v39; // x8
  UIWidget_o *v40; // x22
  struct UISprite_array *v41; // x8
  struct System_String_array *v42; // x9
  __int64 *v43; // x8
  __int64 v44; // x0

  v5 = this;
  if ( (byte_42E9982 & 1) == 0 )
  {
    sub_B5D5C4(&CombineExpUpInfo_TypeInfo, kind, type, method);
    sub_B5D5C4(&StringLiteral_21475/*"off"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17164/*"btn_bg_02_on"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21505/*"on"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17352/*"button_total"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17351/*"button_storage"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17346/*"button_possess"*/, v21, v22, v23);
    this = (CombineExpUpInfo_o *)sub_B5D5C4(&StringLiteral_17163/*"btn_bg_02_off"*/, v24, v25, v26);
    byte_42E9982 = 1;
  }
  v27 = 4LL;
  do
  {
    btnObjList = v5->fields.btnObjList;
    if ( !btnObjList )
      goto LABEL_49;
    v29 = v27 - 4;
    if ( (unsigned int)(v27 - 4) >= btnObjList->max_length )
      goto LABEL_50;
    this = (CombineExpUpInfo_o *)*((_QWORD *)&btnObjList->obj.klass + v27);
    if ( !this )
      goto LABEL_49;
    if ( (_DWORD)v27 - type == 4 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      btnSpriteList = v5->fields.btnSpriteList;
      if ( !btnSpriteList )
        goto LABEL_49;
      if ( btnSpriteList->max_length <= type )
        goto LABEL_50;
      this = (CombineExpUpInfo_o *)*((_QWORD *)&btnSpriteList->obj.klass + v27);
      if ( !this )
        goto LABEL_49;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17164/*"btn_bg_02_on"*/, 0LL);
      v31 = v5->fields.btnSpriteList;
      if ( !v31 )
        goto LABEL_49;
      if ( v31->max_length <= type )
        goto LABEL_50;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v32 = (UIWidget_o *)*((_QWORD *)&v31->obj.klass + v27);
      if ( (BYTE3(CombineExpUpInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v32 )
        goto LABEL_49;
      UIWidget__SetDimensions(
        v32,
        (int32_t)this[1].fields.SortClassOrder->klass,
        HIDWORD(this[1].fields.SortClassOrder->klass),
        0LL);
      btnTxtSpriteList = v5->fields.btnTxtSpriteList;
      if ( !btnTxtSpriteList )
        goto LABEL_49;
      if ( btnTxtSpriteList->max_length <= type )
        goto LABEL_50;
      btnSpriteNameList = v5->fields.btnSpriteNameList;
      if ( !btnSpriteNameList )
        goto LABEL_49;
      if ( btnSpriteNameList->max_length <= type )
        goto LABEL_50;
      v35 = (UISprite_o *)*((_QWORD *)&btnTxtSpriteList->obj.klass + v27);
      v36 = (System_String_o *)*((_QWORD *)&btnSpriteNameList->obj.klass + v27);
      v37 = (System_String_o *)StringLiteral_21505/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v38 = v5->fields.btnSpriteList;
      if ( !v38 )
        goto LABEL_49;
      if ( v29 >= v38->max_length )
      {
LABEL_50:
        v44 = sub_B5D6C8(this);
        sub_B5D668(v44, 0LL);
      }
      this = (CombineExpUpInfo_o *)*((_QWORD *)&v38->obj.klass + v27);
      if ( !this )
        goto LABEL_49;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17163/*"btn_bg_02_off"*/, 0LL);
      v39 = v5->fields.btnSpriteList;
      if ( !v39 )
        goto LABEL_49;
      if ( v29 >= v39->max_length )
        goto LABEL_50;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v40 = (UIWidget_o *)*((_QWORD *)&v39->obj.klass + v27);
      if ( (BYTE3(CombineExpUpInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v40 )
        goto LABEL_49;
      UIWidget__SetDimensions(
        v40,
        (int32_t)this[1].fields.SortClassOrder->monitor,
        HIDWORD(this[1].fields.SortClassOrder->monitor),
        0LL);
      v41 = v5->fields.btnTxtSpriteList;
      if ( !v41 )
        goto LABEL_49;
      if ( v29 >= v41->max_length )
        goto LABEL_50;
      v42 = v5->fields.btnSpriteNameList;
      if ( !v42 )
        goto LABEL_49;
      if ( v29 >= v42->max_length )
        goto LABEL_50;
      v35 = (UISprite_o *)*((_QWORD *)&v41->obj.klass + v27);
      v36 = (System_String_o *)*((_QWORD *)&v42->obj.klass + v27);
      v37 = (System_String_o *)StringLiteral_21475/*"off"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_44577788(v36, v37, 0LL);
    if ( !v35 )
      goto LABEL_49;
    UISprite__set_spriteName(v35, (System_String_o *)this, 0LL);
    ++v27;
  }
  while ( (unsigned int)(v27 - 5) < 2 );
  switch ( kind )
  {
    case 2:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( this )
      {
        v43 = &StringLiteral_17352/*"button_total"*/;
        goto LABEL_47;
      }
LABEL_49:
      sub_B5D69C(this, *(_QWORD *)&kind);
    case 1:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( this )
      {
        v43 = &StringLiteral_17351/*"button_storage"*/;
        goto LABEL_47;
      }
      goto LABEL_49;
    case 0:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( this )
      {
        v43 = &StringLiteral_17346/*"button_possess"*/;
LABEL_47:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v43, 0LL);
        return;
      }
      goto LABEL_49;
  }
}


void __fastcall CombineExpUpInfo_MaterialData___ctor(CombineExpUpInfo_MaterialData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}