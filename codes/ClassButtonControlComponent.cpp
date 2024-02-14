void __fastcall ClassButtonControlComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Array_o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Array_o *v15; // x19
  struct ClassButtonControlComponent_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Array_o *v23; // x19
  struct ClassButtonControlComponent_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Array_o *v31; // x19
  struct ClassButtonControlComponent_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_RuntimeFieldHandle_o v39; // 0:w1.4
  System_RuntimeFieldHandle_o v40; // 0:w1.4
  System_RuntimeFieldHandle_o v41; // 0:w1.4
  System_RuntimeFieldHandle_o v42; // 0:w1.4

  if ( (byte_42146E5 & 1) == 0 )
  {
    sub_B0D8A4(&ClassButtonControlComponent_TypeInfo, v1);
    sub_B0D8A4(&int___TypeInfo, v2);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841,
      v3);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__18A642AD06501B3ADC1AC875D0D6E7DA04D9B26814FC4875D2936BA32EFED2E4,
      v4);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__921C803ABFA6AC88F44F7AB19198E5C137D1C7183E8E6912757A6263E8DEE0A5,
      v5);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__DFC9DBE6DE77A476BBB7F1224ED564087A6ADE8ECA1F2503AFEA414DE21000F5,
      v6);
    byte_42146E5 = 1;
  }
  v7 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 10LL);
  v39.fields.value = Field__PrivateImplementationDetails__DFC9DBE6DE77A476BBB7F1224ED564087A6ADE8ECA1F2503AFEA414DE21000F5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v7, v39, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassButtonControlComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B0D840(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  v15 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 9LL);
  v40.fields.value = Field__PrivateImplementationDetails__18A642AD06501B3ADC1AC875D0D6E7DA04D9B26814FC4875D2936BA32EFED2E4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v15, v40, 0LL);
  v16 = ClassButtonControlComponent_TypeInfo->static_fields;
  v16->mstClassIdTableNoMixIcon = (struct System_Int32_array *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v16->mstClassIdTableNoMixIcon,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 10LL);
  v41.fields.value = Field__PrivateImplementationDetails__10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v23, v41, 0LL);
  v24 = ClassButtonControlComponent_TypeInfo->static_fields;
  v24->supportGroupTypeTableHaveMixIcon = (struct System_Int32_array *)v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v24->supportGroupTypeTableHaveMixIcon,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 9LL);
  v42.fields.value = Field__PrivateImplementationDetails__921C803ABFA6AC88F44F7AB19198E5C137D1C7183E8E6912757A6263E8DEE0A5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v31, v42, 0LL);
  v32 = ClassButtonControlComponent_TypeInfo->static_fields;
  v32->supportGroupTypeTableNoMixIcon = (struct System_Int32_array *)v31;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v32->supportGroupTypeTableNoMixIcon,
    (System_Int32_array **)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
}


void __fastcall ClassButtonControlComponent___ctor(ClassButtonControlComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall ClassButtonControlComponent__IsMixSupportGroupType(int32_t classPos, const MethodInfo *method)
{
  return classPos == 9;
}


void __fastcall ClassButtonControlComponent__OnRotatetCursor(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentCursor; // w8
  int32_t v4; // w11
  int32_t v5; // w8
  int32_t v6; // w1

  if ( this->fields.updateEnable )
  {
    currentCursor = this->fields.currentCursor;
    if ( currentCursor + 1 < 10 )
      v4 = currentCursor + 1;
    else
      v4 = 0;
    if ( currentCursor + 1 < 9 )
      v5 = currentCursor + 1;
    else
      v5 = 0;
    if ( this->fields.haveMixIcon )
      v6 = v4;
    else
      v6 = v5;
    ClassButtonControlComponent__setCursor(this, v6, v2);
  }
}


void __fastcall ClassButtonControlComponent__OnSelectButton(
        ClassButtonControlComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  if ( this->fields.updateEnable )
    ClassButtonControlComponent__setCursor(this, classPos, method);
}


void __fastcall ClassButtonControlComponent__add_callbackFunc(
        ClassButtonControlComponent_o *this,
        ClassButtonControlComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ClassButtonControlComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ClassButtonControlComponent_o *v11; // x0
  ClassButtonControlComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42146E1 & 1) == 0 )
  {
    sub_B0D8A4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, value);
    byte_42146E1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ClassButtonControlComponent_CallbackFunc_c *)v8->klass != ClassButtonControlComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassButtonControlComponent_o *)sub_B0DC70(v8);
  ClassButtonControlComponent__remove_callbackFunc(v11, v12, v13);
}


