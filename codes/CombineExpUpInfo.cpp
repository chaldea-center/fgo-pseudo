void __fastcall CombineExpUpInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineExpUpInfo_c *v2; // x8

  if ( (byte_40F98E6 & 1) == 0 )
  {
    sub_B16FFC(&CombineExpUpInfo_TypeInfo, v1);
    byte_40F98E6 = 1;
  }
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_ON_WIDTH = 56;
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_ON_HEIGHT = 36;
  v2 = CombineExpUpInfo_TypeInfo;
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_OFF_WIDTH = 58;
  v2->static_fields->TYPE_BUTTON_OFF_HEIGHT = 38;
}


void __fastcall CombineExpUpInfo___ctor(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_String_array *v17; // x20
  __int64 v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_40F98E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo, v5);
    sub_B16FFC(&string___TypeInfo, v6);
    sub_B16FFC(&StringLiteral_16928/*"btn_hp_"*/, v7);
    sub_B16FFC(&StringLiteral_16883/*"btn_atk_"*/, v8);
    sub_B16FFC(&StringLiteral_16925/*"btn_experience_"*/, v9);
    byte_40F98E5 = 1;
  }
  v10 = sub_B17014(string___TypeInfo, 3LL, v2);
  if ( !v10 )
LABEL_23:
    sub_B170D4();
  v17 = (struct System_String_array *)v10;
  v18 = StringLiteral_16925/*"btn_experience_"*/;
  if ( StringLiteral_16925/*"btn_experience_"*/ )
  {
    v18 = sub_B170BC(StringLiteral_16925/*"btn_experience_"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_22;
    v19 = (System_Int32_array **)StringLiteral_16925/*"btn_experience_"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v17->max_length )
    goto LABEL_21;
  v17->m_Items[0] = (System_String_o *)v19;
  sub_B16F98((BattleServantConfConponent_o *)v17->m_Items, v19, v11, v12, v13, v14, v15, v16);
  v18 = StringLiteral_16883/*"btn_atk_"*/;
  if ( StringLiteral_16883/*"btn_atk_"*/ )
  {
    v18 = sub_B170BC(StringLiteral_16883/*"btn_atk_"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_22;
    v19 = (System_Int32_array **)StringLiteral_16883/*"btn_atk_"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_21;
  v17->m_Items[1] = (System_String_o *)v19;
  sub_B16F98((BattleServantConfConponent_o *)&v17->m_Items[1], v19, v11, v20, v21, v22, v23, v24);
  v18 = StringLiteral_16928/*"btn_hp_"*/;
  if ( StringLiteral_16928/*"btn_hp_"*/ )
  {
    v18 = sub_B170BC(StringLiteral_16928/*"btn_hp_"*/, v17->obj.klass->_1.element_class);
    if ( v18 )
    {
      v19 = (System_Int32_array **)StringLiteral_16928/*"btn_hp_"*/;
      goto LABEL_18;
    }
LABEL_22:
    sub_B170F4(v18);
    sub_B170A0();
  }
  v19 = 0LL;
LABEL_18:
  if ( v17->max_length <= 2 )
  {
LABEL_21:
    sub_B17100(v18, v19, v11);
    sub_B170A0();
  }
  v17->m_Items[2] = (System_String_o *)v19;
  sub_B16F98((BattleServantConfConponent_o *)&v17->m_Items[2], v19, v11, v25, v26, v27, v28, v29);
  this->fields.btnSpriteNameList = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.btnSpriteNameList,
    (System_Int32_array **)v17,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v40 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo,
                                                                   v36,
                                                                   v37,
                                                                   v38,
                                                                   v39);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v40,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v40 )
    goto LABEL_23;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    4,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    7,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    1001,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v40;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.SortClassOrder,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
  System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o **p_changeAction; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x0
  __int64 v28; // x2
  SvtClassAttri_c *v29; // x0
  __int64 v30; // x21
  __int64 v31; // x2
  __int64 v32; // x0
  const MethodInfo *v33; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  signed __int64 size; // x27
  System_Int32_array *v37; // x22
  WebViewManager_o *v38; // x0
  UserServantMaster_o *v39; // x0
  UserServantEntity_array *v40; // x0
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  WebViewManager_o *v43; // x0
  WarQuestSelectionMaster_o *v44; // x0
  UserServantStorageMaster_o *v45; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v51; // x24
  System_Collections_Generic_IEnumerable_T__o *List; // x0
  WebViewManager_o *v53; // x0
  UserServantStorageMaster_o *v54; // x0
  UserServantEntity_array *v55; // x23
  unsigned __int64 i; // x25
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *v57; // x24
  int32_t v58; // w24
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x4
  int32_t nowType; // w8
  int32_t v63; // w24
  CombineExpUpInfo_MaterialData_array *TargetClassMaterialInfo; // x0
  __int64 v65; // x1
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x6
  int32_t v68; // w3
  __int64 v69; // x8
  __int64 v70; // x9
  CombineExpUpInfo_MaterialData_o *v71; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x8
  CombineExpUpClassInfo_o *v73; // x8
  int32_t v74; // w1
  int32_t v75; // w4
  int32_t v76; // w5
  CombineExpUpClassInfo_o *v77; // x0
  struct CombineExpUpClassInfo_array *v78; // x8
  CombineExpUpClassInfo_o *v79; // x0
  struct CombineExpUpClassInfo_array *v80; // x8
  System_Int32_array *v81; // x2
  System_Int32_array *v82; // x3

  if ( (byte_40F98DD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__Invoke__, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v14);
    sub_B16FFC(&int___TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int_____ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__, v21);
    sub_B16FFC(&System_Collections_Generic_List_int____TypeInfo, v22);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&SvtClassAttri_TypeInfo, v25);
    byte_40F98DD = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  p_changeAction = &this->fields.changeAction;
  if ( afterAction )
  {
    *p_changeAction = afterAction;
    sub_B16F98(
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
      (const MethodInfo_24C3C58 *)Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__Invoke__);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_int____TypeInfo,
                                                                                                  *(_QWORD *)&kind,
                                                                                                  *(_QWORD *)&type,
                                                                                                  isFirst,
                                                                                                  afterAction);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
  v29 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v29 = SvtClassAttri_TypeInfo;
  }
  v30 = sub_B17014(int___TypeInfo, v29->static_fields->MAX_EXP_UP_RARITY, v28);
  v32 = sub_B17014(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY, v31);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_84;
  nowKind = this->fields.nowKind;
  size = SortClassOrder->fields._size;
  v37 = (System_Int32_array *)v32;
  switch ( nowKind )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v43 )
        goto LABEL_84;
      v44 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v43,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_84;
      v45 = (UserServantStorageMaster_o *)v44;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             MasterData_WarQuestSelectionMaster,
                                                                             0LL);
      v51 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                              System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                              v47,
                                                                              v48,
                                                                              v49,
                                                                              v50);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v51,
        CombineMaterialList,
        (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736);
      if ( !v45 )
        goto LABEL_84;
      List = (System_Collections_Generic_IEnumerable_T__o *)UserServantStorageMaster__getList(v45, 0LL);
      if ( !v51 )
        goto LABEL_84;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v51,
        List,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      v40 = (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_26;
    case 1:
      v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v53 )
        goto LABEL_84;
      v54 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v53,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !v54 )
        goto LABEL_84;
      v40 = UserServantStorageMaster__getList(v54, 0LL);
      goto LABEL_26;
    case 0:
      v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v38 )
        goto LABEL_84;
      v39 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v38,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !v39 )
        goto LABEL_84;
      v40 = UserServantMaster__getCombineMaterialList(v39, 0LL);
