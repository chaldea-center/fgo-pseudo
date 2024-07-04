void __fastcall ClassButtonControlComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Array_o *v7; // x0
  struct System_Int32_array *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_Array_o *v11; // x0
  System_Array_o *v12; // x19
  struct ClassButtonControlComponent_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Array_o *v16; // x0
  System_Array_o *v17; // x19
  struct ClassButtonControlComponent_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Array_o *v21; // x0
  System_Array_o *v22; // x19
  struct ClassButtonControlComponent_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_RuntimeFieldHandle_o v26; // 0:w1.4
  System_RuntimeFieldHandle_o v27; // 0:w1.4
  System_RuntimeFieldHandle_o v28; // 0:w1.4
  System_RuntimeFieldHandle_o v29; // 0:w1.4

  if ( (byte_48E1CC3 & 1) == 0 )
  {
    sub_1B00CCC(&ClassButtonControlComponent_TypeInfo, v1);
    sub_1B00CCC(&int___TypeInfo, v2);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841,
      v3);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__18A642AD06501B3ADC1AC875D0D6E7DA04D9B26814FC4875D2936BA32EFED2E4,
      v4);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__921C803ABFA6AC88F44F7AB19198E5C137D1C7183E8E6912757A6263E8DEE0A5,
      v5);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__DFC9DBE6DE77A476BBB7F1224ED564087A6ADE8ECA1F2503AFEA414DE21000F5,
      v6);
    byte_48E1CC3 = 1;
  }
  v7 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 10LL);
  v26.fields.value = Field__PrivateImplementationDetails__DFC9DBE6DE77A476BBB7F1224ED564087A6ADE8ECA1F2503AFEA414DE21000F5;
  v8 = (struct System_Int32_array *)v7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v7, v26, 0LL);
  ClassButtonControlComponent_TypeInfo->static_fields->mstClassIdTableHaveMixIcon = v8;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)ClassButtonControlComponent_TypeInfo->static_fields,
    (int32_t)v8,
    v9,
    v10);
  v11 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 9LL);
  v27.fields.value = Field__PrivateImplementationDetails__18A642AD06501B3ADC1AC875D0D6E7DA04D9B26814FC4875D2936BA32EFED2E4;
  v12 = v11;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v11, v27, 0LL);
  static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
  static_fields->mstClassIdTableNoMixIcon = (struct System_Int32_array *)v12;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->mstClassIdTableNoMixIcon, (int32_t)v12, v14, v15);
  v16 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 10LL);
  v28.fields.value = Field__PrivateImplementationDetails__10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841;
  v17 = v16;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v16, v28, 0LL);
  v18 = ClassButtonControlComponent_TypeInfo->static_fields;
  v18->supportGroupTypeTableHaveMixIcon = (struct System_Int32_array *)v17;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v18->supportGroupTypeTableHaveMixIcon, (int32_t)v17, v19, v20);
  v21 = (System_Array_o *)sub_1B00D74(int___TypeInfo, 9LL);
  v29.fields.value = Field__PrivateImplementationDetails__921C803ABFA6AC88F44F7AB19198E5C137D1C7183E8E6912757A6263E8DEE0A5;
  v22 = v21;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v21, v29, 0LL);
  v23 = ClassButtonControlComponent_TypeInfo->static_fields;
  v23->supportGroupTypeTableNoMixIcon = (struct System_Int32_array *)v22;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v23->supportGroupTypeTableNoMixIcon, (int32_t)v22, v24, v25);
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

  if ( (byte_48E1CBF & 1) == 0 )
  {
    sub_1B00CCC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, value);
    byte_48E1CBF = 1;
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
    v9 = sub_1B3C1BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B011E8(v8);
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
  _BOOL4 haveMixIcon; // w22
  __int64 v8; // x9
  int32_t v9; // w0

  if ( (byte_48E1CC2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&classPos);
    sub_1B00CCC(&ClassButtonControlComponent_TypeInfo, v5);
    byte_48E1CC2 = 1;
  }
  v6 = ClassButtonControlComponent_TypeInfo;
  haveMixIcon = this->fields.haveMixIcon;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    v6 = ClassButtonControlComponent_TypeInfo;
  }
  v8 = 16LL;
  if ( !haveMixIcon )
    v8 = 24LL;
  v9 = System_Array__IndexOf_int_(
         *(System_Int32_array **)((char *)&v6->static_fields->mstClassIdTableHaveMixIcon + v8),
         classPos,
         (const MethodInfo_2E47BB4 *)Method_System_Array_IndexOf_int___);
  return v9 & ~(v9 >> 31);
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
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *MasterData_object; // x22
  int32_t currentCursor; // w8
  struct ClassButtonComponent_array *v25; // x8
  il2cpp_array_size_t v26; // w26
  __int64 v27; // x28
  _BOOL4 haveMixIcon; // w23
  struct ClassButtonControlComponent_StaticFields *v29; // x8
  struct System_Int32_array *supportGroupTypeTableHaveMixIcon; // x8
  struct ClassButtonControlComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *v32; // x9
  struct System_Int32_array *mstClassIdTableHaveMixIcon; // x8
  int32_t v34; // w29
  int32_t *v35; // x8
  struct System_Int32_array *supportGroupTypeTableNoMixIcon; // x9
  struct System_Int32_array *mstClassIdTableNoMixIcon; // x9
  struct System_Int32_array *v38; // x9
  struct System_Int32_array *v39; // x8
  struct UISprite_array *classCursor; // x8
  ClassButtonComponent_o *v41; // x23
  int32_t v42; // w24
  struct ServantClassCompatibilityIconComponent_array *classCompatibilityIcon; // x8
  il2cpp_array_size_t max_length; // w9
  UnityEngine_Object_o *v45; // x24
  struct ServantClassCompatibilityIconComponent_array *v46; // x8
  ServantClassCompatibilityIconComponent_o *v47; // x8
  struct ClassButtonComponent_array *v48; // x8
  UISprite_o *v49; // x24
  int32_t mState; // w23
  struct ClassButtonComponent_array *v51; // x8
  ClassButtonComponent_o *v52; // x23
  ClassButtonComponent_CallbackFunc_o *v53; // x24
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  int32_t v56; // w3

  if ( (byte_48E1CC1 & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, callback);
    sub_1B00CCC(&ClassButtonComponent_CallbackFunc_TypeInfo, v9);
    sub_1B00CCC(&Method_ClassButtonControlComponent_OnSelectButton__, v10);
    sub_1B00CCC(&ClassButtonControlComponent_TypeInfo, v11);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UISprite___, v12);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantClassMaster___, v14);
    sub_1B00CCC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v15);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v16);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_48E1CC1 = 1;
  }
  classButton = this->fields.classButton;
  if ( classButton )
    LOBYTE(classButton) = classButton->max_length == 10;
  this->fields.haveMixIcon = (char)classButton;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantClassMaster___);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v21, v22);
  v25 = this->fields.classButton;
  this->fields.updateEnable = 1;
  if ( !v25 )