int32_t __fastcall ClassButtonControlComponent__getChangeCursorPos(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.oldCursor == this->fields.currentCursor )
    return -1;
  else
    return this->fields.currentCursor;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ClassButtonControlComponent__getIconCursorPos(
        ClassButtonControlComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ClassButtonControlComponent_c *v6; // x0
  System_Int32_array **p_supportGroupTypeTableHaveMixIcon; // x8
  int32_t v8; // w0

  if ( (byte_42146E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&classPos);
    sub_B0D8A4(&ClassButtonControlComponent_TypeInfo, v5);
    byte_42146E4 = 1;
  }
  v6 = ClassButtonControlComponent_TypeInfo;
  if ( this->fields.haveMixIcon )
  {
    if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      v6 = ClassButtonControlComponent_TypeInfo;
    }
    p_supportGroupTypeTableHaveMixIcon = &v6->static_fields->supportGroupTypeTableHaveMixIcon;
  }
  else
  {
    if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      v6 = ClassButtonControlComponent_TypeInfo;
    }
    p_supportGroupTypeTableHaveMixIcon = &v6->static_fields->supportGroupTypeTableNoMixIcon;
  }
  v8 = System_Array__IndexOf_int_(
         *p_supportGroupTypeTableHaveMixIcon,
         classPos,
         (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
  return v8 & ~(v8 >> 31);
}


int32_t __fastcall ClassButtonControlComponent__get_GetCursorPos(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentCursor;
}


void __fastcall ClassButtonControlComponent__init(
        ClassButtonControlComponent_o *this,
        ClassButtonControlComponent_CallbackFunc_o *callback,
        int32_t questId,
        int32_t questPhase,
        bool defaultPos,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct ClassButtonComponent_array *classButton; // x8
  DataManager_o *Instance; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  int32_t currentCursor; // w8
  struct ClassButtonComponent_array *v28; // x8
  il2cpp_array_size_t v29; // w26
  __int64 v30; // x27
  struct ClassButtonControlComponent_StaticFields *saveNameList; // x8
  struct System_Int32_array *supportGroupTypeTableHaveMixIcon; // x9
  struct System_Int32_array *v33; // x9
  struct System_Int32_array *mstClassIdTableHaveMixIcon; // x8
  int32_t v35; // w20
  int32_t *v36; // x8
  struct ClassButtonControlComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *supportGroupTypeTableNoMixIcon; // x9
  struct System_Int32_array *mstClassIdTableNoMixIcon; // x9
  struct System_Int32_array *v40; // x9
  struct System_Int32_array *v41; // x8
  struct UISprite_array *classCursor; // x8
  ClassButtonComponent_o *v43; // x23
  int32_t v44; // w24
  struct ServantClassCompatibilityIconComponent_array *classCompatibilityIcon; // x8
  il2cpp_array_size_t max_length; // w9
  UnityEngine_Object_o *v47; // x24
  struct ServantClassCompatibilityIconComponent_array *v48; // x8
  ServantClassCompatibilityIconComponent_o *v49; // x8
  struct ClassButtonComponent_array *v50; // x8
  UISprite_o *v51; // x24
  int32_t g_low; // w23
  __int64 v53; // x1
  __int64 v54; // x2
  struct ClassButtonComponent_array *v55; // x8
  ClassButtonComponent_o *v56; // x23
  ClassButtonComponent_CallbackFunc_o *v57; // x24
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x0

  if ( (byte_42146E3 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, callback);
    sub_B0D8A4(&ClassButtonComponent_CallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&Method_ClassButtonControlComponent_OnSelectButton__, v10);
    sub_B0D8A4(&ClassButtonControlComponent_TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v14);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_42146E3 = 1;
  }
  classButton = this->fields.classButton;
  if ( classButton )
    LOBYTE(classButton) = classButton->max_length == 10;
  this->fields.haveMixIcon = (char)classButton;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( defaultPos )
  {
    currentCursor = 0;
    this->fields.currentCursor = 0;
  }
  else
  {
    currentCursor = this->fields.currentCursor;
  }
  this->fields.callbackFunc = callback;
  this->fields.oldCursor = currentCursor;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v28 = this->fields.classButton;
  this->fields.updateEnable = 1;
  if ( !v28 )
LABEL_85:
    sub_B0D97C(Instance);
  v29 = 0;
  v30 = 32LL;
  while ( (signed int)v29 < (signed int)v28->max_length )
  {
    Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
    if ( this->fields.haveMixIcon )
    {
      if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
        Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
      }
      saveNameList = (struct ClassButtonControlComponent_StaticFields *)Instance[1].fields.saveNameList;
      supportGroupTypeTableHaveMixIcon = saveNameList->supportGroupTypeTableHaveMixIcon;
      if ( !supportGroupTypeTableHaveMixIcon )
        goto LABEL_85;
      if ( (signed int)v29 >= (signed int)supportGroupTypeTableHaveMixIcon->max_length )
        return;
      if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
        saveNameList = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      if ( !saveNameList->mstClassIdTableHaveMixIcon )
        goto LABEL_85;
      if ( (signed int)v29 >= (signed int)saveNameList->mstClassIdTableHaveMixIcon->max_length )
        return;
      if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        saveNameList = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      v33 = saveNameList->supportGroupTypeTableHaveMixIcon;
      if ( !v33 )
        goto LABEL_85;
      if ( v29 >= v33->max_length )
        goto LABEL_87;
      mstClassIdTableHaveMixIcon = saveNameList->mstClassIdTableHaveMixIcon;
      if ( !mstClassIdTableHaveMixIcon )
        goto LABEL_85;
      if ( v29 >= mstClassIdTableHaveMixIcon->max_length )
        goto LABEL_87;
      v35 = v33->m_Items[v29 + 1];
      v36 = &mstClassIdTableHaveMixIcon->m_Items[v29 + 1];
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_85;
    }
    else
    {
      if ( (WORD1(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
        Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
      }
      static_fields = (struct ClassButtonControlComponent_StaticFields *)Instance[1].fields.saveNameList;
      supportGroupTypeTableNoMixIcon = static_fields->supportGroupTypeTableNoMixIcon;
      if ( !supportGroupTypeTableNoMixIcon )
        goto LABEL_85;
      if ( (signed int)v29 >= (signed int)supportGroupTypeTableNoMixIcon->max_length )
        return;
      if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
        static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      mstClassIdTableNoMixIcon = static_fields->mstClassIdTableNoMixIcon;
      if ( !mstClassIdTableNoMixIcon )
        goto LABEL_85;
      if ( (signed int)v29 >= (signed int)mstClassIdTableNoMixIcon->max_length )
        return;
      if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      v40 = static_fields->supportGroupTypeTableNoMixIcon;
      if ( !v40 )
        goto LABEL_85;
      if ( v29 >= v40->max_length )
        goto LABEL_87;
      v41 = static_fields->mstClassIdTableNoMixIcon;
      if ( !v41 )
        goto LABEL_85;
      if ( v29 >= v41->max_length )
        goto LABEL_87;
      v35 = *(_DWORD *)((char *)&v40->obj.klass + v30);
      v36 = (int32_t *)((char *)v41 + v30);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_85;
    }
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  *v36,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    classCursor = this->fields.classCursor;
    if ( !classCursor )
      goto LABEL_85;
    if ( v29 >= classCursor->max_length )
    {
LABEL_87:
      v64 = sub_B0D9A8(Instance);
      sub_B0D948(v64, 0LL);
    }
    v43 = (ClassButtonComponent_o *)Instance;
    Instance = (DataManager_o *)classCursor->m_Items[v29];
    if ( !Instance )
      goto LABEL_85;
    v44 = this->fields.currentCursor;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v35 == v44, 0LL);
    classCompatibilityIcon = this->fields.classCompatibilityIcon;
    if ( classCompatibilityIcon )
    {
      max_length = classCompatibilityIcon->max_length;
      if ( (int)v29 < (int)max_length )
      {
        if ( v29 >= max_length )
          goto LABEL_87;
        v47 = (UnityEngine_Object_o *)classCompatibilityIcon->m_Items[v29];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( questId == 0 || questPhase == 0 )
          {
            Instance = 0LL;
          }
          else
          {
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_85;
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !Instance )
              goto LABEL_85;
            Instance = (DataManager_o *)QuestPhaseMaster__GetEntity(
                                          (QuestPhaseMaster_o *)Instance,
                                          questId,
                                          questPhase,
                                          0LL);
          }
          v48 = this->fields.classCompatibilityIcon;
          if ( !v48 )
            goto LABEL_85;
          if ( v29 >= v48->max_length )
            goto LABEL_87;
          v49 = v48->m_Items[v29];
          if ( Instance )
          {
            if ( !v43 || !v49 )
              goto LABEL_85;
            ServantClassCompatibilityIconComponent__SetIcon(
              v49,
              v43->fields.m_CachedPtr,
              (System_Int32_array *)Instance->fields.saveNameList,
              3,
              0LL);
          }
          else
          {
            if ( !v49 )
              goto LABEL_85;
            ServantClassCompatibilityIconComponent__Clear(v49, 0LL);
          }
        }
      }
    }
    v50 = this->fields.classButton;
    if ( !v50 )
      goto LABEL_85;
    if ( v29 >= v50->max_length )
      goto LABEL_87;
    Instance = (DataManager_o *)v50->m_Items[v29];
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)Instance,
                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( v43 )
      {
        v51 = (UISprite_o *)Instance;
        g_low = LODWORD(v43->fields.specifyDisabledColor.fields.g);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        Instance = (DataManager_o *)AtlasManager__SetClassIcon(v51, g_low, 2, 0LL);
        v55 = this->fields.classButton;
        if ( v55 )
        {
          if ( v29 >= v55->max_length )
            goto LABEL_87;
          v56 = v55->m_Items[v29];
          v57 = (ClassButtonComponent_CallbackFunc_o *)sub_B0D974(ClassButtonComponent_CallbackFunc_TypeInfo, v53, v54);
          ClassButtonComponent_CallbackFunc___ctor(
            v57,
            (Il2CppObject *)this,
            Method_ClassButtonControlComponent_OnSelectButton__,
            0LL);
          if ( v56 )
          {
            v56->fields.callbackFunc = v57;
            v56->fields.classPos = v35;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v56->fields.callbackFunc,
              (System_Int32_array **)v57,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63);
            v28 = this->fields.classButton;
            ++v29;
            v30 += 4LL;
            if ( v28 )
              continue;
          }
        }
      }
    }
    goto LABEL_85;
  }
}