LABEL_26:
      v55 = v40;
      goto LABEL_28;
  }
  v55 = 0LL;
LABEL_28:
  if ( (int)size >= 1 )
  {
    for ( i = 0LL; (__int64)i < size; ++i )
    {
      v57 = this->fields.SortClassOrder;
      if ( !v57 )
        goto LABEL_84;
      if ( i >= (unsigned int)v57->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v58 = v57->fields._items->m_Items[i + 1];
      if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SvtClassAttri_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      }
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(v58, 0LL);
      nowType = this->fields.nowType;
      v63 = (int)ClassId;
      if ( nowType == 1 )
      {
        v68 = 1;
      }
      else
      {
        if ( !nowType )
        {
          TargetClassMaterialInfo = CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v55, (int32_t)ClassId, v60);
          if ( !TargetClassMaterialInfo )
            return (char)TargetClassMaterialInfo;
          goto LABEL_43;
        }
        v68 = 2;
      }
      TargetClassMaterialInfo = CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v55, (int32_t)ClassId, v68, v61);
      if ( !TargetClassMaterialInfo )
        return (char)TargetClassMaterialInfo;
LABEL_43:
      v69 = *(_QWORD *)&TargetClassMaterialInfo->max_length;
      if ( !v69 )
      {
        LOBYTE(TargetClassMaterialInfo) = 0;
        return (char)TargetClassMaterialInfo;
      }
      if ( (int)v69 >= 1 )
      {
        if ( !(_DWORD)v69 )
        {
LABEL_83:
          sub_B17100(TargetClassMaterialInfo, v65, v66);
          sub_B170A0();
        }
        v70 = 0LL;
        while ( 1 )
        {
          v71 = TargetClassMaterialInfo->m_Items[v70];
          if ( !v71 || !v30 )
            break;
          if ( (unsigned int)v70 >= *(_DWORD *)(v30 + 24) )
            goto LABEL_83;
          *(_DWORD *)(v30 + 32 + 4 * v70) = v71->fields.svtId;
          if ( !v37 )
            break;
          if ( (unsigned int)v70 >= v37->max_length )
            goto LABEL_83;
          v37->m_Items[v70 + 1] = v71->fields.num;
          if ( (int)v70 + 1 >= (int)v69 )
            goto LABEL_55;
          if ( (unsigned int)++v70 >= TargetClassMaterialInfo->max_length )
            goto LABEL_83;
        }
LABEL_84:
        sub_B170D4();
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
          v73 = expUpClassInfoList->m_Items[i];
          if ( !v73 )
            goto LABEL_84;
          if ( TargetClassMaterialInfo->max_length == 5 )
          {
            if ( v63 == 1001 )
            {
              v74 = 1001;
              v75 = 1;
              v76 = 4;
              v77 = v73;
              goto LABEL_77;
            }
            v75 = 2;
LABEL_76:
            v76 = 3;
            v77 = v73;
            v74 = v63;
LABEL_77:
            v81 = (System_Int32_array *)v30;
            v82 = v37;
LABEL_78:
            CombineExpUpClassInfo__Set(v77, v74, v81, v82, v75, v76, v67);
            continue;
          }
          if ( v63 != 1001 )
          {
            v75 = 1;
            goto LABEL_76;
          }
          v74 = 1001;
          v76 = 4;
          v77 = v73;
        }
        else
        {
          v80 = this->fields.expUpClassInfoList;
          if ( !v80 )
            goto LABEL_84;
          if ( i >= v80->max_length )
            goto LABEL_83;
          v77 = v80->m_Items[i];
          if ( !v77 )
            goto LABEL_84;
          v76 = 5;
          v74 = v63;
        }
        v81 = (System_Int32_array *)v30;
        v82 = v37;
        v75 = 0;
        goto LABEL_78;
      }
      v78 = this->fields.expUpClassInfoList;
      if ( !v78 )
        goto LABEL_84;
      if ( i >= v78->max_length )
        goto LABEL_83;
      v79 = v78->m_Items[i];
      if ( !v79 )
        goto LABEL_84;
      CombineExpUpClassInfo__Set_24236040(v79, v37, v66);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v33);
  LOBYTE(TargetClassMaterialInfo) = 1;
  return (char)TargetClassMaterialInfo;
}


