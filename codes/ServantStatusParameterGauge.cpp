void __fastcall ServantStatusParameterGauge___ctor(ServantStatusParameterGauge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FCA7D & 1) == 0 )
  {
    sub_B16FFC(&UISprite___TypeInfo, method);
    byte_40FCA7D = 1;
  }
  v4 = (struct UISprite_array *)sub_B17014(UISprite___TypeInfo, 5LL, v2);
  this->fields.gaugeSpriteList = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.gaugeSpriteList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusParameterGauge__Set(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        int32_t rank,
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
  __int64 v19; // x23
  __int64 v20; // x24
  unsigned __int64 v21; // x25
  System_String_o *v22; // x21
  __int64 *v23; // x8
  int v24; // w8
  float v25; // s8
  float v26; // s9
  unsigned int v27; // w22
  System_String_o *v28; // x20
  __int64 *v29; // x8
  UISprite_o *evaluationSprite; // x0
  struct UISprite_o *v31; // x0
  UnityEngine_Component_o *evaluationAdd1Sprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UISprite_o *v35; // x0
  struct UISprite_o *v36; // x0
  UnityEngine_Component_o *evaluationAdd2Sprite; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Transform_o *v39; // x0
  UISprite_o *v40; // x0
  struct UISprite_o *v41; // x0
  UISprite_o *evaluationAdd3Sprite; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Transform_o *v44; // x0
  UISprite_o *v45; // x0
  struct UISprite_o *v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x20
  struct UISprite_array *gaugeSpriteList; // x8
  UISprite_o *v52; // x0
  System_String_o *v53; // x8
  System_String_o *v54; // x1
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCA7B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19469/*"img_parameter_C"*/, *(_QWORD *)&kind);
    sub_B16FFC(&StringLiteral_19484/*"img_parametergage_edge"*/, v7);
    sub_B16FFC(&StringLiteral_19485/*"img_parametergage_edge_ex"*/, v8);
    sub_B16FFC(&StringLiteral_19476/*"img_parameter_minus"*/, v9);
    sub_B16FFC(&StringLiteral_19468/*"img_parameter_B"*/, v10);
    sub_B16FFC(&StringLiteral_19470/*"img_parameter_D"*/, v11);
    sub_B16FFC(&StringLiteral_19483/*"img_parametergage_bar_ex"*/, v12);
    sub_B16FFC(&StringLiteral_19478/*"img_parameter_plus"*/, v13);
    sub_B16FFC(&StringLiteral_19467/*"img_parameter_A"*/, v14);
    sub_B16FFC(&StringLiteral_19482/*"img_parametergage_bar"*/, v15);
    sub_B16FFC(&StringLiteral_19479/*"img_parameter_question"*/, v16);
    sub_B16FFC(&StringLiteral_19471/*"img_parameter_E"*/, v17);
    sub_B16FFC(&StringLiteral_19472/*"img_parameter_EX"*/, v18);
    byte_40FCA7B = 1;
  }
  ServantStatusParameterGauge__SetParameterTitleSprite(this, kind, *(const MethodInfo **)&rank);
  v19 = StringLiteral_19482/*"img_parametergage_bar"*/;
  v20 = StringLiteral_19484/*"img_parametergage_edge"*/;
  v21 = 0LL;
  v22 = 0LL;
  switch ( rank )
  {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
      v23 = &StringLiteral_19467/*"img_parameter_A"*/;
      v21 = 5LL;
      goto LABEL_9;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
      goto LABEL_10;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
      v23 = &StringLiteral_19468/*"img_parameter_B"*/;
      v21 = 4LL;
      goto LABEL_9;
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
      v23 = &StringLiteral_19469/*"img_parameter_C"*/;
      v21 = 3LL;
      goto LABEL_9;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
      v23 = &StringLiteral_19470/*"img_parameter_D"*/;
      v21 = 2LL;
      goto LABEL_9;
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
      v23 = &StringLiteral_19471/*"img_parameter_E"*/;
      v21 = 1LL;
LABEL_9:
      v22 = (System_String_o *)*v23;
      goto LABEL_10;
    case 61:
      v27 = 0;
      v19 = StringLiteral_19483/*"img_parametergage_bar_ex"*/;
      v20 = StringLiteral_19485/*"img_parametergage_edge_ex"*/;
      v22 = (System_String_o *)StringLiteral_19472/*"img_parameter_EX"*/;
      v28 = 0LL;
      v25 = 0.0;
      v26 = 16.0;
      v21 = 5LL;
      goto LABEL_18;
    default:
      v21 = 0LL;
      if ( rank == 98 )
        v22 = (System_String_o *)StringLiteral_19479/*"img_parameter_question"*/;
      else
        v22 = 0LL;
LABEL_10:
      v24 = rank - 12;
      v25 = 0.0;
      v26 = 16.0;
      v27 = 0;
      v28 = 0LL;
      switch ( v24 )
      {
        case 0:
        case 10:
          v29 = &StringLiteral_19478/*"img_parameter_plus"*/;
          goto LABEL_15;
        case 1:
        case 11:
          v27 = 2;
          goto LABEL_17;
        case 2:
        case 12:
          v29 = &StringLiteral_19476/*"img_parameter_minus"*/;
LABEL_15:
          v28 = (System_String_o *)*v29;
          v27 = 1;
          break;
        case 3:
        case 13:
          v27 = 3;
          v25 = -2.0;
          v26 = 10.0;
LABEL_17:
          v28 = (System_String_o *)StringLiteral_19478/*"img_parameter_plus"*/;
          break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          break;
        default:
          v28 = 0LL;
          v27 = 0;
          break;
      }
LABEL_18:
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      UISprite__set_spriteName(evaluationSprite, v22, 0LL);
      if ( !v22 )
        goto LABEL_22;
      v31 = this->fields.evaluationSprite;
      if ( !v31 )
        goto LABEL_66;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v31->klass->vtable._33_MakePixelPerfect.method)(
        v31,
        v31->klass->vtable._34_get_minWidth.methodPtr);