void __fastcall ClassButtonControlComponent__remove_callbackFunc(
        ClassButtonControlComponent_o *this,
        ClassButtonControlComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ClassButtonControlComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  int32_t v11; // w0
  const MethodInfo *v12; // x1

  if ( (byte_42146E2 & 1) == 0 )
  {
    sub_B0D8A4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, value);
    byte_42146E2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ClassButtonControlComponent_CallbackFunc_c *)v8->klass != ClassButtonControlComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = sub_B0DC70(v8);
  ClassButtonControlComponent__IsMixSupportGroupType(v11, v12);
}


void __fastcall ClassButtonControlComponent__setCursor(
        ClassButtonControlComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  int32_t currentCursor; // w8
  int32_t IconCursorPos; // w22
  const MethodInfo *v7; // x2
  UISprite_o *gameObject; // x0
  struct UISprite_array *classCursor; // x8
  il2cpp_array_size_t v10; // w21
  struct UISprite_array *v11; // x8
  ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // x0
  __int64 v13; // x0

  currentCursor = this->fields.currentCursor;
  if ( currentCursor != classPos )
  {
    this->fields.currentCursor = classPos;
    this->fields.oldCursor = currentCursor;
    IconCursorPos = ClassButtonControlComponent__getIconCursorPos(this, classPos, method);
    gameObject = (UISprite_o *)ClassButtonControlComponent__getIconCursorPos(this, this->fields.oldCursor, v7);
    classCursor = this->fields.classCursor;
    if ( !classCursor )
      goto LABEL_13;
    if ( IconCursorPos < classCursor->max_length )
    {
      v10 = (unsigned int)gameObject;
      gameObject = classCursor->m_Items[IconCursorPos];
      if ( !gameObject )
        goto LABEL_13;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_13;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v11 = this->fields.classCursor;
      if ( !v11 )
        goto LABEL_13;
      if ( v10 < v11->max_length )
      {
        gameObject = v11->m_Items[v10];
        if ( gameObject )
        {
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            callbackFunc = this->fields.callbackFunc;
            if ( callbackFunc )
              ClassButtonControlComponent_CallbackFunc__Invoke(callbackFunc, classPos, 0LL);
            return;
          }
        }
LABEL_13:
        sub_B0D97C(gameObject);
      }
    }
    v13 = sub_B0D9A8(gameObject);
    sub_B0D948(v13, 0LL);
  }
}


void __fastcall ClassButtonControlComponent__setUpdateEnable(
        ClassButtonControlComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.updateEnable = flag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassButtonControlComponent_CallbackFunc___ctor(
        ClassButtonControlComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ClassButtonControlComponent_CallbackFunc__BeginInvoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        int32_t classPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = classPos;
  if ( (byte_4211E3E & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&classPos);
    byte_4211E3E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall ClassButtonControlComponent_CallbackFunc__EndInvoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassButtonControlComponent_CallbackFunc__Invoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ClassButtonControlComponent_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  ClassButtonControlComponent_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  ClassButtonControlComponent_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ClassButtonControlComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&classPos, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)classPos, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, (unsigned int)classPos, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)classPos, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)classPos,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)classPos, v21);
    goto LABEL_37;
  }
}