// local variable allocation has failed, the output may be wrong!
CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassMaterialInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SvtClassAttri_c *v10; // x0
  CombineExpUpInfo_MaterialData_array *v11; // x21
  WebViewManager_o *Instance; // x0
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *TargetClassMaterialSvtIdList; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Int32_array *v19; // x22
  __int64 v20; // x25
  unsigned __int64 v21; // x26
  CombineExpUpInfo_MaterialData_o **m_Items; // x27
  CombineExpUpInfo_MaterialData_o *v23; // x23
  SvtClassAttri_c *IsCombineMaterial; // x0
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  signed __int64 MAX_EXP_UP_RARITY; // x9
  __int64 v31; // x23
  unsigned __int64 v32; // x8
  __int64 v33; // x13
  int32_t v34; // w14
  __int64 v35; // x23
  il2cpp_array_size_t v36; // w25
  Il2CppClass **v37; // x8
  UserServantEntity_o *v38; // x22
  SvtClassAttri_c *v39; // x0
  int32_t v40; // w26
  CombineExpUpInfo_MaterialData_o *v41; // x8

  if ( (byte_40F98DE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_B16FFC(&CombineExpUpInfo_MaterialData___TypeInfo, v6);
    sub_B16FFC(&CombineExpUpInfo_MaterialData_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&SvtClassAttri_TypeInfo, v9);
    byte_40F98DE = 1;
  }
  v10 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v10 = SvtClassAttri_TypeInfo;
  }
  v11 = (CombineExpUpInfo_MaterialData_array *)sub_B17014(
                                                 CombineExpUpInfo_MaterialData___TypeInfo,
                                                 v10->static_fields->MAX_EXP_UP_RARITY,
                                                 *(_QWORD *)&classId);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_48;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList(
                                   MasterData_WarQuestSelectionMaster,
                                   classId,
                                   0LL);
  if ( !TargetClassMaterialSvtIdList )
    return 0LL;
  v19 = TargetClassMaterialSvtIdList;
  if ( !*(_QWORD *)&TargetClassMaterialSvtIdList->max_length )
    return 0LL;
  v20 = 0LL;
  v21 = 0LL;
  m_Items = v11->m_Items;
  while ( 1 )
  {
    IsCombineMaterial = SvtClassAttri_TypeInfo;
    if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtClassAttri_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      IsCombineMaterial = SvtClassAttri_TypeInfo;
    }
    MAX_EXP_UP_RARITY = IsCombineMaterial->static_fields->MAX_EXP_UP_RARITY;
    if ( (__int64)v21 >= MAX_EXP_UP_RARITY )
      break;
    v23 = (CombineExpUpInfo_MaterialData_o *)sub_B170CC(CombineExpUpInfo_MaterialData_TypeInfo, v15, v16, v17, v18);
    CombineExpUpInfo_MaterialData___ctor(v23, 0LL);
    if ( !v11 )
      goto LABEL_48;
    if ( v23 )
    {
      IsCombineMaterial = (SvtClassAttri_c *)sub_B170BC(v23, v11->obj.klass->_1.element_class);
      if ( !IsCombineMaterial )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( v21 >= v11->max_length )
      goto LABEL_45;
    m_Items[v21] = v23;
    sub_B16F98((BattleServantConfConponent_o *)&m_Items[v20], (System_Int32_array **)v23, v16, v25, v26, v27, v28, v29);
    ++v21;
    ++v20;
  }
  v31 = *(_QWORD *)&v19->max_length;
  if ( (BYTE3(IsCombineMaterial->vtable._0_Equals.methodPtr) & 4) != 0 && !IsCombineMaterial->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(IsCombineMaterial);
    LODWORD(MAX_EXP_UP_RARITY) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)v31 >= 1 )
  {
    if ( v11 )
    {
      v32 = 0LL;
      while ( ((_DWORD)MAX_EXP_UP_RARITY != (_DWORD)v31) + v32 < v11->max_length && v32 < v19->max_length )
      {
        v33 = *((_QWORD *)&v11->m_Items[(_DWORD)MAX_EXP_UP_RARITY != (_DWORD)v31] + v32);
        if ( !v33 )
          goto LABEL_48;
        v34 = v19->m_Items[++v32];
        *(_DWORD *)(v33 + 16) = v34;
        if ( (__int64)v32 >= (int)v31 )
          goto LABEL_30;
      }
LABEL_45:
      sub_B17100(IsCombineMaterial, v15, v16);
      sub_B170A0();
    }
LABEL_48:
    sub_B170D4();
  }