LABEL_75:
    sub_1B00F28(Instance, v20);
  v26 = 0;
  v27 = 32LL;
  while ( (signed int)v26 < (signed int)v25->max_length )
  {
    Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
    haveMixIcon = this->fields.haveMixIcon;
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
    }
    v29 = *(struct ClassButtonControlComponent_StaticFields **)&Instance[1].fields._DispLog;
    if ( haveMixIcon )
    {
      supportGroupTypeTableHaveMixIcon = v29->supportGroupTypeTableHaveMixIcon;
      if ( !supportGroupTypeTableHaveMixIcon )
        goto LABEL_75;
      if ( (signed int)v26 >= (signed int)supportGroupTypeTableHaveMixIcon->max_length )
        return;
      if ( !LODWORD(Instance[1].fields.saveDataMapList) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
      }
      static_fields = *(struct ClassButtonControlComponent_StaticFields **)&Instance[1].fields._DispLog;
      if ( !static_fields->mstClassIdTableHaveMixIcon )
        goto LABEL_75;
      if ( (signed int)v26 >= (signed int)static_fields->mstClassIdTableHaveMixIcon->max_length )
        return;
      if ( !LODWORD(Instance[1].fields.saveDataMapList) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      v32 = static_fields->supportGroupTypeTableHaveMixIcon;
      if ( !v32 )
        goto LABEL_75;
      if ( v26 >= v32->max_length )
        goto LABEL_77;
      mstClassIdTableHaveMixIcon = static_fields->mstClassIdTableHaveMixIcon;
      if ( !mstClassIdTableHaveMixIcon )
        goto LABEL_75;
      if ( v26 >= mstClassIdTableHaveMixIcon->max_length )
        goto LABEL_77;
      v34 = v32->m_Items[v26 + 1];
      v35 = &mstClassIdTableHaveMixIcon->m_Items[v26 + 1];
      if ( !MasterData_object )
        goto LABEL_75;
    }
    else
    {
      supportGroupTypeTableNoMixIcon = v29->supportGroupTypeTableNoMixIcon;
      if ( !supportGroupTypeTableNoMixIcon )
        goto LABEL_75;
      if ( (signed int)v26 >= (signed int)supportGroupTypeTableNoMixIcon->max_length )
        return;
      if ( !LODWORD(Instance[1].fields.saveDataMapList) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (DataManager_o *)ClassButtonControlComponent_TypeInfo;
        v29 = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      mstClassIdTableNoMixIcon = v29->mstClassIdTableNoMixIcon;
      if ( !mstClassIdTableNoMixIcon )
        goto LABEL_75;
      if ( (signed int)v26 >= (signed int)mstClassIdTableNoMixIcon->max_length )
        return;
      if ( !LODWORD(Instance[1].fields.saveDataMapList) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v29 = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      v38 = v29->supportGroupTypeTableNoMixIcon;
      if ( !v38 )
        goto LABEL_75;
      if ( v26 >= v38->max_length )
        goto LABEL_77;
      v39 = v29->mstClassIdTableNoMixIcon;
      if ( !v39 )
        goto LABEL_75;
      if ( v26 >= v39->max_length )
        goto LABEL_77;
      v34 = *(_DWORD *)((char *)&v38->obj.klass + v27);
      v35 = (int32_t *)((char *)v39 + v27);
      if ( !MasterData_object )
        goto LABEL_75;
    }
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  *v35,
                                  (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    classCursor = this->fields.classCursor;
    if ( !classCursor )
      goto LABEL_75;
    if ( v26 >= classCursor->max_length )
      goto LABEL_77;
    v41 = (ClassButtonComponent_o *)Instance;
    Instance = (DataManager_o *)classCursor->m_Items[v26];
    if ( !Instance )
      goto LABEL_75;
    v42 = this->fields.currentCursor;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v34 == v42, 0LL);
    classCompatibilityIcon = this->fields.classCompatibilityIcon;
    if ( classCompatibilityIcon )
    {
      max_length = classCompatibilityIcon->max_length;
      if ( (int)v26 < (int)max_length )
      {
        if ( v26 >= max_length )
          goto LABEL_77;
        v45 = (UnityEngine_Object_o *)classCompatibilityIcon->m_Items[v26];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( questId == 0 || questPhase == 0 )
          {
            Instance = 0LL;
          }
          else
          {
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_75;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !Instance )
              goto LABEL_75;
            Instance = (DataManager_o *)QuestPhaseMaster__GetEntity(
                                          (QuestPhaseMaster_o *)Instance,
                                          questId,
                                          questPhase,
                                          0LL);
          }
          v46 = this->fields.classCompatibilityIcon;
          if ( !v46 )
            goto LABEL_75;
          if ( v26 >= v46->max_length )
LABEL_77:
            sub_1B00F30(Instance, v20);
          v47 = v46->m_Items[v26];
          if ( Instance )
          {
            if ( !v41 || !v47 )
              goto LABEL_75;
            ServantClassCompatibilityIconComponent__SetIcon(
              v47,
              v41->fields.m_CachedPtr,
              (System_Int32_array *)Instance->fields.lookup,
              3,
              0LL);
          }
          else
          {
            if ( !v47 )
              goto LABEL_75;
            ServantClassCompatibilityIconComponent__Clear(v47, 0LL);
          }
        }
      }
    }
    v48 = this->fields.classButton;
    if ( !v48 )
      goto LABEL_75;
    if ( v26 >= v48->max_length )
      goto LABEL_77;
    Instance = (DataManager_o *)v48->m_Items[v26];
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Instance,
                                    (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( v41 )
      {
        v49 = (UISprite_o *)Instance;
        mState = v41->fields.mState;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Instance = (DataManager_o *)AtlasManager__SetClassIcon(v49, mState, 2, 0LL);
        v51 = this->fields.classButton;
        if ( v51 )
        {
          if ( v26 >= v51->max_length )
            goto LABEL_77;
          v52 = v51->m_Items[v26];
          v53 = (ClassButtonComponent_CallbackFunc_o *)sub_1B00F18(ClassButtonComponent_CallbackFunc_TypeInfo);
          ClassButtonComponent_CallbackFunc___ctor(
            v53,
            (Il2CppObject *)this,
            Method_ClassButtonControlComponent_OnSelectButton__,
            v54);
          if ( v52 )
          {
            v52->fields.callbackFunc = v53;
            v52->fields.classPos = v34;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v52->fields.callbackFunc, (int32_t)v53, v55, v56);
            v25 = this->fields.classButton;
            ++v26;
            v27 += 4LL;
            if ( v25 )
              continue;
          }
        }
      }
    }
    goto LABEL_75;
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

  if ( (byte_48E1CC0 & 1) == 0 )
  {
    sub_1B00CCC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, value);
    byte_48E1CC0 = 1;
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
    v9 = sub_1B3C1BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B011E8(v8);
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
  __int64 v9; // x1
  struct UISprite_array *classCursor; // x8
  il2cpp_array_size_t v11; // w21
  struct UISprite_array *v12; // x8
  struct ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // x8

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
      v11 = (unsigned int)gameObject;
      gameObject = classCursor->m_Items[IconCursorPos];
      if ( !gameObject )
        goto LABEL_13;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_13;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v12 = this->fields.classCursor;
      if ( !v12 )
        goto LABEL_13;
      if ( v11 < v12->max_length )
      {
        gameObject = v12->m_Items[v11];
        if ( gameObject )
        {
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            callbackFunc = this->fields.callbackFunc;
            if ( callbackFunc )
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
                callbackFunc->fields.original_method_info,
                (unsigned int)classPos,
                *(_QWORD *)&callbackFunc->fields.extra_arg);
            return;
          }
        }
LABEL_13:
        sub_1B00F28(gameObject, v9);
      }
    }
    sub_1B00F30(gameObject, v9);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_194AFB0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_194AF68;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ClassButtonControlComponent_CallbackFunc__BeginInvoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        int32_t classPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = classPos;
  if ( (byte_48E1CC4 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&classPos);
    byte_48E1CC4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v9, callback, object);
}


void __fastcall ClassButtonControlComponent_CallbackFunc__EndInvoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
}


void __fastcall ClassButtonControlComponent_CallbackFunc__Invoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    classPos,
    *(_QWORD *)&this->fields.extra_arg);
}