void __fastcall CommonParticleControlComponent___ctor(CommonParticleControlComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonParticleControlComponent__Update(
        CommonParticleControlComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  CommonParticleControlComponent_o *v3; // x19
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x8
  int32_t v5; // w20

  v3 = this;
  if ( (byte_4B45FD5 & 1) == 0 )
  {
    this = (CommonParticleControlComponent_o *)sub_1BDB878(
                                                 &Method_System_Collections_Generic_List_ParticleSystem__get_Count__,
                                                 method);
    byte_4B45FD5 = 1;
  }
  particleParent = v3->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  v5 = 0;
  while ( v5 < particleParent->fields._size )
  {
    this = (CommonParticleControlComponent_o *)CommonParticleControlComponent__isAlive(v3, v5, 1, v2);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    particleParent = v3->fields.particleParent;
    ++v5;
    if ( !particleParent )
      goto LABEL_8;
  }
  this = (CommonParticleControlComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !this )
LABEL_8:
    sub_1BDBAD4(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CommonParticleControlComponent__init(
        CommonParticleControlComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  CommonParticleControlComponent__setupLayer(this, layer, v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonParticleControlComponent__isAlive(
        CommonParticleControlComponent_o *this,
        int32_t idx,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *particleParent; // x0

  if ( (byte_4B45FD9 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, *(_QWORD *)&idx);
    sub_1BDB878(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v7);
    byte_4B45FD9 = 1;
  }
  particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  if ( particleParent->fields._size > idx )
  {
    particleParent = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    particleParent,
                                                                    idx,
                                                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( particleParent )
      return UnityEngine_ParticleSystem__IsAlive((UnityEngine_ParticleSystem_o *)particleParent, withChildren, 0LL);
LABEL_8:
    sub_1BDBAD4(particleParent, *(_QWORD *)&idx);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleAllStop(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *particleParent; // x0
  int32_t v7; // w20
  bool v8; // w21

  if ( (byte_4B45FD7 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, withChildren);
    sub_1BDB878(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v5);
    byte_4B45FD7 = 1;
  }
  particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_11;
  v7 = 0;
  v8 = withChildren;
  while ( v7 < particleParent->fields._size )
  {
    particleParent = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    particleParent,
                                                                    v7,
                                                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( particleParent )
    {
      UnityEngine_ParticleSystem__Stop_70568592((UnityEngine_ParticleSystem_o *)particleParent, v8, 0LL);
      particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
      ++v7;
      if ( particleParent )
        continue;
    }
    goto LABEL_11;
  }
  particleParent = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
  if ( !particleParent )
LABEL_11:
    sub_1BDBAD4(particleParent, withChildren);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)particleParent, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleStart(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w21
  bool v9; // w20

  if ( (byte_4B45FD6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, withChildren);
    sub_1BDB878(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v5);
    byte_4B45FD6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.particleParent) == 0LL) )
  {
LABEL_9:
    sub_1BDBAD4(gameObject, v7);
  }
  v8 = 0;
  v9 = withChildren;
  while ( v8 < SLODWORD(gameObject[1].klass) )
  {
    gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)gameObject,
                                               v8,
                                               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( gameObject )
    {
      UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)gameObject, v9, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.particleParent;
      ++v8;
      if ( gameObject )
        continue;
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleStop(
        CommonParticleControlComponent_o *this,
        int32_t idx,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *particleParent; // x0

  if ( (byte_4B45FD8 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, *(_QWORD *)&idx);
    sub_1BDB878(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v7);
    byte_4B45FD8 = 1;
  }
  particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  if ( particleParent->fields._size > idx )
  {
    particleParent = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    particleParent,
                                                                    idx,
                                                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( particleParent )
    {
      UnityEngine_ParticleSystem__Stop_70568592((UnityEngine_ParticleSystem_o *)particleParent, withChildren, 0LL);
      return;
    }
LABEL_8:
    sub_1BDBAD4(particleParent, *(_QWORD *)&idx);
  }
}


void __fastcall CommonParticleControlComponent__setupLayer(
        CommonParticleControlComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x2
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w21

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)gameObject, layer, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = GameObjectExtensions__GetChildren(v7, 1, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  v9 = *((_DWORD *)gameObject + 6);
  v10 = gameObject;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        sub_1BDBADC(gameObject, v6, v8);
      gameObject = (void *)*((_QWORD *)v10 + (int)v11 + 4);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)gameObject, layer, 0LL);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        return;
    }
LABEL_10:
    sub_1BDBAD4(gameObject, v6);
  }
}