LABEL_30:
  if ( !svtList )
    goto LABEL_48;
  v35 = *(_QWORD *)&svtList->max_length;
  if ( (int)v35 >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      v37 = &svtList->obj.klass + (int)v36;
      v38 = (UserServantEntity_o *)v37[4];
      if ( !v38 )
        goto LABEL_48;
      IsCombineMaterial = (SvtClassAttri_c *)UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v37[4], 0LL);
      if ( ((unsigned __int8)IsCombineMaterial & 1) != 0 )
      {
        IsCombineMaterial = (SvtClassAttri_c *)UserServantEntity__getSvtClassId(v38, 0LL);
        if ( (_DWORD)IsCombineMaterial == classId )
        {
          v39 = SvtClassAttri_TypeInfo;
          if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v39 = SvtClassAttri_TypeInfo;
          }
          v40 = v39->static_fields->MAX_EXP_UP_RARITY;
          IsCombineMaterial = (SvtClassAttri_c *)UserServantEntity__getRarity(v38, 0LL);
          if ( !v11 )
            goto LABEL_48;
          if ( v40 - (int)IsCombineMaterial >= v11->max_length )
            goto LABEL_45;
          v41 = v11->m_Items[v40 - (int)IsCombineMaterial];
          if ( !v41 )
            goto LABEL_48;
          ++v41->fields.num;
        }
      }
      if ( (int)++v36 >= (int)v35 )
        return v11;
      if ( v36 >= svtList->max_length )
        goto LABEL_45;
    }
  }
  return v11;
}


CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassStatusUpInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WebViewManager_o *Instance; // x0
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x2
  System_Int32_array *TargetClassStatusUpSvtIdList; // x24
  SvtClassAttri_c *v18; // x8
  __int64 IsStatusUp; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x8
  __int64 v25; // x23
  int v26; // w22
  unsigned __int64 v27; // x27
  int32_t *v28; // x28
  int32_t v29; // w26
  ServantLeaderInfo_o *v30; // x25
  __int64 v31; // x9
  __int64 v32; // x0
  __int64 v33; // x3
  __int64 v34; // x4
  CombineExpUpInfo_MaterialData_array *v35; // x24
  BattleServantConfConponent_o *v36; // x25
  __int64 v37; // x20
  CombineExpUpInfo_MaterialData_o *v38; // x26
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  il2cpp_array_size_t v44; // w28
  BattleServantConfConponent_c *klass; // x8
  int v46; // w9
  __int64 v47; // x25
  il2cpp_array_size_t v48; // w20
  Il2CppClass **v49; // x8
  UserServantEntity_o *v50; // x23
  CombineExpUpInfo_MaterialData_o *v51; // x8
  int32_t v53; // [xsp+Ch] [xbp-54h]

  if ( (byte_40F98DF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&CombineExpUpInfo_MaterialData___TypeInfo, v9);
    sub_B16FFC(&CombineExpUpInfo_MaterialData_TypeInfo, v10);
    sub_B16FFC(&ServantLeaderInfo_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&SvtClassAttri_TypeInfo, v13);
    byte_40F98DF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_60;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList(
                                   MasterData_WarQuestSelectionMaster,
                                   classId,
                                   0LL);
  v18 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v18 = SvtClassAttri_TypeInfo;
  }
  IsStatusUp = sub_B17014(int___TypeInfo, v18->static_fields->MAX_EXP_UP_RARITY, v16);
  if ( !TargetClassStatusUpSvtIdList )
    goto LABEL_60;
  v24 = *(_QWORD *)&TargetClassStatusUpSvtIdList->max_length;
  v25 = IsStatusUp;
  v53 = classId;
  if ( (int)v24 < 1 )
    return 0LL;
  v26 = 0;
  v27 = 0LL;
  v28 = &TargetClassStatusUpSvtIdList->m_Items[1];
  do
  {
    if ( v27 >= (unsigned int)v24 )
    {
LABEL_57:
      sub_B17100(IsStatusUp, v20, v21);
      sub_B170A0();
    }
    v29 = v28[v27];
    v30 = (ServantLeaderInfo_o *)sub_B170CC(ServantLeaderInfo_TypeInfo, v20, v21, v22, v23);
    ServantLeaderInfo___ctor_29610580(v30, v29, 0, 1, 0LL);
    if ( type == 2 )
    {
      if ( !v30 )
        goto LABEL_60;
      if ( !v30->fields.hp && !v30->fields.adjustHp )
        goto LABEL_25;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_25;
      if ( !v30 )
        goto LABEL_60;
      if ( !v30->fields.atk && !v30->fields.adjustAtk )
        goto LABEL_25;
    }
    if ( v27 >= TargetClassStatusUpSvtIdList->max_length )
      goto LABEL_57;
    if ( !v25 )
      goto LABEL_60;
    if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 24) )
      goto LABEL_57;
    v31 = v25 + 4LL * v26++;
    *(_DWORD *)(v31 + 32) = v28[v27];