LABEL_22:
      evaluationAdd1Sprite = (UnityEngine_Component_o *)this->fields.evaluationAdd1Sprite;
      if ( !evaluationAdd1Sprite )
        goto LABEL_66;
      if ( v27 )
      {
        gameObject = UnityEngine_Component__get_gameObject(evaluationAdd1Sprite, 0LL);
        if ( !gameObject )
          goto LABEL_66;
        transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !transform )
          goto LABEL_66;
        v56.fields.y = 0.0;
        v56.fields.z = 0.0;
        v56.fields.x = v25;
        UnityEngine_Transform__set_localPosition(transform, v56, 0LL);
        v35 = this->fields.evaluationAdd1Sprite;
        if ( !v35 )
          goto LABEL_66;
        UISprite__set_spriteName(v35, v28, 0LL);
        v36 = this->fields.evaluationAdd1Sprite;
        if ( !v36 )
          goto LABEL_66;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v36->klass->vtable._33_MakePixelPerfect.method)(
          v36,
          v36->klass->vtable._34_get_minWidth.methodPtr);
      }
      else
      {
        UISprite__set_spriteName((UISprite_o *)evaluationAdd1Sprite, 0LL, 0LL);
      }
      evaluationAdd2Sprite = (UnityEngine_Component_o *)this->fields.evaluationAdd2Sprite;
      if ( !evaluationAdd2Sprite )
        goto LABEL_66;
      if ( v27 >= 2 )
      {
        v38 = UnityEngine_Component__get_gameObject(evaluationAdd2Sprite, 0LL);
        if ( !v38 )
          goto LABEL_66;
        v39 = UnityEngine_GameObject__get_transform(v38, 0LL);
        if ( !v39 )
          goto LABEL_66;
        v57.fields.x = v26 + v25;
        v57.fields.y = 0.0;
        v57.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v39, v57, 0LL);
        v40 = this->fields.evaluationAdd2Sprite;
        if ( !v40 )
          goto LABEL_66;
        UISprite__set_spriteName(v40, v28, 0LL);
        v41 = this->fields.evaluationAdd2Sprite;
        if ( !v41 )
          goto LABEL_66;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v41->klass->vtable._33_MakePixelPerfect.method)(
          v41,
          v41->klass->vtable._34_get_minWidth.methodPtr);
      }
      else
      {
        UISprite__set_spriteName((UISprite_o *)evaluationAdd2Sprite, 0LL, 0LL);
      }
      evaluationAdd3Sprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationAdd3Sprite )
        goto LABEL_66;
      if ( v27 != 3 )
      {
        UISprite__set_spriteName(evaluationAdd3Sprite, 0LL, 0LL);
        goto LABEL_46;
      }
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)evaluationAdd3Sprite, 0LL);
      if ( !v43 )
        goto LABEL_66;
      v44 = UnityEngine_GameObject__get_transform(v43, 0LL);
      if ( !v44
        || (v58.fields.x = v25 + (float)(v26 + v26),
            v58.fields.y = 0.0,
            v58.fields.z = 0.0,
            UnityEngine_Transform__set_localPosition(v44, v58, 0LL),
            (v45 = this->fields.evaluationAdd3Sprite) == 0LL)
        || (UISprite__set_spriteName(v45, v28, 0LL), (v46 = this->fields.evaluationAdd3Sprite) == 0LL) )
      {
LABEL_66:
        sub_B170D4();
      }
      v47 = ((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v46->klass->vtable._33_MakePixelPerfect.method)(
              v46,
              v46->klass->vtable._34_get_minWidth.methodPtr);
LABEL_46:
      v50 = 0LL;
      do
      {
        gaugeSpriteList = this->fields.gaugeSpriteList;
        if ( !gaugeSpriteList )
          goto LABEL_66;
        if ( v50 >= gaugeSpriteList->max_length )
        {
          sub_B17100(v47, v48, v49);
          sub_B170A0();
        }
        v52 = gaugeSpriteList->m_Items[v50];
        if ( v50 >= v21 )
        {
          if ( !v52 )
            goto LABEL_66;
          v54 = 0LL;
        }
        else
        {
          if ( !v52 )
            goto LABEL_66;
          if ( v50 >= 4 )
            v53 = (System_String_o *)v20;
          else
            v53 = (System_String_o *)v19;
          if ( v50 )
            v54 = v53;
          else
            v54 = (System_String_o *)v20;
        }
        UISprite__set_spriteName(v52, v54, 0LL);
      }
      while ( v50++ < 4 );
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusParameterGauge__SetParameterTitleSprite(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *parameterTitleSprite; // x21
  UISprite_o *v12; // x0
  __int64 *v13; // x8

  if ( (byte_40FCA7C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&StringLiteral_19475/*"img_parameter_magic"*/, v5);
    sub_B16FFC(&StringLiteral_19477/*"img_parameter_np"*/, v6);
    sub_B16FFC(&StringLiteral_19481/*"img_parameter_strength"*/, v7);
    sub_B16FFC(&StringLiteral_19474/*"img_parameter_luck"*/, v8);
    sub_B16FFC(&StringLiteral_19473/*"img_parameter_endurance"*/, v9);
    sub_B16FFC(&StringLiteral_19480/*"img_parameter_speed"*/, v10);
    byte_40FCA7C = 1;
  }
  parameterTitleSprite = (UnityEngine_Object_o *)this->fields.parameterTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(parameterTitleSprite, 0LL, 0LL) )
  {
    switch ( kind )
    {
      case 0:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
          goto LABEL_21;
        v13 = &StringLiteral_19481/*"img_parameter_strength"*/;
        goto LABEL_20;
      case 1:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
          goto LABEL_21;
        v13 = &StringLiteral_19473/*"img_parameter_endurance"*/;
        goto LABEL_20;
      case 2:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
          goto LABEL_21;
        v13 = &StringLiteral_19480/*"img_parameter_speed"*/;
        goto LABEL_20;
      case 3:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
          goto LABEL_21;
        v13 = &StringLiteral_19475/*"img_parameter_magic"*/;
        goto LABEL_20;
      case 4:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
          goto LABEL_21;
        v13 = &StringLiteral_19474/*"img_parameter_luck"*/;
        goto LABEL_20;
      case 5:
        v12 = this->fields.parameterTitleSprite;
        if ( !v12 )
LABEL_21:
          sub_B170D4();
        v13 = &StringLiteral_19477/*"img_parameter_np"*/;
LABEL_20:
        UISprite__set_spriteName(v12, (System_String_o *)*v13, 0LL);
        break;
      default:
        return;
    }
  }
}