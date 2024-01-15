void __fastcall BattleNextTDgaugeComponent___ctor(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.width = 13.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__changeGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t index,
        int32_t type,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x8
  unsigned int max_length; // w9
  UnityEngine_GameObject_o *v12; // x0
  UISprite_o *Component_srcLineSprite; // x0
  __int64 *v14; // x8
  UnityEngine_GameObject_o *v15; // x0

  v6 = this;
  if ( (byte_40F6AF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&index);
    sub_B16FFC(&StringLiteral_19250/*"icon_count_01"*/, v7);
    sub_B16FFC(&StringLiteral_19252/*"icon_count_bg"*/, v8);
    this = (BattleNextTDgaugeComponent_o *)sub_B16FFC(&StringLiteral_19251/*"icon_count_02"*/, v9);
    byte_40F6AF3 = 1;
  }
  gaugeList = v6->fields.gaugeList;
  if ( gaugeList )
  {
    max_length = gaugeList->max_length;
    if ( (int)max_length > index )
    {
      if ( type == 2 )
      {
        if ( max_length > index )
        {
          v12 = gaugeList->m_Items[index];
          if ( v12 )
          {
            Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v12,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_srcLineSprite )
            {
              v14 = &StringLiteral_19251/*"icon_count_02"*/;
LABEL_17:
              UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)*v14, 0LL);
              return;
            }
          }
          goto LABEL_18;
        }
      }
      else if ( max_length > index )
      {
        v15 = gaugeList->m_Items[index];
        if ( v15 )
        {
          Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v15,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_srcLineSprite )
          {
            if ( type == 1 )
              v14 = &StringLiteral_19250/*"icon_count_01"*/;
            else
              v14 = &StringLiteral_19252/*"icon_count_bg"*/;
            goto LABEL_17;
          }
        }
LABEL_18:
        sub_B170D4();
      }
      sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&type);
      sub_B170A0();
    }
  }
}


void __fastcall BattleNextTDgaugeComponent__setHide(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *gaugeBackRoot; // x0
  UnityEngine_GameObject_o *v6; // x0

  gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
  if ( !gaugeFrontRoot
    || (gameObject = UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gaugeBackRoot = (UnityEngine_Component_o *)this->fields.gaugeBackRoot) == 0LL)
    || (v6 = UnityEngine_Component__get_gameObject(gaugeBackRoot, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setInitGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t now,
        int32_t max,
        bool isTDSeraled,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x25
  __int64 v13; // x8
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct UnityEngine_GameObject_array *gaugebackList; // x26
  __int64 v17; // x8
  unsigned __int64 v18; // x27
  UnityEngine_Object_o *v19; // x25
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  int32_t v21; // w26
  int32_t v22; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  bool v26; // w1
  UnityEngine_Component_o *gaugeBackRoot; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x24
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x23
  int v38; // w27
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v40; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x25
  UnityEngine_Transform_o *v44; // x0
  WarBoardUiData_SaveData_array *v45; // x0
  WarBoardUiData_SaveData_array *v46; // x0
  const MethodInfo *v47; // x2
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  v7 = this;
  if ( (byte_40F6AF1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, *(_QWORD *)&now);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    this = (BattleNextTDgaugeComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F6AF1 = 1;
  }
  gaugeList = v7->fields.gaugeList;
  if ( gaugeList )
  {
    v13 = *(_QWORD *)&gaugeList->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      while ( v14 < (unsigned int)v13 )
      {
        v15 = (UnityEngine_Object_o *)gaugeList->m_Items[v14];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v15, 0LL);
        LODWORD(v13) = gaugeList->max_length;
        if ( (__int64)++v14 >= (int)v13 )
          goto LABEL_11;
      }
LABEL_48:
      sub_B17100(this, *(_QWORD *)&now, *(_QWORD *)&max);
      sub_B170A0();
    }
  }
LABEL_11:
  gaugebackList = v7->fields.gaugebackList;
  if ( gaugebackList )
  {
    v17 = *(_QWORD *)&gaugebackList->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      while ( v18 < (unsigned int)v17 )
      {
        v19 = (UnityEngine_Object_o *)gaugebackList->m_Items[v18];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v19, 0LL);
        LODWORD(v17) = gaugebackList->max_length;
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_19;
      }
      goto LABEL_48;
    }
  }