LABEL_25:
    LODWORD(v24) = TargetClassStatusUpSvtIdList->max_length;
    ++v27;
  }
  while ( (__int64)v27 < (int)v24 );
  if ( !v26 )
    return 0LL;
  v32 = sub_B17014(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v26, v21);
  v35 = (CombineExpUpInfo_MaterialData_array *)v32;
  if ( v26 >= 1 )
  {
    v36 = (BattleServantConfConponent_o *)(v32 + 32);
    v37 = 8LL;
    while ( 1 )
    {
      v38 = (CombineExpUpInfo_MaterialData_o *)sub_B170CC(CombineExpUpInfo_MaterialData_TypeInfo, v20, v21, v33, v34);
      CombineExpUpInfo_MaterialData___ctor(v38, 0LL);
      if ( !v35 )
        break;
      if ( v38 )
      {
        IsStatusUp = sub_B170BC(v38, v35->obj.klass->_1.element_class);
        if ( !IsStatusUp )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      v44 = v37 - 8;
      if ( (unsigned int)(v37 - 8) >= v35->max_length )
        goto LABEL_57;
      v36->klass = (BattleServantConfConponent_c *)v38;
      sub_B16F98(v36, (System_Int32_array **)v38, v21, v39, v40, v41, v42, v43);
      if ( v44 >= v35->max_length )
        goto LABEL_57;
      if ( !v25 )
        break;
      if ( v44 >= *(_DWORD *)(v25 + 24) )
        goto LABEL_57;
      klass = v36->klass;
      if ( !v36->klass )
        break;
      v46 = *(_DWORD *)(v25 + 4 * v37++);
      v36 = (BattleServantConfConponent_o *)((char *)v36 + 8);
      LODWORD(klass->_1.name) = v46;
      if ( (int)v37 - 8 >= v26 )
        goto LABEL_38;
    }
LABEL_60:
    sub_B170D4();
  }
LABEL_38:
  if ( !svtList )
    goto LABEL_60;
  v47 = *(_QWORD *)&svtList->max_length;
  if ( (int)v47 >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      v49 = &svtList->obj.klass + (int)v48;
      v50 = (UserServantEntity_o *)v49[4];
      if ( !v50 )
        goto LABEL_60;
      IsStatusUp = UserServantEntity__IsStatusUp((UserServantEntity_o *)v49[4], 0LL);
      if ( (IsStatusUp & 1) != 0 )
      {
        IsStatusUp = UserServantEntity__getSvtClassId(v50, 0LL);
        if ( (_DWORD)IsStatusUp == v53 )
        {
          if ( type == 2 )
          {
            if ( v50->fields.hp || v50->fields.adjustHp )
            {
LABEL_51:
              IsStatusUp = UserServantEntity__getRarity(v50, 0LL);
              if ( !v35 )
                goto LABEL_60;
              if ( (unsigned int)(v26 - IsStatusUp) >= v35->max_length )
                goto LABEL_57;
              v51 = v35->m_Items[v26 - (int)IsStatusUp];
              if ( !v51 )
                goto LABEL_60;
              ++v51->fields.num;
            }
          }
          else if ( type == 1 && (v50->fields.atk || v50->fields.adjustAtk) )
          {
            goto LABEL_51;
          }
        }
      }
      if ( (int)++v48 >= (int)v47 )
        return v35;
      if ( v48 >= svtList->max_length )
        goto LABEL_57;
    }
  }
  return v35;
}