LABEL_19:
  v7->fields.gaugeList = 0LL;
  sub_B16F98(&v7->fields.gaugeList, 0LL);
  v7->fields.gaugebackList = 0LL;
  sub_B16F98(&v7->fields.gaugebackList, 0LL);
  gaugeFrontRoot = (UnityEngine_Component_o *)v7->fields.gaugeFrontRoot;
  if ( isTDSeraled )
    v21 = 0;
  else
    v21 = max;
  if ( isTDSeraled )
    v22 = 0;
  else
    v22 = now;
  if ( !gaugeFrontRoot )
    goto LABEL_47;
  gameObject = UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  if ( v21 < 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gaugeBackRoot = (UnityEngine_Component_o *)v7->fields.gaugeBackRoot;
    if ( !gaugeBackRoot )
      goto LABEL_47;
    v25 = UnityEngine_Component__get_gameObject(gaugeBackRoot, 0LL);
    if ( !v25 )
      goto LABEL_47;
    v26 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v24 = (UnityEngine_Component_o *)v7->fields.gaugeBackRoot;
    if ( !v24 )
      goto LABEL_47;
    v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
    if ( !v25 )
      goto LABEL_47;
    v26 = 1;
  }
  UnityEngine_GameObject__SetActive(v25, v26, 0LL);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v33,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v21 >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)v7,
                 v7->fields.gaugeIcon,
                 v7->fields.gaugeFrontRoot,
                 0LL,
                 0LL);
      if ( !Object )
        goto LABEL_47;
      v40 = Object;
      UnityEngine_GameObject__SetActive(Object, 1, 0LL);
      transform = UnityEngine_GameObject__get_transform(v40, 0LL);
      if ( !transform )
        goto LABEL_47;
      v49.fields.y = 0.0;
      v49.fields.z = 0.0;
      v49.fields.x = v7->fields.width * (float)v38;
      UnityEngine_Transform__set_localPosition(transform, v49, 0LL);
      if ( !v32 )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v32,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      v42 = BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)v7,
              v7->fields.gaugebackIcon,
              v7->fields.gaugeBackRoot,
              0LL,
              0LL);
      if ( !v42 )
        goto LABEL_47;
      v43 = v42;
      UnityEngine_GameObject__SetActive(v42, 1, 0LL);
      v44 = UnityEngine_GameObject__get_transform(v43, 0LL);
      if ( !v44 )
        goto LABEL_47;
      v50.fields.y = 0.0;
      v50.fields.z = 0.0;
      v50.fields.x = v7->fields.width * (float)v38;
      UnityEngine_Transform__set_localPosition(v44, v50, 0LL);
      if ( !v37 )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v37,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( ++v38 >= v21 )
        goto LABEL_45;
    }
  }
  if ( !v32 )
    goto LABEL_47;
LABEL_45:
  v45 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v7->fields.gaugeList = (struct UnityEngine_GameObject_array *)v45;
  sub_B16F98(&v7->fields.gaugeList, v45);
  if ( !v37 )
LABEL_47:
    sub_B170D4();
  v46 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v37,
          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v7->fields.gaugebackList = (struct UnityEngine_GameObject_array *)v46;
  sub_B16F98(&v7->fields.gaugebackList, v46);
  BattleNextTDgaugeComponent__setValue(v7, v22, v47);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setValue(
        BattleNextTDgaugeComponent_o *this,
        int32_t nextVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x8
  struct UnityEngine_GameObject_array *v9; // x8
  int v10; // w21
  int v11; // w22
  int32_t v12; // w2
  BattleNextTDgaugeComponent_o *v13; // x0
  int32_t v14; // w1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *v17; // x21
  WebViewObject_o *v18; // x20
  int v19; // w8
  bool v20; // w1
  UnityEngine_Behaviour_o *v21; // x0

  if ( (byte_40F6AF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, *(_QWORD *)&nextVal);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F6AF2 = 1;
  }
  gaugeList = this->fields.gaugeList;
  if ( gaugeList )
  {
    v9 = *(struct UnityEngine_GameObject_array **)&gaugeList->max_length;
    if ( v9 )
    {
      if ( (int)v9 >= 1 )
      {
        v10 = 0;
        v11 = (_DWORD)v9 - nextVal;
        do
        {
          if ( v11 == (_DWORD)v9 )
          {
            v12 = 2;
          }
          else
          {
            if ( v11 <= v10 )
            {
              v13 = this;
              v14 = v10;
              v12 = 0;
              goto LABEL_13;
            }
            v12 = 1;
          }
          v13 = this;
          v14 = v10;
LABEL_13:
          BattleNextTDgaugeComponent__changeGauge(v13, v14, v12, v3);
          v9 = this->fields.gaugeList;
          if ( !v9 )
            goto LABEL_37;
          LODWORD(v9) = v9->max_length;
          ++v10;
        }
        while ( v10 < (int)v9 );
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
      if ( !gaugeFrontRoot )
        goto LABEL_37;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  gaugeFrontRoot,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !this->fields.gaugeFrontRoot )
        goto LABEL_37;
      v17 = (UnityEngine_Object_o *)Component_WebViewObject;
      v18 = UnityEngine_Component__GetComponent_WebViewObject_(
              (UnityEngine_Component_o *)this->fields.gaugeFrontRoot,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
        {
          if ( nextVal == 1 )
          {
            if ( v18 )
            {
              v19 = 1060320051;
              goto LABEL_32;
            }
          }
          else if ( nextVal )
          {
            if ( v17 )
            {
              ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v17->klass[1]._1.castClass)(
                v17,
                v17->klass[1]._1.declaringType,
                1.0);
              if ( v18 )
              {
                v21 = (UnityEngine_Behaviour_o *)v18;
                v20 = 0;
                goto LABEL_36;
              }
            }
          }
          else if ( v18 )
          {
            v19 = 1050253722;
LABEL_32:
            v20 = 1;
            LODWORD(v18->fields.onStarted) = v19;
            v21 = (UnityEngine_Behaviour_o *)v18;
LABEL_36:
            UnityEngine_Behaviour__set_enabled(v21, v20, 0LL);
            return;
          }
LABEL_37:
          sub_B170D4();
        }
      }
    }
  }
}