void __fastcall CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( (byte_40F98E2 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F98E2 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 1, 1, 0LL, v3);
  }
}


void __fastcall CombineExpUpInfo__OnClickChangeButton(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  int32_t nowKind; // w8
  int32_t v5; // w1

  if ( (byte_40F98E4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F98E4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  nowKind = this->fields.nowKind;
  if ( nowKind )
    v5 = 2 * (nowKind == 1);
  else
    v5 = 1;
  CombineExpUpInfo__ExpUpInfoSet(this, v5, this->fields.nowType, 0, 0LL, v3);
}


void __fastcall CombineExpUpInfo__OnClickLeft(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( (byte_40F98E1 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F98E1 = 1;
  }
  if ( this->fields.nowType )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0LL, v3);
  }
}


void __fastcall CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( (byte_40F98E3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F98E3 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 2, 1, 0LL, v3);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  struct UnityEngine_GameObject_array *btnObjList; // x8
  il2cpp_array_size_t v15; // w25
  UnityEngine_GameObject_o *v16; // x0
  struct UISprite_array *btnSpriteList; // x8
  UISprite_o *v18; // x0
  struct UISprite_array *v19; // x8
  CombineExpUpInfo_c *v20; // x0
  UIWidget_o *v21; // x22
  struct UISprite_array *btnTxtSpriteList; // x8
  struct System_String_array *btnSpriteNameList; // x9
  UISprite_o *v24; // x22
  System_String_o *v25; // x0
  System_String_o *v26; // x1
  struct UISprite_array *v27; // x8
  UISprite_o *v28; // x0
  struct UISprite_array *v29; // x8
  CombineExpUpInfo_c *v30; // x0
  UIWidget_o *v31; // x22
  struct UISprite_array *v32; // x8
  struct System_String_array *v33; // x9
  System_String_o *v34; // x0
  UISprite_o *btnChangeSprite; // x0
  __int64 *v36; // x8

  v5 = this;
  if ( (byte_40F98E0 & 1) == 0 )
  {
    sub_B16FFC(&CombineExpUpInfo_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&StringLiteral_21107/*"off"*/, v6);
    sub_B16FFC(&StringLiteral_16889/*"btn_bg_02_on"*/, v7);
    sub_B16FFC(&StringLiteral_21136/*"on"*/, v8);
    sub_B16FFC(&StringLiteral_17076/*"button_total"*/, v9);
    sub_B16FFC(&StringLiteral_17075/*"button_storage"*/, v10);
    sub_B16FFC(&StringLiteral_17070/*"button_possess"*/, v11);
    this = (CombineExpUpInfo_o *)sub_B16FFC(&StringLiteral_16888/*"btn_bg_02_off"*/, v12);
    byte_40F98E0 = 1;
  }
  v13 = 4LL;
  do
  {
    btnObjList = v5->fields.btnObjList;
    if ( !btnObjList )
      goto LABEL_49;
    v15 = v13 - 4;
    if ( (unsigned int)(v13 - 4) >= btnObjList->max_length )
      goto LABEL_50;
    v16 = (UnityEngine_GameObject_o *)*((_QWORD *)&btnObjList->obj.klass + v13);
    if ( !v16 )
      goto LABEL_49;
    if ( (_DWORD)v13 - type == 4 )
    {
      UnityEngine_GameObject__SetActive(v16, 1, 0LL);
      btnSpriteList = v5->fields.btnSpriteList;
      if ( !btnSpriteList )
        goto LABEL_49;
      if ( btnSpriteList->max_length <= type )
        goto LABEL_50;
      v18 = (UISprite_o *)*((_QWORD *)&btnSpriteList->obj.klass + v13);
      if ( !v18 )
        goto LABEL_49;
      UISprite__set_spriteName(v18, (System_String_o *)StringLiteral_16889/*"btn_bg_02_on"*/, 0LL);
      v19 = v5->fields.btnSpriteList;
      if ( !v19 )
        goto LABEL_49;
      if ( v19->max_length <= type )
        goto LABEL_50;
      v20 = CombineExpUpInfo_TypeInfo;
      v21 = (UIWidget_o *)*((_QWORD *)&v19->obj.klass + v13);
      if ( (BYTE3(CombineExpUpInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        v20 = CombineExpUpInfo_TypeInfo;
      }
      if ( !v21 )
        goto LABEL_49;
      UIWidget__SetDimensions(
        v21,
        v20->static_fields->TYPE_BUTTON_ON_WIDTH,
        v20->static_fields->TYPE_BUTTON_ON_HEIGHT,
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
      v24 = (UISprite_o *)*((_QWORD *)&btnTxtSpriteList->obj.klass + v13);
      v25 = (System_String_o *)*((_QWORD *)&btnSpriteNameList->obj.klass + v13);
      v26 = (System_String_o *)StringLiteral_21136/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive(v16, 0, 0LL);
      v27 = v5->fields.btnSpriteList;
      if ( !v27 )
        goto LABEL_49;
      if ( v15 >= v27->max_length )
      {
LABEL_50:
        sub_B17100(this, *(_QWORD *)&kind, *(_QWORD *)&type);
        sub_B170A0();
      }
      v28 = (UISprite_o *)*((_QWORD *)&v27->obj.klass + v13);
      if ( !v28 )
        goto LABEL_49;
      UISprite__set_spriteName(v28, (System_String_o *)StringLiteral_16888/*"btn_bg_02_off"*/, 0LL);
      v29 = v5->fields.btnSpriteList;
      if ( !v29 )
        goto LABEL_49;
      if ( v15 >= v29->max_length )
        goto LABEL_50;
      v30 = CombineExpUpInfo_TypeInfo;
      v31 = (UIWidget_o *)*((_QWORD *)&v29->obj.klass + v13);
      if ( (BYTE3(CombineExpUpInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        v30 = CombineExpUpInfo_TypeInfo;
      }
      if ( !v31 )
        goto LABEL_49;
      UIWidget__SetDimensions(
        v31,
        v30->static_fields->TYPE_BUTTON_OFF_WIDTH,
        v30->static_fields->TYPE_BUTTON_OFF_HEIGHT,
        0LL);
      v32 = v5->fields.btnTxtSpriteList;
      if ( !v32 )
        goto LABEL_49;
      if ( v15 >= v32->max_length )
        goto LABEL_50;
      v33 = v5->fields.btnSpriteNameList;
      if ( !v33 )
        goto LABEL_49;
      if ( v15 >= v33->max_length )
        goto LABEL_50;
      v24 = (UISprite_o *)*((_QWORD *)&v32->obj.klass + v13);
      v25 = (System_String_o *)*((_QWORD *)&v33->obj.klass + v13);
      v26 = (System_String_o *)StringLiteral_21107/*"off"*/;
    }
    v34 = System_String__Concat_43743732(v25, v26, 0LL);
    if ( !v24 )
      goto LABEL_49;
    UISprite__set_spriteName(v24, v34, 0LL);
    ++v13;
  }
  while ( (unsigned int)(v13 - 5) < 2 );
  switch ( kind )
  {
    case 2:
      btnChangeSprite = v5->fields.btnChangeSprite;
      if ( btnChangeSprite )
      {
        v36 = &StringLiteral_17076/*"button_total"*/;
        goto LABEL_47;
      }
LABEL_49:
      sub_B170D4();
    case 1:
      btnChangeSprite = v5->fields.btnChangeSprite;
      if ( btnChangeSprite )
      {
        v36 = &StringLiteral_17075/*"button_storage"*/;
        goto LABEL_47;
      }
      goto LABEL_49;
    case 0:
      btnChangeSprite = v5->fields.btnChangeSprite;
      if ( btnChangeSprite )
      {
        v36 = &StringLiteral_17070/*"button_possess"*/;
LABEL_47:
        UISprite__set_spriteName(btnChangeSprite, (System_String_o *)*v36, 0LL);
        return;
      }
      goto LABEL_49;
  }
}


void __fastcall CombineExpUpInfo_MaterialData___ctor(CombineExpUpInfo_MaterialData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}